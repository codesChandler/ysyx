// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vysyx_22040632_top__Syms.h"


void Vysyx_22040632_top___024root__traceChgSub1(Vysyx_22040632_top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 2187);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                    >> 0x1fU)));
            tracep->chgCData(oldp+1,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                            >> 0x1cU))),3);
            tracep->chgBit(oldp+2,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                             >> 0x1eU) 
                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                               >> 0x1dU)) 
                                           | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                               >> 0x1dU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                 >> 0x1cU))) 
                                          | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                              >> 0x1eU) 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                >> 0x1cU))))));
            tracep->chgBit(oldp+3,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                            >> 0x1eU) 
                                           ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                              >> 0x1dU)) 
                                          ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                             >> 0x1cU)))));
            tracep->chgBit(oldp+4,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                          >> 0x1eU))));
            tracep->chgBit(oldp+5,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                          >> 0x1dU))));
            tracep->chgBit(oldp+6,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                          >> 0x1cU))));
            tracep->chgCData(oldp+7,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))),3);
            tracep->chgBit(oldp+8,((1U & (((0x60U == 
                                            (0x60U 
                                             & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                           | (0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                          | (0x50U 
                                             == (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+9,((1U & VL_REDXOR_32(
                                                      (0x70U 
                                                       & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+10,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                           >> 6U))));
            tracep->chgBit(oldp+11,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                           >> 5U))));
            tracep->chgBit(oldp+12,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                           >> 4U))));
            tracep->chgCData(oldp+13,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))),3);
            tracep->chgBit(oldp+14,((1U & (((0xcU == 
                                             (0xcU 
                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                            | (6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                           | (0xaU 
                                              == (0xaU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+15,((1U & VL_REDXOR_32(
                                                       (0xeU 
                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+16,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                           >> 3U))));
            tracep->chgBit(oldp+17,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                           >> 2U))));
            tracep->chgBit(oldp+18,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                           >> 1U))));
            tracep->chgCData(oldp+19,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+20,((1U & (((6U == 
                                             (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 1U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                           | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                               >> 2U) 
                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+21,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+22,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                           >> 2U))));
            tracep->chgBit(oldp+23,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                           >> 1U))));
            tracep->chgBit(oldp+24,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+25,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                             >> 0xaU))),3);
            tracep->chgBit(oldp+26,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                              >> 0xcU) 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                >> 0xbU)) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                >> 0xbU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                  >> 0xaU))) 
                                           | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                               >> 0xcU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                 >> 0xaU))))));
            tracep->chgBit(oldp+27,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                             >> 0xcU) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                               >> 0xbU)) 
                                           ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                              >> 0xaU)))));
            tracep->chgBit(oldp+28,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                           >> 0xcU))));
            tracep->chgBit(oldp+29,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                           >> 0xbU))));
            tracep->chgBit(oldp+30,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                           >> 0xaU))));
            tracep->chgCData(oldp+31,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                             >> 7U))),3);
            tracep->chgBit(oldp+32,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                              >> 9U) 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                >> 8U)) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                  >> 7U))) 
                                           | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                               >> 9U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                 >> 7U))))));
            tracep->chgBit(oldp+33,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                             >> 9U) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                               >> 8U)) 
                                           ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                              >> 7U)))));
            tracep->chgBit(oldp+34,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                           >> 9U))));
            tracep->chgBit(oldp+35,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                           >> 8U))));
            tracep->chgBit(oldp+36,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                           >> 7U))));
            tracep->chgCData(oldp+37,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))),3);
            tracep->chgBit(oldp+38,((1U & (((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                            | (0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                           | (0x14U 
                                              == (0x14U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+39,((1U & VL_REDXOR_32(
                                                       (0x1cU 
                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+40,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                           >> 4U))));
            tracep->chgBit(oldp+41,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                           >> 3U))));
            tracep->chgBit(oldp+42,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                           >> 2U))));
            tracep->chgCData(oldp+43,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+44,((1U & (((6U == 
                                             (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 1U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                           | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                               >> 2U) 
                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+45,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+46,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                           >> 2U))));
            tracep->chgBit(oldp+47,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                           >> 1U))));
            tracep->chgBit(oldp+48,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+49,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                             >> 0xeU))),3);
            tracep->chgBit(oldp+50,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                              >> 0x10U) 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                >> 0xfU)) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                >> 0xfU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                  >> 0xeU))) 
                                           | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                               >> 0x10U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                 >> 0xeU))))));
            tracep->chgBit(oldp+51,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                             >> 0x10U) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                               >> 0xfU)) 
                                           ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                              >> 0xeU)))));
            tracep->chgBit(oldp+52,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                           >> 0x10U))));
            tracep->chgBit(oldp+53,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                           >> 0xfU))));
            tracep->chgBit(oldp+54,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                           >> 0xeU))));
            tracep->chgBit(oldp+55,((1U & (((6U == 
                                             (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 1U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                           | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                               >> 2U) 
                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+56,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+57,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                           >> 2U))));
            tracep->chgBit(oldp+58,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                           >> 1U))));
            tracep->chgBit(oldp+59,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+60,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                             >> 0x12U))),3);
            tracep->chgBit(oldp+61,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                              >> 0x14U) 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                >> 0x13U)) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                >> 0x13U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                  >> 0x12U))) 
                                           | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                               >> 0x14U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                 >> 0x12U))))));
            tracep->chgBit(oldp+62,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                             >> 0x14U) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                               >> 0x13U)) 
                                           ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                              >> 0x12U)))));
            tracep->chgBit(oldp+63,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                           >> 0x14U))));
            tracep->chgBit(oldp+64,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                           >> 0x13U))));
            tracep->chgBit(oldp+65,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                           >> 0x12U))));
            tracep->chgCData(oldp+66,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+67,((1U & (((6U == 
                                             (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 1U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                           | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                               >> 2U) 
                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+68,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                           >> 2U))));
            tracep->chgBit(oldp+69,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                           >> 1U))));
            tracep->chgBit(oldp+70,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+71,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+72,((1U & (((6U == 
                                             (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 1U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                           | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                               >> 2U) 
                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+73,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                           >> 2U))));
            tracep->chgBit(oldp+74,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                           >> 1U))));
            tracep->chgBit(oldp+75,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+76,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+77,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                           >> 2U))));
            tracep->chgBit(oldp+78,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                           >> 1U))));
            tracep->chgBit(oldp+79,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+80,((0x3fffffffU 
                                       & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                           << 6U) | 
                                          (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                           >> 0x1aU)))),30);
            tracep->chgBit(oldp+81,((1U & (((6U == 
                                             (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 1U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                           | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                               >> 2U) 
                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+82,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+83,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+84,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+85,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+86,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+87,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+88,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+89,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+90,((1U & (((6U == 
                                             (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 1U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                           | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                               >> 2U) 
                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+91,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+92,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                           >> 2U))));
            tracep->chgBit(oldp+93,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                           >> 1U))));
            tracep->chgBit(oldp+94,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+95,((7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U])),3);
            tracep->chgBit(oldp+96,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                              >> 2U) 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                >> 1U)) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                >> 1U) 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U])) 
                                           | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                               >> 2U) 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U])))));
            tracep->chgBit(oldp+97,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                             >> 2U) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                               >> 1U)) 
                                           ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U]))));
            tracep->chgBit(oldp+98,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                           >> 2U))));
            tracep->chgBit(oldp+99,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                           >> 1U))));
            tracep->chgBit(oldp+100,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U])));
            tracep->chgCData(oldp+101,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                        >> 0x1dU)),3);
            tracep->chgBit(oldp+102,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                               >> 0x1fU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                 >> 0x1eU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                 >> 0x1eU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                   >> 0x1dU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                >> 0x1fU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                  >> 0x1dU))))));
            tracep->chgBit(oldp+103,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                              >> 0x1fU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                >> 0x1eU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                               >> 0x1dU)))));
            tracep->chgBit(oldp+104,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+105,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+106,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+107,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                              >> 0x1aU))),3);
            tracep->chgBit(oldp+108,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                               >> 0x1cU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                 >> 0x1bU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                   >> 0x1aU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+109,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                              >> 0x1cU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                >> 0x1bU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                               >> 0x1aU)))));
            tracep->chgBit(oldp+110,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+111,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+112,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+113,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+114,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+115,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+116,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+117,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+118,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+119,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+120,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+121,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+122,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+123,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+124,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+125,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+126,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+127,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+128,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+129,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+130,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+131,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                              >> 8U))),3);
            tracep->chgBit(oldp+132,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                               >> 0xaU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                 >> 9U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                 >> 9U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                   >> 8U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                  >> 8U))))));
            tracep->chgBit(oldp+133,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                              >> 0xaU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                >> 9U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                               >> 8U)))));
            tracep->chgBit(oldp+134,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+135,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                            >> 9U))));
            tracep->chgBit(oldp+136,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                            >> 8U))));
            tracep->chgCData(oldp+137,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                              >> 5U))),3);
            tracep->chgBit(oldp+138,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                               >> 7U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                 >> 6U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                 >> 6U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                   >> 5U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                >> 7U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                  >> 5U))))));
            tracep->chgBit(oldp+139,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                              >> 7U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                >> 6U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                               >> 5U)))));
            tracep->chgBit(oldp+140,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                            >> 7U))));
            tracep->chgBit(oldp+141,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                            >> 6U))));
            tracep->chgBit(oldp+142,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                            >> 5U))));
            tracep->chgCData(oldp+143,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+144,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+145,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+146,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+147,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+148,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+149,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+150,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+151,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+152,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+153,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+154,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+155,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+156,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                               >> 0xeU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                 >> 0xdU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                   >> 0xcU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                  >> 0xcU))))));
            tracep->chgBit(oldp+157,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                              >> 0xeU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                >> 0xdU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                               >> 0xcU)))));
            tracep->chgBit(oldp+158,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+159,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+160,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+161,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+162,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+163,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+164,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+165,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+166,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                              >> 0x10U))),3);
            tracep->chgBit(oldp+167,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                               >> 0x12U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                 >> 0x11U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                 >> 0x11U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                   >> 0x10U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                  >> 0x10U))))));
            tracep->chgBit(oldp+168,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                              >> 0x12U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                >> 0x11U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                               >> 0x10U)))));
            tracep->chgBit(oldp+169,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+170,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+171,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+172,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+173,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+174,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+175,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+176,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+177,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+178,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+179,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+180,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+181,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+182,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+183,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+184,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+185,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+186,((0x3fffffffU 
                                        & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                            << 8U) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                              >> 0x18U)))),30);
            tracep->chgBit(oldp+187,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+188,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+189,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+190,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+191,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+192,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+193,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+194,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+195,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+196,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+197,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+198,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+199,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+200,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+201,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                               << 2U) 
                                              | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                 >> 0x1eU)))),3);
            tracep->chgBit(oldp+202,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                 >> 0x1fU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                   >> 0x1eU))) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                  >> 0x1eU))))));
            tracep->chgBit(oldp+203,((1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                >> 0x1fU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                               >> 0x1eU)))));
            tracep->chgBit(oldp+204,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U])));
            tracep->chgBit(oldp+205,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+206,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+207,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                              >> 0x1bU))),3);
            tracep->chgBit(oldp+208,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                               >> 0x1dU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                 >> 0x1cU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                 >> 0x1cU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                   >> 0x1bU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                >> 0x1dU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                  >> 0x1bU))))));
            tracep->chgBit(oldp+209,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                              >> 0x1dU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                >> 0x1cU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                               >> 0x1bU)))));
            tracep->chgBit(oldp+210,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+211,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+212,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+213,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                              >> 0x18U))),3);
            tracep->chgBit(oldp+214,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                               >> 0x1aU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                 >> 0x19U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                 >> 0x19U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                   >> 0x18U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                  >> 0x18U))))));
            tracep->chgBit(oldp+215,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                              >> 0x1aU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                >> 0x19U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                               >> 0x18U)))));
            tracep->chgBit(oldp+216,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+217,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+218,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+219,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+220,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+221,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+222,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+223,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+224,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+225,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+226,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+227,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+228,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+229,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+230,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+231,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+232,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+233,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+234,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+235,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+236,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+237,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                              >> 6U))),3);
            tracep->chgBit(oldp+238,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                               >> 8U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                 >> 7U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                   >> 6U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                  >> 6U))))));
            tracep->chgBit(oldp+239,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                              >> 8U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                >> 7U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                               >> 6U)))));
            tracep->chgBit(oldp+240,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                            >> 8U))));
            tracep->chgBit(oldp+241,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                            >> 7U))));
            tracep->chgBit(oldp+242,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                            >> 6U))));
            tracep->chgCData(oldp+243,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                              >> 3U))),3);
            tracep->chgBit(oldp+244,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                               >> 5U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                 >> 4U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                   >> 3U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                >> 5U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                  >> 3U))))));
            tracep->chgBit(oldp+245,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                              >> 5U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                >> 4U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                               >> 3U)))));
            tracep->chgBit(oldp+246,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                            >> 5U))));
            tracep->chgBit(oldp+247,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                            >> 4U))));
            tracep->chgBit(oldp+248,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                            >> 3U))));
            tracep->chgCData(oldp+249,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+250,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+251,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+252,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+253,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+254,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+255,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+256,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+257,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+258,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+259,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+260,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+261,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                              >> 0xaU))),3);
            tracep->chgBit(oldp+262,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                               >> 0xcU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                 >> 0xbU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                 >> 0xbU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                   >> 0xaU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                  >> 0xaU))))));
            tracep->chgBit(oldp+263,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                              >> 0xcU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                >> 0xbU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                               >> 0xaU)))));
            tracep->chgBit(oldp+264,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+265,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+266,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+267,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+268,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+269,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+270,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+271,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+272,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                              >> 0xeU))),3);
            tracep->chgBit(oldp+273,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                               >> 0x10U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                 >> 0xfU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                 >> 0xfU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                   >> 0xeU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                  >> 0xeU))))));
            tracep->chgBit(oldp+274,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                              >> 0x10U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                >> 0xfU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                               >> 0xeU)))));
            tracep->chgBit(oldp+275,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+276,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+277,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+278,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+279,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+280,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+281,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+282,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+283,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+284,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+285,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+286,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+287,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+288,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+289,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+290,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+291,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+292,((0x3fffffffU 
                                        & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                            << 0xaU) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                              >> 0x16U)))),30);
            tracep->chgBit(oldp+293,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+294,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+295,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+296,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+297,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+298,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+299,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+300,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+301,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+302,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+303,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+304,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+305,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+306,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+307,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                              >> 0x1cU))),3);
            tracep->chgBit(oldp+308,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                               >> 0x1eU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                 >> 0x1dU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                 >> 0x1dU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                   >> 0x1cU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                  >> 0x1cU))))));
            tracep->chgBit(oldp+309,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                              >> 0x1eU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                >> 0x1dU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                               >> 0x1cU)))));
            tracep->chgBit(oldp+310,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+311,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+312,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+313,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                              >> 0x19U))),3);
            tracep->chgBit(oldp+314,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                               >> 0x1bU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                 >> 0x1aU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                 >> 0x1aU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                   >> 0x19U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                >> 0x1bU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+315,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                              >> 0x1bU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                >> 0x1aU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+316,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+317,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+318,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+319,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                              >> 0x16U))),3);
            tracep->chgBit(oldp+320,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                               >> 0x18U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                 >> 0x17U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                 >> 0x17U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                   >> 0x16U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                  >> 0x16U))))));
            tracep->chgBit(oldp+321,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                              >> 0x18U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                >> 0x17U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                               >> 0x16U)))));
            tracep->chgBit(oldp+322,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+323,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+324,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+325,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+326,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+327,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+328,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+329,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+330,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+331,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+332,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+333,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+334,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+335,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+336,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+337,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+338,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+339,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+340,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+341,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+342,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+343,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                              >> 4U))),3);
            tracep->chgBit(oldp+344,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                               >> 6U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                 >> 5U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                 >> 5U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                   >> 4U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                  >> 4U))))));
            tracep->chgBit(oldp+345,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                              >> 6U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                >> 5U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                               >> 4U)))));
            tracep->chgBit(oldp+346,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                            >> 6U))));
            tracep->chgBit(oldp+347,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                            >> 5U))));
            tracep->chgBit(oldp+348,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                            >> 4U))));
            tracep->chgCData(oldp+349,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                              >> 1U))),3);
            tracep->chgBit(oldp+350,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                               >> 3U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                 >> 2U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                 >> 2U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                   >> 1U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                >> 3U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                  >> 1U))))));
            tracep->chgBit(oldp+351,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                              >> 3U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                >> 2U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                               >> 1U)))));
            tracep->chgBit(oldp+352,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                            >> 3U))));
            tracep->chgBit(oldp+353,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                            >> 2U))));
            tracep->chgBit(oldp+354,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                            >> 1U))));
            tracep->chgCData(oldp+355,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+356,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+357,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+358,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+359,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+360,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+361,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+362,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+363,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+364,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+365,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+366,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+367,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                              >> 8U))),3);
            tracep->chgBit(oldp+368,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                               >> 0xaU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                 >> 9U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                 >> 9U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                   >> 8U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                  >> 8U))))));
            tracep->chgBit(oldp+369,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                              >> 0xaU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                >> 9U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                               >> 8U)))));
            tracep->chgBit(oldp+370,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+371,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                            >> 9U))));
            tracep->chgBit(oldp+372,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                            >> 8U))));
            tracep->chgBit(oldp+373,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+374,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+375,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+376,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+377,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+378,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+379,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                               >> 0xeU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                 >> 0xdU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                   >> 0xcU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                  >> 0xcU))))));
            tracep->chgBit(oldp+380,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                              >> 0xeU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                >> 0xdU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                               >> 0xcU)))));
            tracep->chgBit(oldp+381,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+382,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+383,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+384,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+385,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+386,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+387,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+388,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+389,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+390,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+391,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+392,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+393,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+394,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+395,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+396,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+397,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+398,((0x3fffffffU 
                                        & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                            << 0xcU) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                              >> 0x14U)))),30);
            tracep->chgBit(oldp+399,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+400,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+401,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+402,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+403,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+404,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+405,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+406,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+407,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+408,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+409,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+410,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+411,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+412,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+413,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                              >> 0x1aU))),3);
            tracep->chgBit(oldp+414,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                               >> 0x1cU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                 >> 0x1bU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                   >> 0x1aU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+415,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                              >> 0x1cU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                >> 0x1bU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                               >> 0x1aU)))));
            tracep->chgBit(oldp+416,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+417,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+418,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+419,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                              >> 0x17U))),3);
            tracep->chgBit(oldp+420,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                               >> 0x19U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                 >> 0x18U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                   >> 0x17U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                >> 0x19U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                  >> 0x17U))))));
            tracep->chgBit(oldp+421,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                              >> 0x19U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                >> 0x18U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                               >> 0x17U)))));
            tracep->chgBit(oldp+422,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+423,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+424,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+425,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                              >> 0x14U))),3);
            tracep->chgBit(oldp+426,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                               >> 0x16U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                 >> 0x15U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                 >> 0x15U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                   >> 0x14U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                  >> 0x14U))))));
            tracep->chgBit(oldp+427,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                              >> 0x16U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                >> 0x15U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                               >> 0x14U)))));
            tracep->chgBit(oldp+428,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+429,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+430,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+431,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+432,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+433,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+434,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+435,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+436,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+437,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+438,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+439,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+440,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+441,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+442,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+443,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+444,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+445,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+446,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+447,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+448,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+449,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                              >> 2U))),3);
            tracep->chgBit(oldp+450,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                               >> 4U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                 >> 3U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                 >> 3U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                   >> 2U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                  >> 2U))))));
            tracep->chgBit(oldp+451,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                              >> 4U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                >> 3U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                               >> 2U)))));
            tracep->chgBit(oldp+452,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                            >> 4U))));
            tracep->chgBit(oldp+453,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                            >> 3U))));
            tracep->chgBit(oldp+454,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                            >> 2U))));
            tracep->chgCData(oldp+455,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                               << 1U) 
                                              | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                 >> 0x1fU)))),3);
            tracep->chgBit(oldp+456,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                               >> 1U) 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U]) 
                                             | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                   >> 0x1fU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                >> 1U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                  >> 0x1fU))))));
            tracep->chgBit(oldp+457,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                              >> 1U) 
                                             ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U]) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                               >> 0x1fU)))));
            tracep->chgBit(oldp+458,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                            >> 1U))));
            tracep->chgBit(oldp+459,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U])));
            tracep->chgBit(oldp+460,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+461,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+462,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+463,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+464,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+465,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+466,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+467,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+468,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+469,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+470,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+471,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+472,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+473,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                              >> 6U))),3);
            tracep->chgBit(oldp+474,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                               >> 8U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                 >> 7U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                   >> 6U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                  >> 6U))))));
            tracep->chgBit(oldp+475,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                              >> 8U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                >> 7U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                               >> 6U)))));
            tracep->chgBit(oldp+476,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                            >> 8U))));
            tracep->chgBit(oldp+477,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                            >> 7U))));
            tracep->chgBit(oldp+478,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                            >> 6U))));
            tracep->chgBit(oldp+479,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+480,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+481,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+482,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+483,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+484,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                              >> 0xaU))),3);
            tracep->chgBit(oldp+485,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                               >> 0xcU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                 >> 0xbU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                 >> 0xbU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                   >> 0xaU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                  >> 0xaU))))));
            tracep->chgBit(oldp+486,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                              >> 0xcU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                >> 0xbU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                               >> 0xaU)))));
            tracep->chgBit(oldp+487,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+488,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+489,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+490,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+491,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+492,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+493,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+494,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+495,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+496,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+497,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+498,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+499,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+500,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+501,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+502,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+503,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+504,((0x3fffffffU 
                                        & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                            << 0xeU) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                              >> 0x12U)))),30);
            tracep->chgBit(oldp+505,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+506,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+507,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+508,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+509,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+510,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+511,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+512,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+513,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+514,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+515,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+516,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+517,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+518,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+519,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                              >> 0x18U))),3);
            tracep->chgBit(oldp+520,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                               >> 0x1aU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                 >> 0x19U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                 >> 0x19U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                   >> 0x18U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                  >> 0x18U))))));
            tracep->chgBit(oldp+521,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                              >> 0x1aU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                >> 0x19U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                               >> 0x18U)))));
            tracep->chgBit(oldp+522,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+523,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+524,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+525,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                              >> 0x15U))),3);
            tracep->chgBit(oldp+526,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                               >> 0x17U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                 >> 0x16U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                 >> 0x16U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                   >> 0x15U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                >> 0x17U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                  >> 0x15U))))));
            tracep->chgBit(oldp+527,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                              >> 0x17U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                >> 0x16U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                               >> 0x15U)))));
            tracep->chgBit(oldp+528,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+529,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+530,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+531,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+532,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                               >> 0x14U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                 >> 0x13U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                 >> 0x13U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                   >> 0x12U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                  >> 0x12U))))));
            tracep->chgBit(oldp+533,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                              >> 0x14U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                >> 0x13U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+534,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+535,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+536,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+537,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+538,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+539,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+540,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+541,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+542,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+543,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+544,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+545,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+546,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+547,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+548,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+549,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+550,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+551,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+552,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+553,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+554,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+555,((7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U])),3);
            tracep->chgBit(oldp+556,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                               >> 2U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                 >> 1U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U])) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                >> 2U) 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U])))));
            tracep->chgBit(oldp+557,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                              >> 2U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                >> 1U)) 
                                            ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U]))));
            tracep->chgBit(oldp+558,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                            >> 2U))));
            tracep->chgBit(oldp+559,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                            >> 1U))));
            tracep->chgBit(oldp+560,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U])));
            tracep->chgCData(oldp+561,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                        >> 0x1dU)),3);
            tracep->chgBit(oldp+562,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                               >> 0x1fU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                 >> 0x1eU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                 >> 0x1eU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                   >> 0x1dU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                >> 0x1fU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                  >> 0x1dU))))));
            tracep->chgBit(oldp+563,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                              >> 0x1fU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                >> 0x1eU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                               >> 0x1dU)))));
            tracep->chgBit(oldp+564,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+565,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+566,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+567,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+568,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+569,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+570,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+571,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+572,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+573,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+574,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+575,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+576,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+577,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+578,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+579,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                              >> 4U))),3);
            tracep->chgBit(oldp+580,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                               >> 6U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                 >> 5U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                 >> 5U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                   >> 4U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                  >> 4U))))));
            tracep->chgBit(oldp+581,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                              >> 6U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                >> 5U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                               >> 4U)))));
            tracep->chgBit(oldp+582,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                            >> 6U))));
            tracep->chgBit(oldp+583,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                            >> 5U))));
            tracep->chgBit(oldp+584,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                            >> 4U))));
            tracep->chgBit(oldp+585,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+586,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+587,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+588,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+589,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+590,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                              >> 8U))),3);
            tracep->chgBit(oldp+591,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                               >> 0xaU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                 >> 9U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                 >> 9U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                   >> 8U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                  >> 8U))))));
            tracep->chgBit(oldp+592,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                              >> 0xaU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                >> 9U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                               >> 8U)))));
            tracep->chgBit(oldp+593,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+594,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                            >> 9U))));
            tracep->chgBit(oldp+595,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                            >> 8U))));
            tracep->chgCData(oldp+596,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+597,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+598,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+599,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+600,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+601,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+602,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+603,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+604,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+605,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+606,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+607,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+608,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+609,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+610,((0x3fffffffU 
                                        & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                            << 0x10U) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                              >> 0x10U)))),30);
            tracep->chgBit(oldp+611,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+612,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+613,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+614,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+615,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+616,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+617,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+618,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+619,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+620,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+621,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+622,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+623,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+624,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+625,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                              >> 0x16U))),3);
            tracep->chgBit(oldp+626,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                               >> 0x18U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                 >> 0x17U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                 >> 0x17U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                   >> 0x16U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                  >> 0x16U))))));
            tracep->chgBit(oldp+627,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                              >> 0x18U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                >> 0x17U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                               >> 0x16U)))));
            tracep->chgBit(oldp+628,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+629,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+630,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+631,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                              >> 0x13U))),3);
            tracep->chgBit(oldp+632,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                               >> 0x15U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                 >> 0x14U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                 >> 0x14U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                   >> 0x13U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                >> 0x15U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                  >> 0x13U))))));
            tracep->chgBit(oldp+633,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                              >> 0x15U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                >> 0x14U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                               >> 0x13U)))));
            tracep->chgBit(oldp+634,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+635,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+636,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+637,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                              >> 0x10U))),3);
            tracep->chgBit(oldp+638,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                               >> 0x12U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                 >> 0x11U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                 >> 0x11U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                   >> 0x10U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                  >> 0x10U))))));
            tracep->chgBit(oldp+639,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                              >> 0x12U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                >> 0x11U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                               >> 0x10U)))));
            tracep->chgBit(oldp+640,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+641,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+642,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+643,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+644,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+645,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+646,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+647,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+648,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+649,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+650,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+651,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+652,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+653,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+654,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+655,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+656,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+657,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+658,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+659,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+660,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+661,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                               << 2U) 
                                              | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                 >> 0x1eU)))),3);
            tracep->chgBit(oldp+662,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                 >> 0x1fU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                   >> 0x1eU))) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                  >> 0x1eU))))));
            tracep->chgBit(oldp+663,((1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                >> 0x1fU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                               >> 0x1eU)))));
            tracep->chgBit(oldp+664,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U])));
            tracep->chgBit(oldp+665,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+666,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+667,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                              >> 0x1bU))),3);
            tracep->chgBit(oldp+668,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                               >> 0x1dU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                 >> 0x1cU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                 >> 0x1cU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                   >> 0x1bU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                >> 0x1dU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                  >> 0x1bU))))));
            tracep->chgBit(oldp+669,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                              >> 0x1dU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                >> 0x1cU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                               >> 0x1bU)))));
            tracep->chgBit(oldp+670,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+671,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+672,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+673,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+674,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+675,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+676,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+677,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+678,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+679,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+680,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+681,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+682,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+683,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+684,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+685,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                              >> 2U))),3);
            tracep->chgBit(oldp+686,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                               >> 4U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                 >> 3U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                 >> 3U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                   >> 2U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                  >> 2U))))));
            tracep->chgBit(oldp+687,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                              >> 4U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                >> 3U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                               >> 2U)))));
            tracep->chgBit(oldp+688,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                            >> 4U))));
            tracep->chgBit(oldp+689,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                            >> 3U))));
            tracep->chgBit(oldp+690,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                            >> 2U))));
            tracep->chgBit(oldp+691,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+692,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+693,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+694,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+695,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+696,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                              >> 6U))),3);
            tracep->chgBit(oldp+697,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                               >> 8U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                 >> 7U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                   >> 6U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                  >> 6U))))));
            tracep->chgBit(oldp+698,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                              >> 8U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                >> 7U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                               >> 6U)))));
            tracep->chgBit(oldp+699,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                            >> 8U))));
            tracep->chgBit(oldp+700,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                            >> 7U))));
            tracep->chgBit(oldp+701,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                            >> 6U))));
            tracep->chgCData(oldp+702,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+703,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+704,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+705,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+706,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+707,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+708,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+709,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+710,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+711,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+712,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+713,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+714,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+715,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+716,((0x3fffffffU 
                                        & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                            << 0x12U) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                              >> 0xeU)))),30);
            tracep->chgBit(oldp+717,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+718,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+719,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+720,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+721,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+722,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+723,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+724,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+725,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+726,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+727,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+728,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+729,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+730,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+731,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                              >> 0x14U))),3);
            tracep->chgBit(oldp+732,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                               >> 0x16U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                 >> 0x15U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                 >> 0x15U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                   >> 0x14U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                  >> 0x14U))))));
            tracep->chgBit(oldp+733,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                              >> 0x16U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                >> 0x15U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                               >> 0x14U)))));
            tracep->chgBit(oldp+734,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+735,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+736,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+737,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                              >> 0x11U))),3);
            tracep->chgBit(oldp+738,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                               >> 0x13U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                 >> 0x12U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                 >> 0x12U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                   >> 0x11U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                >> 0x13U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                  >> 0x11U))))));
            tracep->chgBit(oldp+739,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                              >> 0x13U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                >> 0x12U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                               >> 0x11U)))));
            tracep->chgBit(oldp+740,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+741,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+742,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+743,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                              >> 0xeU))),3);
            tracep->chgBit(oldp+744,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                               >> 0x10U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                 >> 0xfU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                 >> 0xfU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                   >> 0xeU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                  >> 0xeU))))));
            tracep->chgBit(oldp+745,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                              >> 0x10U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                >> 0xfU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                               >> 0xeU)))));
            tracep->chgBit(oldp+746,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+747,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+748,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+749,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+750,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+751,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+752,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+753,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+754,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+755,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+756,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+757,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+758,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+759,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+760,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+761,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+762,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+763,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+764,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+765,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+766,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+767,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                              >> 0x1cU))),3);
            tracep->chgBit(oldp+768,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                               >> 0x1eU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                 >> 0x1dU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                 >> 0x1dU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                   >> 0x1cU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                  >> 0x1cU))))));
            tracep->chgBit(oldp+769,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                              >> 0x1eU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                >> 0x1dU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                               >> 0x1cU)))));
            tracep->chgBit(oldp+770,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+771,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+772,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+773,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                              >> 0x19U))),3);
            tracep->chgBit(oldp+774,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                               >> 0x1bU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                 >> 0x1aU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                 >> 0x1aU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                   >> 0x19U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                >> 0x1bU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+775,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                              >> 0x1bU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                >> 0x1aU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+776,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+777,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+778,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+779,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+780,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+781,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+782,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+783,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+784,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+785,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+786,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+787,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+788,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+789,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+790,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+791,((7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U])),3);
            tracep->chgBit(oldp+792,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                               >> 2U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                 >> 1U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U])) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                >> 2U) 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U])))));
            tracep->chgBit(oldp+793,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                              >> 2U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                >> 1U)) 
                                            ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U]))));
            tracep->chgBit(oldp+794,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                            >> 2U))));
            tracep->chgBit(oldp+795,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                            >> 1U))));
            tracep->chgBit(oldp+796,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U])));
            tracep->chgBit(oldp+797,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+798,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+799,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+800,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+801,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+802,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                              >> 4U))),3);
            tracep->chgBit(oldp+803,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                               >> 6U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                 >> 5U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                 >> 5U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                   >> 4U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                  >> 4U))))));
            tracep->chgBit(oldp+804,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                              >> 6U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                >> 5U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                               >> 4U)))));
            tracep->chgBit(oldp+805,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                            >> 6U))));
            tracep->chgBit(oldp+806,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                            >> 5U))));
            tracep->chgBit(oldp+807,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                            >> 4U))));
            tracep->chgCData(oldp+808,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+809,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+810,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+811,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+812,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+813,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+814,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+815,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+816,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+817,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+818,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+819,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+820,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+821,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+822,((0x3fffffffU 
                                        & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                            << 0x14U) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                              >> 0xcU)))),30);
            tracep->chgBit(oldp+823,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+824,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+825,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+826,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+827,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+828,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+829,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+830,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+831,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+832,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+833,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+834,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+835,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+836,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+837,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+838,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                               >> 0x14U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                 >> 0x13U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                 >> 0x13U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                   >> 0x12U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                  >> 0x12U))))));
            tracep->chgBit(oldp+839,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                              >> 0x14U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                >> 0x13U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+840,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+841,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+842,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+843,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                              >> 0xfU))),3);
            tracep->chgBit(oldp+844,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                               >> 0x11U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                 >> 0x10U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                 >> 0x10U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                   >> 0xfU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                >> 0x11U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                  >> 0xfU))))));
            tracep->chgBit(oldp+845,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                              >> 0x11U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                >> 0x10U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                               >> 0xfU)))));
            tracep->chgBit(oldp+846,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+847,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+848,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+849,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+850,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                               >> 0xeU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                 >> 0xdU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                   >> 0xcU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                  >> 0xcU))))));
            tracep->chgBit(oldp+851,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                              >> 0xeU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                >> 0xdU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                               >> 0xcU)))));
            tracep->chgBit(oldp+852,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+853,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+854,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+855,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+856,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+857,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+858,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+859,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+860,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+861,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+862,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+863,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+864,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+865,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+866,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+867,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+868,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+869,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+870,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+871,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+872,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+873,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                              >> 0x1aU))),3);
            tracep->chgBit(oldp+874,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                               >> 0x1cU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                 >> 0x1bU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                   >> 0x1aU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+875,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                              >> 0x1cU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                >> 0x1bU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                               >> 0x1aU)))));
            tracep->chgBit(oldp+876,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+877,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+878,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+879,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                              >> 0x17U))),3);
            tracep->chgBit(oldp+880,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                               >> 0x19U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                 >> 0x18U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                   >> 0x17U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                >> 0x19U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                  >> 0x17U))))));
            tracep->chgBit(oldp+881,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                              >> 0x19U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                >> 0x18U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                               >> 0x17U)))));
            tracep->chgBit(oldp+882,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+883,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+884,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+885,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+886,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+887,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+888,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+889,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+890,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+891,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+892,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+893,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+894,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+895,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+896,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+897,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                               << 2U) 
                                              | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                 >> 0x1eU)))),3);
            tracep->chgBit(oldp+898,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                 >> 0x1fU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                   >> 0x1eU))) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                  >> 0x1eU))))));
            tracep->chgBit(oldp+899,((1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                >> 0x1fU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                               >> 0x1eU)))));
            tracep->chgBit(oldp+900,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U])));
            tracep->chgBit(oldp+901,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+902,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+903,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+904,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+905,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+906,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+907,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+908,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                              >> 2U))),3);
            tracep->chgBit(oldp+909,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                               >> 4U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                 >> 3U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                 >> 3U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                   >> 2U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                  >> 2U))))));
            tracep->chgBit(oldp+910,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                              >> 4U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                >> 3U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                               >> 2U)))));
            tracep->chgBit(oldp+911,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                            >> 4U))));
            tracep->chgBit(oldp+912,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                            >> 3U))));
            tracep->chgBit(oldp+913,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                            >> 2U))));
            tracep->chgCData(oldp+914,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+915,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+916,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+917,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+918,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+919,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+920,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+921,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+922,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+923,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+924,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+925,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+926,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+927,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+928,((0x3fffffffU 
                                        & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                            << 0x16U) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                              >> 0xaU)))),30);
            tracep->chgBit(oldp+929,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+930,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+931,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+932,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+933,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+934,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+935,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+936,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+937,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+938,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+939,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+940,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+941,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+942,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+943,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                              >> 0x10U))),3);
            tracep->chgBit(oldp+944,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                               >> 0x12U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                 >> 0x11U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                 >> 0x11U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                   >> 0x10U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                  >> 0x10U))))));
            tracep->chgBit(oldp+945,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                              >> 0x12U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                >> 0x11U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                               >> 0x10U)))));
            tracep->chgBit(oldp+946,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+947,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+948,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+949,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                              >> 0xdU))),3);
            tracep->chgBit(oldp+950,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                               >> 0xfU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                 >> 0xeU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                 >> 0xeU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                   >> 0xdU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                >> 0xfU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                  >> 0xdU))))));
            tracep->chgBit(oldp+951,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                              >> 0xfU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                >> 0xeU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                               >> 0xdU)))));
            tracep->chgBit(oldp+952,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+953,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+954,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+955,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                              >> 0xaU))),3);
            tracep->chgBit(oldp+956,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                               >> 0xcU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                 >> 0xbU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                 >> 0xbU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                   >> 0xaU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                  >> 0xaU))))));
            tracep->chgBit(oldp+957,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                              >> 0xcU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                >> 0xbU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                               >> 0xaU)))));
            tracep->chgBit(oldp+958,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+959,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+960,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+961,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+962,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+963,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+964,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+965,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+966,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+967,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+968,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+969,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+970,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+971,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+972,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+973,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+974,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+975,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+976,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+977,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+978,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+979,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                              >> 0x18U))),3);
            tracep->chgBit(oldp+980,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                               >> 0x1aU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                 >> 0x19U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                 >> 0x19U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                   >> 0x18U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                  >> 0x18U))))));
            tracep->chgBit(oldp+981,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                              >> 0x1aU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                >> 0x19U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                               >> 0x18U)))));
            tracep->chgBit(oldp+982,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+983,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+984,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+985,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                              >> 0x15U))),3);
            tracep->chgBit(oldp+986,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                               >> 0x17U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                 >> 0x16U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                 >> 0x16U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                   >> 0x15U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                >> 0x17U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                  >> 0x15U))))));
            tracep->chgBit(oldp+987,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                              >> 0x17U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                >> 0x16U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                               >> 0x15U)))));
            tracep->chgBit(oldp+988,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+989,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+990,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+991,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+992,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+993,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+994,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+995,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+996,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+997,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+998,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+999,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1000,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1001,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1002,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1003,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                               >> 0x1cU))),3);
            tracep->chgBit(oldp+1004,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                  >> 0x1dU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                  >> 0x1dU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                    >> 0x1cU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                 >> 0x1eU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                   >> 0x1cU))))));
            tracep->chgBit(oldp+1005,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                               >> 0x1eU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                 >> 0x1dU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+1006,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1007,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1008,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1009,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1010,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1011,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1012,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1013,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1014,((7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU])),3);
            tracep->chgBit(oldp+1015,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                >> 2U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                  >> 1U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU])) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU])))));
            tracep->chgBit(oldp+1016,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                               >> 2U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                 >> 1U)) 
                                             ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU]))));
            tracep->chgBit(oldp+1017,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                             >> 2U))));
            tracep->chgBit(oldp+1018,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1019,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU])));
            tracep->chgCData(oldp+1020,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1021,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1022,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1023,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1024,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1025,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1026,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1027,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1028,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1029,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1030,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1031,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1032,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1033,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1034,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                             << 0x18U) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                               >> 8U)))),30);
            tracep->chgBit(oldp+1035,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1036,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1037,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1038,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1039,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1040,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1041,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1042,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1043,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1044,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1045,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1046,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1047,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1048,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1049,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                               >> 0xeU))),3);
            tracep->chgBit(oldp+1050,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                  >> 0xfU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                  >> 0xfU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                    >> 0xeU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                 >> 0x10U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+1051,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                               >> 0x10U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                 >> 0xfU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+1052,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1053,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1054,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                             >> 0xeU))));
            tracep->chgCData(oldp+1055,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                               >> 0xbU))),3);
            tracep->chgBit(oldp+1056,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                >> 0xdU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                  >> 0xcU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                  >> 0xcU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                    >> 0xbU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+1057,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                               >> 0xdU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                 >> 0xcU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+1058,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1059,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1060,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                             >> 0xbU))));
            tracep->chgCData(oldp+1061,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                               >> 8U))),3);
            tracep->chgBit(oldp+1062,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                  >> 9U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                  >> 9U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                    >> 8U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+1063,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                               >> 0xaU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                 >> 9U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                >> 8U)))));
            tracep->chgBit(oldp+1064,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1065,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                             >> 9U))));
            tracep->chgBit(oldp+1066,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                             >> 8U))));
            tracep->chgCData(oldp+1067,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1068,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1069,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1070,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1071,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1072,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1073,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1074,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1075,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1076,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1077,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1078,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1079,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1080,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1081,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1082,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1083,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1084,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1085,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                               >> 0x16U))),3);
            tracep->chgBit(oldp+1086,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                  >> 0x17U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                  >> 0x17U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                    >> 0x16U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                   >> 0x16U))))));
            tracep->chgBit(oldp+1087,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                               >> 0x18U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                 >> 0x17U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+1088,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1089,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1090,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                             >> 0x16U))));
            tracep->chgCData(oldp+1091,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                               >> 0x13U))),3);
            tracep->chgBit(oldp+1092,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                >> 0x15U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                  >> 0x14U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                  >> 0x14U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                    >> 0x13U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                 >> 0x15U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                   >> 0x13U))))));
            tracep->chgBit(oldp+1093,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                               >> 0x15U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                 >> 0x14U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+1094,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1095,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1096,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                             >> 0x13U))));
            tracep->chgCData(oldp+1097,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1098,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1099,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1100,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1101,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1102,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1103,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1104,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1105,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1106,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1107,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1108,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1109,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                               >> 0x1aU))),3);
            tracep->chgBit(oldp+1110,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                  >> 0x1bU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                    >> 0x1aU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                 >> 0x1cU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                   >> 0x1aU))))));
            tracep->chgBit(oldp+1111,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                               >> 0x1cU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                 >> 0x1bU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+1112,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1113,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1114,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1115,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1116,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1117,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1118,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1119,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1120,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                << 2U) 
                                               | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                  >> 0x1eU)))),3);
            tracep->chgBit(oldp+1121,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                  >> 0x1fU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                    >> 0x1eU))) 
                                             | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                   >> 0x1eU))))));
            tracep->chgBit(oldp+1122,((1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                 >> 0x1fU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+1123,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU])));
            tracep->chgBit(oldp+1124,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1125,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                             >> 0x1eU))));
            tracep->chgCData(oldp+1126,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1127,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1128,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1129,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1130,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1131,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1132,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1133,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1134,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1135,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1136,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1137,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1138,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1139,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1140,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                             << 0x1aU) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                               >> 6U)))),30);
            tracep->chgBit(oldp+1141,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1142,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1143,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1144,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1145,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1146,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1147,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1148,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1149,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1150,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1151,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1152,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1153,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1154,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1155,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1156,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                  >> 0xdU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                  >> 0xdU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                    >> 0xcU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                 >> 0xeU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                   >> 0xcU))))));
            tracep->chgBit(oldp+1157,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                               >> 0xeU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                 >> 0xdU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1158,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1159,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1160,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1161,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1162,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                >> 0xbU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                  >> 0xaU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                  >> 0xaU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                    >> 9U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                 >> 0xbU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                   >> 9U))))));
            tracep->chgBit(oldp+1163,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                               >> 0xbU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                 >> 0xaU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                >> 9U)))));
            tracep->chgBit(oldp+1164,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1165,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1166,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                             >> 9U))));
            tracep->chgCData(oldp+1167,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1168,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                  >> 7U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                  >> 7U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                    >> 6U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                 >> 8U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                   >> 6U))))));
            tracep->chgBit(oldp+1169,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                               >> 8U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                 >> 7U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                >> 6U)))));
            tracep->chgBit(oldp+1170,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                             >> 8U))));
            tracep->chgBit(oldp+1171,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                             >> 7U))));
            tracep->chgBit(oldp+1172,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                             >> 6U))));
            tracep->chgCData(oldp+1173,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1174,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1175,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1176,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1177,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1178,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1179,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1180,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1181,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1182,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1183,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1184,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1185,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1186,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1187,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1188,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1189,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1190,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1191,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                               >> 0x14U))),3);
            tracep->chgBit(oldp+1192,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                  >> 0x15U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                  >> 0x15U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                    >> 0x14U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                 >> 0x16U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                   >> 0x14U))))));
            tracep->chgBit(oldp+1193,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                               >> 0x16U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                 >> 0x15U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+1194,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1195,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1196,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                             >> 0x14U))));
            tracep->chgCData(oldp+1197,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                               >> 0x11U))),3);
            tracep->chgBit(oldp+1198,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                >> 0x13U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                  >> 0x12U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                  >> 0x12U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                    >> 0x11U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                 >> 0x13U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                   >> 0x11U))))));
            tracep->chgBit(oldp+1199,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                               >> 0x13U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                 >> 0x12U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+1200,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1201,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1202,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                             >> 0x11U))));
            tracep->chgCData(oldp+1203,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1204,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1205,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1206,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1207,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1208,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1209,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1210,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1211,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1212,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1213,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1214,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1215,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                               >> 0x18U))),3);
            tracep->chgBit(oldp+1216,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                  >> 0x19U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                  >> 0x19U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                    >> 0x18U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                 >> 0x1aU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                   >> 0x18U))))));
            tracep->chgBit(oldp+1217,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                               >> 0x1aU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                 >> 0x19U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+1218,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1219,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1220,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1221,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1222,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1223,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1224,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1225,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1226,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                               >> 0x1cU))),3);
            tracep->chgBit(oldp+1227,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                  >> 0x1dU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                  >> 0x1dU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                    >> 0x1cU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                 >> 0x1eU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                   >> 0x1cU))))));
            tracep->chgBit(oldp+1228,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                               >> 0x1eU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                 >> 0x1dU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+1229,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1230,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1231,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                             >> 0x1cU))));
            tracep->chgCData(oldp+1232,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1233,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1234,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1235,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1236,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1237,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1238,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1239,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1240,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1241,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1242,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1243,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1244,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1245,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1246,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                             << 0x1cU) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                               >> 4U)))),30);
            tracep->chgBit(oldp+1247,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1248,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1249,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1250,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1251,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1252,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1253,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1254,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1255,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1256,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1257,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1258,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1259,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1260,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1261,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                               >> 0xaU))),3);
            tracep->chgBit(oldp+1262,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                  >> 0xbU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                  >> 0xbU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                    >> 0xaU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                 >> 0xcU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+1263,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                               >> 0xcU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                 >> 0xbU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1264,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1265,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1266,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                             >> 0xaU))));
            tracep->chgCData(oldp+1267,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                               >> 7U))),3);
            tracep->chgBit(oldp+1268,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                >> 9U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                  >> 8U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                  >> 8U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                    >> 7U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                 >> 9U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                   >> 7U))))));
            tracep->chgBit(oldp+1269,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                               >> 9U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                 >> 8U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                >> 7U)))));
            tracep->chgBit(oldp+1270,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                             >> 9U))));
            tracep->chgBit(oldp+1271,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                             >> 8U))));
            tracep->chgBit(oldp+1272,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                             >> 7U))));
            tracep->chgCData(oldp+1273,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1274,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                  >> 5U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                  >> 5U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                    >> 4U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                 >> 6U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                   >> 4U))))));
            tracep->chgBit(oldp+1275,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                               >> 6U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                 >> 5U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                >> 4U)))));
            tracep->chgBit(oldp+1276,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                             >> 6U))));
            tracep->chgBit(oldp+1277,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                             >> 5U))));
            tracep->chgBit(oldp+1278,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                             >> 4U))));
            tracep->chgCData(oldp+1279,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1280,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1281,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1282,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1283,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1284,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1285,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1286,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1287,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1288,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1289,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1290,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1291,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1292,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1293,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1294,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1295,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1296,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1297,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1298,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                  >> 0x13U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                  >> 0x13U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                    >> 0x12U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                 >> 0x14U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                   >> 0x12U))))));
            tracep->chgBit(oldp+1299,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                               >> 0x14U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                 >> 0x13U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1300,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1301,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1302,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1303,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                               >> 0xfU))),3);
            tracep->chgBit(oldp+1304,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                >> 0x11U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                  >> 0x10U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                  >> 0x10U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                    >> 0xfU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                 >> 0x11U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                   >> 0xfU))))));
            tracep->chgBit(oldp+1305,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                               >> 0x11U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                 >> 0x10U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+1306,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1307,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1308,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1309,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1310,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1311,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1312,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1313,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1314,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1315,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1316,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1317,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1318,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1319,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1320,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1321,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                               >> 0x16U))),3);
            tracep->chgBit(oldp+1322,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                  >> 0x17U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                  >> 0x17U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                    >> 0x16U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                   >> 0x16U))))));
            tracep->chgBit(oldp+1323,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                               >> 0x18U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                 >> 0x17U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+1324,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1325,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1326,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1327,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1328,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1329,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1330,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1331,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1332,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                               >> 0x1aU))),3);
            tracep->chgBit(oldp+1333,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                  >> 0x1bU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                    >> 0x1aU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                 >> 0x1cU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                   >> 0x1aU))))));
            tracep->chgBit(oldp+1334,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                               >> 0x1cU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                 >> 0x1bU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+1335,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1336,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1337,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                             >> 0x1aU))));
            tracep->chgCData(oldp+1338,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1339,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1340,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1341,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1342,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1343,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1344,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1345,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1346,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1347,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1348,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1349,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1350,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1351,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1352,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                         >> 2U)),30);
            tracep->chgBit(oldp+1353,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1354,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1355,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1356,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1357,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1358,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1359,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1360,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1361,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1362,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1363,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1364,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1365,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1366,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1367,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                               >> 8U))),3);
            tracep->chgBit(oldp+1368,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                  >> 9U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                  >> 9U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                    >> 8U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+1369,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                               >> 0xaU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                 >> 9U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                >> 8U)))));
            tracep->chgBit(oldp+1370,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1371,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                             >> 9U))));
            tracep->chgBit(oldp+1372,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                             >> 8U))));
            tracep->chgCData(oldp+1373,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                               >> 5U))),3);
            tracep->chgBit(oldp+1374,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                >> 7U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                  >> 6U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                  >> 6U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                    >> 5U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                   >> 5U))))));
            tracep->chgBit(oldp+1375,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                               >> 7U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                 >> 6U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                >> 5U)))));
            tracep->chgBit(oldp+1376,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                             >> 7U))));
            tracep->chgBit(oldp+1377,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                             >> 6U))));
            tracep->chgBit(oldp+1378,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                             >> 5U))));
            tracep->chgCData(oldp+1379,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1380,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                  >> 3U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                  >> 3U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                    >> 2U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1381,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                               >> 4U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                 >> 3U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                >> 2U)))));
            tracep->chgBit(oldp+1382,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                             >> 4U))));
            tracep->chgBit(oldp+1383,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                             >> 3U))));
            tracep->chgBit(oldp+1384,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                             >> 2U))));
            tracep->chgCData(oldp+1385,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1386,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1387,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1388,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1389,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1390,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1391,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1392,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1393,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1394,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1395,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1396,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1397,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1398,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1399,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1400,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1401,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1402,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1403,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                               >> 0x10U))),3);
            tracep->chgBit(oldp+1404,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                  >> 0x11U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                  >> 0x11U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                    >> 0x10U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                 >> 0x12U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                   >> 0x10U))))));
            tracep->chgBit(oldp+1405,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                               >> 0x12U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                 >> 0x11U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+1406,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1407,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1408,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                             >> 0x10U))));
            tracep->chgCData(oldp+1409,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                               >> 0xdU))),3);
            tracep->chgBit(oldp+1410,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                >> 0xfU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                  >> 0xeU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                  >> 0xeU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                    >> 0xdU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                 >> 0xfU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                   >> 0xdU))))));
            tracep->chgBit(oldp+1411,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                               >> 0xfU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                 >> 0xeU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+1412,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1413,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1414,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                             >> 0xdU))));
            tracep->chgCData(oldp+1415,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1416,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1417,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1418,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1419,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1420,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1421,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1422,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1423,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1424,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1425,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1426,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1427,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                               >> 0x14U))),3);
            tracep->chgBit(oldp+1428,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                  >> 0x15U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                  >> 0x15U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                    >> 0x14U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                 >> 0x16U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                   >> 0x14U))))));
            tracep->chgBit(oldp+1429,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                               >> 0x16U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                 >> 0x15U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+1430,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1431,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1432,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1433,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1434,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1435,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1436,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1437,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1438,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                               >> 0x18U))),3);
            tracep->chgBit(oldp+1439,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                  >> 0x19U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                  >> 0x19U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                    >> 0x18U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                 >> 0x1aU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                   >> 0x18U))))));
            tracep->chgBit(oldp+1440,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                               >> 0x1aU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                 >> 0x19U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+1441,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1442,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1443,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                             >> 0x18U))));
            tracep->chgCData(oldp+1444,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1445,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1446,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1447,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1448,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1449,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1450,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1451,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1452,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1453,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1454,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1455,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1456,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1457,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1458,((0x3fffffffU 
                                         & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU])),30);
            tracep->chgBit(oldp+1459,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1460,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1461,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1462,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1463,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1464,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1465,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1466,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1467,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1468,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1469,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1470,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1471,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1472,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1473,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1474,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                  >> 7U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                  >> 7U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                    >> 6U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                 >> 8U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                   >> 6U))))));
            tracep->chgBit(oldp+1475,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                               >> 8U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                 >> 7U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                >> 6U)))));
            tracep->chgBit(oldp+1476,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                             >> 8U))));
            tracep->chgBit(oldp+1477,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                             >> 7U))));
            tracep->chgBit(oldp+1478,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                             >> 6U))));
            tracep->chgCData(oldp+1479,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1480,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                >> 5U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                  >> 4U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                  >> 4U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                    >> 3U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                 >> 5U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1481,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                               >> 5U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                 >> 4U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                >> 3U)))));
            tracep->chgBit(oldp+1482,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                             >> 5U))));
            tracep->chgBit(oldp+1483,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                             >> 4U))));
            tracep->chgBit(oldp+1484,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                             >> 3U))));
            tracep->chgCData(oldp+1485,((7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU])),3);
            tracep->chgBit(oldp+1486,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                >> 2U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                  >> 1U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU])) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU])))));
            tracep->chgBit(oldp+1487,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                               >> 2U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                 >> 1U)) 
                                             ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU]))));
            tracep->chgBit(oldp+1488,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                             >> 2U))));
            tracep->chgBit(oldp+1489,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1490,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU])));
            tracep->chgCData(oldp+1491,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1492,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1493,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1494,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1495,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1496,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1497,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1498,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1499,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1500,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1501,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1502,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1503,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1504,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1505,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1506,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1507,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1508,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1509,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                               >> 0xeU))),3);
            tracep->chgBit(oldp+1510,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                  >> 0xfU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                  >> 0xfU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                    >> 0xeU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                 >> 0x10U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+1511,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                               >> 0x10U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                 >> 0xfU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+1512,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1513,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1514,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                             >> 0xeU))));
            tracep->chgCData(oldp+1515,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                               >> 0xbU))),3);
            tracep->chgBit(oldp+1516,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                >> 0xdU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                  >> 0xcU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                  >> 0xcU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                    >> 0xbU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+1517,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                               >> 0xdU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                 >> 0xcU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+1518,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1519,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1520,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                             >> 0xbU))));
            tracep->chgCData(oldp+1521,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1522,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1523,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1524,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1525,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1526,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1527,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1528,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1529,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1530,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1531,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1532,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1533,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1534,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                  >> 0x13U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                  >> 0x13U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                    >> 0x12U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                 >> 0x14U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                   >> 0x12U))))));
            tracep->chgBit(oldp+1535,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                               >> 0x14U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                 >> 0x13U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1536,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1537,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1538,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1539,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1540,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1541,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1542,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1543,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1544,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                               >> 0x16U))),3);
            tracep->chgBit(oldp+1545,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                  >> 0x17U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                  >> 0x17U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                    >> 0x16U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                   >> 0x16U))))));
            tracep->chgBit(oldp+1546,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                               >> 0x18U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                 >> 0x17U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+1547,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1548,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1549,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                             >> 0x16U))));
            tracep->chgCData(oldp+1550,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1551,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1552,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1553,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1554,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1555,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1556,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1557,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1558,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1559,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1560,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1561,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1562,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1563,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1564,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                             << 2U) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                               >> 0x1eU)))),30);
            tracep->chgBit(oldp+1565,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1566,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1567,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1568,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1569,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1570,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1571,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1572,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1573,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1574,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1575,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1576,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1577,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1578,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1579,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1580,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                  >> 5U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                  >> 5U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                    >> 4U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                 >> 6U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                   >> 4U))))));
            tracep->chgBit(oldp+1581,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                               >> 6U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                 >> 5U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                >> 4U)))));
            tracep->chgBit(oldp+1582,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                             >> 6U))));
            tracep->chgBit(oldp+1583,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                             >> 5U))));
            tracep->chgBit(oldp+1584,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                             >> 4U))));
            tracep->chgCData(oldp+1585,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1586,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                >> 3U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                  >> 2U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                  >> 2U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                    >> 1U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                 >> 3U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1587,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                               >> 3U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                 >> 2U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                >> 1U)))));
            tracep->chgBit(oldp+1588,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                             >> 3U))));
            tracep->chgBit(oldp+1589,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                             >> 2U))));
            tracep->chgBit(oldp+1590,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                             >> 1U))));
            tracep->chgCData(oldp+1591,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                << 2U) 
                                               | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                  >> 0x1eU)))),3);
            tracep->chgBit(oldp+1592,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                  >> 0x1fU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                    >> 0x1eU))) 
                                             | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                   >> 0x1eU))))));
            tracep->chgBit(oldp+1593,((1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                 >> 0x1fU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+1594,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU])));
            tracep->chgBit(oldp+1595,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1596,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1eU] 
                                             >> 0x1eU))));
            tracep->chgCData(oldp+1597,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1598,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1599,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1600,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1601,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1602,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1603,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1604,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1605,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1606,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1607,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1608,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1609,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1610,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1611,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1612,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1613,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1614,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1615,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1616,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                  >> 0xdU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                  >> 0xdU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                    >> 0xcU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                 >> 0xeU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                   >> 0xcU))))));
            tracep->chgBit(oldp+1617,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                               >> 0xeU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                 >> 0xdU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1618,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1619,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1620,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1621,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1622,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                >> 0xbU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                  >> 0xaU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                  >> 0xaU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                    >> 9U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                 >> 0xbU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                   >> 9U))))));
            tracep->chgBit(oldp+1623,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                               >> 0xbU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                 >> 0xaU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                >> 9U)))));
            tracep->chgBit(oldp+1624,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1625,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1626,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                             >> 9U))));
            tracep->chgCData(oldp+1627,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1628,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1629,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1630,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1631,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1632,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1633,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1634,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1635,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1636,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1637,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1638,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1639,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                               >> 0x10U))),3);
            tracep->chgBit(oldp+1640,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                  >> 0x11U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                  >> 0x11U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                    >> 0x10U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                 >> 0x12U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                   >> 0x10U))))));
            tracep->chgBit(oldp+1641,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                               >> 0x12U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                 >> 0x11U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+1642,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1643,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1644,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1645,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1646,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1647,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1648,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1649,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1650,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                               >> 0x14U))),3);
            tracep->chgBit(oldp+1651,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                  >> 0x15U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                  >> 0x15U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                    >> 0x14U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                 >> 0x16U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                   >> 0x14U))))));
            tracep->chgBit(oldp+1652,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                               >> 0x16U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                 >> 0x15U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+1653,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1654,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1655,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                             >> 0x14U))));
            tracep->chgCData(oldp+1656,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1657,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1658,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1659,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1660,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1661,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1662,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1663,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1664,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1665,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1666,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1667,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1668,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1669,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1670,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                             << 4U) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                               >> 0x1cU)))),30);
            tracep->chgBit(oldp+1671,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1672,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1673,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1674,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1675,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1676,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1677,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1678,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1679,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1680,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1681,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1682,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1683,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1684,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1685,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1686,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                  >> 3U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                  >> 3U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                    >> 2U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1687,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                               >> 4U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                 >> 3U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+1688,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1689,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1690,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                             >> 2U))));
            tracep->chgCData(oldp+1691,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                << 1U) 
                                               | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                  >> 0x1fU)))),3);
            tracep->chgBit(oldp+1692,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                >> 1U) 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U]) 
                                              | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                    >> 0x1fU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                 >> 1U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                   >> 0x1fU))))));
            tracep->chgBit(oldp+1693,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                               >> 1U) 
                                              ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U]) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                >> 0x1fU)))));
            tracep->chgBit(oldp+1694,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1695,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U])));
            tracep->chgBit(oldp+1696,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                       >> 0x1fU)));
            tracep->chgCData(oldp+1697,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                               >> 0x1cU))),3);
            tracep->chgBit(oldp+1698,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                  >> 0x1dU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                  >> 0x1dU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                    >> 0x1cU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                 >> 0x1eU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                   >> 0x1cU))))));
            tracep->chgBit(oldp+1699,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                               >> 0x1eU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                 >> 0x1dU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+1700,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1701,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1702,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1fU] 
                                             >> 0x1cU))));
            tracep->chgCData(oldp+1703,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1704,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1705,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1706,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1707,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1708,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1709,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1710,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1711,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1712,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1713,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1714,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1715,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1716,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1717,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1718,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1719,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1720,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1721,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                               >> 0xaU))),3);
            tracep->chgBit(oldp+1722,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                  >> 0xbU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                  >> 0xbU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                    >> 0xaU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                 >> 0xcU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+1723,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                               >> 0xcU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                 >> 0xbU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1724,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1725,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1726,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                             >> 0xaU))));
            tracep->chgCData(oldp+1727,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                               >> 7U))),3);
            tracep->chgBit(oldp+1728,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                >> 9U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                  >> 8U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                  >> 8U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                    >> 7U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                 >> 9U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                   >> 7U))))));
            tracep->chgBit(oldp+1729,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                               >> 9U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                 >> 8U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                >> 7U)))));
            tracep->chgBit(oldp+1730,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1731,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1732,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                             >> 7U))));
            tracep->chgCData(oldp+1733,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1734,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1735,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1736,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1737,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1738,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1739,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1740,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1741,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1742,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1743,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1744,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1745,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                               >> 0xeU))),3);
            tracep->chgBit(oldp+1746,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                  >> 0xfU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                  >> 0xfU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                    >> 0xeU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                 >> 0x10U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+1747,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                               >> 0x10U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                 >> 0xfU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+1748,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1749,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1750,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1751,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1752,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1753,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1754,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1755,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1756,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1757,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                  >> 0x13U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                  >> 0x13U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                    >> 0x12U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                 >> 0x14U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                   >> 0x12U))))));
            tracep->chgBit(oldp+1758,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                               >> 0x14U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                 >> 0x13U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1759,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1760,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1761,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1762,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1763,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1764,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1765,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1766,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1767,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1768,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1769,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1770,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1771,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1772,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1773,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1774,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1775,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1776,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                             << 6U) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                               >> 0x1aU)))),30);
            tracep->chgBit(oldp+1777,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1778,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1779,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1780,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1781,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1782,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1783,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1784,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1785,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1786,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1787,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1788,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1789,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1790,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1791,((7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U])),3);
            tracep->chgBit(oldp+1792,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                >> 2U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                  >> 1U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U])) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U])))));
            tracep->chgBit(oldp+1793,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                               >> 2U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                 >> 1U)) 
                                             ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U]))));
            tracep->chgBit(oldp+1794,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1795,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1796,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U])));
            tracep->chgCData(oldp+1797,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                         >> 0x1dU)),3);
            tracep->chgBit(oldp+1798,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                >> 0x1fU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                  >> 0x1eU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                  >> 0x1eU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                    >> 0x1dU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                   >> 0x1dU))))));
            tracep->chgBit(oldp+1799,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                               >> 0x1fU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                 >> 0x1eU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+1800,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1801,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1802,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                             >> 0x1dU))));
            tracep->chgCData(oldp+1803,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                               >> 0x1aU))),3);
            tracep->chgBit(oldp+1804,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                  >> 0x1bU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                    >> 0x1aU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                 >> 0x1cU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                   >> 0x1aU))))));
            tracep->chgBit(oldp+1805,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                               >> 0x1cU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                 >> 0x1bU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+1806,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1807,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1808,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x20U] 
                                             >> 0x1aU))));
            tracep->chgCData(oldp+1809,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1810,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1811,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1812,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1813,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1814,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1815,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1816,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1817,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1818,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1819,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1820,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1821,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1822,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1823,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1824,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1825,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1826,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1827,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                               >> 8U))),3);
            tracep->chgBit(oldp+1828,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                  >> 9U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                  >> 9U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                    >> 8U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+1829,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                               >> 0xaU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                 >> 9U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                >> 8U)))));
            tracep->chgBit(oldp+1830,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1831,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1832,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                             >> 8U))));
            tracep->chgCData(oldp+1833,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                               >> 5U))),3);
            tracep->chgBit(oldp+1834,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                >> 7U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                  >> 6U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                  >> 6U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                    >> 5U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                   >> 5U))))));
            tracep->chgBit(oldp+1835,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                               >> 7U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                 >> 6U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                >> 5U)))));
            tracep->chgBit(oldp+1836,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1837,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1838,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                             >> 5U))));
            tracep->chgCData(oldp+1839,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1840,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1841,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1842,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1843,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1844,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1845,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1846,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1847,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1848,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1849,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1850,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1851,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1852,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                  >> 0xdU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                  >> 0xdU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                    >> 0xcU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                 >> 0xeU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                   >> 0xcU))))));
            tracep->chgBit(oldp+1853,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                               >> 0xeU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                 >> 0xdU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1854,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1855,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1856,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1857,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1858,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1859,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1860,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1861,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1862,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                               >> 0x10U))),3);
            tracep->chgBit(oldp+1863,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                  >> 0x11U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                  >> 0x11U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                    >> 0x10U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                 >> 0x12U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                   >> 0x10U))))));
            tracep->chgBit(oldp+1864,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                               >> 0x12U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                 >> 0x11U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+1865,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1866,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1867,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                             >> 0x10U))));
            tracep->chgCData(oldp+1868,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1869,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1870,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1871,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1872,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1873,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1874,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1875,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1876,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1877,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1878,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1879,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1880,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1881,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1882,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                             << 8U) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                               >> 0x18U)))),30);
            tracep->chgBit(oldp+1883,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1884,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1885,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1886,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1887,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1888,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1889,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1890,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1891,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1892,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1893,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1894,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1895,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1896,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1897,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                                << 2U) 
                                               | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                  >> 0x1eU)))),3);
            tracep->chgBit(oldp+1898,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                  >> 0x1fU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                    >> 0x1eU))) 
                                             | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                   >> 0x1eU))))));
            tracep->chgBit(oldp+1899,((1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                 >> 0x1fU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+1900,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U])));
            tracep->chgBit(oldp+1901,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1902,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                             >> 0x1eU))));
            tracep->chgCData(oldp+1903,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                               >> 0x1bU))),3);
            tracep->chgBit(oldp+1904,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                >> 0x1dU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                  >> 0x1cU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                  >> 0x1cU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                    >> 0x1bU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                 >> 0x1dU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                   >> 0x1bU))))));
            tracep->chgBit(oldp+1905,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                               >> 0x1dU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                 >> 0x1cU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+1906,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1907,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1908,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                             >> 0x1bU))));
            tracep->chgCData(oldp+1909,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                               >> 0x18U))),3);
            tracep->chgBit(oldp+1910,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                  >> 0x19U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                  >> 0x19U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                    >> 0x18U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                 >> 0x1aU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                   >> 0x18U))))));
            tracep->chgBit(oldp+1911,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                               >> 0x1aU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                 >> 0x19U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+1912,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1913,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1914,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x21U] 
                                             >> 0x18U))));
            tracep->chgCData(oldp+1915,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1916,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1917,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1918,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1919,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1920,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1921,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1922,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1923,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1924,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1925,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1926,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1927,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1928,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1929,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1930,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1931,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1932,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1933,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1934,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                                  >> 7U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                                  >> 7U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                                    >> 6U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                                 >> 8U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                                   >> 6U))))));
        }
    }
}
