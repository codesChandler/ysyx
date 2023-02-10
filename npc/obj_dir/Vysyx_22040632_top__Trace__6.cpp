// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vysyx_22040632_top__Syms.h"


void Vysyx_22040632_top___024root__traceChgSub6(Vysyx_22040632_top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 11870);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                            >> 0x13U) 
                                           ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                              >> 0x12U)) 
                                          ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                             >> 0x11U)))));
            tracep->chgBit(oldp+1,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                          >> 0x13U))));
            tracep->chgBit(oldp+2,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                          >> 0x12U))));
            tracep->chgBit(oldp+3,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                          >> 0x11U))));
            tracep->chgCData(oldp+4,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))),3);
            tracep->chgBit(oldp+5,((1U & (((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                           | (0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                          | (0x14U 
                                             == (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+6,((1U & VL_REDXOR_32(
                                                      (0x1cU 
                                                       & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+7,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                          >> 4U))));
            tracep->chgBit(oldp+8,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                          >> 3U))));
            tracep->chgBit(oldp+9,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                          >> 2U))));
            tracep->chgCData(oldp+10,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+11,((1U & (((6U == 
                                             (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 1U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                           | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                               >> 2U) 
                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+12,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+13,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                           >> 2U))));
            tracep->chgBit(oldp+14,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                           >> 1U))));
            tracep->chgBit(oldp+15,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+16,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                             >> 0x18U))),3);
            tracep->chgBit(oldp+17,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                              >> 0x1aU) 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                                >> 0x19U)) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                                >> 0x19U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                                  >> 0x18U))) 
                                           | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                               >> 0x1aU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                                 >> 0x18U))))));
            tracep->chgBit(oldp+18,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                             >> 0x1aU) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                               >> 0x19U)) 
                                           ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                              >> 0x18U)))));
            tracep->chgBit(oldp+19,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                           >> 0x1aU))));
            tracep->chgBit(oldp+20,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                           >> 0x19U))));
            tracep->chgBit(oldp+21,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                           >> 0x18U))));
            tracep->chgBit(oldp+22,((1U & (((6U == 
                                             (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 1U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                           | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                               >> 2U) 
                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+23,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+24,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                           >> 2U))));
            tracep->chgBit(oldp+25,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                           >> 1U))));
            tracep->chgBit(oldp+26,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+27,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                             >> 0x1cU))),3);
            tracep->chgBit(oldp+28,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                              >> 0x1eU) 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                                >> 0x1dU)) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                                >> 0x1dU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                                  >> 0x1cU))) 
                                           | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                               >> 0x1eU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                                 >> 0x1cU))))));
            tracep->chgBit(oldp+29,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                             >> 0x1eU) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                               >> 0x1dU)) 
                                           ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                              >> 0x1cU)))));
            tracep->chgBit(oldp+30,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                           >> 0x1eU))));
            tracep->chgBit(oldp+31,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                           >> 0x1dU))));
            tracep->chgBit(oldp+32,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                           >> 0x1cU))));
            tracep->chgCData(oldp+33,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+34,((1U & (((6U == 
                                             (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 1U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                           | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                               >> 2U) 
                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+35,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                           >> 2U))));
            tracep->chgBit(oldp+36,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                           >> 1U))));
            tracep->chgBit(oldp+37,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+38,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+39,((1U & (((6U == 
                                             (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 1U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                           | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                               >> 2U) 
                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+40,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                           >> 2U))));
            tracep->chgBit(oldp+41,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                           >> 1U))));
            tracep->chgBit(oldp+42,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+43,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+44,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                           >> 2U))));
            tracep->chgBit(oldp+45,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                           >> 1U))));
            tracep->chgBit(oldp+46,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+47,((0x3fffffffU 
                                       & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                           << 0x1cU) 
                                          | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                             >> 4U)))),30);
            tracep->chgBit(oldp+48,((1U & (((6U == 
                                             (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 1U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                           | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                               >> 2U) 
                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+49,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+50,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+51,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+52,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+53,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+54,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+55,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+56,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+57,((1U & (((6U == 
                                             (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 1U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                           | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                               >> 2U) 
                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+58,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+59,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                           >> 2U))));
            tracep->chgBit(oldp+60,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                           >> 1U))));
            tracep->chgBit(oldp+61,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+62,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                             >> 0xaU))),3);
            tracep->chgBit(oldp+63,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                              >> 0xcU) 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                >> 0xbU)) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                >> 0xbU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                  >> 0xaU))) 
                                           | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                               >> 0xcU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                 >> 0xaU))))));
            tracep->chgBit(oldp+64,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                             >> 0xcU) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                               >> 0xbU)) 
                                           ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                              >> 0xaU)))));
            tracep->chgBit(oldp+65,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                           >> 0xcU))));
            tracep->chgBit(oldp+66,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                           >> 0xbU))));
            tracep->chgBit(oldp+67,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                           >> 0xaU))));
            tracep->chgCData(oldp+68,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                             >> 7U))),3);
            tracep->chgBit(oldp+69,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                              >> 9U) 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                >> 8U)) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                  >> 7U))) 
                                           | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                               >> 9U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                 >> 7U))))));
            tracep->chgBit(oldp+70,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                             >> 9U) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                               >> 8U)) 
                                           ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                              >> 7U)))));
            tracep->chgBit(oldp+71,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                           >> 9U))));
            tracep->chgBit(oldp+72,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                           >> 8U))));
            tracep->chgBit(oldp+73,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                           >> 7U))));
            tracep->chgCData(oldp+74,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                             >> 4U))),3);
            tracep->chgBit(oldp+75,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                              >> 6U) 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                >> 5U)) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                >> 5U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                  >> 4U))) 
                                           | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                               >> 6U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                 >> 4U))))));
            tracep->chgBit(oldp+76,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                             >> 6U) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                               >> 5U)) 
                                           ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                              >> 4U)))));
            tracep->chgBit(oldp+77,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                           >> 6U))));
            tracep->chgBit(oldp+78,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                           >> 5U))));
            tracep->chgBit(oldp+79,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                           >> 4U))));
            tracep->chgCData(oldp+80,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))),3);
            tracep->chgBit(oldp+81,((1U & (((0x60U 
                                             == (0x60U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                            | (0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                           | (0x50U 
                                              == (0x50U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+82,((1U & VL_REDXOR_32(
                                                       (0x70U 
                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+83,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                           >> 6U))));
            tracep->chgBit(oldp+84,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                           >> 5U))));
            tracep->chgBit(oldp+85,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                           >> 4U))));
            tracep->chgCData(oldp+86,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))),3);
            tracep->chgBit(oldp+87,((1U & (((0xcU == 
                                             (0xcU 
                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                            | (6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                           | (0xaU 
                                              == (0xaU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+88,((1U & VL_REDXOR_32(
                                                       (0xeU 
                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+89,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                           >> 3U))));
            tracep->chgBit(oldp+90,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                           >> 2U))));
            tracep->chgBit(oldp+91,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                           >> 1U))));
            tracep->chgCData(oldp+92,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+93,((1U & (((6U == 
                                             (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 1U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                           | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                               >> 2U) 
                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+94,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+95,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                           >> 2U))));
            tracep->chgBit(oldp+96,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                           >> 1U))));
            tracep->chgBit(oldp+97,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+98,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                             >> 0x12U))),3);
            tracep->chgBit(oldp+99,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                              >> 0x14U) 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                >> 0x13U)) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                >> 0x13U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                  >> 0x12U))) 
                                           | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                               >> 0x14U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                 >> 0x12U))))));
            tracep->chgBit(oldp+100,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                              >> 0x14U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                >> 0x13U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+101,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+102,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+103,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+104,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                              >> 0xfU))),3);
            tracep->chgBit(oldp+105,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                               >> 0x11U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                 >> 0x10U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                 >> 0x10U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                   >> 0xfU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                >> 0x11U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                  >> 0xfU))))));
            tracep->chgBit(oldp+106,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                              >> 0x11U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                >> 0x10U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                               >> 0xfU)))));
            tracep->chgBit(oldp+107,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+108,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+109,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+110,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+111,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+112,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+113,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+114,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+115,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+116,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+117,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+118,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+119,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+120,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+121,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+122,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                              >> 0x16U))),3);
            tracep->chgBit(oldp+123,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                               >> 0x18U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                 >> 0x17U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                 >> 0x17U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                   >> 0x16U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                  >> 0x16U))))));
            tracep->chgBit(oldp+124,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                              >> 0x18U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                >> 0x17U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                               >> 0x16U)))));
            tracep->chgBit(oldp+125,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+126,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+127,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+128,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+129,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+130,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+131,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+132,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+133,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                              >> 0x1aU))),3);
            tracep->chgBit(oldp+134,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                               >> 0x1cU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                 >> 0x1bU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                   >> 0x1aU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+135,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                              >> 0x1cU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                >> 0x1bU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                               >> 0x1aU)))));
            tracep->chgBit(oldp+136,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+137,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+138,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+139,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+140,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+141,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+142,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+143,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+144,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+145,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+146,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+147,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+148,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+149,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+150,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+151,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+152,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+153,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                        >> 2U)),30);
            tracep->chgBit(oldp+154,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+155,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+156,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+157,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+158,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+159,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+160,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+161,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+162,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+163,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+164,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+165,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+166,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+167,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+168,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                              >> 8U))),3);
            tracep->chgBit(oldp+169,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                               >> 0xaU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                 >> 9U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                 >> 9U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                   >> 8U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                  >> 8U))))));
            tracep->chgBit(oldp+170,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                              >> 0xaU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                >> 9U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                               >> 8U)))));
            tracep->chgBit(oldp+171,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+172,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                            >> 9U))));
            tracep->chgBit(oldp+173,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                            >> 8U))));
            tracep->chgCData(oldp+174,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                              >> 5U))),3);
            tracep->chgBit(oldp+175,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                               >> 7U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                 >> 6U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                 >> 6U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                   >> 5U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                >> 7U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                  >> 5U))))));
            tracep->chgBit(oldp+176,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                              >> 7U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                >> 6U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                               >> 5U)))));
            tracep->chgBit(oldp+177,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                            >> 7U))));
            tracep->chgBit(oldp+178,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                            >> 6U))));
            tracep->chgBit(oldp+179,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                            >> 5U))));
            tracep->chgCData(oldp+180,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                              >> 2U))),3);
            tracep->chgBit(oldp+181,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                               >> 4U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                 >> 3U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                 >> 3U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                   >> 2U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                  >> 2U))))));
            tracep->chgBit(oldp+182,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                              >> 4U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                >> 3U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                               >> 2U)))));
            tracep->chgBit(oldp+183,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                            >> 4U))));
            tracep->chgBit(oldp+184,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                            >> 3U))));
            tracep->chgBit(oldp+185,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                            >> 2U))));
            tracep->chgCData(oldp+186,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+187,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+188,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+189,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+190,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+191,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+192,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+193,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+194,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+195,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+196,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+197,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+198,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+199,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+200,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+201,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+202,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+203,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+204,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                              >> 0x10U))),3);
            tracep->chgBit(oldp+205,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                               >> 0x12U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                 >> 0x11U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                 >> 0x11U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                   >> 0x10U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                  >> 0x10U))))));
            tracep->chgBit(oldp+206,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                              >> 0x12U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                >> 0x11U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                               >> 0x10U)))));
            tracep->chgBit(oldp+207,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+208,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+209,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+210,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                              >> 0xdU))),3);
            tracep->chgBit(oldp+211,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                               >> 0xfU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                 >> 0xeU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                 >> 0xeU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                   >> 0xdU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                >> 0xfU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                  >> 0xdU))))));
            tracep->chgBit(oldp+212,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                              >> 0xfU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                >> 0xeU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                               >> 0xdU)))));
            tracep->chgBit(oldp+213,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+214,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+215,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+216,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+217,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+218,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+219,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+220,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+221,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+222,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+223,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+224,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+225,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+226,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+227,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+228,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                              >> 0x14U))),3);
            tracep->chgBit(oldp+229,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                               >> 0x16U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                 >> 0x15U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                 >> 0x15U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                   >> 0x14U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                  >> 0x14U))))));
            tracep->chgBit(oldp+230,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                              >> 0x16U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                >> 0x15U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                               >> 0x14U)))));
            tracep->chgBit(oldp+231,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+232,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+233,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+234,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+235,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+236,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+237,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+238,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+239,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                              >> 0x18U))),3);
            tracep->chgBit(oldp+240,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                               >> 0x1aU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                 >> 0x19U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                 >> 0x19U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                   >> 0x18U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                  >> 0x18U))))));
            tracep->chgBit(oldp+241,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                              >> 0x1aU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                >> 0x19U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                               >> 0x18U)))));
            tracep->chgBit(oldp+242,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+243,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+244,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+245,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+246,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+247,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+248,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+249,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+250,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+251,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+252,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+253,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+254,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+255,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+256,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+257,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+258,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+259,((0x3fffffffU 
                                        & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U])),30);
            tracep->chgBit(oldp+260,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+261,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+262,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+263,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+264,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+265,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+266,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+267,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+268,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+269,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+270,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+271,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+272,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+273,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+274,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                              >> 6U))),3);
            tracep->chgBit(oldp+275,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                               >> 8U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                 >> 7U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                   >> 6U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                  >> 6U))))));
            tracep->chgBit(oldp+276,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                              >> 8U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                >> 7U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                               >> 6U)))));
            tracep->chgBit(oldp+277,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                            >> 8U))));
            tracep->chgBit(oldp+278,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                            >> 7U))));
            tracep->chgBit(oldp+279,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                            >> 6U))));
            tracep->chgCData(oldp+280,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                              >> 3U))),3);
            tracep->chgBit(oldp+281,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                               >> 5U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                 >> 4U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                   >> 3U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                >> 5U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                  >> 3U))))));
            tracep->chgBit(oldp+282,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                              >> 5U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                >> 4U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                               >> 3U)))));
            tracep->chgBit(oldp+283,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                            >> 5U))));
            tracep->chgBit(oldp+284,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                            >> 4U))));
            tracep->chgBit(oldp+285,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                            >> 3U))));
            tracep->chgCData(oldp+286,((7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U])),3);
            tracep->chgBit(oldp+287,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                               >> 2U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                 >> 1U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U])) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                >> 2U) 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U])))));
            tracep->chgBit(oldp+288,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                              >> 2U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                >> 1U)) 
                                            ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U]))));
            tracep->chgBit(oldp+289,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                            >> 2U))));
            tracep->chgBit(oldp+290,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                            >> 1U))));
            tracep->chgBit(oldp+291,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U])));
            tracep->chgCData(oldp+292,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+293,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+294,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+295,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+296,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+297,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+298,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+299,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+300,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+301,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+302,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+303,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+304,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+305,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+306,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+307,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+308,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+309,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+310,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                              >> 0xeU))),3);
            tracep->chgBit(oldp+311,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                               >> 0x10U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                 >> 0xfU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                 >> 0xfU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                   >> 0xeU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                  >> 0xeU))))));
            tracep->chgBit(oldp+312,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                              >> 0x10U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                >> 0xfU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                               >> 0xeU)))));
            tracep->chgBit(oldp+313,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+314,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+315,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+316,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                              >> 0xbU))),3);
            tracep->chgBit(oldp+317,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                               >> 0xdU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                 >> 0xcU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                 >> 0xcU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                   >> 0xbU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                >> 0xdU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                  >> 0xbU))))));
            tracep->chgBit(oldp+318,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                              >> 0xdU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                >> 0xcU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                               >> 0xbU)))));
            tracep->chgBit(oldp+319,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+320,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+321,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+322,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+323,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+324,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+325,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+326,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+327,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+328,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+329,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+330,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+331,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+332,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+333,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+334,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+335,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                               >> 0x14U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                 >> 0x13U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                 >> 0x13U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                   >> 0x12U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                  >> 0x12U))))));
            tracep->chgBit(oldp+336,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                              >> 0x14U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                >> 0x13U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+337,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+338,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+339,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+340,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+341,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+342,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+343,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+344,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+345,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                              >> 0x16U))),3);
            tracep->chgBit(oldp+346,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                               >> 0x18U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                 >> 0x17U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                 >> 0x17U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                   >> 0x16U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                  >> 0x16U))))));
            tracep->chgBit(oldp+347,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                              >> 0x18U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                >> 0x17U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                               >> 0x16U)))));
            tracep->chgBit(oldp+348,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+349,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+350,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+351,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+352,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+353,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+354,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+355,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+356,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+357,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+358,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+359,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+360,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+361,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+362,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+363,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+364,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+365,((0x3fffffffU 
                                        & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                            << 2U) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                              >> 0x1eU)))),30);
            tracep->chgBit(oldp+366,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+367,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+368,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+369,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+370,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+371,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+372,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+373,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+374,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+375,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+376,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+377,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+378,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+379,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+380,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                              >> 4U))),3);
            tracep->chgBit(oldp+381,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                               >> 6U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                 >> 5U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                 >> 5U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                   >> 4U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                  >> 4U))))));
            tracep->chgBit(oldp+382,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                              >> 6U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                >> 5U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                               >> 4U)))));
            tracep->chgBit(oldp+383,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                            >> 6U))));
            tracep->chgBit(oldp+384,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                            >> 5U))));
            tracep->chgBit(oldp+385,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                            >> 4U))));
            tracep->chgCData(oldp+386,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                              >> 1U))),3);
            tracep->chgBit(oldp+387,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                               >> 3U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                 >> 2U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                 >> 2U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                   >> 1U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                >> 3U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                  >> 1U))))));
            tracep->chgBit(oldp+388,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                              >> 3U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                >> 2U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                               >> 1U)))));
            tracep->chgBit(oldp+389,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                            >> 3U))));
            tracep->chgBit(oldp+390,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                            >> 2U))));
            tracep->chgBit(oldp+391,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                            >> 1U))));
            tracep->chgCData(oldp+392,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                               << 2U) 
                                              | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                 >> 0x1eU)))),3);
            tracep->chgBit(oldp+393,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                 >> 0x1fU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                   >> 0x1eU))) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                  >> 0x1eU))))));
            tracep->chgBit(oldp+394,((1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                >> 0x1fU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                               >> 0x1eU)))));
            tracep->chgBit(oldp+395,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU])));
            tracep->chgBit(oldp+396,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+397,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+398,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+399,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+400,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+401,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+402,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+403,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+404,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+405,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+406,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+407,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+408,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+409,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+410,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+411,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+412,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+413,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+414,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+415,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+416,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+417,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                               >> 0xeU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                 >> 0xdU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                   >> 0xcU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                  >> 0xcU))))));
            tracep->chgBit(oldp+418,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                              >> 0xeU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                >> 0xdU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                               >> 0xcU)))));
            tracep->chgBit(oldp+419,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+420,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+421,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+422,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                              >> 9U))),3);
            tracep->chgBit(oldp+423,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                               >> 0xbU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                 >> 0xaU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                   >> 9U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                >> 0xbU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                  >> 9U))))));
            tracep->chgBit(oldp+424,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                              >> 0xbU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                >> 0xaU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                               >> 9U)))));
            tracep->chgBit(oldp+425,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+426,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+427,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                            >> 9U))));
            tracep->chgCData(oldp+428,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+429,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+430,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+431,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+432,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+433,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+434,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+435,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+436,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+437,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+438,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+439,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+440,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                              >> 0x10U))),3);
            tracep->chgBit(oldp+441,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                               >> 0x12U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                 >> 0x11U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                 >> 0x11U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                   >> 0x10U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                  >> 0x10U))))));
            tracep->chgBit(oldp+442,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                              >> 0x12U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                >> 0x11U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                               >> 0x10U)))));
            tracep->chgBit(oldp+443,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+444,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+445,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+446,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+447,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+448,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+449,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+450,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+451,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                              >> 0x14U))),3);
            tracep->chgBit(oldp+452,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                               >> 0x16U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                 >> 0x15U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                 >> 0x15U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                   >> 0x14U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                  >> 0x14U))))));
            tracep->chgBit(oldp+453,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                              >> 0x16U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                >> 0x15U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                               >> 0x14U)))));
            tracep->chgBit(oldp+454,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+455,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+456,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+457,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+458,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+459,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+460,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+461,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+462,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+463,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+464,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+465,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+466,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+467,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+468,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+469,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+470,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+471,((0x3fffffffU 
                                        & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                            << 4U) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                              >> 0x1cU)))),30);
            tracep->chgBit(oldp+472,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+473,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+474,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+475,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+476,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+477,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+478,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+479,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+480,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+481,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+482,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+483,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+484,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+485,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+486,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                              >> 2U))),3);
            tracep->chgBit(oldp+487,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                               >> 4U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                 >> 3U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                 >> 3U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                   >> 2U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                  >> 2U))))));
            tracep->chgBit(oldp+488,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                              >> 4U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                >> 3U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                               >> 2U)))));
            tracep->chgBit(oldp+489,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                            >> 4U))));
            tracep->chgBit(oldp+490,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                            >> 3U))));
            tracep->chgBit(oldp+491,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                            >> 2U))));
            tracep->chgCData(oldp+492,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                               << 1U) 
                                              | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                 >> 0x1fU)))),3);
            tracep->chgBit(oldp+493,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                               >> 1U) 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU]) 
                                             | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                   >> 0x1fU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                >> 1U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                  >> 0x1fU))))));
            tracep->chgBit(oldp+494,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                              >> 1U) 
                                             ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU]) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                               >> 0x1fU)))));
            tracep->chgBit(oldp+495,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                            >> 1U))));
            tracep->chgBit(oldp+496,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU])));
            tracep->chgBit(oldp+497,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+498,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                              >> 0x1cU))),3);
            tracep->chgBit(oldp+499,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                               >> 0x1eU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                 >> 0x1dU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                 >> 0x1dU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                   >> 0x1cU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                  >> 0x1cU))))));
            tracep->chgBit(oldp+500,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                              >> 0x1eU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                >> 0x1dU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                               >> 0x1cU)))));
            tracep->chgBit(oldp+501,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+502,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+503,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+504,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+505,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+506,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+507,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+508,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+509,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+510,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+511,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+512,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+513,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+514,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+515,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+516,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+517,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+518,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+519,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+520,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+521,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+522,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                              >> 0xaU))),3);
            tracep->chgBit(oldp+523,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                               >> 0xcU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                 >> 0xbU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                 >> 0xbU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                   >> 0xaU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                  >> 0xaU))))));
            tracep->chgBit(oldp+524,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                              >> 0xcU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                >> 0xbU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                               >> 0xaU)))));
            tracep->chgBit(oldp+525,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+526,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+527,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+528,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                              >> 7U))),3);
            tracep->chgBit(oldp+529,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                               >> 9U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                 >> 8U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                 >> 8U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                   >> 7U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                >> 9U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                  >> 7U))))));
            tracep->chgBit(oldp+530,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                              >> 9U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                >> 8U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                               >> 7U)))));
            tracep->chgBit(oldp+531,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                            >> 9U))));
            tracep->chgBit(oldp+532,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                            >> 8U))));
            tracep->chgBit(oldp+533,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                            >> 7U))));
            tracep->chgCData(oldp+534,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+535,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+536,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+537,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+538,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+539,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+540,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+541,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+542,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+543,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+544,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+545,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+546,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                              >> 0xeU))),3);
            tracep->chgBit(oldp+547,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                               >> 0x10U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                 >> 0xfU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                 >> 0xfU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                   >> 0xeU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                  >> 0xeU))))));
            tracep->chgBit(oldp+548,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                              >> 0x10U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                >> 0xfU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                               >> 0xeU)))));
            tracep->chgBit(oldp+549,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+550,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+551,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+552,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+553,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+554,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+555,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+556,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+557,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+558,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                               >> 0x14U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                 >> 0x13U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                 >> 0x13U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                   >> 0x12U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                  >> 0x12U))))));
            tracep->chgBit(oldp+559,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                              >> 0x14U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                >> 0x13U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+560,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+561,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+562,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+563,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+564,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+565,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+566,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+567,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+568,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+569,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+570,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+571,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+572,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+573,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+574,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+575,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+576,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+577,((0x3fffffffU 
                                        & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                            << 6U) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                              >> 0x1aU)))),30);
            tracep->chgBit(oldp+578,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+579,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+580,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+581,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+582,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+583,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+584,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+585,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+586,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+587,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+588,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+589,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+590,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+591,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+592,((7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])),3);
            tracep->chgBit(oldp+593,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                               >> 2U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                 >> 1U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                >> 2U) 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])))));
            tracep->chgBit(oldp+594,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                              >> 2U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                >> 1U)) 
                                            ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU]))));
            tracep->chgBit(oldp+595,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                            >> 2U))));
            tracep->chgBit(oldp+596,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                            >> 1U))));
            tracep->chgBit(oldp+597,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])));
            tracep->chgCData(oldp+598,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                        >> 0x1dU)),3);
            tracep->chgBit(oldp+599,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                               >> 0x1fU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                 >> 0x1eU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                 >> 0x1eU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                   >> 0x1dU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                >> 0x1fU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                  >> 0x1dU))))));
            tracep->chgBit(oldp+600,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                              >> 0x1fU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                >> 0x1eU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                               >> 0x1dU)))));
            tracep->chgBit(oldp+601,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+602,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+603,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+604,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                              >> 0x1aU))),3);
            tracep->chgBit(oldp+605,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                               >> 0x1cU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                 >> 0x1bU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                 >> 0x1bU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                   >> 0x1aU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+606,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                              >> 0x1cU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                >> 0x1bU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                               >> 0x1aU)))));
            tracep->chgBit(oldp+607,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+608,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+609,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+610,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+611,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+612,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+613,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+614,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+615,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+616,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+617,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+618,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+619,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+620,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+621,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+622,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+623,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+624,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+625,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+626,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+627,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+628,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                              >> 8U))),3);
            tracep->chgBit(oldp+629,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                               >> 0xaU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                 >> 9U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                 >> 9U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                   >> 8U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                  >> 8U))))));
            tracep->chgBit(oldp+630,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                              >> 0xaU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                >> 9U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                               >> 8U)))));
            tracep->chgBit(oldp+631,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+632,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                            >> 9U))));
            tracep->chgBit(oldp+633,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                            >> 8U))));
            tracep->chgCData(oldp+634,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                              >> 5U))),3);
            tracep->chgBit(oldp+635,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                               >> 7U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                 >> 6U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                 >> 6U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                   >> 5U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                >> 7U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                  >> 5U))))));
            tracep->chgBit(oldp+636,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                              >> 7U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                >> 6U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                               >> 5U)))));
            tracep->chgBit(oldp+637,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                            >> 7U))));
            tracep->chgBit(oldp+638,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                            >> 6U))));
            tracep->chgBit(oldp+639,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                            >> 5U))));
            tracep->chgCData(oldp+640,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+641,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+642,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+643,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+644,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+645,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+646,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+647,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+648,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+649,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+650,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+651,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+652,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+653,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                               >> 0xeU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                 >> 0xdU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                   >> 0xcU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                  >> 0xcU))))));
            tracep->chgBit(oldp+654,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                              >> 0xeU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                >> 0xdU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                               >> 0xcU)))));
            tracep->chgBit(oldp+655,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+656,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+657,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+658,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+659,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+660,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+661,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+662,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+663,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                              >> 0x10U))),3);
            tracep->chgBit(oldp+664,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                               >> 0x12U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                 >> 0x11U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                 >> 0x11U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                   >> 0x10U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                  >> 0x10U))))));
            tracep->chgBit(oldp+665,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                              >> 0x12U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                >> 0x11U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                               >> 0x10U)))));
            tracep->chgBit(oldp+666,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+667,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+668,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+669,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+670,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+671,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+672,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+673,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+674,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+675,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+676,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+677,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+678,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+679,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+680,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+681,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+682,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+683,((0x3fffffffU 
                                        & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                            << 8U) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                              >> 0x18U)))),30);
            tracep->chgBit(oldp+684,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+685,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+686,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+687,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+688,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+689,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+690,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+691,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+692,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+693,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+694,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+695,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+696,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+697,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+698,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                               << 2U) 
                                              | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                 >> 0x1eU)))),3);
            tracep->chgBit(oldp+699,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                 >> 0x1fU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                 >> 0x1fU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                   >> 0x1eU))) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                  >> 0x1eU))))));
            tracep->chgBit(oldp+700,((1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                >> 0x1fU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                               >> 0x1eU)))));
            tracep->chgBit(oldp+701,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])));
            tracep->chgBit(oldp+702,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+703,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+704,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                              >> 0x1bU))),3);
            tracep->chgBit(oldp+705,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                               >> 0x1dU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                 >> 0x1cU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                 >> 0x1cU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                   >> 0x1bU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                >> 0x1dU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                  >> 0x1bU))))));
            tracep->chgBit(oldp+706,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                              >> 0x1dU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                >> 0x1cU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                               >> 0x1bU)))));
            tracep->chgBit(oldp+707,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+708,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+709,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+710,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                              >> 0x18U))),3);
            tracep->chgBit(oldp+711,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                               >> 0x1aU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                 >> 0x19U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                 >> 0x19U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                   >> 0x18U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                  >> 0x18U))))));
            tracep->chgBit(oldp+712,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                              >> 0x1aU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                >> 0x19U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                               >> 0x18U)))));
            tracep->chgBit(oldp+713,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+714,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+715,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+716,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+717,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+718,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+719,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+720,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+721,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+722,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+723,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+724,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+725,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+726,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+727,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+728,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+729,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+730,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+731,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+732,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+733,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+734,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                              >> 6U))),3);
            tracep->chgBit(oldp+735,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                               >> 8U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                 >> 7U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                   >> 6U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                  >> 6U))))));
            tracep->chgBit(oldp+736,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                              >> 8U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                >> 7U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                               >> 6U)))));
            tracep->chgBit(oldp+737,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                            >> 8U))));
            tracep->chgBit(oldp+738,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                            >> 7U))));
            tracep->chgBit(oldp+739,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                            >> 6U))));
            tracep->chgCData(oldp+740,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                              >> 3U))),3);
            tracep->chgBit(oldp+741,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                               >> 5U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                 >> 4U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                   >> 3U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                >> 5U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                  >> 3U))))));
            tracep->chgBit(oldp+742,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                              >> 5U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                >> 4U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                               >> 3U)))));
            tracep->chgBit(oldp+743,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                            >> 5U))));
            tracep->chgBit(oldp+744,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                            >> 4U))));
            tracep->chgBit(oldp+745,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                            >> 3U))));
            tracep->chgCData(oldp+746,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+747,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+748,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+749,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+750,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+751,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+752,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+753,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+754,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+755,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+756,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+757,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+758,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                              >> 0xaU))),3);
            tracep->chgBit(oldp+759,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                               >> 0xcU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                 >> 0xbU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                 >> 0xbU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                   >> 0xaU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                  >> 0xaU))))));
            tracep->chgBit(oldp+760,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                              >> 0xcU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                >> 0xbU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                               >> 0xaU)))));
            tracep->chgBit(oldp+761,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+762,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+763,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+764,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+765,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+766,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+767,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+768,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+769,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                              >> 0xeU))),3);
            tracep->chgBit(oldp+770,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                               >> 0x10U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                 >> 0xfU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                 >> 0xfU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                   >> 0xeU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                  >> 0xeU))))));
            tracep->chgBit(oldp+771,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                              >> 0x10U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                >> 0xfU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                               >> 0xeU)))));
            tracep->chgBit(oldp+772,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+773,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+774,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+775,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+776,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+777,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+778,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+779,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+780,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+781,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+782,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+783,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+784,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+785,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+786,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+787,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+788,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+789,((0x3fffffffU 
                                        & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                            << 0xaU) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                              >> 0x16U)))),30);
            tracep->chgBit(oldp+790,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+791,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+792,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+793,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+794,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+795,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+796,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+797,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+798,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+799,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+800,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+801,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+802,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+803,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+804,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                              >> 0x1cU))),3);
            tracep->chgBit(oldp+805,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                               >> 0x1eU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                 >> 0x1dU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                 >> 0x1dU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                   >> 0x1cU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                  >> 0x1cU))))));
            tracep->chgBit(oldp+806,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                              >> 0x1eU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                >> 0x1dU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                               >> 0x1cU)))));
            tracep->chgBit(oldp+807,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+808,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+809,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+810,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                              >> 0x19U))),3);
            tracep->chgBit(oldp+811,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                               >> 0x1bU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                 >> 0x1aU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                 >> 0x1aU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                   >> 0x19U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                >> 0x1bU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+812,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                              >> 0x1bU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                >> 0x1aU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+813,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+814,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+815,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+816,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                              >> 0x16U))),3);
            tracep->chgBit(oldp+817,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                               >> 0x18U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                 >> 0x17U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                 >> 0x17U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                   >> 0x16U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                  >> 0x16U))))));
            tracep->chgBit(oldp+818,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                              >> 0x18U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                >> 0x17U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                               >> 0x16U)))));
            tracep->chgBit(oldp+819,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+820,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+821,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+822,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+823,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+824,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+825,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+826,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+827,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+828,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+829,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+830,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+831,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+832,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+833,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+834,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+835,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+836,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+837,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+838,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+839,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+840,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                              >> 4U))),3);
            tracep->chgBit(oldp+841,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                               >> 6U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                 >> 5U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                 >> 5U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                   >> 4U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                  >> 4U))))));
            tracep->chgBit(oldp+842,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                              >> 6U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                >> 5U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                               >> 4U)))));
            tracep->chgBit(oldp+843,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                            >> 6U))));
            tracep->chgBit(oldp+844,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                            >> 5U))));
            tracep->chgBit(oldp+845,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                            >> 4U))));
            tracep->chgCData(oldp+846,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                              >> 1U))),3);
            tracep->chgBit(oldp+847,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                               >> 3U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                 >> 2U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                 >> 2U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                   >> 1U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                >> 3U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                  >> 1U))))));
            tracep->chgBit(oldp+848,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                              >> 3U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                >> 2U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                               >> 1U)))));
            tracep->chgBit(oldp+849,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                            >> 3U))));
            tracep->chgBit(oldp+850,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                            >> 2U))));
            tracep->chgBit(oldp+851,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                            >> 1U))));
            tracep->chgCData(oldp+852,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+853,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+854,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+855,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+856,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+857,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+858,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+859,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+860,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+861,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+862,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+863,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+864,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                              >> 8U))),3);
            tracep->chgBit(oldp+865,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                               >> 0xaU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                 >> 9U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                 >> 9U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                   >> 8U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                  >> 8U))))));
            tracep->chgBit(oldp+866,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                              >> 0xaU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                >> 9U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                               >> 8U)))));
            tracep->chgBit(oldp+867,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+868,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                            >> 9U))));
            tracep->chgBit(oldp+869,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                            >> 8U))));
            tracep->chgBit(oldp+870,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+871,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+872,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+873,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+874,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+875,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+876,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                               >> 0xeU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                 >> 0xdU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                   >> 0xcU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                  >> 0xcU))))));
            tracep->chgBit(oldp+877,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                              >> 0xeU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                >> 0xdU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                               >> 0xcU)))));
            tracep->chgBit(oldp+878,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+879,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+880,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+881,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+882,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+883,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+884,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+885,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+886,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+887,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+888,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+889,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+890,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+891,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+892,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+893,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+894,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+895,((0x3fffffffU 
                                        & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                            << 0xcU) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                              >> 0x14U)))),30);
            tracep->chgBit(oldp+896,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+897,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+898,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+899,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+900,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+901,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+902,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+903,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+904,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+905,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+906,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+907,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+908,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+909,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+910,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                              >> 0x1aU))),3);
            tracep->chgBit(oldp+911,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                               >> 0x1cU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                 >> 0x1bU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                 >> 0x1bU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                   >> 0x1aU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+912,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                              >> 0x1cU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                >> 0x1bU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                               >> 0x1aU)))));
            tracep->chgBit(oldp+913,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+914,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+915,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+916,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                              >> 0x17U))),3);
            tracep->chgBit(oldp+917,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                               >> 0x19U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                 >> 0x18U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                   >> 0x17U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                >> 0x19U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                  >> 0x17U))))));
            tracep->chgBit(oldp+918,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                              >> 0x19U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                >> 0x18U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                               >> 0x17U)))));
            tracep->chgBit(oldp+919,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+920,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+921,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+922,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                              >> 0x14U))),3);
            tracep->chgBit(oldp+923,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                               >> 0x16U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                 >> 0x15U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                 >> 0x15U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                   >> 0x14U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                  >> 0x14U))))));
            tracep->chgBit(oldp+924,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                              >> 0x16U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                >> 0x15U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                               >> 0x14U)))));
            tracep->chgBit(oldp+925,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+926,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+927,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+928,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+929,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+930,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+931,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+932,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+933,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+934,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+935,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+936,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+937,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+938,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+939,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+940,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+941,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+942,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+943,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+944,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+945,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+946,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                              >> 2U))),3);
            tracep->chgBit(oldp+947,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                               >> 4U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                 >> 3U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                 >> 3U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                   >> 2U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                  >> 2U))))));
            tracep->chgBit(oldp+948,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                              >> 4U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                >> 3U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                               >> 2U)))));
            tracep->chgBit(oldp+949,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                            >> 4U))));
            tracep->chgBit(oldp+950,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                            >> 3U))));
            tracep->chgBit(oldp+951,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                            >> 2U))));
            tracep->chgCData(oldp+952,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                               << 1U) 
                                              | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                 >> 0x1fU)))),3);
            tracep->chgBit(oldp+953,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                               >> 1U) 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU]) 
                                             | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                   >> 0x1fU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                >> 1U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                  >> 0x1fU))))));
            tracep->chgBit(oldp+954,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                              >> 1U) 
                                             ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU]) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                               >> 0x1fU)))));
            tracep->chgBit(oldp+955,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                            >> 1U))));
            tracep->chgBit(oldp+956,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])));
            tracep->chgBit(oldp+957,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+958,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+959,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+960,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+961,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+962,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+963,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+964,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+965,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+966,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+967,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+968,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+969,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+970,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                              >> 6U))),3);
            tracep->chgBit(oldp+971,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                               >> 8U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                 >> 7U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                   >> 6U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                  >> 6U))))));
            tracep->chgBit(oldp+972,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                              >> 8U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                >> 7U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                               >> 6U)))));
            tracep->chgBit(oldp+973,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                            >> 8U))));
            tracep->chgBit(oldp+974,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                            >> 7U))));
            tracep->chgBit(oldp+975,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                            >> 6U))));
            tracep->chgBit(oldp+976,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+977,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+978,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+979,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+980,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+981,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                              >> 0xaU))),3);
            tracep->chgBit(oldp+982,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                               >> 0xcU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                 >> 0xbU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                 >> 0xbU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                   >> 0xaU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                  >> 0xaU))))));
            tracep->chgBit(oldp+983,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                              >> 0xcU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                >> 0xbU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                               >> 0xaU)))));
            tracep->chgBit(oldp+984,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+985,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+986,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+987,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+988,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+989,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+990,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+991,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+992,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+993,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+994,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+995,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+996,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+997,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+998,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+999,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+1000,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1001,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                             << 0xeU) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                               >> 0x12U)))),30);
            tracep->chgBit(oldp+1002,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1003,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1004,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1005,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1006,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1007,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1008,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1009,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1010,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1011,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1012,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1013,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1014,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1015,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1016,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                               >> 0x18U))),3);
            tracep->chgBit(oldp+1017,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                  >> 0x19U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                  >> 0x19U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                    >> 0x18U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                 >> 0x1aU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                   >> 0x18U))))));
            tracep->chgBit(oldp+1018,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                               >> 0x1aU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                 >> 0x19U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+1019,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1020,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1021,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                             >> 0x18U))));
            tracep->chgCData(oldp+1022,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                               >> 0x15U))),3);
            tracep->chgBit(oldp+1023,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                >> 0x17U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                  >> 0x16U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                  >> 0x16U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                    >> 0x15U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                 >> 0x17U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                   >> 0x15U))))));
            tracep->chgBit(oldp+1024,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                               >> 0x17U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                 >> 0x16U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+1025,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1026,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1027,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1028,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1029,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                  >> 0x13U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                  >> 0x13U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                    >> 0x12U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                 >> 0x14U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                   >> 0x12U))))));
            tracep->chgBit(oldp+1030,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                               >> 0x14U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                 >> 0x13U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1031,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1032,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1033,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1034,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1035,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1036,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1037,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1038,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1039,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1040,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1041,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1042,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1043,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1044,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1045,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1046,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1047,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1048,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1049,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1050,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1051,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1052,((7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])),3);
            tracep->chgBit(oldp+1053,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                >> 2U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                  >> 1U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])))));
            tracep->chgBit(oldp+1054,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                               >> 2U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                 >> 1U)) 
                                             ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U]))));
            tracep->chgBit(oldp+1055,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1056,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1057,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])));
            tracep->chgCData(oldp+1058,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                         >> 0x1dU)),3);
            tracep->chgBit(oldp+1059,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                >> 0x1fU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                  >> 0x1eU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                  >> 0x1eU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                    >> 0x1dU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                 >> 0x1fU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                   >> 0x1dU))))));
            tracep->chgBit(oldp+1060,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                               >> 0x1fU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                 >> 0x1eU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+1061,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1062,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1063,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                             >> 0x1dU))));
            tracep->chgCData(oldp+1064,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1065,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1066,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1067,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1068,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1069,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1070,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1071,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1072,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1073,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1074,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1075,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1076,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1077,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                  >> 5U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                  >> 5U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                    >> 4U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                 >> 6U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                   >> 4U))))));
            tracep->chgBit(oldp+1078,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                               >> 6U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                 >> 5U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+1079,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1080,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1081,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1082,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1083,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1084,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1085,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1086,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1087,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                               >> 8U))),3);
            tracep->chgBit(oldp+1088,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                  >> 9U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                  >> 9U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                    >> 8U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+1089,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                               >> 0xaU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                 >> 9U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                >> 8U)))));
            tracep->chgBit(oldp+1090,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1091,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1092,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                             >> 8U))));
            tracep->chgCData(oldp+1093,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1094,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1095,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1096,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1097,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1098,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1099,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1100,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1101,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1102,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1103,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1104,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1105,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1106,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1107,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                             << 0x10U) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                               >> 0x10U)))),30);
            tracep->chgBit(oldp+1108,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1109,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1110,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1111,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1112,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1113,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1114,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1115,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1116,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1117,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1118,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1119,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1120,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1121,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1122,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                               >> 0x16U))),3);
            tracep->chgBit(oldp+1123,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                  >> 0x17U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                  >> 0x17U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                    >> 0x16U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                   >> 0x16U))))));
            tracep->chgBit(oldp+1124,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                               >> 0x18U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                 >> 0x17U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+1125,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1126,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1127,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                             >> 0x16U))));
            tracep->chgCData(oldp+1128,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                               >> 0x13U))),3);
            tracep->chgBit(oldp+1129,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                >> 0x15U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                  >> 0x14U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                  >> 0x14U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                    >> 0x13U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                 >> 0x15U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                   >> 0x13U))))));
            tracep->chgBit(oldp+1130,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                               >> 0x15U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                 >> 0x14U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+1131,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1132,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1133,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                             >> 0x13U))));
            tracep->chgCData(oldp+1134,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                               >> 0x10U))),3);
            tracep->chgBit(oldp+1135,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                  >> 0x11U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                  >> 0x11U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                    >> 0x10U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                 >> 0x12U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                   >> 0x10U))))));
            tracep->chgBit(oldp+1136,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                               >> 0x12U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                 >> 0x11U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+1137,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1138,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1139,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                             >> 0x10U))));
            tracep->chgCData(oldp+1140,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1141,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1142,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1143,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1144,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1145,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1146,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1147,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1148,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1149,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1150,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1151,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1152,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1153,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1154,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1155,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1156,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1157,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1158,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                << 2U) 
                                               | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                  >> 0x1eU)))),3);
            tracep->chgBit(oldp+1159,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                  >> 0x1fU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                    >> 0x1eU))) 
                                             | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                   >> 0x1eU))))));
            tracep->chgBit(oldp+1160,((1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                 >> 0x1fU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+1161,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])));
            tracep->chgBit(oldp+1162,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1163,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                             >> 0x1eU))));
            tracep->chgCData(oldp+1164,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                               >> 0x1bU))),3);
            tracep->chgBit(oldp+1165,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                >> 0x1dU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                  >> 0x1cU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                  >> 0x1cU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                    >> 0x1bU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                 >> 0x1dU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                   >> 0x1bU))))));
            tracep->chgBit(oldp+1166,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                               >> 0x1dU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                 >> 0x1cU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+1167,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1168,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1169,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                             >> 0x1bU))));
            tracep->chgCData(oldp+1170,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1171,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1172,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1173,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1174,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1175,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1176,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1177,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1178,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1179,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1180,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1181,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1182,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1183,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                  >> 3U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                  >> 3U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                    >> 2U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1184,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                               >> 4U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                 >> 3U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+1185,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1186,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1187,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1188,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1189,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1190,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1191,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1192,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1193,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1194,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                  >> 7U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                  >> 7U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                    >> 6U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                 >> 8U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                   >> 6U))))));
            tracep->chgBit(oldp+1195,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                               >> 8U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                 >> 7U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                >> 6U)))));
            tracep->chgBit(oldp+1196,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1197,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1198,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                             >> 6U))));
            tracep->chgCData(oldp+1199,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1200,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1201,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1202,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1203,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1204,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1205,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1206,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1207,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1208,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1209,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1210,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1211,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1212,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1213,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                             << 0x12U) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                               >> 0xeU)))),30);
            tracep->chgBit(oldp+1214,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1215,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1216,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1217,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1218,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1219,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1220,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1221,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1222,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1223,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1224,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1225,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1226,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1227,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1228,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                               >> 0x14U))),3);
            tracep->chgBit(oldp+1229,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                  >> 0x15U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                  >> 0x15U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                    >> 0x14U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                 >> 0x16U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                   >> 0x14U))))));
            tracep->chgBit(oldp+1230,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                               >> 0x16U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                 >> 0x15U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+1231,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1232,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1233,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                             >> 0x14U))));
            tracep->chgCData(oldp+1234,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                               >> 0x11U))),3);
            tracep->chgBit(oldp+1235,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                >> 0x13U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                  >> 0x12U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                  >> 0x12U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                    >> 0x11U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                 >> 0x13U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                   >> 0x11U))))));
            tracep->chgBit(oldp+1236,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                               >> 0x13U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                 >> 0x12U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+1237,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1238,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1239,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                             >> 0x11U))));
            tracep->chgCData(oldp+1240,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                               >> 0xeU))),3);
            tracep->chgBit(oldp+1241,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                  >> 0xfU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                  >> 0xfU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                    >> 0xeU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                 >> 0x10U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+1242,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                               >> 0x10U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                 >> 0xfU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+1243,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1244,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1245,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                             >> 0xeU))));
            tracep->chgCData(oldp+1246,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1247,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1248,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1249,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1250,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1251,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1252,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1253,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1254,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1255,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1256,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1257,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1258,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1259,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1260,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1261,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1262,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1263,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1264,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                               >> 0x1cU))),3);
            tracep->chgBit(oldp+1265,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                  >> 0x1dU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                  >> 0x1dU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                    >> 0x1cU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                 >> 0x1eU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                   >> 0x1cU))))));
            tracep->chgBit(oldp+1266,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                               >> 0x1eU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                 >> 0x1dU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+1267,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1268,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1269,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                             >> 0x1cU))));
            tracep->chgCData(oldp+1270,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                               >> 0x19U))),3);
            tracep->chgBit(oldp+1271,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                >> 0x1bU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                  >> 0x1aU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                  >> 0x1aU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                    >> 0x19U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                   >> 0x19U))))));
            tracep->chgBit(oldp+1272,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                               >> 0x1bU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                 >> 0x1aU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+1273,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1274,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1275,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                             >> 0x19U))));
            tracep->chgCData(oldp+1276,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1277,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1278,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1279,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1280,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1281,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1282,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1283,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1284,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1285,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1286,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1287,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1288,((7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])),3);
            tracep->chgBit(oldp+1289,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                >> 2U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                  >> 1U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])))));
            tracep->chgBit(oldp+1290,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                               >> 2U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                 >> 1U)) 
                                             ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U]))));
            tracep->chgBit(oldp+1291,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1292,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1293,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])));
            tracep->chgBit(oldp+1294,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1295,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1296,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1297,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1298,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1299,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1300,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                  >> 5U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                  >> 5U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                    >> 4U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                 >> 6U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                   >> 4U))))));
            tracep->chgBit(oldp+1301,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                               >> 6U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                 >> 5U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+1302,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1303,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1304,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                             >> 4U))));
            tracep->chgCData(oldp+1305,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1306,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1307,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1308,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1309,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1310,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1311,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1312,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1313,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1314,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1315,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1316,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1317,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1318,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1319,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                             << 0x14U) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                               >> 0xcU)))),30);
            tracep->chgBit(oldp+1320,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1321,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1322,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1323,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1324,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1325,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1326,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1327,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1328,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1329,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1330,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1331,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1332,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1333,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1334,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1335,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                  >> 0x13U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                  >> 0x13U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                    >> 0x12U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                 >> 0x14U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                   >> 0x12U))))));
            tracep->chgBit(oldp+1336,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                               >> 0x14U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                 >> 0x13U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1337,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1338,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1339,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1340,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                               >> 0xfU))),3);
            tracep->chgBit(oldp+1341,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                >> 0x11U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                  >> 0x10U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                  >> 0x10U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                    >> 0xfU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                 >> 0x11U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                   >> 0xfU))))));
            tracep->chgBit(oldp+1342,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                               >> 0x11U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                 >> 0x10U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+1343,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1344,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1345,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1346,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1347,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                  >> 0xdU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                  >> 0xdU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                    >> 0xcU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                 >> 0xeU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                   >> 0xcU))))));
            tracep->chgBit(oldp+1348,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                               >> 0xeU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                 >> 0xdU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1349,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1350,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1351,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1352,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1353,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1354,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1355,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1356,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1357,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1358,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1359,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1360,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1361,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1362,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1363,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1364,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1365,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1366,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1367,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1368,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1369,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1370,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                               >> 0x1aU))),3);
            tracep->chgBit(oldp+1371,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                  >> 0x1bU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                    >> 0x1aU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                 >> 0x1cU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                   >> 0x1aU))))));
            tracep->chgBit(oldp+1372,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                               >> 0x1cU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                 >> 0x1bU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+1373,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1374,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1375,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                             >> 0x1aU))));
            tracep->chgCData(oldp+1376,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                               >> 0x17U))),3);
            tracep->chgBit(oldp+1377,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                >> 0x19U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                  >> 0x18U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                  >> 0x18U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                    >> 0x17U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                 >> 0x19U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                   >> 0x17U))))));
            tracep->chgBit(oldp+1378,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                               >> 0x19U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                 >> 0x18U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+1379,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1380,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1381,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                             >> 0x17U))));
            tracep->chgCData(oldp+1382,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1383,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1384,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1385,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1386,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1387,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1388,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1389,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1390,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1391,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1392,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1393,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1394,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                << 2U) 
                                               | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                  >> 0x1eU)))),3);
            tracep->chgBit(oldp+1395,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                  >> 0x1fU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                    >> 0x1eU))) 
                                             | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                   >> 0x1eU))))));
            tracep->chgBit(oldp+1396,((1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                 >> 0x1fU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+1397,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])));
            tracep->chgBit(oldp+1398,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1399,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1400,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1401,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1402,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1403,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1404,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1405,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1406,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                  >> 3U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                  >> 3U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                    >> 2U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1407,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                               >> 4U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                 >> 3U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+1408,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1409,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1410,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                             >> 2U))));
            tracep->chgCData(oldp+1411,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1412,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1413,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1414,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1415,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1416,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1417,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1418,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1419,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1420,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1421,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1422,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1423,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1424,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1425,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                             << 0x16U) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                               >> 0xaU)))),30);
            tracep->chgBit(oldp+1426,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1427,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1428,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1429,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1430,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1431,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1432,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1433,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1434,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1435,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1436,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1437,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1438,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1439,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1440,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                               >> 0x10U))),3);
            tracep->chgBit(oldp+1441,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                  >> 0x11U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                  >> 0x11U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                    >> 0x10U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                 >> 0x12U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                   >> 0x10U))))));
            tracep->chgBit(oldp+1442,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                               >> 0x12U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                 >> 0x11U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+1443,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1444,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1445,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                             >> 0x10U))));
            tracep->chgCData(oldp+1446,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                               >> 0xdU))),3);
            tracep->chgBit(oldp+1447,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                >> 0xfU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                  >> 0xeU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                  >> 0xeU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                    >> 0xdU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                 >> 0xfU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                   >> 0xdU))))));
            tracep->chgBit(oldp+1448,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                               >> 0xfU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                 >> 0xeU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+1449,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1450,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1451,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                             >> 0xdU))));
            tracep->chgCData(oldp+1452,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                               >> 0xaU))),3);
            tracep->chgBit(oldp+1453,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                  >> 0xbU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                  >> 0xbU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                    >> 0xaU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                 >> 0xcU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+1454,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                               >> 0xcU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                 >> 0xbU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1455,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1456,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1457,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                             >> 0xaU))));
            tracep->chgCData(oldp+1458,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1459,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1460,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1461,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1462,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1463,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1464,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1465,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1466,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1467,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1468,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1469,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1470,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1471,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1472,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1473,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1474,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1475,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1476,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                               >> 0x18U))),3);
            tracep->chgBit(oldp+1477,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                  >> 0x19U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                  >> 0x19U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                    >> 0x18U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                 >> 0x1aU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                   >> 0x18U))))));
            tracep->chgBit(oldp+1478,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                               >> 0x1aU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                 >> 0x19U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+1479,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1480,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1481,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                             >> 0x18U))));
            tracep->chgCData(oldp+1482,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                               >> 0x15U))),3);
            tracep->chgBit(oldp+1483,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                >> 0x17U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                  >> 0x16U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                  >> 0x16U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                    >> 0x15U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                 >> 0x17U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                   >> 0x15U))))));
            tracep->chgBit(oldp+1484,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                               >> 0x17U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                 >> 0x16U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+1485,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1486,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1487,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1488,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1489,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1490,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1491,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1492,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1493,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1494,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1495,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1496,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1497,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1498,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1499,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1500,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                               >> 0x1cU))),3);
            tracep->chgBit(oldp+1501,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                  >> 0x1dU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                  >> 0x1dU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                    >> 0x1cU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                 >> 0x1eU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                   >> 0x1cU))))));
            tracep->chgBit(oldp+1502,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                               >> 0x1eU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                 >> 0x1dU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+1503,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1504,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1505,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1506,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1507,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1508,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1509,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1510,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1511,((7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])),3);
            tracep->chgBit(oldp+1512,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                >> 2U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                  >> 1U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))));
            tracep->chgBit(oldp+1513,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                               >> 2U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                 >> 1U)) 
                                             ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U]))));
            tracep->chgBit(oldp+1514,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1515,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1516,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])));
            tracep->chgCData(oldp+1517,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1518,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1519,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1520,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1521,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1522,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1523,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1524,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1525,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1526,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1527,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1528,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1529,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1530,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1531,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                             << 0x18U) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                               >> 8U)))),30);
            tracep->chgBit(oldp+1532,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1533,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1534,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1535,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1536,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1537,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1538,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1539,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1540,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1541,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1542,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1543,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1544,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1545,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1546,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                               >> 0xeU))),3);
            tracep->chgBit(oldp+1547,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                  >> 0xfU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                  >> 0xfU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                    >> 0xeU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                 >> 0x10U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+1548,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                               >> 0x10U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                 >> 0xfU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+1549,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1550,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1551,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                             >> 0xeU))));
            tracep->chgCData(oldp+1552,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                               >> 0xbU))),3);
            tracep->chgBit(oldp+1553,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                >> 0xdU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                  >> 0xcU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                  >> 0xcU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                    >> 0xbU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+1554,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                               >> 0xdU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                 >> 0xcU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+1555,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1556,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1557,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                             >> 0xbU))));
            tracep->chgCData(oldp+1558,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                               >> 8U))),3);
            tracep->chgBit(oldp+1559,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                  >> 9U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                  >> 9U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                    >> 8U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+1560,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                               >> 0xaU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                 >> 9U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                >> 8U)))));
            tracep->chgBit(oldp+1561,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1562,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1563,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                             >> 8U))));
            tracep->chgCData(oldp+1564,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1565,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1566,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1567,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1568,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1569,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1570,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1571,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1572,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1573,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1574,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1575,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1576,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1577,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1578,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1579,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1580,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1581,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1582,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                               >> 0x16U))),3);
            tracep->chgBit(oldp+1583,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                  >> 0x17U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                  >> 0x17U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                    >> 0x16U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                   >> 0x16U))))));
            tracep->chgBit(oldp+1584,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                               >> 0x18U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                 >> 0x17U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+1585,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1586,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1587,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                             >> 0x16U))));
            tracep->chgCData(oldp+1588,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                               >> 0x13U))),3);
            tracep->chgBit(oldp+1589,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                >> 0x15U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                  >> 0x14U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                  >> 0x14U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                    >> 0x13U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                 >> 0x15U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                   >> 0x13U))))));
            tracep->chgBit(oldp+1590,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                               >> 0x15U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                 >> 0x14U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+1591,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1592,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1593,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                             >> 0x13U))));
            tracep->chgCData(oldp+1594,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1595,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1596,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1597,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1598,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1599,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1600,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1601,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1602,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1603,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1604,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1605,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1606,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                               >> 0x1aU))),3);
            tracep->chgBit(oldp+1607,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                  >> 0x1bU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                    >> 0x1aU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                 >> 0x1cU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                   >> 0x1aU))))));
            tracep->chgBit(oldp+1608,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                               >> 0x1cU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                 >> 0x1bU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+1609,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1610,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1611,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1612,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1613,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1614,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1615,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1616,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1617,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                << 2U) 
                                               | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                  >> 0x1eU)))),3);
            tracep->chgBit(oldp+1618,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                  >> 0x1fU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                    >> 0x1eU))) 
                                             | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                   >> 0x1eU))))));
            tracep->chgBit(oldp+1619,((1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                 >> 0x1fU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+1620,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])));
            tracep->chgBit(oldp+1621,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1622,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                             >> 0x1eU))));
            tracep->chgCData(oldp+1623,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1624,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1625,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1626,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1627,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1628,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1629,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1630,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1631,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1632,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1633,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1634,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1635,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1636,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1637,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                             << 0x1aU) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                               >> 6U)))),30);
            tracep->chgBit(oldp+1638,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1639,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1640,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1641,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1642,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1643,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1644,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1645,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1646,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1647,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1648,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1649,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1650,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1651,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1652,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1653,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                  >> 0xdU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                  >> 0xdU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                    >> 0xcU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                 >> 0xeU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                   >> 0xcU))))));
            tracep->chgBit(oldp+1654,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                               >> 0xeU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                 >> 0xdU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1655,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1656,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1657,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1658,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1659,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                >> 0xbU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                  >> 0xaU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                  >> 0xaU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                    >> 9U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                 >> 0xbU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                   >> 9U))))));
            tracep->chgBit(oldp+1660,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                               >> 0xbU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                 >> 0xaU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                >> 9U)))));
            tracep->chgBit(oldp+1661,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1662,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1663,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                             >> 9U))));
            tracep->chgCData(oldp+1664,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1665,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                  >> 7U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                  >> 7U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                    >> 6U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                 >> 8U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                   >> 6U))))));
            tracep->chgBit(oldp+1666,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                               >> 8U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                 >> 7U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                >> 6U)))));
            tracep->chgBit(oldp+1667,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1668,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1669,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                             >> 6U))));
            tracep->chgCData(oldp+1670,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1671,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1672,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1673,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1674,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1675,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1676,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1677,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1678,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1679,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1680,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1681,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1682,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1683,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1684,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1685,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1686,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1687,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1688,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                               >> 0x14U))),3);
            tracep->chgBit(oldp+1689,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                  >> 0x15U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                  >> 0x15U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                    >> 0x14U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                 >> 0x16U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                   >> 0x14U))))));
            tracep->chgBit(oldp+1690,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                               >> 0x16U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                 >> 0x15U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+1691,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1692,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1693,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                             >> 0x14U))));
            tracep->chgCData(oldp+1694,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                               >> 0x11U))),3);
            tracep->chgBit(oldp+1695,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                >> 0x13U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                  >> 0x12U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                  >> 0x12U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                    >> 0x11U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                 >> 0x13U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                   >> 0x11U))))));
            tracep->chgBit(oldp+1696,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                               >> 0x13U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                 >> 0x12U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+1697,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1698,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1699,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                             >> 0x11U))));
            tracep->chgCData(oldp+1700,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1701,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1702,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1703,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1704,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1705,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1706,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1707,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1708,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1709,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1710,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1711,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1712,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                               >> 0x18U))),3);
            tracep->chgBit(oldp+1713,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                  >> 0x19U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                  >> 0x19U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                    >> 0x18U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                 >> 0x1aU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                   >> 0x18U))))));
            tracep->chgBit(oldp+1714,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                               >> 0x1aU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                 >> 0x19U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+1715,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1716,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1717,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1718,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1719,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1720,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1721,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1722,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1723,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                               >> 0x1cU))),3);
            tracep->chgBit(oldp+1724,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                  >> 0x1dU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                  >> 0x1dU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                    >> 0x1cU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                 >> 0x1eU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                   >> 0x1cU))))));
            tracep->chgBit(oldp+1725,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                               >> 0x1eU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                 >> 0x1dU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+1726,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1727,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1728,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                             >> 0x1cU))));
            tracep->chgCData(oldp+1729,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1730,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1731,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1732,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1733,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1734,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1735,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1736,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1737,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1738,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1739,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1740,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1741,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1742,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1743,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                             << 0x1cU) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                               >> 4U)))),30);
            tracep->chgBit(oldp+1744,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1745,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1746,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1747,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1748,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1749,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1750,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1751,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1752,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1753,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1754,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1755,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1756,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1757,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1758,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                               >> 0xaU))),3);
            tracep->chgBit(oldp+1759,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                  >> 0xbU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                  >> 0xbU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                    >> 0xaU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                 >> 0xcU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+1760,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                               >> 0xcU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                 >> 0xbU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1761,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1762,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1763,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                             >> 0xaU))));
            tracep->chgCData(oldp+1764,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                               >> 7U))),3);
            tracep->chgBit(oldp+1765,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                >> 9U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                  >> 8U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                  >> 8U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                    >> 7U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                 >> 9U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                   >> 7U))))));
            tracep->chgBit(oldp+1766,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                               >> 9U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                 >> 8U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                >> 7U)))));
            tracep->chgBit(oldp+1767,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1768,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1769,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                             >> 7U))));
            tracep->chgCData(oldp+1770,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1771,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                  >> 5U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                  >> 5U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                    >> 4U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                 >> 6U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                   >> 4U))))));
            tracep->chgBit(oldp+1772,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                               >> 6U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                 >> 5U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+1773,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1774,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1775,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                             >> 4U))));
            tracep->chgCData(oldp+1776,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1777,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1778,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1779,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1780,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1781,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1782,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1783,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1784,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1785,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1786,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1787,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1788,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1789,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1790,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1791,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1792,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1793,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1794,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1795,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                  >> 0x13U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                  >> 0x13U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                    >> 0x12U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                 >> 0x14U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                   >> 0x12U))))));
            tracep->chgBit(oldp+1796,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                               >> 0x14U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                 >> 0x13U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1797,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1798,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1799,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1800,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                               >> 0xfU))),3);
            tracep->chgBit(oldp+1801,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                >> 0x11U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                  >> 0x10U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                  >> 0x10U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                    >> 0xfU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                 >> 0x11U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                   >> 0xfU))))));
            tracep->chgBit(oldp+1802,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                               >> 0x11U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                 >> 0x10U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+1803,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1804,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1805,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1806,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1807,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1808,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1809,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1810,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1811,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1812,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1813,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1814,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1815,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1816,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1817,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1818,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                               >> 0x16U))),3);
            tracep->chgBit(oldp+1819,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                  >> 0x17U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                  >> 0x17U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                    >> 0x16U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                   >> 0x16U))))));
            tracep->chgBit(oldp+1820,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                               >> 0x18U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                 >> 0x17U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+1821,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1822,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1823,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1824,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1825,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1826,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1827,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1828,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1829,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                               >> 0x1aU))),3);
            tracep->chgBit(oldp+1830,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                  >> 0x1bU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                    >> 0x1aU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                 >> 0x1cU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                   >> 0x1aU))))));
            tracep->chgBit(oldp+1831,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                               >> 0x1cU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                 >> 0x1bU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+1832,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1833,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1834,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                             >> 0x1aU))));
            tracep->chgCData(oldp+1835,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1836,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1837,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1838,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1839,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1840,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1841,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1842,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1843,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1844,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1845,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1846,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1847,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1848,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1849,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                         >> 2U)),30);
            tracep->chgBit(oldp+1850,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1851,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1852,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1853,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1854,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1855,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1856,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1857,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1858,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1859,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1860,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1861,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1862,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1863,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1864,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                               >> 8U))),3);
            tracep->chgBit(oldp+1865,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                  >> 9U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                  >> 9U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                    >> 8U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+1866,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                               >> 0xaU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                 >> 9U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                >> 8U)))));
            tracep->chgBit(oldp+1867,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1868,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1869,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                             >> 8U))));
            tracep->chgCData(oldp+1870,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                               >> 5U))),3);
            tracep->chgBit(oldp+1871,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                >> 7U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                  >> 6U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                  >> 6U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                    >> 5U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                   >> 5U))))));
            tracep->chgBit(oldp+1872,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                               >> 7U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                 >> 6U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                >> 5U)))));
            tracep->chgBit(oldp+1873,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1874,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1875,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                             >> 5U))));
            tracep->chgCData(oldp+1876,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1877,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                  >> 3U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                  >> 3U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                    >> 2U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1878,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                               >> 4U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                 >> 3U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+1879,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1880,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1881,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                             >> 2U))));
            tracep->chgCData(oldp+1882,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1883,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1884,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1885,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1886,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1887,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1888,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1889,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1890,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1891,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1892,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1893,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1894,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1895,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1896,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1897,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1898,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1899,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1900,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                               >> 0x10U))),3);
            tracep->chgBit(oldp+1901,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                  >> 0x11U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                  >> 0x11U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                    >> 0x10U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                 >> 0x12U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                   >> 0x10U))))));
            tracep->chgBit(oldp+1902,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                               >> 0x12U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                 >> 0x11U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+1903,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1904,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1905,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                             >> 0x10U))));
            tracep->chgCData(oldp+1906,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                               >> 0xdU))),3);
            tracep->chgBit(oldp+1907,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                >> 0xfU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                  >> 0xeU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                  >> 0xeU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                    >> 0xdU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                 >> 0xfU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                   >> 0xdU))))));
            tracep->chgBit(oldp+1908,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                               >> 0xfU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                 >> 0xeU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+1909,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1910,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1911,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                             >> 0xdU))));
            tracep->chgCData(oldp+1912,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1913,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1914,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1915,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1916,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1917,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1918,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1919,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1920,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1921,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1922,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1923,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1924,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                               >> 0x14U))),3);
            tracep->chgBit(oldp+1925,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                  >> 0x15U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                  >> 0x15U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                    >> 0x14U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                 >> 0x16U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                   >> 0x14U))))));
            tracep->chgBit(oldp+1926,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                               >> 0x16U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                 >> 0x15U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+1927,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1928,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1929,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1930,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1931,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1932,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1933,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1934,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1935,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                               >> 0x18U))),3);
        }
    }
}
