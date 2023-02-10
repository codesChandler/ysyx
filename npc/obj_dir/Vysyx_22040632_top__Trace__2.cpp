// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vysyx_22040632_top__Syms.h"


void Vysyx_22040632_top___024root__traceChgSub2(Vysyx_22040632_top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 4122);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                            >> 8U) 
                                           ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                              >> 7U)) 
                                          ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                             >> 6U)))));
            tracep->chgBit(oldp+1,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                          >> 8U))));
            tracep->chgBit(oldp+2,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                          >> 7U))));
            tracep->chgBit(oldp+3,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                          >> 6U))));
            tracep->chgCData(oldp+4,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                            >> 3U))),3);
            tracep->chgBit(oldp+5,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                             >> 5U) 
                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                               >> 4U)) 
                                           | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                               >> 4U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                                 >> 3U))) 
                                          | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                              >> 5U) 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                                >> 3U))))));
            tracep->chgBit(oldp+6,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                            >> 5U) 
                                           ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                              >> 4U)) 
                                          ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                             >> 3U)))));
            tracep->chgBit(oldp+7,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                          >> 5U))));
            tracep->chgBit(oldp+8,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                          >> 4U))));
            tracep->chgBit(oldp+9,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                          >> 3U))));
            tracep->chgCData(oldp+10,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))),3);
            tracep->chgBit(oldp+11,((1U & (((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                            | (0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                           | (0x14U 
                                              == (0x14U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+12,((1U & VL_REDXOR_32(
                                                       (0x1cU 
                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+13,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                           >> 4U))));
            tracep->chgBit(oldp+14,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                           >> 3U))));
            tracep->chgBit(oldp+15,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                           >> 2U))));
            tracep->chgCData(oldp+16,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+17,((1U & (((6U == 
                                             (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 1U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                           | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                               >> 2U) 
                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+18,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+19,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                           >> 2U))));
            tracep->chgBit(oldp+20,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                           >> 1U))));
            tracep->chgBit(oldp+21,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+22,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                             >> 0xaU))),3);
            tracep->chgBit(oldp+23,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                              >> 0xcU) 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                                >> 0xbU)) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                                >> 0xbU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                                  >> 0xaU))) 
                                           | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                               >> 0xcU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                                 >> 0xaU))))));
            tracep->chgBit(oldp+24,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                             >> 0xcU) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                               >> 0xbU)) 
                                           ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                              >> 0xaU)))));
            tracep->chgBit(oldp+25,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                           >> 0xcU))));
            tracep->chgBit(oldp+26,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                           >> 0xbU))));
            tracep->chgBit(oldp+27,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                           >> 0xaU))));
            tracep->chgBit(oldp+28,((1U & (((6U == 
                                             (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 1U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                           | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                               >> 2U) 
                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+29,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+30,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                           >> 2U))));
            tracep->chgBit(oldp+31,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                           >> 1U))));
            tracep->chgBit(oldp+32,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+33,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                             >> 0xeU))),3);
            tracep->chgBit(oldp+34,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                              >> 0x10U) 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                                >> 0xfU)) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                                >> 0xfU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                                  >> 0xeU))) 
                                           | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                               >> 0x10U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                                 >> 0xeU))))));
            tracep->chgBit(oldp+35,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                             >> 0x10U) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                               >> 0xfU)) 
                                           ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                              >> 0xeU)))));
            tracep->chgBit(oldp+36,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                           >> 0x10U))));
            tracep->chgBit(oldp+37,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                           >> 0xfU))));
            tracep->chgBit(oldp+38,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                           >> 0xeU))));
            tracep->chgCData(oldp+39,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+40,((1U & (((6U == 
                                             (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 1U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                           | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                               >> 2U) 
                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+41,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                           >> 2U))));
            tracep->chgBit(oldp+42,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                           >> 1U))));
            tracep->chgBit(oldp+43,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+44,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+45,((1U & (((6U == 
                                             (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 1U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                           | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                               >> 2U) 
                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+46,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                           >> 2U))));
            tracep->chgBit(oldp+47,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                           >> 1U))));
            tracep->chgBit(oldp+48,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+49,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+50,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                           >> 2U))));
            tracep->chgBit(oldp+51,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                           >> 1U))));
            tracep->chgBit(oldp+52,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+53,((0x3fffffffU 
                                       & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                           << 0xaU) 
                                          | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                             >> 0x16U)))),30);
            tracep->chgBit(oldp+54,((1U & (((6U == 
                                             (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 1U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                           | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                               >> 2U) 
                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+55,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+56,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+57,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+58,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+59,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+60,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+61,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+62,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+63,((1U & (((6U == 
                                             (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 1U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                           | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                               >> 2U) 
                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+64,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+65,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                           >> 2U))));
            tracep->chgBit(oldp+66,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                           >> 1U))));
            tracep->chgBit(oldp+67,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+68,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                             >> 0x1cU))),3);
            tracep->chgBit(oldp+69,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                              >> 0x1eU) 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                                >> 0x1dU)) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                                >> 0x1dU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                                  >> 0x1cU))) 
                                           | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                               >> 0x1eU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                                 >> 0x1cU))))));
            tracep->chgBit(oldp+70,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                             >> 0x1eU) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                               >> 0x1dU)) 
                                           ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                              >> 0x1cU)))));
            tracep->chgBit(oldp+71,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                           >> 0x1eU))));
            tracep->chgBit(oldp+72,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                           >> 0x1dU))));
            tracep->chgBit(oldp+73,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                           >> 0x1cU))));
            tracep->chgCData(oldp+74,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                             >> 0x19U))),3);
            tracep->chgBit(oldp+75,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                              >> 0x1bU) 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                                >> 0x1aU)) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                                  >> 0x19U))) 
                                           | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                               >> 0x1bU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                                 >> 0x19U))))));
            tracep->chgBit(oldp+76,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                             >> 0x1bU) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                               >> 0x1aU)) 
                                           ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                              >> 0x19U)))));
            tracep->chgBit(oldp+77,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                           >> 0x1bU))));
            tracep->chgBit(oldp+78,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                           >> 0x1aU))));
            tracep->chgBit(oldp+79,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                           >> 0x19U))));
            tracep->chgCData(oldp+80,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                             >> 0x16U))),3);
            tracep->chgBit(oldp+81,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                              >> 0x18U) 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                                >> 0x17U)) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                                >> 0x17U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                                  >> 0x16U))) 
                                           | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                               >> 0x18U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                                 >> 0x16U))))));
            tracep->chgBit(oldp+82,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                             >> 0x18U) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                               >> 0x17U)) 
                                           ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                              >> 0x16U)))));
            tracep->chgBit(oldp+83,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                           >> 0x18U))));
            tracep->chgBit(oldp+84,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                           >> 0x17U))));
            tracep->chgBit(oldp+85,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x22U] 
                                           >> 0x16U))));
            tracep->chgCData(oldp+86,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))),3);
            tracep->chgBit(oldp+87,((1U & (((0x60U 
                                             == (0x60U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                            | (0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                           | (0x50U 
                                              == (0x50U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+88,((1U & VL_REDXOR_32(
                                                       (0x70U 
                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+89,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                           >> 6U))));
            tracep->chgBit(oldp+90,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                           >> 5U))));
            tracep->chgBit(oldp+91,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                           >> 4U))));
            tracep->chgCData(oldp+92,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))),3);
            tracep->chgBit(oldp+93,((1U & (((0xcU == 
                                             (0xcU 
                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                            | (6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                           | (0xaU 
                                              == (0xaU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+94,((1U & VL_REDXOR_32(
                                                       (0xeU 
                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+95,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                           >> 3U))));
            tracep->chgBit(oldp+96,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                           >> 2U))));
            tracep->chgBit(oldp+97,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                           >> 1U))));
            tracep->chgCData(oldp+98,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+99,((1U & (((6U == 
                                             (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 1U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                           | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                               >> 2U) 
                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+100,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+101,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+102,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+103,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+104,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                              >> 4U))),3);
            tracep->chgBit(oldp+105,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                               >> 6U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                 >> 5U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                 >> 5U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                   >> 4U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                  >> 4U))))));
            tracep->chgBit(oldp+106,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                              >> 6U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                >> 5U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                               >> 4U)))));
            tracep->chgBit(oldp+107,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                            >> 6U))));
            tracep->chgBit(oldp+108,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                            >> 5U))));
            tracep->chgBit(oldp+109,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                            >> 4U))));
            tracep->chgCData(oldp+110,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                              >> 1U))),3);
            tracep->chgBit(oldp+111,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                               >> 3U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                 >> 2U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                 >> 2U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                   >> 1U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                >> 3U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                  >> 1U))))));
            tracep->chgBit(oldp+112,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                              >> 3U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                >> 2U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                               >> 1U)))));
            tracep->chgBit(oldp+113,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                            >> 3U))));
            tracep->chgBit(oldp+114,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                            >> 2U))));
            tracep->chgBit(oldp+115,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                            >> 1U))));
            tracep->chgCData(oldp+116,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+117,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+118,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+119,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+120,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+121,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+122,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+123,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+124,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+125,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+126,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+127,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+128,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                              >> 8U))),3);
            tracep->chgBit(oldp+129,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                               >> 0xaU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                 >> 9U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                 >> 9U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                   >> 8U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                  >> 8U))))));
            tracep->chgBit(oldp+130,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                              >> 0xaU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                >> 9U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                               >> 8U)))));
            tracep->chgBit(oldp+131,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+132,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                            >> 9U))));
            tracep->chgBit(oldp+133,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                            >> 8U))));
            tracep->chgBit(oldp+134,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+135,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+136,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+137,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+138,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+139,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+140,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                               >> 0xeU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                 >> 0xdU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                   >> 0xcU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                  >> 0xcU))))));
            tracep->chgBit(oldp+141,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                              >> 0xeU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                >> 0xdU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                               >> 0xcU)))));
            tracep->chgBit(oldp+142,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+143,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+144,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+145,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+146,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+147,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+148,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+149,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+150,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+151,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+152,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+153,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+154,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+155,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+156,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+157,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+158,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+159,((0x3fffffffU 
                                        & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                            << 0xcU) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                              >> 0x14U)))),30);
            tracep->chgBit(oldp+160,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+161,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+162,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+163,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+164,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+165,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+166,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+167,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+168,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+169,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+170,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+171,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+172,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+173,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+174,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                              >> 0x1aU))),3);
            tracep->chgBit(oldp+175,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                               >> 0x1cU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                 >> 0x1bU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                   >> 0x1aU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+176,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                              >> 0x1cU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                >> 0x1bU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                               >> 0x1aU)))));
            tracep->chgBit(oldp+177,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+178,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+179,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+180,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                              >> 0x17U))),3);
            tracep->chgBit(oldp+181,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                               >> 0x19U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                 >> 0x18U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                   >> 0x17U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                >> 0x19U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                  >> 0x17U))))));
            tracep->chgBit(oldp+182,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                              >> 0x19U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                >> 0x18U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                               >> 0x17U)))));
            tracep->chgBit(oldp+183,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+184,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+185,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+186,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                              >> 0x14U))),3);
            tracep->chgBit(oldp+187,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                               >> 0x16U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                 >> 0x15U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                 >> 0x15U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                   >> 0x14U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                  >> 0x14U))))));
            tracep->chgBit(oldp+188,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                              >> 0x16U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                >> 0x15U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                               >> 0x14U)))));
            tracep->chgBit(oldp+189,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+190,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+191,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+192,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+193,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+194,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+195,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+196,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+197,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+198,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+199,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+200,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+201,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+202,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+203,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+204,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+205,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+206,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+207,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+208,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+209,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+210,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                              >> 2U))),3);
            tracep->chgBit(oldp+211,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                               >> 4U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                 >> 3U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                 >> 3U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                   >> 2U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                  >> 2U))))));
            tracep->chgBit(oldp+212,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                              >> 4U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                >> 3U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                               >> 2U)))));
            tracep->chgBit(oldp+213,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                            >> 4U))));
            tracep->chgBit(oldp+214,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                            >> 3U))));
            tracep->chgBit(oldp+215,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                            >> 2U))));
            tracep->chgCData(oldp+216,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                               << 1U) 
                                              | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                 >> 0x1fU)))),3);
            tracep->chgBit(oldp+217,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                               >> 1U) 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U]) 
                                             | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                   >> 0x1fU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                >> 1U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                                  >> 0x1fU))))));
            tracep->chgBit(oldp+218,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                              >> 1U) 
                                             ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U]) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                               >> 0x1fU)))));
            tracep->chgBit(oldp+219,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                            >> 1U))));
            tracep->chgBit(oldp+220,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U])));
            tracep->chgBit(oldp+221,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x23U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+222,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+223,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+224,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+225,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+226,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+227,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+228,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+229,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+230,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+231,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+232,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+233,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+234,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                              >> 6U))),3);
            tracep->chgBit(oldp+235,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                               >> 8U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                 >> 7U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                   >> 6U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                  >> 6U))))));
            tracep->chgBit(oldp+236,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                              >> 8U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                >> 7U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                               >> 6U)))));
            tracep->chgBit(oldp+237,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                            >> 8U))));
            tracep->chgBit(oldp+238,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                            >> 7U))));
            tracep->chgBit(oldp+239,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                            >> 6U))));
            tracep->chgBit(oldp+240,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+241,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+242,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+243,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+244,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+245,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                              >> 0xaU))),3);
            tracep->chgBit(oldp+246,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                               >> 0xcU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                 >> 0xbU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                 >> 0xbU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                   >> 0xaU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                  >> 0xaU))))));
            tracep->chgBit(oldp+247,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                              >> 0xcU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                >> 0xbU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                               >> 0xaU)))));
            tracep->chgBit(oldp+248,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+249,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+250,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+251,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+252,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+253,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+254,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+255,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+256,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+257,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+258,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+259,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+260,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+261,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+262,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+263,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+264,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+265,((0x3fffffffU 
                                        & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                            << 0xeU) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                              >> 0x12U)))),30);
            tracep->chgBit(oldp+266,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+267,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+268,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+269,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+270,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+271,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+272,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+273,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+274,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+275,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+276,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+277,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+278,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+279,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+280,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                              >> 0x18U))),3);
            tracep->chgBit(oldp+281,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                               >> 0x1aU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                 >> 0x19U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                 >> 0x19U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                   >> 0x18U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                  >> 0x18U))))));
            tracep->chgBit(oldp+282,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                              >> 0x1aU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                >> 0x19U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                               >> 0x18U)))));
            tracep->chgBit(oldp+283,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+284,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+285,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+286,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                              >> 0x15U))),3);
            tracep->chgBit(oldp+287,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                               >> 0x17U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                 >> 0x16U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                 >> 0x16U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                   >> 0x15U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                >> 0x17U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                  >> 0x15U))))));
            tracep->chgBit(oldp+288,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                              >> 0x17U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                >> 0x16U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                               >> 0x15U)))));
            tracep->chgBit(oldp+289,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+290,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+291,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+292,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+293,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                               >> 0x14U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                 >> 0x13U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                 >> 0x13U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                   >> 0x12U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                  >> 0x12U))))));
            tracep->chgBit(oldp+294,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                              >> 0x14U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                >> 0x13U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+295,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+296,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+297,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+298,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+299,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+300,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+301,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+302,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+303,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+304,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+305,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+306,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+307,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+308,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+309,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+310,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+311,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+312,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+313,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+314,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+315,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+316,((7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U])),3);
            tracep->chgBit(oldp+317,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                               >> 2U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                 >> 1U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U])) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                >> 2U) 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U])))));
            tracep->chgBit(oldp+318,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                              >> 2U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                >> 1U)) 
                                            ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U]))));
            tracep->chgBit(oldp+319,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                            >> 2U))));
            tracep->chgBit(oldp+320,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                            >> 1U))));
            tracep->chgBit(oldp+321,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U])));
            tracep->chgCData(oldp+322,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                        >> 0x1dU)),3);
            tracep->chgBit(oldp+323,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                               >> 0x1fU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                 >> 0x1eU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                 >> 0x1eU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                   >> 0x1dU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                >> 0x1fU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                  >> 0x1dU))))));
            tracep->chgBit(oldp+324,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                              >> 0x1fU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                                >> 0x1eU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                               >> 0x1dU)))));
            tracep->chgBit(oldp+325,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+326,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+327,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x24U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+328,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+329,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+330,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+331,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+332,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+333,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+334,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+335,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+336,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+337,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+338,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+339,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+340,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                              >> 4U))),3);
            tracep->chgBit(oldp+341,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                               >> 6U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                 >> 5U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                 >> 5U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                   >> 4U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                  >> 4U))))));
            tracep->chgBit(oldp+342,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                              >> 6U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                >> 5U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                               >> 4U)))));
            tracep->chgBit(oldp+343,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                            >> 6U))));
            tracep->chgBit(oldp+344,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                            >> 5U))));
            tracep->chgBit(oldp+345,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                            >> 4U))));
            tracep->chgBit(oldp+346,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+347,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+348,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+349,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+350,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+351,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                              >> 8U))),3);
            tracep->chgBit(oldp+352,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                               >> 0xaU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                 >> 9U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                 >> 9U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                   >> 8U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                  >> 8U))))));
            tracep->chgBit(oldp+353,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                              >> 0xaU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                >> 9U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                               >> 8U)))));
            tracep->chgBit(oldp+354,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+355,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                            >> 9U))));
            tracep->chgBit(oldp+356,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                            >> 8U))));
            tracep->chgCData(oldp+357,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+358,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+359,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+360,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+361,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+362,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+363,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+364,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+365,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+366,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+367,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+368,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+369,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+370,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+371,((0x3fffffffU 
                                        & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                            << 0x10U) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                              >> 0x10U)))),30);
            tracep->chgBit(oldp+372,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+373,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+374,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+375,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+376,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+377,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+378,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+379,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+380,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+381,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+382,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+383,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+384,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+385,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+386,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                              >> 0x16U))),3);
            tracep->chgBit(oldp+387,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                               >> 0x18U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                 >> 0x17U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                 >> 0x17U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                   >> 0x16U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                  >> 0x16U))))));
            tracep->chgBit(oldp+388,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                              >> 0x18U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                >> 0x17U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                               >> 0x16U)))));
            tracep->chgBit(oldp+389,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+390,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+391,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+392,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                              >> 0x13U))),3);
            tracep->chgBit(oldp+393,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                               >> 0x15U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                 >> 0x14U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                 >> 0x14U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                   >> 0x13U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                >> 0x15U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                  >> 0x13U))))));
            tracep->chgBit(oldp+394,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                              >> 0x15U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                >> 0x14U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                               >> 0x13U)))));
            tracep->chgBit(oldp+395,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+396,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+397,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+398,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                              >> 0x10U))),3);
            tracep->chgBit(oldp+399,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                               >> 0x12U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                 >> 0x11U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                 >> 0x11U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                   >> 0x10U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                  >> 0x10U))))));
            tracep->chgBit(oldp+400,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                              >> 0x12U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                >> 0x11U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                               >> 0x10U)))));
            tracep->chgBit(oldp+401,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+402,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+403,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+404,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+405,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+406,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+407,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+408,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+409,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+410,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+411,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+412,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+413,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+414,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+415,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+416,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+417,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+418,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+419,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+420,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+421,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+422,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                               << 2U) 
                                              | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                 >> 0x1eU)))),3);
            tracep->chgBit(oldp+423,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                 >> 0x1fU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                   >> 0x1eU))) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                  >> 0x1eU))))));
            tracep->chgBit(oldp+424,((1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                >> 0x1fU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                               >> 0x1eU)))));
            tracep->chgBit(oldp+425,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U])));
            tracep->chgBit(oldp+426,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+427,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+428,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                              >> 0x1bU))),3);
            tracep->chgBit(oldp+429,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                               >> 0x1dU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                 >> 0x1cU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                 >> 0x1cU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                   >> 0x1bU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                >> 0x1dU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                  >> 0x1bU))))));
            tracep->chgBit(oldp+430,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                              >> 0x1dU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                                >> 0x1cU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                               >> 0x1bU)))));
            tracep->chgBit(oldp+431,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+432,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+433,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x25U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+434,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+435,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+436,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+437,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+438,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+439,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+440,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+441,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+442,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+443,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+444,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+445,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+446,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                              >> 2U))),3);
            tracep->chgBit(oldp+447,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                               >> 4U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                 >> 3U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                 >> 3U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                   >> 2U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                  >> 2U))))));
            tracep->chgBit(oldp+448,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                              >> 4U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                >> 3U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                               >> 2U)))));
            tracep->chgBit(oldp+449,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                            >> 4U))));
            tracep->chgBit(oldp+450,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                            >> 3U))));
            tracep->chgBit(oldp+451,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                            >> 2U))));
            tracep->chgBit(oldp+452,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+453,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+454,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+455,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+456,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+457,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                              >> 6U))),3);
            tracep->chgBit(oldp+458,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                               >> 8U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                 >> 7U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                   >> 6U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                  >> 6U))))));
            tracep->chgBit(oldp+459,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                              >> 8U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                >> 7U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                               >> 6U)))));
            tracep->chgBit(oldp+460,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                            >> 8U))));
            tracep->chgBit(oldp+461,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                            >> 7U))));
            tracep->chgBit(oldp+462,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                            >> 6U))));
            tracep->chgCData(oldp+463,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+464,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+465,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+466,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+467,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+468,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+469,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+470,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+471,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+472,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+473,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+474,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+475,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+476,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+477,((0x3fffffffU 
                                        & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                            << 0x12U) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                              >> 0xeU)))),30);
            tracep->chgBit(oldp+478,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+479,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+480,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+481,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+482,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+483,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+484,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+485,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+486,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+487,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+488,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+489,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+490,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+491,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+492,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                              >> 0x14U))),3);
            tracep->chgBit(oldp+493,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                               >> 0x16U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                 >> 0x15U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                 >> 0x15U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                   >> 0x14U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                  >> 0x14U))))));
            tracep->chgBit(oldp+494,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                              >> 0x16U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                >> 0x15U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                               >> 0x14U)))));
            tracep->chgBit(oldp+495,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+496,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+497,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+498,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                              >> 0x11U))),3);
            tracep->chgBit(oldp+499,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                               >> 0x13U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                 >> 0x12U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                 >> 0x12U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                   >> 0x11U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                >> 0x13U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                  >> 0x11U))))));
            tracep->chgBit(oldp+500,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                              >> 0x13U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                >> 0x12U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                               >> 0x11U)))));
            tracep->chgBit(oldp+501,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+502,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+503,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+504,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                              >> 0xeU))),3);
            tracep->chgBit(oldp+505,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                               >> 0x10U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                 >> 0xfU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                 >> 0xfU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                   >> 0xeU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                  >> 0xeU))))));
            tracep->chgBit(oldp+506,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                              >> 0x10U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                >> 0xfU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                               >> 0xeU)))));
            tracep->chgBit(oldp+507,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+508,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+509,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+510,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+511,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+512,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+513,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+514,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+515,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+516,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+517,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+518,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+519,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+520,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+521,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+522,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+523,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+524,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+525,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+526,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+527,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+528,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                              >> 0x1cU))),3);
            tracep->chgBit(oldp+529,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                               >> 0x1eU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                 >> 0x1dU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                 >> 0x1dU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                   >> 0x1cU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                  >> 0x1cU))))));
            tracep->chgBit(oldp+530,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                              >> 0x1eU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                >> 0x1dU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                               >> 0x1cU)))));
            tracep->chgBit(oldp+531,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+532,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+533,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+534,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                              >> 0x19U))),3);
            tracep->chgBit(oldp+535,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                               >> 0x1bU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                 >> 0x1aU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                 >> 0x1aU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                   >> 0x19U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                >> 0x1bU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+536,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                              >> 0x1bU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                                >> 0x1aU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+537,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+538,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+539,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x26U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+540,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+541,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+542,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+543,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+544,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+545,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+546,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+547,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+548,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+549,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+550,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+551,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+552,((7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U])),3);
            tracep->chgBit(oldp+553,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                               >> 2U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                 >> 1U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U])) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                >> 2U) 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U])))));
            tracep->chgBit(oldp+554,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                              >> 2U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                >> 1U)) 
                                            ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U]))));
            tracep->chgBit(oldp+555,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                            >> 2U))));
            tracep->chgBit(oldp+556,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                            >> 1U))));
            tracep->chgBit(oldp+557,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U])));
            tracep->chgBit(oldp+558,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+559,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+560,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+561,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+562,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+563,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                              >> 4U))),3);
            tracep->chgBit(oldp+564,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                               >> 6U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                 >> 5U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                 >> 5U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                   >> 4U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                  >> 4U))))));
            tracep->chgBit(oldp+565,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                              >> 6U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                >> 5U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                               >> 4U)))));
            tracep->chgBit(oldp+566,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                            >> 6U))));
            tracep->chgBit(oldp+567,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                            >> 5U))));
            tracep->chgBit(oldp+568,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                            >> 4U))));
            tracep->chgCData(oldp+569,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+570,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+571,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+572,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+573,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+574,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+575,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+576,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+577,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+578,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+579,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+580,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+581,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+582,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+583,((0x3fffffffU 
                                        & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                            << 0x14U) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                              >> 0xcU)))),30);
            tracep->chgBit(oldp+584,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+585,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+586,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+587,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+588,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+589,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+590,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+591,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+592,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+593,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+594,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+595,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+596,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+597,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+598,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+599,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                               >> 0x14U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                 >> 0x13U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                 >> 0x13U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                   >> 0x12U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                  >> 0x12U))))));
            tracep->chgBit(oldp+600,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                              >> 0x14U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                >> 0x13U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+601,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+602,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+603,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+604,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                              >> 0xfU))),3);
            tracep->chgBit(oldp+605,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                               >> 0x11U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                 >> 0x10U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                 >> 0x10U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                   >> 0xfU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                >> 0x11U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                  >> 0xfU))))));
            tracep->chgBit(oldp+606,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                              >> 0x11U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                >> 0x10U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                               >> 0xfU)))));
            tracep->chgBit(oldp+607,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+608,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+609,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+610,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+611,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                               >> 0xeU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                 >> 0xdU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                   >> 0xcU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                  >> 0xcU))))));
            tracep->chgBit(oldp+612,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                              >> 0xeU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                >> 0xdU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                               >> 0xcU)))));
            tracep->chgBit(oldp+613,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+614,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+615,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+616,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+617,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+618,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+619,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+620,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+621,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+622,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+623,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+624,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+625,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+626,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+627,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+628,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+629,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+630,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+631,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+632,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+633,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+634,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                              >> 0x1aU))),3);
            tracep->chgBit(oldp+635,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                               >> 0x1cU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                 >> 0x1bU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                   >> 0x1aU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+636,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                              >> 0x1cU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                >> 0x1bU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                               >> 0x1aU)))));
            tracep->chgBit(oldp+637,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+638,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+639,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+640,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                              >> 0x17U))),3);
            tracep->chgBit(oldp+641,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                               >> 0x19U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                 >> 0x18U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                   >> 0x17U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                >> 0x19U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                  >> 0x17U))))));
            tracep->chgBit(oldp+642,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                              >> 0x19U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                >> 0x18U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                               >> 0x17U)))));
            tracep->chgBit(oldp+643,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+644,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+645,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+646,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+647,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+648,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+649,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+650,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+651,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+652,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+653,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+654,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+655,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+656,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+657,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+658,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                               << 2U) 
                                              | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                 >> 0x1eU)))),3);
            tracep->chgBit(oldp+659,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                 >> 0x1fU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                   >> 0x1eU))) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                  >> 0x1eU))))));
            tracep->chgBit(oldp+660,((1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                                >> 0x1fU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                               >> 0x1eU)))));
            tracep->chgBit(oldp+661,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U])));
            tracep->chgBit(oldp+662,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+663,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x27U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+664,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+665,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+666,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+667,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+668,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+669,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                              >> 2U))),3);
            tracep->chgBit(oldp+670,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                               >> 4U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                 >> 3U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                 >> 3U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                   >> 2U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                  >> 2U))))));
            tracep->chgBit(oldp+671,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                              >> 4U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                >> 3U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                               >> 2U)))));
            tracep->chgBit(oldp+672,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                            >> 4U))));
            tracep->chgBit(oldp+673,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                            >> 3U))));
            tracep->chgBit(oldp+674,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                            >> 2U))));
            tracep->chgCData(oldp+675,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+676,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+677,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+678,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+679,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+680,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+681,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+682,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+683,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+684,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+685,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+686,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+687,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+688,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+689,((0x3fffffffU 
                                        & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                            << 0x16U) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                              >> 0xaU)))),30);
            tracep->chgBit(oldp+690,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+691,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+692,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+693,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+694,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+695,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+696,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+697,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+698,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+699,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+700,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+701,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+702,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+703,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+704,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                              >> 0x10U))),3);
            tracep->chgBit(oldp+705,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                               >> 0x12U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                 >> 0x11U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                 >> 0x11U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                   >> 0x10U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                  >> 0x10U))))));
            tracep->chgBit(oldp+706,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                              >> 0x12U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                >> 0x11U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                               >> 0x10U)))));
            tracep->chgBit(oldp+707,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+708,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+709,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+710,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                              >> 0xdU))),3);
            tracep->chgBit(oldp+711,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                               >> 0xfU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                 >> 0xeU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                 >> 0xeU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                   >> 0xdU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                >> 0xfU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                  >> 0xdU))))));
            tracep->chgBit(oldp+712,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                              >> 0xfU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                >> 0xeU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                               >> 0xdU)))));
            tracep->chgBit(oldp+713,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+714,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+715,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+716,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                              >> 0xaU))),3);
            tracep->chgBit(oldp+717,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                               >> 0xcU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                 >> 0xbU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                 >> 0xbU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                   >> 0xaU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                  >> 0xaU))))));
            tracep->chgBit(oldp+718,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                              >> 0xcU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                >> 0xbU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                               >> 0xaU)))));
            tracep->chgBit(oldp+719,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+720,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+721,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+722,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+723,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+724,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+725,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+726,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+727,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+728,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+729,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+730,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+731,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+732,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+733,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+734,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+735,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+736,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+737,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+738,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+739,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+740,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                              >> 0x18U))),3);
            tracep->chgBit(oldp+741,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                               >> 0x1aU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                 >> 0x19U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                 >> 0x19U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                   >> 0x18U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                  >> 0x18U))))));
            tracep->chgBit(oldp+742,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                              >> 0x1aU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                >> 0x19U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                               >> 0x18U)))));
            tracep->chgBit(oldp+743,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+744,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+745,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+746,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                              >> 0x15U))),3);
            tracep->chgBit(oldp+747,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                               >> 0x17U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                 >> 0x16U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                 >> 0x16U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                   >> 0x15U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                >> 0x17U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                  >> 0x15U))))));
            tracep->chgBit(oldp+748,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                              >> 0x17U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                >> 0x16U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                               >> 0x15U)))));
            tracep->chgBit(oldp+749,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+750,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+751,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+752,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+753,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+754,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+755,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+756,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+757,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+758,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+759,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+760,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+761,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+762,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+763,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+764,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                              >> 0x1cU))),3);
            tracep->chgBit(oldp+765,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                               >> 0x1eU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                 >> 0x1dU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                 >> 0x1dU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                   >> 0x1cU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                  >> 0x1cU))))));
            tracep->chgBit(oldp+766,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                              >> 0x1eU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                                >> 0x1dU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                               >> 0x1cU)))));
            tracep->chgBit(oldp+767,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+768,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+769,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x28U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+770,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+771,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+772,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+773,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+774,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+775,((7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U])),3);
            tracep->chgBit(oldp+776,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                               >> 2U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                 >> 1U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U])) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                >> 2U) 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U])))));
            tracep->chgBit(oldp+777,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                              >> 2U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                >> 1U)) 
                                            ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U]))));
            tracep->chgBit(oldp+778,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                            >> 2U))));
            tracep->chgBit(oldp+779,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                            >> 1U))));
            tracep->chgBit(oldp+780,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U])));
            tracep->chgCData(oldp+781,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+782,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+783,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+784,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+785,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+786,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+787,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+788,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+789,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+790,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+791,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+792,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+793,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+794,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+795,((0x3fffffffU 
                                        & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                            << 0x18U) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                              >> 8U)))),30);
            tracep->chgBit(oldp+796,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+797,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+798,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+799,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+800,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+801,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+802,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+803,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+804,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+805,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+806,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+807,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+808,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+809,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+810,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                              >> 0xeU))),3);
            tracep->chgBit(oldp+811,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                               >> 0x10U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                 >> 0xfU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                 >> 0xfU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                   >> 0xeU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                  >> 0xeU))))));
            tracep->chgBit(oldp+812,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                              >> 0x10U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                >> 0xfU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                               >> 0xeU)))));
            tracep->chgBit(oldp+813,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+814,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+815,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+816,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                              >> 0xbU))),3);
            tracep->chgBit(oldp+817,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                               >> 0xdU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                 >> 0xcU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                 >> 0xcU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                   >> 0xbU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                >> 0xdU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                  >> 0xbU))))));
            tracep->chgBit(oldp+818,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                              >> 0xdU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                >> 0xcU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                               >> 0xbU)))));
            tracep->chgBit(oldp+819,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+820,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+821,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+822,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                              >> 8U))),3);
            tracep->chgBit(oldp+823,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                               >> 0xaU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                 >> 9U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                 >> 9U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                   >> 8U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                  >> 8U))))));
            tracep->chgBit(oldp+824,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                              >> 0xaU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                >> 9U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                               >> 8U)))));
            tracep->chgBit(oldp+825,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+826,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                            >> 9U))));
            tracep->chgBit(oldp+827,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                            >> 8U))));
            tracep->chgCData(oldp+828,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+829,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+830,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+831,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+832,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+833,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+834,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+835,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+836,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+837,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+838,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+839,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+840,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+841,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+842,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+843,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+844,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+845,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+846,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                              >> 0x16U))),3);
            tracep->chgBit(oldp+847,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                               >> 0x18U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                 >> 0x17U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                 >> 0x17U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                   >> 0x16U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                  >> 0x16U))))));
            tracep->chgBit(oldp+848,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                              >> 0x18U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                >> 0x17U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                               >> 0x16U)))));
            tracep->chgBit(oldp+849,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+850,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+851,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                            >> 0x16U))));
            tracep->chgQData(oldp+852,((((QData)((IData)(
                                                         vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__result[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__result[2U])))),64);
            tracep->chgQData(oldp+854,((((QData)((IData)(
                                                         vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__result[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__result[0U])))),64);
            tracep->chgCData(oldp+856,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                              >> 0x13U))),3);
            tracep->chgBit(oldp+857,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                               >> 0x15U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                 >> 0x14U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                 >> 0x14U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                   >> 0x13U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                >> 0x15U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                  >> 0x13U))))));
            tracep->chgBit(oldp+858,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                              >> 0x15U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                >> 0x14U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                               >> 0x13U)))));
            tracep->chgBit(oldp+859,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+860,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+861,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+862,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+863,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+864,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+865,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+866,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+867,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+868,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+869,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+870,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+871,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+872,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+873,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+874,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                              >> 0x1aU))),3);
            tracep->chgBit(oldp+875,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                               >> 0x1cU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                 >> 0x1bU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                   >> 0x1aU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+876,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                              >> 0x1cU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                >> 0x1bU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                               >> 0x1aU)))));
            tracep->chgBit(oldp+877,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+878,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+879,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+880,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+881,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+882,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+883,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+884,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+885,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                               << 2U) 
                                              | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                 >> 0x1eU)))),3);
            tracep->chgBit(oldp+886,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                 >> 0x1fU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                   >> 0x1eU))) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                  >> 0x1eU))))));
            tracep->chgBit(oldp+887,((1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                                >> 0x1fU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                               >> 0x1eU)))));
            tracep->chgBit(oldp+888,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU])));
            tracep->chgBit(oldp+889,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+890,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x29U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+891,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+892,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+893,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+894,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+895,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+896,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+897,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+898,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+899,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+900,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+901,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+902,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+903,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+904,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+905,((0x3fffffffU 
                                        & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                            << 0x1aU) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                              >> 6U)))),30);
            tracep->chgBit(oldp+906,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+907,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+908,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+909,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+910,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+911,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+912,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+913,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+914,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+915,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+916,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+917,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+918,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+919,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+920,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+921,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                               >> 0xeU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                 >> 0xdU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                   >> 0xcU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                  >> 0xcU))))));
            tracep->chgBit(oldp+922,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                              >> 0xeU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                >> 0xdU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                               >> 0xcU)))));
            tracep->chgBit(oldp+923,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+924,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+925,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+926,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                              >> 9U))),3);
            tracep->chgBit(oldp+927,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                               >> 0xbU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                 >> 0xaU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                   >> 9U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                >> 0xbU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                  >> 9U))))));
            tracep->chgBit(oldp+928,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                              >> 0xbU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                >> 0xaU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                               >> 9U)))));
            tracep->chgBit(oldp+929,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+930,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+931,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                            >> 9U))));
            tracep->chgCData(oldp+932,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                              >> 6U))),3);
            tracep->chgBit(oldp+933,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                               >> 8U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                 >> 7U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                   >> 6U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                  >> 6U))))));
            tracep->chgBit(oldp+934,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                              >> 8U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                >> 7U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                               >> 6U)))));
            tracep->chgBit(oldp+935,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                            >> 8U))));
            tracep->chgBit(oldp+936,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                            >> 7U))));
            tracep->chgBit(oldp+937,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                            >> 6U))));
            tracep->chgCData(oldp+938,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+939,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+940,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+941,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+942,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+943,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+944,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+945,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+946,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+947,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+948,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+949,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+950,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+951,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+952,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+953,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+954,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+955,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+956,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                              >> 0x14U))),3);
            tracep->chgBit(oldp+957,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                               >> 0x16U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                 >> 0x15U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                 >> 0x15U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                   >> 0x14U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                  >> 0x14U))))));
            tracep->chgBit(oldp+958,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                              >> 0x16U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                >> 0x15U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                               >> 0x14U)))));
            tracep->chgBit(oldp+959,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+960,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+961,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+962,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                              >> 0x11U))),3);
            tracep->chgBit(oldp+963,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                               >> 0x13U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                 >> 0x12U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                 >> 0x12U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                   >> 0x11U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                >> 0x13U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                  >> 0x11U))))));
            tracep->chgBit(oldp+964,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                              >> 0x13U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                >> 0x12U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                               >> 0x11U)))));
            tracep->chgBit(oldp+965,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+966,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+967,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+968,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+969,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+970,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+971,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+972,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+973,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+974,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+975,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+976,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+977,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+978,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+979,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+980,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                              >> 0x18U))),3);
            tracep->chgBit(oldp+981,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                               >> 0x1aU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                 >> 0x19U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                 >> 0x19U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                   >> 0x18U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                  >> 0x18U))))));
            tracep->chgBit(oldp+982,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                              >> 0x1aU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                >> 0x19U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                               >> 0x18U)))));
            tracep->chgBit(oldp+983,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+984,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+985,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+986,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+987,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+988,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+989,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+990,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+991,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                              >> 0x1cU))),3);
            tracep->chgBit(oldp+992,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                               >> 0x1eU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                 >> 0x1dU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                 >> 0x1dU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                   >> 0x1cU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                  >> 0x1cU))))));
            tracep->chgBit(oldp+993,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                              >> 0x1eU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                                >> 0x1dU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                               >> 0x1cU)))));
            tracep->chgBit(oldp+994,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+995,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+996,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2aU] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+997,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+998,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+999,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+1000,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1001,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1002,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1003,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1004,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1005,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1006,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1007,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1008,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1009,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1010,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1011,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                             << 0x1cU) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                               >> 4U)))),30);
            tracep->chgBit(oldp+1012,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1013,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1014,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1015,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1016,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1017,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1018,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1019,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1020,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1021,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1022,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1023,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1024,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1025,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1026,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                               >> 0xaU))),3);
            tracep->chgBit(oldp+1027,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                  >> 0xbU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                  >> 0xbU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                    >> 0xaU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                 >> 0xcU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+1028,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                               >> 0xcU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                 >> 0xbU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1029,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1030,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1031,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                             >> 0xaU))));
            tracep->chgCData(oldp+1032,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                               >> 7U))),3);
            tracep->chgBit(oldp+1033,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                >> 9U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                  >> 8U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                  >> 8U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                    >> 7U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                 >> 9U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                   >> 7U))))));
            tracep->chgBit(oldp+1034,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                               >> 9U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                 >> 8U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                >> 7U)))));
            tracep->chgBit(oldp+1035,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                             >> 9U))));
            tracep->chgBit(oldp+1036,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                             >> 8U))));
            tracep->chgBit(oldp+1037,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                             >> 7U))));
            tracep->chgCData(oldp+1038,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1039,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                  >> 5U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                  >> 5U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                    >> 4U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                 >> 6U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                   >> 4U))))));
            tracep->chgBit(oldp+1040,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                               >> 6U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                 >> 5U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                >> 4U)))));
            tracep->chgBit(oldp+1041,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                             >> 6U))));
            tracep->chgBit(oldp+1042,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                             >> 5U))));
            tracep->chgBit(oldp+1043,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                             >> 4U))));
            tracep->chgCData(oldp+1044,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1045,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1046,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1047,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1048,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1049,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1050,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1051,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1052,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1053,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1054,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1055,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1056,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1057,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1058,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1059,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1060,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1061,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1062,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1063,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                  >> 0x13U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                  >> 0x13U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                    >> 0x12U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                 >> 0x14U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                   >> 0x12U))))));
            tracep->chgBit(oldp+1064,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                               >> 0x14U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                 >> 0x13U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1065,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1066,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1067,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1068,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                               >> 0xfU))),3);
            tracep->chgBit(oldp+1069,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                >> 0x11U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                  >> 0x10U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                  >> 0x10U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                    >> 0xfU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                 >> 0x11U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                   >> 0xfU))))));
            tracep->chgBit(oldp+1070,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                               >> 0x11U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                 >> 0x10U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+1071,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1072,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1073,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1074,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1075,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1076,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1077,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1078,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1079,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1080,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1081,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1082,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1083,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1084,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1085,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1086,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                               >> 0x16U))),3);
            tracep->chgBit(oldp+1087,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                  >> 0x17U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                  >> 0x17U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                    >> 0x16U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                   >> 0x16U))))));
            tracep->chgBit(oldp+1088,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                               >> 0x18U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                 >> 0x17U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+1089,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1090,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1091,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1092,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1093,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1094,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1095,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1096,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1097,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                               >> 0x1aU))),3);
            tracep->chgBit(oldp+1098,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                  >> 0x1bU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                    >> 0x1aU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                 >> 0x1cU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                   >> 0x1aU))))));
            tracep->chgBit(oldp+1099,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                               >> 0x1cU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                 >> 0x1bU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+1100,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1101,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1102,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2bU] 
                                             >> 0x1aU))));
            tracep->chgCData(oldp+1103,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1104,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1105,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1106,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1107,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1108,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1109,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1110,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1111,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1112,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1113,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1114,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1115,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1116,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1117,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                         >> 2U)),30);
            tracep->chgBit(oldp+1118,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1119,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1120,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1121,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1122,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1123,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1124,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1125,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1126,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1127,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1128,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1129,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1130,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1131,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1132,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                               >> 8U))),3);
            tracep->chgBit(oldp+1133,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                  >> 9U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                  >> 9U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                    >> 8U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+1134,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                               >> 0xaU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                 >> 9U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                >> 8U)))));
            tracep->chgBit(oldp+1135,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1136,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                             >> 9U))));
            tracep->chgBit(oldp+1137,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                             >> 8U))));
            tracep->chgCData(oldp+1138,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                               >> 5U))),3);
            tracep->chgBit(oldp+1139,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                >> 7U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                  >> 6U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                  >> 6U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                    >> 5U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                   >> 5U))))));
            tracep->chgBit(oldp+1140,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                               >> 7U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                 >> 6U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                >> 5U)))));
            tracep->chgBit(oldp+1141,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                             >> 7U))));
            tracep->chgBit(oldp+1142,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                             >> 6U))));
            tracep->chgBit(oldp+1143,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                             >> 5U))));
            tracep->chgCData(oldp+1144,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1145,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                  >> 3U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                  >> 3U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                    >> 2U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1146,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                               >> 4U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                 >> 3U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                >> 2U)))));
            tracep->chgBit(oldp+1147,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                             >> 4U))));
            tracep->chgBit(oldp+1148,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                             >> 3U))));
            tracep->chgBit(oldp+1149,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                             >> 2U))));
            tracep->chgCData(oldp+1150,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1151,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1152,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1153,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1154,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1155,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1156,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1157,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1158,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1159,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1160,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1161,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1162,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1163,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1164,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1165,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1166,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1167,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1168,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                               >> 0x10U))),3);
            tracep->chgBit(oldp+1169,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                  >> 0x11U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                  >> 0x11U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                    >> 0x10U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                 >> 0x12U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                   >> 0x10U))))));
            tracep->chgBit(oldp+1170,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                               >> 0x12U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                 >> 0x11U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+1171,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1172,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1173,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                             >> 0x10U))));
            tracep->chgCData(oldp+1174,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                               >> 0xdU))),3);
            tracep->chgBit(oldp+1175,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                >> 0xfU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                  >> 0xeU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                  >> 0xeU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                    >> 0xdU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                 >> 0xfU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                   >> 0xdU))))));
            tracep->chgBit(oldp+1176,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                               >> 0xfU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                 >> 0xeU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+1177,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1178,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1179,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                             >> 0xdU))));
            tracep->chgCData(oldp+1180,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1181,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1182,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1183,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1184,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1185,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1186,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1187,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1188,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1189,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1190,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1191,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1192,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                               >> 0x14U))),3);
            tracep->chgBit(oldp+1193,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                  >> 0x15U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                  >> 0x15U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                    >> 0x14U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                 >> 0x16U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                   >> 0x14U))))));
            tracep->chgBit(oldp+1194,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                               >> 0x16U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                 >> 0x15U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+1195,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1196,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1197,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1198,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1199,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1200,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1201,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1202,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1203,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                               >> 0x18U))),3);
            tracep->chgBit(oldp+1204,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                  >> 0x19U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                  >> 0x19U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                    >> 0x18U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                 >> 0x1aU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                   >> 0x18U))))));
            tracep->chgBit(oldp+1205,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                               >> 0x1aU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                 >> 0x19U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+1206,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1207,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1208,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2cU] 
                                             >> 0x18U))));
            tracep->chgCData(oldp+1209,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1210,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1211,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1212,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1213,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1214,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1215,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1216,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1217,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1218,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1219,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1220,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1221,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1222,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1223,((0x3fffffffU 
                                         & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU])),30);
            tracep->chgBit(oldp+1224,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1225,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1226,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1227,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1228,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1229,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1230,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1231,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1232,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1233,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1234,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1235,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1236,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1237,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1238,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1239,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                  >> 7U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                  >> 7U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                    >> 6U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                 >> 8U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                   >> 6U))))));
            tracep->chgBit(oldp+1240,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                               >> 8U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                 >> 7U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                >> 6U)))));
            tracep->chgBit(oldp+1241,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                             >> 8U))));
            tracep->chgBit(oldp+1242,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                             >> 7U))));
            tracep->chgBit(oldp+1243,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                             >> 6U))));
            tracep->chgCData(oldp+1244,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1245,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                >> 5U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                  >> 4U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                  >> 4U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                    >> 3U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                 >> 5U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1246,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                               >> 5U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                 >> 4U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                >> 3U)))));
            tracep->chgBit(oldp+1247,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                             >> 5U))));
            tracep->chgBit(oldp+1248,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                             >> 4U))));
            tracep->chgBit(oldp+1249,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                             >> 3U))));
            tracep->chgCData(oldp+1250,((7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU])),3);
            tracep->chgBit(oldp+1251,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                >> 2U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                  >> 1U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU])) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU])))));
            tracep->chgBit(oldp+1252,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                               >> 2U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                 >> 1U)) 
                                             ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU]))));
            tracep->chgBit(oldp+1253,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                             >> 2U))));
            tracep->chgBit(oldp+1254,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1255,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU])));
            tracep->chgCData(oldp+1256,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1257,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1258,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1259,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1260,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1261,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1262,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1263,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1264,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1265,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1266,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1267,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1268,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1269,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1270,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1271,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1272,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1273,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1274,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                               >> 0xeU))),3);
            tracep->chgBit(oldp+1275,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                  >> 0xfU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                  >> 0xfU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                    >> 0xeU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                 >> 0x10U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+1276,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                               >> 0x10U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                 >> 0xfU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+1277,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1278,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1279,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                             >> 0xeU))));
            tracep->chgCData(oldp+1280,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                               >> 0xbU))),3);
            tracep->chgBit(oldp+1281,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                >> 0xdU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                  >> 0xcU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                  >> 0xcU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                    >> 0xbU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+1282,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                               >> 0xdU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                 >> 0xcU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+1283,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1284,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1285,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                             >> 0xbU))));
            tracep->chgCData(oldp+1286,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1287,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1288,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1289,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1290,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1291,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1292,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1293,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1294,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1295,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1296,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1297,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1298,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1299,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                  >> 0x13U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                  >> 0x13U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                    >> 0x12U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                 >> 0x14U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                   >> 0x12U))))));
            tracep->chgBit(oldp+1300,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                               >> 0x14U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                 >> 0x13U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1301,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1302,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1303,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1304,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1305,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1306,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1307,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1308,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1309,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                               >> 0x16U))),3);
            tracep->chgBit(oldp+1310,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                  >> 0x17U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                  >> 0x17U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                    >> 0x16U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                   >> 0x16U))))));
            tracep->chgBit(oldp+1311,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                               >> 0x18U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                 >> 0x17U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+1312,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1313,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1314,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                             >> 0x16U))));
            tracep->chgCData(oldp+1315,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1316,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1317,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1318,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1319,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1320,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1321,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1322,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1323,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1324,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1325,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1326,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1327,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1328,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1329,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                             << 2U) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                               >> 0x1eU)))),30);
            tracep->chgBit(oldp+1330,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1331,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1332,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1333,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1334,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1335,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1336,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1337,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1338,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1339,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1340,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1341,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1342,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1343,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1344,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1345,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                  >> 5U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                  >> 5U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                    >> 4U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                 >> 6U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                   >> 4U))))));
            tracep->chgBit(oldp+1346,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                               >> 6U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                 >> 5U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                >> 4U)))));
            tracep->chgBit(oldp+1347,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                             >> 6U))));
            tracep->chgBit(oldp+1348,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                             >> 5U))));
            tracep->chgBit(oldp+1349,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                             >> 4U))));
            tracep->chgCData(oldp+1350,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1351,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                >> 3U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                  >> 2U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                  >> 2U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                    >> 1U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                 >> 3U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1352,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                               >> 3U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                 >> 2U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                >> 1U)))));
            tracep->chgBit(oldp+1353,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                             >> 3U))));
            tracep->chgBit(oldp+1354,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                             >> 2U))));
            tracep->chgBit(oldp+1355,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                             >> 1U))));
            tracep->chgCData(oldp+1356,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                << 2U) 
                                               | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                  >> 0x1eU)))),3);
            tracep->chgBit(oldp+1357,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                  >> 0x1fU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                    >> 0x1eU))) 
                                             | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                   >> 0x1eU))))));
            tracep->chgBit(oldp+1358,((1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                 >> 0x1fU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+1359,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU])));
            tracep->chgBit(oldp+1360,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1361,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                             >> 0x1eU))));
            tracep->chgCData(oldp+1362,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1363,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1364,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1365,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1366,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1367,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1368,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1369,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1370,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1371,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1372,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1373,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1374,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1375,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1376,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1377,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1378,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1379,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1380,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1381,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                  >> 0xdU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                  >> 0xdU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                    >> 0xcU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                 >> 0xeU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                   >> 0xcU))))));
            tracep->chgBit(oldp+1382,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                               >> 0xeU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                 >> 0xdU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1383,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1384,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1385,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1386,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1387,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                >> 0xbU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                  >> 0xaU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                  >> 0xaU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                    >> 9U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                 >> 0xbU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                   >> 9U))))));
            tracep->chgBit(oldp+1388,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                               >> 0xbU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                 >> 0xaU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                >> 9U)))));
            tracep->chgBit(oldp+1389,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1390,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1391,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                             >> 9U))));
            tracep->chgCData(oldp+1392,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1393,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1394,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1395,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1396,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1397,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1398,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1399,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1400,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1401,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1402,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1403,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1404,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                               >> 0x10U))),3);
            tracep->chgBit(oldp+1405,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                  >> 0x11U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                  >> 0x11U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                    >> 0x10U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                 >> 0x12U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                   >> 0x10U))))));
            tracep->chgBit(oldp+1406,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                               >> 0x12U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                 >> 0x11U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+1407,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1408,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1409,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1410,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1411,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1412,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1413,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1414,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1415,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                               >> 0x14U))),3);
            tracep->chgBit(oldp+1416,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                  >> 0x15U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                  >> 0x15U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                    >> 0x14U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                 >> 0x16U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                   >> 0x14U))))));
            tracep->chgBit(oldp+1417,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                               >> 0x16U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                 >> 0x15U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+1418,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1419,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1420,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                             >> 0x14U))));
            tracep->chgCData(oldp+1421,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1422,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1423,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1424,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1425,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1426,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1427,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1428,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1429,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1430,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1431,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1432,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1433,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1434,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1435,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                             << 4U) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                               >> 0x1cU)))),30);
            tracep->chgBit(oldp+1436,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1437,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1438,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1439,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1440,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1441,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1442,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1443,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1444,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1445,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1446,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1447,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1448,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1449,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1450,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1451,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                  >> 3U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                  >> 3U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                    >> 2U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1452,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                               >> 4U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                 >> 3U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                >> 2U)))));
            tracep->chgBit(oldp+1453,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                             >> 4U))));
            tracep->chgBit(oldp+1454,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                             >> 3U))));
            tracep->chgBit(oldp+1455,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                             >> 2U))));
            tracep->chgCData(oldp+1456,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                << 1U) 
                                               | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                  >> 0x1fU)))),3);
            tracep->chgBit(oldp+1457,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                >> 1U) 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU]) 
                                              | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                    >> 0x1fU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                 >> 1U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                   >> 0x1fU))))));
            tracep->chgBit(oldp+1458,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                               >> 1U) 
                                              ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU]) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                >> 0x1fU)))));
            tracep->chgBit(oldp+1459,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1460,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU])));
            tracep->chgBit(oldp+1461,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                       >> 0x1fU)));
            tracep->chgCData(oldp+1462,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                               >> 0x1cU))),3);
            tracep->chgBit(oldp+1463,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                  >> 0x1dU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                  >> 0x1dU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                    >> 0x1cU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                 >> 0x1eU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                   >> 0x1cU))))));
            tracep->chgBit(oldp+1464,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                               >> 0x1eU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                 >> 0x1dU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+1465,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1466,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1467,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                             >> 0x1cU))));
            tracep->chgCData(oldp+1468,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1469,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1470,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1471,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1472,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1473,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1474,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1475,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1476,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1477,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1478,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1479,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1480,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1481,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1482,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1483,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1484,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1485,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1486,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                               >> 0xaU))),3);
            tracep->chgBit(oldp+1487,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                  >> 0xbU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                  >> 0xbU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                    >> 0xaU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                 >> 0xcU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+1488,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                               >> 0xcU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                 >> 0xbU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1489,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1490,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1491,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                             >> 0xaU))));
            tracep->chgCData(oldp+1492,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                               >> 7U))),3);
            tracep->chgBit(oldp+1493,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                >> 9U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                  >> 8U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                  >> 8U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                    >> 7U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                 >> 9U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                   >> 7U))))));
            tracep->chgBit(oldp+1494,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                               >> 9U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                 >> 8U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                >> 7U)))));
            tracep->chgBit(oldp+1495,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                             >> 9U))));
            tracep->chgBit(oldp+1496,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                             >> 8U))));
            tracep->chgBit(oldp+1497,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                             >> 7U))));
            tracep->chgCData(oldp+1498,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1499,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1500,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1501,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1502,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1503,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1504,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1505,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1506,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1507,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1508,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1509,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1510,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                               >> 0xeU))),3);
            tracep->chgBit(oldp+1511,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                  >> 0xfU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                  >> 0xfU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                    >> 0xeU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                 >> 0x10U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+1512,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                               >> 0x10U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                 >> 0xfU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+1513,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1514,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1515,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1516,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1517,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1518,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1519,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1520,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1521,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1522,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                  >> 0x13U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                  >> 0x13U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                    >> 0x12U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                 >> 0x14U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                   >> 0x12U))))));
            tracep->chgBit(oldp+1523,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                               >> 0x14U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                 >> 0x13U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1524,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1525,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1526,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1527,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1528,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1529,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1530,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1531,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1532,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1533,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1534,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1535,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1536,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1537,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1538,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1539,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1540,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1541,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                             << 6U) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                               >> 0x1aU)))),30);
            tracep->chgBit(oldp+1542,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1543,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1544,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1545,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1546,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1547,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1548,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1549,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1550,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1551,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1552,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1553,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1554,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1555,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1556,((7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U])),3);
            tracep->chgBit(oldp+1557,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                >> 2U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                  >> 1U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U])) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U])))));
            tracep->chgBit(oldp+1558,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                               >> 2U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                 >> 1U)) 
                                             ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U]))));
            tracep->chgBit(oldp+1559,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1560,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1561,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U])));
            tracep->chgCData(oldp+1562,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                         >> 0x1dU)),3);
            tracep->chgBit(oldp+1563,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                >> 0x1fU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                  >> 0x1eU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                  >> 0x1eU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                    >> 0x1dU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                 >> 0x1fU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                   >> 0x1dU))))));
            tracep->chgBit(oldp+1564,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                               >> 0x1fU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                 >> 0x1eU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+1565,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1566,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1567,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                             >> 0x1dU))));
            tracep->chgCData(oldp+1568,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                               >> 0x1aU))),3);
            tracep->chgBit(oldp+1569,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                  >> 0x1bU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                    >> 0x1aU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                 >> 0x1cU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                   >> 0x1aU))))));
            tracep->chgBit(oldp+1570,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                               >> 0x1cU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                 >> 0x1bU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+1571,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1572,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1573,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                             >> 0x1aU))));
            tracep->chgCData(oldp+1574,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1575,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1576,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1577,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1578,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1579,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1580,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1581,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1582,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1583,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1584,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1585,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1586,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1587,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1588,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1589,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1590,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1591,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1592,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                               >> 8U))),3);
            tracep->chgBit(oldp+1593,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                  >> 9U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                  >> 9U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                    >> 8U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+1594,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                               >> 0xaU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                 >> 9U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                >> 8U)))));
            tracep->chgBit(oldp+1595,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1596,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1597,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                             >> 8U))));
            tracep->chgCData(oldp+1598,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                               >> 5U))),3);
            tracep->chgBit(oldp+1599,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                >> 7U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                  >> 6U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                  >> 6U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                    >> 5U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                   >> 5U))))));
            tracep->chgBit(oldp+1600,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                               >> 7U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                 >> 6U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                >> 5U)))));
            tracep->chgBit(oldp+1601,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1602,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1603,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                             >> 5U))));
            tracep->chgCData(oldp+1604,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1605,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1606,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1607,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1608,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1609,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1610,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1611,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1612,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1613,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1614,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1615,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1616,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1617,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                  >> 0xdU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                  >> 0xdU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                    >> 0xcU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                 >> 0xeU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                   >> 0xcU))))));
            tracep->chgBit(oldp+1618,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                               >> 0xeU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                 >> 0xdU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1619,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1620,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1621,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1622,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1623,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1624,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1625,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1626,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1627,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                               >> 0x10U))),3);
            tracep->chgBit(oldp+1628,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                  >> 0x11U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                  >> 0x11U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                    >> 0x10U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                 >> 0x12U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                   >> 0x10U))))));
            tracep->chgBit(oldp+1629,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                               >> 0x12U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                 >> 0x11U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+1630,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1631,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1632,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                             >> 0x10U))));
            tracep->chgCData(oldp+1633,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1634,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1635,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1636,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1637,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1638,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1639,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1640,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1641,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1642,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1643,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1644,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1645,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1646,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1647,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                             << 8U) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                               >> 0x18U)))),30);
            tracep->chgBit(oldp+1648,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1649,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1650,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1651,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1652,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1653,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1654,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1655,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1656,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1657,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1658,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1659,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1660,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1661,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1662,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                << 2U) 
                                               | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                  >> 0x1eU)))),3);
            tracep->chgBit(oldp+1663,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                  >> 0x1fU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                    >> 0x1eU))) 
                                             | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                   >> 0x1eU))))));
            tracep->chgBit(oldp+1664,((1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                 >> 0x1fU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+1665,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U])));
            tracep->chgBit(oldp+1666,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1667,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                             >> 0x1eU))));
            tracep->chgCData(oldp+1668,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                               >> 0x1bU))),3);
            tracep->chgBit(oldp+1669,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                >> 0x1dU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                  >> 0x1cU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                  >> 0x1cU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                    >> 0x1bU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                 >> 0x1dU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                   >> 0x1bU))))));
            tracep->chgBit(oldp+1670,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                               >> 0x1dU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                 >> 0x1cU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+1671,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1672,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1673,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                             >> 0x1bU))));
            tracep->chgCData(oldp+1674,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                               >> 0x18U))),3);
            tracep->chgBit(oldp+1675,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                  >> 0x19U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                  >> 0x19U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                    >> 0x18U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                 >> 0x1aU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                   >> 0x18U))))));
            tracep->chgBit(oldp+1676,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                               >> 0x1aU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                 >> 0x19U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+1677,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1678,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1679,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                             >> 0x18U))));
            tracep->chgCData(oldp+1680,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1681,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1682,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1683,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1684,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1685,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1686,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1687,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1688,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1689,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1690,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1691,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1692,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1693,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1694,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1695,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1696,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1697,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1698,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1699,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                  >> 7U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                  >> 7U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                    >> 6U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                 >> 8U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                   >> 6U))))));
            tracep->chgBit(oldp+1700,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                               >> 8U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                 >> 7U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                >> 6U)))));
            tracep->chgBit(oldp+1701,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1702,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1703,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                             >> 6U))));
            tracep->chgCData(oldp+1704,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1705,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                >> 5U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                  >> 4U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                  >> 4U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                    >> 3U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                 >> 5U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1706,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                               >> 5U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                 >> 4U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                >> 3U)))));
            tracep->chgBit(oldp+1707,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1708,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1709,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                             >> 3U))));
            tracep->chgCData(oldp+1710,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1711,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1712,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1713,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1714,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1715,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1716,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1717,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1718,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1719,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1720,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1721,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1722,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                               >> 0xaU))),3);
            tracep->chgBit(oldp+1723,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                  >> 0xbU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                  >> 0xbU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                    >> 0xaU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                 >> 0xcU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+1724,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                               >> 0xcU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                 >> 0xbU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1725,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1726,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1727,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1728,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1729,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1730,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1731,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1732,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1733,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                               >> 0xeU))),3);
            tracep->chgBit(oldp+1734,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                  >> 0xfU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                  >> 0xfU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                    >> 0xeU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                 >> 0x10U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+1735,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                               >> 0x10U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                 >> 0xfU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+1736,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1737,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1738,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                             >> 0xeU))));
            tracep->chgCData(oldp+1739,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1740,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1741,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1742,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1743,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1744,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1745,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1746,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1747,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1748,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1749,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1750,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1751,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1752,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1753,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                             << 0xaU) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                               >> 0x16U)))),30);
            tracep->chgBit(oldp+1754,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1755,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1756,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1757,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1758,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1759,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1760,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1761,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1762,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1763,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1764,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1765,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1766,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1767,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1768,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                               >> 0x1cU))),3);
            tracep->chgBit(oldp+1769,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                  >> 0x1dU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                  >> 0x1dU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                    >> 0x1cU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                 >> 0x1eU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                   >> 0x1cU))))));
            tracep->chgBit(oldp+1770,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                               >> 0x1eU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                 >> 0x1dU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+1771,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1772,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1773,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                             >> 0x1cU))));
            tracep->chgCData(oldp+1774,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                               >> 0x19U))),3);
            tracep->chgBit(oldp+1775,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                >> 0x1bU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                  >> 0x1aU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                  >> 0x1aU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                    >> 0x19U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                   >> 0x19U))))));
            tracep->chgBit(oldp+1776,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                               >> 0x1bU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                 >> 0x1aU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+1777,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1778,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1779,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                             >> 0x19U))));
            tracep->chgCData(oldp+1780,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                               >> 0x16U))),3);
            tracep->chgBit(oldp+1781,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                  >> 0x17U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                  >> 0x17U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                    >> 0x16U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                   >> 0x16U))))));
            tracep->chgBit(oldp+1782,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                               >> 0x18U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                 >> 0x17U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+1783,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1784,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1785,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                             >> 0x16U))));
            tracep->chgCData(oldp+1786,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1787,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1788,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1789,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1790,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1791,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1792,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1793,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1794,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1795,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1796,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1797,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1798,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1799,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1800,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1801,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1802,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1803,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1804,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1805,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                  >> 5U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                  >> 5U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                    >> 4U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                 >> 6U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                   >> 4U))))));
            tracep->chgBit(oldp+1806,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                               >> 6U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                 >> 5U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+1807,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1808,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1809,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                             >> 4U))));
            tracep->chgCData(oldp+1810,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1811,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                >> 3U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                  >> 2U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                  >> 2U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                    >> 1U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                 >> 3U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1812,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                               >> 3U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                 >> 2U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                >> 1U)))));
            tracep->chgBit(oldp+1813,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1814,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1815,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                             >> 1U))));
            tracep->chgCData(oldp+1816,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1817,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1818,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1819,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1820,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1821,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1822,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1823,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1824,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1825,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1826,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1827,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1828,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                               >> 8U))),3);
            tracep->chgBit(oldp+1829,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                  >> 9U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                  >> 9U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                    >> 8U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+1830,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                               >> 0xaU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                 >> 9U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                >> 8U)))));
            tracep->chgBit(oldp+1831,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1832,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1833,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1834,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1835,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1836,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1837,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1838,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1839,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1840,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                  >> 0xdU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                  >> 0xdU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                    >> 0xcU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                 >> 0xeU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                   >> 0xcU))))));
            tracep->chgBit(oldp+1841,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                               >> 0xeU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                 >> 0xdU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1842,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1843,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1844,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1845,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1846,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1847,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1848,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1849,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1850,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1851,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1852,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1853,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1854,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1855,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1856,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1857,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1858,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1859,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                             << 0xcU) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                               >> 0x14U)))),30);
            tracep->chgBit(oldp+1860,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1861,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1862,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1863,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1864,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1865,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1866,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1867,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1868,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1869,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1870,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1871,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1872,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1873,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1874,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                               >> 0x1aU))),3);
            tracep->chgBit(oldp+1875,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                  >> 0x1bU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                    >> 0x1aU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                 >> 0x1cU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                   >> 0x1aU))))));
            tracep->chgBit(oldp+1876,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                               >> 0x1cU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                 >> 0x1bU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+1877,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1878,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1879,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                             >> 0x1aU))));
            tracep->chgCData(oldp+1880,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                               >> 0x17U))),3);
            tracep->chgBit(oldp+1881,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                >> 0x19U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                  >> 0x18U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                  >> 0x18U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                    >> 0x17U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                 >> 0x19U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                   >> 0x17U))))));
            tracep->chgBit(oldp+1882,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                               >> 0x19U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                 >> 0x18U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+1883,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1884,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1885,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                             >> 0x17U))));
            tracep->chgCData(oldp+1886,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                               >> 0x14U))),3);
            tracep->chgBit(oldp+1887,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                  >> 0x15U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                  >> 0x15U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                    >> 0x14U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                 >> 0x16U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                   >> 0x14U))))));
            tracep->chgBit(oldp+1888,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                               >> 0x16U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                 >> 0x15U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+1889,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1890,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1891,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                             >> 0x14U))));
            tracep->chgCData(oldp+1892,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1893,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1894,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1895,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1896,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1897,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1898,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1899,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1900,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1901,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1902,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1903,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1904,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1905,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1906,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1907,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1908,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1909,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1910,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1911,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                  >> 3U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                  >> 3U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                    >> 2U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1912,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                               >> 4U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                 >> 3U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+1913,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1914,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1915,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                             >> 2U))));
            tracep->chgCData(oldp+1916,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                << 1U) 
                                               | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                  >> 0x1fU)))),3);
            tracep->chgBit(oldp+1917,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                >> 1U) 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U]) 
                                              | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                    >> 0x1fU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                 >> 1U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                   >> 0x1fU))))));
            tracep->chgBit(oldp+1918,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                               >> 1U) 
                                              ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U]) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                >> 0x1fU)))));
            tracep->chgBit(oldp+1919,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1920,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U])));
            tracep->chgBit(oldp+1921,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                       >> 0x1fU)));
            tracep->chgCData(oldp+1922,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1923,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1924,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1925,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1926,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1927,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1928,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1929,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1930,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1931,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1932,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1933,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1934,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1935,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                  >> 7U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                  >> 7U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                    >> 6U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                 >> 8U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                   >> 6U))))));
            tracep->chgBit(oldp+1936,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                               >> 8U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                 >> 7U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                >> 6U)))));
            tracep->chgBit(oldp+1937,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                             >> 8U))));
        }
    }
}
