// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vysyx_22040632_top__Syms.h"


void Vysyx_22040632_top___024root__traceChgSub0(Vysyx_22040632_top___024root* vlSelf, VerilatedFst* tracep);
void Vysyx_22040632_top___024root__traceChgSub1(Vysyx_22040632_top___024root* vlSelf, VerilatedFst* tracep);
void Vysyx_22040632_top___024root__traceChgSub2(Vysyx_22040632_top___024root* vlSelf, VerilatedFst* tracep);
void Vysyx_22040632_top___024root__traceChgSub3(Vysyx_22040632_top___024root* vlSelf, VerilatedFst* tracep);
void Vysyx_22040632_top___024root__traceChgSub4(Vysyx_22040632_top___024root* vlSelf, VerilatedFst* tracep);
void Vysyx_22040632_top___024root__traceChgSub5(Vysyx_22040632_top___024root* vlSelf, VerilatedFst* tracep);
void Vysyx_22040632_top___024root__traceChgSub6(Vysyx_22040632_top___024root* vlSelf, VerilatedFst* tracep);
void Vysyx_22040632_top___024root__traceChgSub7(Vysyx_22040632_top___024root* vlSelf, VerilatedFst* tracep);
void Vysyx_22040632_top___024root__traceChgSub8(Vysyx_22040632_top___024root* vlSelf, VerilatedFst* tracep);
void Vysyx_22040632_top___024root__traceChgSub9(Vysyx_22040632_top___024root* vlSelf, VerilatedFst* tracep);
void Vysyx_22040632_top___024root__traceChgSub10(Vysyx_22040632_top___024root* vlSelf, VerilatedFst* tracep);
void Vysyx_22040632_top___024root__traceChgSub11(Vysyx_22040632_top___024root* vlSelf, VerilatedFst* tracep);
void Vysyx_22040632_top___024root__traceChgSub12(Vysyx_22040632_top___024root* vlSelf, VerilatedFst* tracep);
void Vysyx_22040632_top___024root__traceChgSub13(Vysyx_22040632_top___024root* vlSelf, VerilatedFst* tracep);

void Vysyx_22040632_top___024root__traceChgTop0(void* voidSelf, VerilatedFst* tracep) {
    Vysyx_22040632_top___024root* const __restrict vlSelf = static_cast<Vysyx_22040632_top___024root*>(voidSelf);
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_22040632_top___024root__traceChgSub0((&vlSymsp->TOP), tracep);
        Vysyx_22040632_top___024root__traceChgSub1((&vlSymsp->TOP), tracep);
        Vysyx_22040632_top___024root__traceChgSub2((&vlSymsp->TOP), tracep);
        Vysyx_22040632_top___024root__traceChgSub3((&vlSymsp->TOP), tracep);
        Vysyx_22040632_top___024root__traceChgSub4((&vlSymsp->TOP), tracep);
        Vysyx_22040632_top___024root__traceChgSub5((&vlSymsp->TOP), tracep);
        Vysyx_22040632_top___024root__traceChgSub6((&vlSymsp->TOP), tracep);
        Vysyx_22040632_top___024root__traceChgSub7((&vlSymsp->TOP), tracep);
        Vysyx_22040632_top___024root__traceChgSub8((&vlSymsp->TOP), tracep);
        Vysyx_22040632_top___024root__traceChgSub9((&vlSymsp->TOP), tracep);
        Vysyx_22040632_top___024root__traceChgSub10((&vlSymsp->TOP), tracep);
        Vysyx_22040632_top___024root__traceChgSub11((&vlSymsp->TOP), tracep);
        Vysyx_22040632_top___024root__traceChgSub12((&vlSymsp->TOP), tracep);
        Vysyx_22040632_top___024root__traceChgSub13((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22040632_top___024root__traceChgSub0(Vysyx_22040632_top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op),64);
            tracep->chgQData(oldp+2,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_out),64);
            tracep->chgWData(oldp+4,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin),3840);
            tracep->chgWData(oldp+124,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group),3840);
            tracep->chgWData(oldp+244,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__s),128);
            tracep->chgWData(oldp+248,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__result),128);
            tracep->chgIData(oldp+252,((0x3fffffffU 
                                        & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U])),30);
            tracep->chgBit(oldp+253,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+254,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+255,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+256,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+257,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+258,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+259,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+260,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+261,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+262,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+263,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+264,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+265,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+266,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+267,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                              >> 6U))),3);
            tracep->chgBit(oldp+268,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                               >> 8U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                 >> 7U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                   >> 6U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                  >> 6U))))));
            tracep->chgBit(oldp+269,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                              >> 8U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                >> 7U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                               >> 6U)))));
            tracep->chgBit(oldp+270,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                            >> 8U))));
            tracep->chgBit(oldp+271,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                            >> 7U))));
            tracep->chgBit(oldp+272,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                            >> 6U))));
            tracep->chgCData(oldp+273,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                              >> 3U))),3);
            tracep->chgBit(oldp+274,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                               >> 5U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                 >> 4U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                   >> 3U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                >> 5U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                  >> 3U))))));
            tracep->chgBit(oldp+275,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                              >> 5U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                >> 4U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                               >> 3U)))));
            tracep->chgBit(oldp+276,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                            >> 5U))));
            tracep->chgBit(oldp+277,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                            >> 4U))));
            tracep->chgBit(oldp+278,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                            >> 3U))));
            tracep->chgCData(oldp+279,((7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U])),3);
            tracep->chgBit(oldp+280,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                               >> 2U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                 >> 1U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U])) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                >> 2U) 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U])))));
            tracep->chgBit(oldp+281,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                              >> 2U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                >> 1U)) 
                                            ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U]))));
            tracep->chgBit(oldp+282,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+283,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+284,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U])));
            tracep->chgCData(oldp+285,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+286,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+287,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+288,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+289,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+290,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+291,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+292,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+293,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+294,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+295,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+296,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+297,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+298,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+299,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+300,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+301,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+302,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+303,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                              >> 0xeU))),3);
            tracep->chgBit(oldp+304,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                               >> 0x10U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                 >> 0xfU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                 >> 0xfU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                   >> 0xeU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                  >> 0xeU))))));
            tracep->chgBit(oldp+305,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                              >> 0x10U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                >> 0xfU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                               >> 0xeU)))));
            tracep->chgBit(oldp+306,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+307,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+308,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+309,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                              >> 0xbU))),3);
            tracep->chgBit(oldp+310,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                               >> 0xdU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                 >> 0xcU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                 >> 0xcU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                   >> 0xbU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                >> 0xdU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                  >> 0xbU))))));
            tracep->chgBit(oldp+311,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                              >> 0xdU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                >> 0xcU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                               >> 0xbU)))));
            tracep->chgBit(oldp+312,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+313,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+314,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+315,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+316,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+317,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+318,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+319,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+320,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+321,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+322,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+323,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+324,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+325,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+326,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+327,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+328,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                               >> 0x14U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                 >> 0x13U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                 >> 0x13U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                   >> 0x12U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                  >> 0x12U))))));
            tracep->chgBit(oldp+329,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                              >> 0x14U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                >> 0x13U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+330,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+331,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+332,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+333,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+334,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+335,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+336,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+337,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+338,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                              >> 0x16U))),3);
            tracep->chgBit(oldp+339,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                               >> 0x18U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                 >> 0x17U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                 >> 0x17U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                   >> 0x16U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                  >> 0x16U))))));
            tracep->chgBit(oldp+340,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                              >> 0x18U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                >> 0x17U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                               >> 0x16U)))));
            tracep->chgBit(oldp+341,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+342,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+343,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+344,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+345,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+346,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+347,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+348,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+349,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+350,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+351,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+352,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+353,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+354,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+355,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+356,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+357,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+358,((0x3fffffffU 
                                        & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                            << 2U) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                              >> 0x1eU)))),30);
            tracep->chgBit(oldp+359,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+360,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+361,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+362,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+363,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+364,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+365,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+366,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+367,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+368,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+369,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+370,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+371,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+372,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+373,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                              >> 4U))),3);
            tracep->chgBit(oldp+374,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                               >> 6U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                 >> 5U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                 >> 5U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                   >> 4U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                  >> 4U))))));
            tracep->chgBit(oldp+375,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                              >> 6U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                >> 5U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                               >> 4U)))));
            tracep->chgBit(oldp+376,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                            >> 6U))));
            tracep->chgBit(oldp+377,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                            >> 5U))));
            tracep->chgBit(oldp+378,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                            >> 4U))));
            tracep->chgCData(oldp+379,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                              >> 1U))),3);
            tracep->chgBit(oldp+380,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                               >> 3U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                 >> 2U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                 >> 2U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                   >> 1U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                >> 3U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                  >> 1U))))));
            tracep->chgBit(oldp+381,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                              >> 3U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                >> 2U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                               >> 1U)))));
            tracep->chgBit(oldp+382,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                            >> 3U))));
            tracep->chgBit(oldp+383,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                            >> 2U))));
            tracep->chgBit(oldp+384,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                            >> 1U))));
            tracep->chgCData(oldp+385,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                               << 2U) 
                                              | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                 >> 0x1eU)))),3);
            tracep->chgBit(oldp+386,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                 >> 0x1fU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                   >> 0x1eU))) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                  >> 0x1eU))))));
            tracep->chgBit(oldp+387,((1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                >> 0x1fU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                               >> 0x1eU)))));
            tracep->chgBit(oldp+388,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U])));
            tracep->chgBit(oldp+389,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+390,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+391,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+392,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+393,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+394,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+395,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+396,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+397,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+398,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+399,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+400,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+401,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+402,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+403,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+404,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+405,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+406,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+407,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+408,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+409,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+410,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                               >> 0xeU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                 >> 0xdU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                   >> 0xcU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                  >> 0xcU))))));
            tracep->chgBit(oldp+411,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                              >> 0xeU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                >> 0xdU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                               >> 0xcU)))));
            tracep->chgBit(oldp+412,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+413,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+414,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+415,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                              >> 9U))),3);
            tracep->chgBit(oldp+416,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                               >> 0xbU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                 >> 0xaU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                   >> 9U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                >> 0xbU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                  >> 9U))))));
            tracep->chgBit(oldp+417,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                              >> 0xbU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                >> 0xaU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                               >> 9U)))));
            tracep->chgBit(oldp+418,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+419,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+420,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                            >> 9U))));
            tracep->chgCData(oldp+421,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+422,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+423,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+424,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+425,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+426,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+427,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+428,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+429,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+430,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+431,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+432,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+433,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                              >> 0x10U))),3);
            tracep->chgBit(oldp+434,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                               >> 0x12U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                 >> 0x11U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                 >> 0x11U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                   >> 0x10U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                  >> 0x10U))))));
            tracep->chgBit(oldp+435,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                              >> 0x12U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                >> 0x11U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                               >> 0x10U)))));
            tracep->chgBit(oldp+436,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+437,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+438,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+439,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+440,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+441,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+442,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+443,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+444,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                              >> 0x14U))),3);
            tracep->chgBit(oldp+445,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                               >> 0x16U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                 >> 0x15U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                 >> 0x15U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                   >> 0x14U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                  >> 0x14U))))));
            tracep->chgBit(oldp+446,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                              >> 0x16U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                >> 0x15U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                               >> 0x14U)))));
            tracep->chgBit(oldp+447,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+448,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+449,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+450,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+451,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+452,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+453,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+454,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+455,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+456,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+457,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+458,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+459,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+460,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+461,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+462,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+463,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+464,((0x3fffffffU 
                                        & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                            << 4U) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                              >> 0x1cU)))),30);
            tracep->chgBit(oldp+465,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+466,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+467,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+468,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+469,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+470,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+471,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+472,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+473,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+474,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+475,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+476,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+477,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+478,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+479,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                              >> 2U))),3);
            tracep->chgBit(oldp+480,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                               >> 4U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                 >> 3U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                 >> 3U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                   >> 2U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                  >> 2U))))));
            tracep->chgBit(oldp+481,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                              >> 4U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                >> 3U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                               >> 2U)))));
            tracep->chgBit(oldp+482,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                            >> 4U))));
            tracep->chgBit(oldp+483,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                            >> 3U))));
            tracep->chgBit(oldp+484,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                            >> 2U))));
            tracep->chgCData(oldp+485,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                               << 1U) 
                                              | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                 >> 0x1fU)))),3);
            tracep->chgBit(oldp+486,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                               >> 1U) 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U]) 
                                             | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                   >> 0x1fU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                >> 1U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                  >> 0x1fU))))));
            tracep->chgBit(oldp+487,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                              >> 1U) 
                                             ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U]) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                               >> 0x1fU)))));
            tracep->chgBit(oldp+488,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+489,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U])));
            tracep->chgBit(oldp+490,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+491,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                              >> 0x1cU))),3);
            tracep->chgBit(oldp+492,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                               >> 0x1eU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                 >> 0x1dU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                 >> 0x1dU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                   >> 0x1cU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                  >> 0x1cU))))));
            tracep->chgBit(oldp+493,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                              >> 0x1eU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                >> 0x1dU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                               >> 0x1cU)))));
            tracep->chgBit(oldp+494,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+495,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+496,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+497,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+498,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+499,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+500,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+501,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+502,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+503,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+504,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+505,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+506,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+507,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+508,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+509,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+510,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+511,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+512,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+513,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+514,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+515,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                              >> 0xaU))),3);
            tracep->chgBit(oldp+516,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                               >> 0xcU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                 >> 0xbU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                 >> 0xbU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                   >> 0xaU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                  >> 0xaU))))));
            tracep->chgBit(oldp+517,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                              >> 0xcU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                >> 0xbU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                               >> 0xaU)))));
            tracep->chgBit(oldp+518,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+519,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+520,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+521,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                              >> 7U))),3);
            tracep->chgBit(oldp+522,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                               >> 9U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                 >> 8U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                 >> 8U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                   >> 7U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                >> 9U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                  >> 7U))))));
            tracep->chgBit(oldp+523,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                              >> 9U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                >> 8U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                               >> 7U)))));
            tracep->chgBit(oldp+524,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                            >> 9U))));
            tracep->chgBit(oldp+525,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                            >> 8U))));
            tracep->chgBit(oldp+526,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                            >> 7U))));
            tracep->chgCData(oldp+527,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+528,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+529,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+530,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+531,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+532,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+533,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+534,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+535,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+536,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+537,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+538,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+539,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                              >> 0xeU))),3);
            tracep->chgBit(oldp+540,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                               >> 0x10U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                 >> 0xfU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                 >> 0xfU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                   >> 0xeU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                  >> 0xeU))))));
            tracep->chgBit(oldp+541,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                              >> 0x10U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                >> 0xfU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                               >> 0xeU)))));
            tracep->chgBit(oldp+542,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+543,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+544,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+545,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+546,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+547,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+548,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+549,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+550,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+551,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                               >> 0x14U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                 >> 0x13U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                 >> 0x13U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                   >> 0x12U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                  >> 0x12U))))));
            tracep->chgBit(oldp+552,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                              >> 0x14U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                >> 0x13U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+553,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+554,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+555,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+556,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+557,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+558,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+559,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+560,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+561,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+562,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+563,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+564,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+565,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+566,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+567,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+568,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+569,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+570,((0x3fffffffU 
                                        & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                            << 6U) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                              >> 0x1aU)))),30);
            tracep->chgBit(oldp+571,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+572,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+573,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+574,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+575,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+576,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+577,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+578,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+579,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+580,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+581,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+582,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+583,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+584,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+585,((7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U])),3);
            tracep->chgBit(oldp+586,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                               >> 2U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                 >> 1U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U])) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                >> 2U) 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U])))));
            tracep->chgBit(oldp+587,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                              >> 2U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                >> 1U)) 
                                            ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U]))));
            tracep->chgBit(oldp+588,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                            >> 2U))));
            tracep->chgBit(oldp+589,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                            >> 1U))));
            tracep->chgBit(oldp+590,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U])));
            tracep->chgCData(oldp+591,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                        >> 0x1dU)),3);
            tracep->chgBit(oldp+592,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                               >> 0x1fU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                 >> 0x1eU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                 >> 0x1eU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                   >> 0x1dU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                >> 0x1fU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                  >> 0x1dU))))));
            tracep->chgBit(oldp+593,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                              >> 0x1fU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                >> 0x1eU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                               >> 0x1dU)))));
            tracep->chgBit(oldp+594,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+595,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+596,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+597,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                              >> 0x1aU))),3);
            tracep->chgBit(oldp+598,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                               >> 0x1cU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                 >> 0x1bU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                   >> 0x1aU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+599,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                              >> 0x1cU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                >> 0x1bU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                               >> 0x1aU)))));
            tracep->chgBit(oldp+600,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+601,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+602,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+603,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+604,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+605,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+606,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+607,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+608,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+609,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+610,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+611,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+612,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+613,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+614,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+615,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+616,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+617,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+618,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+619,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+620,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+621,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                              >> 8U))),3);
            tracep->chgBit(oldp+622,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                               >> 0xaU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                 >> 9U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                 >> 9U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                   >> 8U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                  >> 8U))))));
            tracep->chgBit(oldp+623,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                              >> 0xaU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                >> 9U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                               >> 8U)))));
            tracep->chgBit(oldp+624,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+625,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                            >> 9U))));
            tracep->chgBit(oldp+626,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                            >> 8U))));
            tracep->chgCData(oldp+627,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                              >> 5U))),3);
            tracep->chgBit(oldp+628,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                               >> 7U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                 >> 6U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                 >> 6U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                   >> 5U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                >> 7U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                  >> 5U))))));
            tracep->chgBit(oldp+629,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                              >> 7U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                >> 6U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                               >> 5U)))));
            tracep->chgBit(oldp+630,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                            >> 7U))));
            tracep->chgBit(oldp+631,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                            >> 6U))));
            tracep->chgBit(oldp+632,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                            >> 5U))));
            tracep->chgCData(oldp+633,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+634,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+635,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+636,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+637,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+638,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+639,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+640,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+641,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+642,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+643,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+644,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+645,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+646,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                               >> 0xeU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                 >> 0xdU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                   >> 0xcU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                  >> 0xcU))))));
            tracep->chgBit(oldp+647,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                              >> 0xeU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                >> 0xdU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                               >> 0xcU)))));
            tracep->chgBit(oldp+648,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+649,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+650,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+651,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+652,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+653,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+654,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+655,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+656,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                              >> 0x10U))),3);
            tracep->chgBit(oldp+657,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                               >> 0x12U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                 >> 0x11U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                 >> 0x11U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                   >> 0x10U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                  >> 0x10U))))));
            tracep->chgBit(oldp+658,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                              >> 0x12U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                >> 0x11U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                               >> 0x10U)))));
            tracep->chgBit(oldp+659,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+660,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+661,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+662,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+663,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+664,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+665,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+666,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+667,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+668,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+669,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+670,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+671,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+672,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+673,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+674,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+675,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+676,((0x3fffffffU 
                                        & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                            << 8U) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                              >> 0x18U)))),30);
            tracep->chgBit(oldp+677,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+678,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+679,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+680,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+681,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+682,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+683,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+684,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+685,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+686,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+687,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+688,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+689,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+690,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+691,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                               << 2U) 
                                              | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                 >> 0x1eU)))),3);
            tracep->chgBit(oldp+692,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                 >> 0x1fU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                   >> 0x1eU))) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                  >> 0x1eU))))));
            tracep->chgBit(oldp+693,((1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                >> 0x1fU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                               >> 0x1eU)))));
            tracep->chgBit(oldp+694,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U])));
            tracep->chgBit(oldp+695,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+696,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+697,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                              >> 0x1bU))),3);
            tracep->chgBit(oldp+698,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                               >> 0x1dU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                 >> 0x1cU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                 >> 0x1cU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                   >> 0x1bU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                >> 0x1dU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                  >> 0x1bU))))));
            tracep->chgBit(oldp+699,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                              >> 0x1dU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                >> 0x1cU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                               >> 0x1bU)))));
            tracep->chgBit(oldp+700,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+701,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+702,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+703,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                              >> 0x18U))),3);
            tracep->chgBit(oldp+704,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                               >> 0x1aU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                 >> 0x19U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                 >> 0x19U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                   >> 0x18U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                  >> 0x18U))))));
            tracep->chgBit(oldp+705,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                              >> 0x1aU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                >> 0x19U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                               >> 0x18U)))));
            tracep->chgBit(oldp+706,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+707,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+708,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+709,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+710,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+711,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+712,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+713,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+714,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+715,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+716,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+717,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+718,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+719,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+720,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+721,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+722,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+723,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+724,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+725,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+726,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+727,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                              >> 6U))),3);
            tracep->chgBit(oldp+728,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                               >> 8U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                 >> 7U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                   >> 6U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                  >> 6U))))));
            tracep->chgBit(oldp+729,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                              >> 8U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                >> 7U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                               >> 6U)))));
            tracep->chgBit(oldp+730,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                            >> 8U))));
            tracep->chgBit(oldp+731,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                            >> 7U))));
            tracep->chgBit(oldp+732,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                            >> 6U))));
            tracep->chgCData(oldp+733,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                              >> 3U))),3);
            tracep->chgBit(oldp+734,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                               >> 5U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                 >> 4U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                   >> 3U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                >> 5U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                  >> 3U))))));
            tracep->chgBit(oldp+735,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                              >> 5U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                >> 4U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                               >> 3U)))));
            tracep->chgBit(oldp+736,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                            >> 5U))));
            tracep->chgBit(oldp+737,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                            >> 4U))));
            tracep->chgBit(oldp+738,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                            >> 3U))));
            tracep->chgCData(oldp+739,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+740,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+741,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+742,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+743,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+744,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+745,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+746,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+747,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+748,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+749,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+750,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+751,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                              >> 0xaU))),3);
            tracep->chgBit(oldp+752,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                               >> 0xcU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                 >> 0xbU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                 >> 0xbU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                   >> 0xaU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                  >> 0xaU))))));
            tracep->chgBit(oldp+753,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                              >> 0xcU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                >> 0xbU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                               >> 0xaU)))));
            tracep->chgBit(oldp+754,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+755,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+756,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+757,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+758,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+759,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+760,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+761,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+762,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                              >> 0xeU))),3);
            tracep->chgBit(oldp+763,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                               >> 0x10U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                 >> 0xfU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                 >> 0xfU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                   >> 0xeU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                  >> 0xeU))))));
            tracep->chgBit(oldp+764,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                              >> 0x10U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                >> 0xfU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                               >> 0xeU)))));
            tracep->chgBit(oldp+765,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+766,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+767,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+768,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+769,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+770,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+771,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+772,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+773,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+774,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+775,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+776,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+777,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+778,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+779,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+780,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+781,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+782,((0x3fffffffU 
                                        & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                            << 0xaU) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                              >> 0x16U)))),30);
            tracep->chgBit(oldp+783,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+784,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+785,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+786,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+787,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+788,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+789,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+790,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+791,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+792,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+793,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+794,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+795,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+796,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+797,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                              >> 0x1cU))),3);
            tracep->chgBit(oldp+798,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                               >> 0x1eU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                 >> 0x1dU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                 >> 0x1dU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                   >> 0x1cU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                  >> 0x1cU))))));
            tracep->chgBit(oldp+799,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                              >> 0x1eU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                >> 0x1dU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                               >> 0x1cU)))));
            tracep->chgBit(oldp+800,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+801,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+802,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+803,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                              >> 0x19U))),3);
            tracep->chgBit(oldp+804,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                               >> 0x1bU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                 >> 0x1aU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                 >> 0x1aU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                   >> 0x19U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                >> 0x1bU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+805,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                              >> 0x1bU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                >> 0x1aU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+806,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+807,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+808,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+809,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                              >> 0x16U))),3);
            tracep->chgBit(oldp+810,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                               >> 0x18U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                 >> 0x17U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                 >> 0x17U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                   >> 0x16U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                  >> 0x16U))))));
            tracep->chgBit(oldp+811,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                              >> 0x18U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                >> 0x17U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                               >> 0x16U)))));
            tracep->chgBit(oldp+812,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+813,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+814,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+815,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+816,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+817,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+818,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+819,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+820,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+821,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+822,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+823,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+824,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+825,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+826,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+827,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+828,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+829,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+830,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+831,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+832,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+833,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                              >> 4U))),3);
            tracep->chgBit(oldp+834,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                               >> 6U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                 >> 5U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                 >> 5U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                   >> 4U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                  >> 4U))))));
            tracep->chgBit(oldp+835,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                              >> 6U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                >> 5U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                               >> 4U)))));
            tracep->chgBit(oldp+836,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                            >> 6U))));
            tracep->chgBit(oldp+837,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                            >> 5U))));
            tracep->chgBit(oldp+838,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                            >> 4U))));
            tracep->chgCData(oldp+839,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                              >> 1U))),3);
            tracep->chgBit(oldp+840,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                               >> 3U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                 >> 2U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                 >> 2U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                   >> 1U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                >> 3U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                  >> 1U))))));
            tracep->chgBit(oldp+841,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                              >> 3U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                >> 2U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                               >> 1U)))));
            tracep->chgBit(oldp+842,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                            >> 3U))));
            tracep->chgBit(oldp+843,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                            >> 2U))));
            tracep->chgBit(oldp+844,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                            >> 1U))));
            tracep->chgCData(oldp+845,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+846,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+847,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+848,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+849,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+850,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+851,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+852,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+853,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+854,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+855,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+856,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+857,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                              >> 8U))),3);
            tracep->chgBit(oldp+858,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                               >> 0xaU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                 >> 9U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                 >> 9U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                   >> 8U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                  >> 8U))))));
            tracep->chgBit(oldp+859,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                              >> 0xaU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                >> 9U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                               >> 8U)))));
            tracep->chgBit(oldp+860,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+861,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                            >> 9U))));
            tracep->chgBit(oldp+862,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                            >> 8U))));
            tracep->chgBit(oldp+863,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+864,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+865,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+866,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+867,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+868,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+869,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                               >> 0xeU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                 >> 0xdU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                   >> 0xcU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                  >> 0xcU))))));
            tracep->chgBit(oldp+870,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                              >> 0xeU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                >> 0xdU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                               >> 0xcU)))));
            tracep->chgBit(oldp+871,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+872,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+873,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+874,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+875,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+876,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+877,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+878,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+879,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+880,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+881,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+882,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+883,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+884,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+885,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+886,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+887,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+888,((0x3fffffffU 
                                        & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                            << 0xcU) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                              >> 0x14U)))),30);
            tracep->chgBit(oldp+889,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+890,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+891,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+892,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+893,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+894,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+895,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+896,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+897,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+898,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+899,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+900,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+901,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+902,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+903,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                              >> 0x1aU))),3);
            tracep->chgBit(oldp+904,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                               >> 0x1cU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                 >> 0x1bU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                   >> 0x1aU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+905,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                              >> 0x1cU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                >> 0x1bU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                               >> 0x1aU)))));
            tracep->chgBit(oldp+906,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+907,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+908,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+909,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                              >> 0x17U))),3);
            tracep->chgBit(oldp+910,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                               >> 0x19U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                 >> 0x18U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                   >> 0x17U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                >> 0x19U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                  >> 0x17U))))));
            tracep->chgBit(oldp+911,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                              >> 0x19U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                >> 0x18U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                               >> 0x17U)))));
            tracep->chgBit(oldp+912,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+913,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+914,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+915,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                              >> 0x14U))),3);
            tracep->chgBit(oldp+916,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                               >> 0x16U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                 >> 0x15U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                 >> 0x15U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                   >> 0x14U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                  >> 0x14U))))));
            tracep->chgBit(oldp+917,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                              >> 0x16U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                >> 0x15U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                               >> 0x14U)))));
            tracep->chgBit(oldp+918,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+919,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+920,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+921,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 4U))),3);
            tracep->chgBit(oldp+922,((1U & (((0x60U 
                                              == (0x60U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (0x30U 
                                                == 
                                                (0x30U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0x50U 
                                               == (0x50U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+923,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+924,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 6U))));
            tracep->chgBit(oldp+925,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 5U))));
            tracep->chgBit(oldp+926,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 4U))));
            tracep->chgCData(oldp+927,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+928,((1U & (((0xcU 
                                              == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                            | (0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+929,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+930,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+931,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+932,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                            >> 1U))));
            tracep->chgCData(oldp+933,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+934,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+935,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+936,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+937,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+938,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+939,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                              >> 2U))),3);
            tracep->chgBit(oldp+940,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                               >> 4U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                 >> 3U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                 >> 3U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                   >> 2U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                  >> 2U))))));
            tracep->chgBit(oldp+941,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                              >> 4U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                >> 3U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                               >> 2U)))));
            tracep->chgBit(oldp+942,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                            >> 4U))));
            tracep->chgBit(oldp+943,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                            >> 3U))));
            tracep->chgBit(oldp+944,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                            >> 2U))));
            tracep->chgCData(oldp+945,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                               << 1U) 
                                              | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                 >> 0x1fU)))),3);
            tracep->chgBit(oldp+946,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                               >> 1U) 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U]) 
                                             | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                   >> 0x1fU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                >> 1U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                  >> 0x1fU))))));
            tracep->chgBit(oldp+947,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                              >> 1U) 
                                             ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U]) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                               >> 0x1fU)))));
            tracep->chgBit(oldp+948,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                            >> 1U))));
            tracep->chgBit(oldp+949,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U])));
            tracep->chgBit(oldp+950,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+951,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                              >> 2U))),3);
            tracep->chgBit(oldp+952,((1U & (((0x18U 
                                              == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                             | (0xcU 
                                                == 
                                                (0xcU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+953,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+954,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 4U))));
            tracep->chgBit(oldp+955,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 3U))));
            tracep->chgBit(oldp+956,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                            >> 2U))));
            tracep->chgCData(oldp+957,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+958,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+959,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+960,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+961,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+962,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+963,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                              >> 6U))),3);
            tracep->chgBit(oldp+964,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                               >> 8U) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                 >> 7U)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                   >> 6U))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                  >> 6U))))));
            tracep->chgBit(oldp+965,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                              >> 8U) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                >> 7U)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                               >> 6U)))));
            tracep->chgBit(oldp+966,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                            >> 8U))));
            tracep->chgBit(oldp+967,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                            >> 7U))));
            tracep->chgBit(oldp+968,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                            >> 6U))));
            tracep->chgBit(oldp+969,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+970,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+971,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 2U))));
            tracep->chgBit(oldp+972,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            >> 1U))));
            tracep->chgBit(oldp+973,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+974,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                              >> 0xaU))),3);
            tracep->chgBit(oldp+975,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                               >> 0xcU) 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                 >> 0xbU)) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                 >> 0xbU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                   >> 0xaU))) 
                                            | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                  >> 0xaU))))));
            tracep->chgBit(oldp+976,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                              >> 0xcU) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                >> 0xbU)) 
                                            ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                               >> 0xaU)))));
            tracep->chgBit(oldp+977,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+978,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+979,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+980,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+981,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+982,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+983,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+984,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+985,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+986,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+987,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+988,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+989,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+990,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+991,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 2U))));
            tracep->chgBit(oldp+992,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                            >> 1U))));
            tracep->chgBit(oldp+993,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+994,((0x3fffffffU 
                                        & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                            << 0xeU) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                              >> 0x12U)))),30);
            tracep->chgBit(oldp+995,((1U & (((6U == 
                                              (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+996,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+997,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+998,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+999,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1000,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1001,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1002,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1003,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1004,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1005,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1006,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1007,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1008,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1009,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                               >> 0x18U))),3);
            tracep->chgBit(oldp+1010,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                  >> 0x19U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                  >> 0x19U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                    >> 0x18U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                 >> 0x1aU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                   >> 0x18U))))));
            tracep->chgBit(oldp+1011,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                               >> 0x1aU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                 >> 0x19U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+1012,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1013,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1014,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                             >> 0x18U))));
            tracep->chgCData(oldp+1015,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                               >> 0x15U))),3);
            tracep->chgBit(oldp+1016,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                >> 0x17U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                  >> 0x16U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                  >> 0x16U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                    >> 0x15U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                 >> 0x17U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                   >> 0x15U))))));
            tracep->chgBit(oldp+1017,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                               >> 0x17U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                 >> 0x16U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+1018,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1019,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1020,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1021,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1022,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                  >> 0x13U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                  >> 0x13U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                    >> 0x12U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                 >> 0x14U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                   >> 0x12U))))));
            tracep->chgBit(oldp+1023,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                               >> 0x14U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                 >> 0x13U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1024,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1025,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1026,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1027,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1028,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1029,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1030,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1031,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1032,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1033,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1034,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1035,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1036,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1037,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1038,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1039,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1040,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1041,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1042,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1043,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1044,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1045,((7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U])),3);
            tracep->chgBit(oldp+1046,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                >> 2U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                  >> 1U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U])) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U])))));
            tracep->chgBit(oldp+1047,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                               >> 2U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                 >> 1U)) 
                                             ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U]))));
            tracep->chgBit(oldp+1048,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1049,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1050,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U])));
            tracep->chgCData(oldp+1051,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                         >> 0x1dU)),3);
            tracep->chgBit(oldp+1052,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                >> 0x1fU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                  >> 0x1eU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                  >> 0x1eU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                    >> 0x1dU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                   >> 0x1dU))))));
            tracep->chgBit(oldp+1053,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                               >> 0x1fU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                 >> 0x1eU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+1054,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1055,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1056,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                             >> 0x1dU))));
            tracep->chgCData(oldp+1057,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1058,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1059,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1060,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1061,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1062,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1063,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1064,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1065,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1066,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1067,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1068,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1069,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1070,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                  >> 5U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                  >> 5U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                    >> 4U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                 >> 6U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                   >> 4U))))));
            tracep->chgBit(oldp+1071,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                               >> 6U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                 >> 5U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+1072,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1073,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1074,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1075,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1076,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1077,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1078,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1079,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1080,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                               >> 8U))),3);
            tracep->chgBit(oldp+1081,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                  >> 9U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                  >> 9U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                    >> 8U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+1082,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                               >> 0xaU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                 >> 9U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                >> 8U)))));
            tracep->chgBit(oldp+1083,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1084,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1085,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                             >> 8U))));
            tracep->chgCData(oldp+1086,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1087,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1088,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1089,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1090,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1091,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1092,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1093,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1094,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1095,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1096,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1097,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1098,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1099,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1100,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                             << 0x10U) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                               >> 0x10U)))),30);
            tracep->chgBit(oldp+1101,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1102,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1103,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1104,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1105,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1106,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1107,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1108,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1109,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1110,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1111,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1112,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1113,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1114,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1115,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                               >> 0x16U))),3);
            tracep->chgBit(oldp+1116,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                  >> 0x17U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                  >> 0x17U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                    >> 0x16U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                   >> 0x16U))))));
            tracep->chgBit(oldp+1117,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                               >> 0x18U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                 >> 0x17U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+1118,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1119,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1120,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                             >> 0x16U))));
            tracep->chgCData(oldp+1121,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                               >> 0x13U))),3);
            tracep->chgBit(oldp+1122,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                >> 0x15U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                  >> 0x14U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                  >> 0x14U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                    >> 0x13U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                 >> 0x15U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                   >> 0x13U))))));
            tracep->chgBit(oldp+1123,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                               >> 0x15U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                 >> 0x14U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+1124,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1125,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1126,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                             >> 0x13U))));
            tracep->chgCData(oldp+1127,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                               >> 0x10U))),3);
            tracep->chgBit(oldp+1128,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                  >> 0x11U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                  >> 0x11U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                    >> 0x10U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                 >> 0x12U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                   >> 0x10U))))));
            tracep->chgBit(oldp+1129,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                               >> 0x12U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                 >> 0x11U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+1130,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1131,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1132,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                             >> 0x10U))));
            tracep->chgCData(oldp+1133,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1134,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1135,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1136,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1137,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1138,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1139,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1140,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1141,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1142,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1143,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1144,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1145,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1146,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1147,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1148,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1149,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1150,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1151,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                << 2U) 
                                               | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                  >> 0x1eU)))),3);
            tracep->chgBit(oldp+1152,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                  >> 0x1fU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                    >> 0x1eU))) 
                                             | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                   >> 0x1eU))))));
            tracep->chgBit(oldp+1153,((1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                 >> 0x1fU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+1154,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U])));
            tracep->chgBit(oldp+1155,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1156,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                             >> 0x1eU))));
            tracep->chgCData(oldp+1157,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                               >> 0x1bU))),3);
            tracep->chgBit(oldp+1158,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                >> 0x1dU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                  >> 0x1cU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                  >> 0x1cU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                    >> 0x1bU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                 >> 0x1dU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                   >> 0x1bU))))));
            tracep->chgBit(oldp+1159,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                               >> 0x1dU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                 >> 0x1cU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+1160,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1161,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1162,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                             >> 0x1bU))));
            tracep->chgCData(oldp+1163,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1164,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1165,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1166,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1167,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1168,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1169,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1170,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1171,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1172,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1173,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1174,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1175,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1176,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                  >> 3U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                  >> 3U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                    >> 2U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1177,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                               >> 4U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                 >> 3U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+1178,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1179,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1180,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1181,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1182,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1183,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1184,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1185,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1186,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1187,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                  >> 7U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                  >> 7U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                    >> 6U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                 >> 8U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                   >> 6U))))));
            tracep->chgBit(oldp+1188,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                               >> 8U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                 >> 7U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                >> 6U)))));
            tracep->chgBit(oldp+1189,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1190,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1191,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                             >> 6U))));
            tracep->chgCData(oldp+1192,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1193,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1194,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1195,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1196,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1197,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1198,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1199,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1200,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1201,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1202,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1203,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1204,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1205,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1206,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                             << 0x12U) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                               >> 0xeU)))),30);
            tracep->chgBit(oldp+1207,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1208,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1209,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1210,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1211,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1212,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1213,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1214,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1215,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1216,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1217,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1218,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1219,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1220,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1221,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                               >> 0x14U))),3);
            tracep->chgBit(oldp+1222,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                  >> 0x15U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                  >> 0x15U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                    >> 0x14U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                 >> 0x16U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                   >> 0x14U))))));
            tracep->chgBit(oldp+1223,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                               >> 0x16U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                 >> 0x15U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+1224,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1225,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1226,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                             >> 0x14U))));
            tracep->chgCData(oldp+1227,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                               >> 0x11U))),3);
            tracep->chgBit(oldp+1228,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                >> 0x13U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                  >> 0x12U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                  >> 0x12U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                    >> 0x11U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                 >> 0x13U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                   >> 0x11U))))));
            tracep->chgBit(oldp+1229,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                               >> 0x13U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                 >> 0x12U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+1230,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1231,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1232,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                             >> 0x11U))));
            tracep->chgCData(oldp+1233,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                               >> 0xeU))),3);
            tracep->chgBit(oldp+1234,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                  >> 0xfU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                  >> 0xfU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                    >> 0xeU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                 >> 0x10U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+1235,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                               >> 0x10U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                 >> 0xfU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+1236,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1237,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1238,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                             >> 0xeU))));
            tracep->chgCData(oldp+1239,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1240,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1241,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1242,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1243,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1244,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1245,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1246,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1247,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1248,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1249,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1250,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1251,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1252,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1253,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1254,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1255,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1256,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1257,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                               >> 0x1cU))),3);
            tracep->chgBit(oldp+1258,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                  >> 0x1dU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                  >> 0x1dU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                    >> 0x1cU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                 >> 0x1eU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                   >> 0x1cU))))));
            tracep->chgBit(oldp+1259,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                               >> 0x1eU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                 >> 0x1dU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+1260,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1261,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1262,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                             >> 0x1cU))));
            tracep->chgCData(oldp+1263,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                               >> 0x19U))),3);
            tracep->chgBit(oldp+1264,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                >> 0x1bU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                  >> 0x1aU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                  >> 0x1aU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                    >> 0x19U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                   >> 0x19U))))));
            tracep->chgBit(oldp+1265,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                               >> 0x1bU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                 >> 0x1aU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+1266,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1267,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1268,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                             >> 0x19U))));
            tracep->chgCData(oldp+1269,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1270,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1271,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1272,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1273,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1274,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1275,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1276,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1277,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1278,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1279,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1280,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1281,((7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U])),3);
            tracep->chgBit(oldp+1282,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                >> 2U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                  >> 1U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U])) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U])))));
            tracep->chgBit(oldp+1283,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                               >> 2U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                 >> 1U)) 
                                             ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U]))));
            tracep->chgBit(oldp+1284,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1285,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1286,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U])));
            tracep->chgBit(oldp+1287,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1288,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1289,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1290,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1291,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1292,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1293,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                  >> 5U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                  >> 5U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                    >> 4U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                 >> 6U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                   >> 4U))))));
            tracep->chgBit(oldp+1294,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                               >> 6U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                 >> 5U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+1295,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1296,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1297,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                             >> 4U))));
            tracep->chgCData(oldp+1298,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1299,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1300,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1301,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1302,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1303,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1304,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1305,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1306,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1307,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1308,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1309,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1310,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1311,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1312,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                             << 0x14U) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                               >> 0xcU)))),30);
            tracep->chgBit(oldp+1313,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1314,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1315,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1316,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1317,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1318,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1319,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1320,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1321,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1322,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1323,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1324,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1325,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1326,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1327,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1328,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                  >> 0x13U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                  >> 0x13U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                    >> 0x12U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                 >> 0x14U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                   >> 0x12U))))));
            tracep->chgBit(oldp+1329,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                               >> 0x14U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                 >> 0x13U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1330,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1331,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1332,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1333,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                               >> 0xfU))),3);
            tracep->chgBit(oldp+1334,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                >> 0x11U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                  >> 0x10U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                  >> 0x10U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                    >> 0xfU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                 >> 0x11U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                   >> 0xfU))))));
            tracep->chgBit(oldp+1335,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                               >> 0x11U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                 >> 0x10U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+1336,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1337,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1338,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1339,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1340,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                  >> 0xdU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                  >> 0xdU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                    >> 0xcU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                 >> 0xeU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                   >> 0xcU))))));
            tracep->chgBit(oldp+1341,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                               >> 0xeU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                 >> 0xdU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1342,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1343,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1344,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1345,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1346,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1347,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1348,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1349,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1350,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1351,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1352,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1353,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1354,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1355,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1356,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1357,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1358,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1359,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1360,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1361,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1362,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1363,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                               >> 0x1aU))),3);
            tracep->chgBit(oldp+1364,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                  >> 0x1bU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                    >> 0x1aU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                 >> 0x1cU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                   >> 0x1aU))))));
            tracep->chgBit(oldp+1365,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                               >> 0x1cU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                 >> 0x1bU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+1366,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1367,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1368,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                             >> 0x1aU))));
            tracep->chgCData(oldp+1369,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                               >> 0x17U))),3);
            tracep->chgBit(oldp+1370,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                >> 0x19U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                  >> 0x18U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                  >> 0x18U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                    >> 0x17U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                 >> 0x19U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                   >> 0x17U))))));
            tracep->chgBit(oldp+1371,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                               >> 0x19U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                 >> 0x18U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+1372,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1373,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1374,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                             >> 0x17U))));
            tracep->chgCData(oldp+1375,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1376,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1377,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1378,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1379,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1380,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1381,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1382,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1383,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1384,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1385,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1386,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1387,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                << 2U) 
                                               | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                  >> 0x1eU)))),3);
            tracep->chgBit(oldp+1388,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                  >> 0x1fU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                    >> 0x1eU))) 
                                             | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                   >> 0x1eU))))));
            tracep->chgBit(oldp+1389,((1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                 >> 0x1fU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+1390,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU])));
            tracep->chgBit(oldp+1391,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1392,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1393,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1394,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1395,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1396,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1397,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1398,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1399,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                  >> 3U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                  >> 3U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                    >> 2U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1400,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                               >> 4U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                 >> 3U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                >> 2U)))));
            tracep->chgBit(oldp+1401,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                             >> 4U))));
            tracep->chgBit(oldp+1402,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                             >> 3U))));
            tracep->chgBit(oldp+1403,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                             >> 2U))));
            tracep->chgCData(oldp+1404,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1405,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1406,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1407,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1408,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1409,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1410,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1411,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1412,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1413,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1414,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1415,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1416,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1417,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1418,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                             << 0x16U) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                               >> 0xaU)))),30);
            tracep->chgBit(oldp+1419,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1420,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1421,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1422,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1423,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1424,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1425,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1426,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1427,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1428,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1429,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1430,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1431,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1432,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1433,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                               >> 0x10U))),3);
            tracep->chgBit(oldp+1434,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                  >> 0x11U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                  >> 0x11U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                    >> 0x10U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                 >> 0x12U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                   >> 0x10U))))));
            tracep->chgBit(oldp+1435,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                               >> 0x12U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                 >> 0x11U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+1436,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1437,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1438,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                             >> 0x10U))));
            tracep->chgCData(oldp+1439,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                               >> 0xdU))),3);
            tracep->chgBit(oldp+1440,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                >> 0xfU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                  >> 0xeU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                  >> 0xeU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                    >> 0xdU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                 >> 0xfU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                   >> 0xdU))))));
            tracep->chgBit(oldp+1441,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                               >> 0xfU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                 >> 0xeU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+1442,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1443,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1444,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                             >> 0xdU))));
            tracep->chgCData(oldp+1445,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                               >> 0xaU))),3);
            tracep->chgBit(oldp+1446,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                  >> 0xbU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                  >> 0xbU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                    >> 0xaU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                 >> 0xcU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+1447,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                               >> 0xcU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                 >> 0xbU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1448,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1449,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1450,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                             >> 0xaU))));
            tracep->chgCData(oldp+1451,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1452,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1453,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1454,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1455,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1456,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1457,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1458,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1459,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1460,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1461,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1462,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1463,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1464,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1465,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1466,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1467,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1468,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1469,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                               >> 0x18U))),3);
            tracep->chgBit(oldp+1470,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                  >> 0x19U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                  >> 0x19U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                    >> 0x18U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                 >> 0x1aU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                   >> 0x18U))))));
            tracep->chgBit(oldp+1471,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                               >> 0x1aU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                 >> 0x19U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+1472,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1473,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1474,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                             >> 0x18U))));
            tracep->chgCData(oldp+1475,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                               >> 0x15U))),3);
            tracep->chgBit(oldp+1476,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                >> 0x17U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                  >> 0x16U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                  >> 0x16U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                    >> 0x15U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                 >> 0x17U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                   >> 0x15U))))));
            tracep->chgBit(oldp+1477,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                               >> 0x17U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                 >> 0x16U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+1478,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1479,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1480,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1481,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1482,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1483,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1484,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1485,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1486,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1487,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1488,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1489,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1490,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1491,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1492,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1493,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                               >> 0x1cU))),3);
            tracep->chgBit(oldp+1494,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                  >> 0x1dU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                  >> 0x1dU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                    >> 0x1cU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                 >> 0x1eU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                   >> 0x1cU))))));
            tracep->chgBit(oldp+1495,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                               >> 0x1eU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                 >> 0x1dU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+1496,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1497,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1498,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1499,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1500,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1501,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1502,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1503,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1504,((7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU])),3);
            tracep->chgBit(oldp+1505,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                >> 2U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                  >> 1U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU])) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU])))));
            tracep->chgBit(oldp+1506,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                               >> 2U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                 >> 1U)) 
                                             ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU]))));
            tracep->chgBit(oldp+1507,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                             >> 2U))));
            tracep->chgBit(oldp+1508,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1509,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU])));
            tracep->chgCData(oldp+1510,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1511,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1512,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1513,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1514,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1515,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1516,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1517,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1518,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1519,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1520,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1521,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1522,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1523,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1524,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                             << 0x18U) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                               >> 8U)))),30);
            tracep->chgBit(oldp+1525,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1526,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1527,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1528,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1529,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1530,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1531,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1532,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1533,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1534,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1535,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1536,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1537,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1538,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1539,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                               >> 0xeU))),3);
            tracep->chgBit(oldp+1540,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                  >> 0xfU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                  >> 0xfU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                    >> 0xeU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                 >> 0x10U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+1541,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                               >> 0x10U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                 >> 0xfU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+1542,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1543,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1544,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                             >> 0xeU))));
            tracep->chgCData(oldp+1545,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                               >> 0xbU))),3);
            tracep->chgBit(oldp+1546,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                >> 0xdU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                  >> 0xcU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                  >> 0xcU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                    >> 0xbU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+1547,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                               >> 0xdU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                 >> 0xcU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+1548,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1549,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1550,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                             >> 0xbU))));
            tracep->chgCData(oldp+1551,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                               >> 8U))),3);
            tracep->chgBit(oldp+1552,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                  >> 9U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                  >> 9U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                    >> 8U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+1553,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                               >> 0xaU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                 >> 9U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                >> 8U)))));
            tracep->chgBit(oldp+1554,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1555,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                             >> 9U))));
            tracep->chgBit(oldp+1556,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                             >> 8U))));
            tracep->chgCData(oldp+1557,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1558,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1559,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1560,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1561,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1562,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1563,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1564,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1565,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1566,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1567,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1568,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1569,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1570,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1571,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1572,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1573,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1574,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1575,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                               >> 0x16U))),3);
            tracep->chgBit(oldp+1576,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                  >> 0x17U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                  >> 0x17U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                    >> 0x16U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                   >> 0x16U))))));
            tracep->chgBit(oldp+1577,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                               >> 0x18U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                 >> 0x17U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+1578,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1579,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1580,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                             >> 0x16U))));
            tracep->chgCData(oldp+1581,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                               >> 0x13U))),3);
            tracep->chgBit(oldp+1582,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                >> 0x15U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                  >> 0x14U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                  >> 0x14U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                    >> 0x13U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                 >> 0x15U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                   >> 0x13U))))));
            tracep->chgBit(oldp+1583,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                               >> 0x15U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                 >> 0x14U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+1584,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1585,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1586,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                             >> 0x13U))));
            tracep->chgCData(oldp+1587,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1588,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1589,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1590,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1591,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1592,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1593,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1594,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1595,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1596,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1597,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1598,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1599,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                               >> 0x1aU))),3);
            tracep->chgBit(oldp+1600,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                  >> 0x1bU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                    >> 0x1aU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                 >> 0x1cU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                   >> 0x1aU))))));
            tracep->chgBit(oldp+1601,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                               >> 0x1cU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                 >> 0x1bU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+1602,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1603,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1604,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1605,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1606,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1607,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1608,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1609,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1610,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                << 2U) 
                                               | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                  >> 0x1eU)))),3);
            tracep->chgBit(oldp+1611,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                  >> 0x1fU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                    >> 0x1eU))) 
                                             | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                   >> 0x1eU))))));
            tracep->chgBit(oldp+1612,((1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                 >> 0x1fU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+1613,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU])));
            tracep->chgBit(oldp+1614,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1615,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                             >> 0x1eU))));
            tracep->chgCData(oldp+1616,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1617,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1618,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1619,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1620,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1621,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1622,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1623,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1624,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1625,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1626,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1627,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1628,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1629,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1630,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                             << 0x1aU) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                               >> 6U)))),30);
            tracep->chgBit(oldp+1631,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1632,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1633,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1634,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1635,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1636,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1637,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1638,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1639,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1640,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1641,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1642,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1643,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1644,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1645,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1646,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                  >> 0xdU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                  >> 0xdU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                    >> 0xcU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                 >> 0xeU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                   >> 0xcU))))));
            tracep->chgBit(oldp+1647,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                               >> 0xeU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                 >> 0xdU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1648,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1649,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1650,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1651,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1652,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                >> 0xbU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                  >> 0xaU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                  >> 0xaU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                    >> 9U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                 >> 0xbU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                   >> 9U))))));
            tracep->chgBit(oldp+1653,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                               >> 0xbU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                 >> 0xaU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                >> 9U)))));
            tracep->chgBit(oldp+1654,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1655,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1656,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                             >> 9U))));
            tracep->chgCData(oldp+1657,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1658,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                  >> 7U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                  >> 7U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                    >> 6U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                 >> 8U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                   >> 6U))))));
            tracep->chgBit(oldp+1659,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                               >> 8U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                 >> 7U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                >> 6U)))));
            tracep->chgBit(oldp+1660,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                             >> 8U))));
            tracep->chgBit(oldp+1661,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                             >> 7U))));
            tracep->chgBit(oldp+1662,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                             >> 6U))));
            tracep->chgCData(oldp+1663,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1664,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1665,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1666,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1667,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1668,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1669,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1670,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1671,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1672,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1673,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1674,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1675,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1676,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1677,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1678,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1679,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1680,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1681,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                               >> 0x14U))),3);
            tracep->chgBit(oldp+1682,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                  >> 0x15U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                  >> 0x15U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                    >> 0x14U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                 >> 0x16U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                   >> 0x14U))))));
            tracep->chgBit(oldp+1683,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                               >> 0x16U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                 >> 0x15U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+1684,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1685,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1686,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                             >> 0x14U))));
            tracep->chgCData(oldp+1687,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                               >> 0x11U))),3);
            tracep->chgBit(oldp+1688,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                >> 0x13U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                  >> 0x12U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                  >> 0x12U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                    >> 0x11U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                 >> 0x13U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                   >> 0x11U))))));
            tracep->chgBit(oldp+1689,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                               >> 0x13U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                 >> 0x12U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+1690,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1691,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1692,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                             >> 0x11U))));
            tracep->chgCData(oldp+1693,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1694,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1695,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1696,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1697,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1698,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1699,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1700,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1701,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1702,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1703,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1704,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1705,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                               >> 0x18U))),3);
            tracep->chgBit(oldp+1706,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                  >> 0x19U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                  >> 0x19U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                    >> 0x18U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                 >> 0x1aU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                   >> 0x18U))))));
            tracep->chgBit(oldp+1707,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                               >> 0x1aU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                 >> 0x19U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+1708,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1709,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1710,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1711,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1712,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1713,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1714,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1715,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1716,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                               >> 0x1cU))),3);
            tracep->chgBit(oldp+1717,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                  >> 0x1dU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                  >> 0x1dU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                    >> 0x1cU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                 >> 0x1eU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                   >> 0x1cU))))));
            tracep->chgBit(oldp+1718,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                               >> 0x1eU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                 >> 0x1dU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+1719,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1720,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1721,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                             >> 0x1cU))));
            tracep->chgCData(oldp+1722,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1723,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1724,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1725,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1726,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1727,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1728,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1729,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1730,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1731,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1732,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1733,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1734,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1735,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1736,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                             << 0x1cU) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                               >> 4U)))),30);
            tracep->chgBit(oldp+1737,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1738,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1739,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1740,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1741,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1742,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1743,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1744,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1745,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1746,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1747,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1748,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1749,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1750,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1751,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                               >> 0xaU))),3);
            tracep->chgBit(oldp+1752,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                  >> 0xbU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                  >> 0xbU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                    >> 0xaU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                 >> 0xcU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+1753,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                               >> 0xcU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                 >> 0xbU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1754,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1755,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1756,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                             >> 0xaU))));
            tracep->chgCData(oldp+1757,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                               >> 7U))),3);
            tracep->chgBit(oldp+1758,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                >> 9U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                  >> 8U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                  >> 8U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                    >> 7U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                 >> 9U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                   >> 7U))))));
            tracep->chgBit(oldp+1759,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                               >> 9U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                 >> 8U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                >> 7U)))));
            tracep->chgBit(oldp+1760,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                             >> 9U))));
            tracep->chgBit(oldp+1761,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                             >> 8U))));
            tracep->chgBit(oldp+1762,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                             >> 7U))));
            tracep->chgCData(oldp+1763,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1764,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                  >> 5U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                  >> 5U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                    >> 4U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                 >> 6U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                   >> 4U))))));
            tracep->chgBit(oldp+1765,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                               >> 6U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                 >> 5U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                >> 4U)))));
            tracep->chgBit(oldp+1766,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                             >> 6U))));
            tracep->chgBit(oldp+1767,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                             >> 5U))));
            tracep->chgBit(oldp+1768,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                             >> 4U))));
            tracep->chgCData(oldp+1769,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1770,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1771,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1772,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1773,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1774,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1775,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1776,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1777,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1778,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1779,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1780,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1781,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1782,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1783,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1784,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1785,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1786,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1787,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1788,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                  >> 0x13U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                  >> 0x13U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                    >> 0x12U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                 >> 0x14U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                   >> 0x12U))))));
            tracep->chgBit(oldp+1789,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                               >> 0x14U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                 >> 0x13U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1790,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1791,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1792,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1793,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                               >> 0xfU))),3);
            tracep->chgBit(oldp+1794,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                >> 0x11U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                  >> 0x10U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                  >> 0x10U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                    >> 0xfU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                 >> 0x11U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                   >> 0xfU))))));
            tracep->chgBit(oldp+1795,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                               >> 0x11U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                 >> 0x10U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+1796,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1797,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1798,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1799,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1800,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1801,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1802,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1803,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1804,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1805,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1806,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1807,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1808,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1809,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1810,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1811,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                               >> 0x16U))),3);
            tracep->chgBit(oldp+1812,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                  >> 0x17U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                  >> 0x17U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                    >> 0x16U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                   >> 0x16U))))));
            tracep->chgBit(oldp+1813,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                               >> 0x18U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                 >> 0x17U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+1814,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1815,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1816,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1817,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1818,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1819,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1820,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1821,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1822,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                               >> 0x1aU))),3);
            tracep->chgBit(oldp+1823,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                  >> 0x1bU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                    >> 0x1aU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                 >> 0x1cU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                   >> 0x1aU))))));
            tracep->chgBit(oldp+1824,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                               >> 0x1cU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                 >> 0x1bU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+1825,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1826,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1827,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                             >> 0x1aU))));
            tracep->chgCData(oldp+1828,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1829,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1830,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1831,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1832,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1833,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1834,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1835,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1836,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1837,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1838,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1839,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1840,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1841,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1842,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                         >> 2U)),30);
            tracep->chgBit(oldp+1843,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1844,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1845,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1846,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1847,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1848,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1849,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1850,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1851,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1852,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1853,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1854,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1855,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1856,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1857,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                               >> 8U))),3);
            tracep->chgBit(oldp+1858,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                  >> 9U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                  >> 9U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                    >> 8U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+1859,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                               >> 0xaU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                 >> 9U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                >> 8U)))));
            tracep->chgBit(oldp+1860,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1861,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                             >> 9U))));
            tracep->chgBit(oldp+1862,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                             >> 8U))));
            tracep->chgCData(oldp+1863,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                               >> 5U))),3);
            tracep->chgBit(oldp+1864,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                >> 7U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                  >> 6U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                  >> 6U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                    >> 5U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                   >> 5U))))));
            tracep->chgBit(oldp+1865,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                               >> 7U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                 >> 6U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                >> 5U)))));
            tracep->chgBit(oldp+1866,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                             >> 7U))));
            tracep->chgBit(oldp+1867,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                             >> 6U))));
            tracep->chgBit(oldp+1868,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                             >> 5U))));
            tracep->chgCData(oldp+1869,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1870,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                  >> 3U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                  >> 3U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                    >> 2U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1871,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                               >> 4U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                 >> 3U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                >> 2U)))));
            tracep->chgBit(oldp+1872,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                             >> 4U))));
            tracep->chgBit(oldp+1873,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                             >> 3U))));
            tracep->chgBit(oldp+1874,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                             >> 2U))));
            tracep->chgCData(oldp+1875,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1876,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1877,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1878,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1879,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1880,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1881,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1882,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1883,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1884,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1885,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1886,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1887,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1888,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1889,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1890,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1891,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1892,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1893,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                               >> 0x10U))),3);
            tracep->chgBit(oldp+1894,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                  >> 0x11U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                  >> 0x11U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                    >> 0x10U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                 >> 0x12U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                   >> 0x10U))))));
            tracep->chgBit(oldp+1895,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                               >> 0x12U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                 >> 0x11U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+1896,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1897,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1898,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                             >> 0x10U))));
            tracep->chgCData(oldp+1899,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                               >> 0xdU))),3);
            tracep->chgBit(oldp+1900,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                >> 0xfU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                  >> 0xeU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                  >> 0xeU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                    >> 0xdU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                 >> 0xfU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                   >> 0xdU))))));
            tracep->chgBit(oldp+1901,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                               >> 0xfU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                 >> 0xeU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+1902,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1903,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1904,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                             >> 0xdU))));
            tracep->chgCData(oldp+1905,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1906,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+1907,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+1908,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+1909,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1910,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+1911,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+1912,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1913,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+1914,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1915,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1916,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+1917,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                               >> 0x14U))),3);
            tracep->chgBit(oldp+1918,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                  >> 0x15U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                  >> 0x15U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                    >> 0x14U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                 >> 0x16U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                   >> 0x14U))))));
            tracep->chgBit(oldp+1919,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                               >> 0x16U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                 >> 0x15U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+1920,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1921,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1922,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1923,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1924,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+1925,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1926,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+1927,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+1928,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                               >> 0x18U))),3);
            tracep->chgBit(oldp+1929,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                  >> 0x19U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                  >> 0x19U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                    >> 0x18U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                 >> 0x1aU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                   >> 0x18U))))));
            tracep->chgBit(oldp+1930,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                               >> 0x1aU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                 >> 0x19U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+1931,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1932,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1933,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                             >> 0x18U))));
            tracep->chgCData(oldp+1934,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+1935,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1936,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1937,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1938,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+1939,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+1940,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+1941,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1942,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1943,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+1944,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+1945,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1946,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1947,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+1948,((0x3fffffffU 
                                         & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU])),30);
            tracep->chgBit(oldp+1949,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+1950,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+1951,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+1952,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+1953,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+1954,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+1955,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+1956,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+1957,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+1958,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1959,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+1960,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1961,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1962,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+1963,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1964,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                  >> 7U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                  >> 7U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                    >> 6U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                 >> 8U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                   >> 6U))))));
            tracep->chgBit(oldp+1965,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                               >> 8U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                 >> 7U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                >> 6U)))));
            tracep->chgBit(oldp+1966,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                             >> 8U))));
            tracep->chgBit(oldp+1967,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                             >> 7U))));
            tracep->chgBit(oldp+1968,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                             >> 6U))));
            tracep->chgCData(oldp+1969,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1970,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                >> 5U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                  >> 4U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                  >> 4U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                    >> 3U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                 >> 5U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1971,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                               >> 5U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                 >> 4U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                >> 3U)))));
            tracep->chgBit(oldp+1972,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                             >> 5U))));
            tracep->chgBit(oldp+1973,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                             >> 4U))));
            tracep->chgBit(oldp+1974,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                             >> 3U))));
            tracep->chgCData(oldp+1975,((7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU])),3);
            tracep->chgBit(oldp+1976,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                >> 2U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                  >> 1U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU])) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU])))));
            tracep->chgBit(oldp+1977,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                               >> 2U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                 >> 1U)) 
                                             ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU]))));
            tracep->chgBit(oldp+1978,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                             >> 2U))));
            tracep->chgBit(oldp+1979,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1980,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU])));
            tracep->chgCData(oldp+1981,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1982,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1983,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1984,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+1985,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+1986,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+1987,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1988,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+1989,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+1990,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+1991,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+1992,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+1993,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+1994,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1995,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+1996,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+1997,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+1998,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+1999,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                               >> 0xeU))),3);
            tracep->chgBit(oldp+2000,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                  >> 0xfU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                  >> 0xfU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                    >> 0xeU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                 >> 0x10U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+2001,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                               >> 0x10U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                 >> 0xfU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+2002,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2003,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2004,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                             >> 0xeU))));
            tracep->chgCData(oldp+2005,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                               >> 0xbU))),3);
            tracep->chgBit(oldp+2006,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                >> 0xdU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                  >> 0xcU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                  >> 0xcU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                    >> 0xbU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+2007,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                               >> 0xdU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                 >> 0xcU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+2008,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2009,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2010,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                             >> 0xbU))));
            tracep->chgCData(oldp+2011,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+2012,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+2013,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+2014,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+2015,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+2016,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+2017,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+2018,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+2019,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+2020,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+2021,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+2022,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+2023,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+2024,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                  >> 0x13U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                  >> 0x13U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                    >> 0x12U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                 >> 0x14U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                   >> 0x12U))))));
            tracep->chgBit(oldp+2025,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                               >> 0x14U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                 >> 0x13U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2026,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2027,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2028,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2029,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+2030,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+2031,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+2032,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+2033,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+2034,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                               >> 0x16U))),3);
            tracep->chgBit(oldp+2035,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                  >> 0x17U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                  >> 0x17U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                    >> 0x16U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                   >> 0x16U))))));
            tracep->chgBit(oldp+2036,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                               >> 0x18U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                 >> 0x17U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+2037,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+2038,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+2039,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                             >> 0x16U))));
            tracep->chgCData(oldp+2040,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+2041,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+2042,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+2043,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+2044,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+2045,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+2046,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+2047,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+2048,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+2049,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+2050,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+2051,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+2052,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+2053,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+2054,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                             << 2U) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                               >> 0x1eU)))),30);
            tracep->chgBit(oldp+2055,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+2056,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+2057,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+2058,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+2059,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+2060,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+2061,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+2062,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+2063,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+2064,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+2065,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+2066,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+2067,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+2068,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+2069,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                               >> 4U))),3);
            tracep->chgBit(oldp+2070,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                  >> 5U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                  >> 5U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                    >> 4U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                 >> 6U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                   >> 4U))))));
            tracep->chgBit(oldp+2071,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                               >> 6U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                 >> 5U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+2072,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                             >> 6U))));
            tracep->chgBit(oldp+2073,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                             >> 5U))));
            tracep->chgBit(oldp+2074,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                             >> 4U))));
            tracep->chgCData(oldp+2075,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                               >> 1U))),3);
            tracep->chgBit(oldp+2076,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                >> 3U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                  >> 2U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                  >> 2U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                    >> 1U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                 >> 3U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2077,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                               >> 3U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                 >> 2U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                >> 1U)))));
            tracep->chgBit(oldp+2078,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                             >> 3U))));
            tracep->chgBit(oldp+2079,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                             >> 2U))));
            tracep->chgBit(oldp+2080,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                             >> 1U))));
            tracep->chgCData(oldp+2081,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                << 2U) 
                                               | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                  >> 0x1eU)))),3);
            tracep->chgBit(oldp+2082,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                  >> 0x1fU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                    >> 0x1eU))) 
                                             | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                   >> 0x1eU))))));
            tracep->chgBit(oldp+2083,((1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                 >> 0x1fU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+2084,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U])));
            tracep->chgBit(oldp+2085,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+2086,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                             >> 0x1eU))));
            tracep->chgCData(oldp+2087,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 4U))),3);
            tracep->chgBit(oldp+2088,((1U & (((0x60U 
                                               == (0x60U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0x50U 
                                                == 
                                                (0x50U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+2089,((1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+2090,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 6U))));
            tracep->chgBit(oldp+2091,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 5U))));
            tracep->chgBit(oldp+2092,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 4U))));
            tracep->chgCData(oldp+2093,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                               >> 1U))),3);
            tracep->chgBit(oldp+2094,((1U & (((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))));
            tracep->chgBit(oldp+2095,((1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))));
            tracep->chgBit(oldp+2096,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+2097,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+2098,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s) 
                                             >> 1U))));
            tracep->chgCData(oldp+2099,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in),3);
            tracep->chgBit(oldp+2100,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+2101,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))))));
            tracep->chgBit(oldp+2102,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+2103,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+2104,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))));
            tracep->chgCData(oldp+2105,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+2106,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                  >> 0xdU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                  >> 0xdU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                    >> 0xcU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                 >> 0xeU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                   >> 0xcU))))));
            tracep->chgBit(oldp+2107,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                               >> 0xeU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                 >> 0xdU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+2108,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2109,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2110,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                             >> 0xcU))));
            tracep->chgCData(oldp+2111,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                               >> 9U))),3);
            tracep->chgBit(oldp+2112,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                >> 0xbU) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                  >> 0xaU)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                  >> 0xaU) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                    >> 9U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                 >> 0xbU) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                   >> 9U))))));
            tracep->chgBit(oldp+2113,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                               >> 0xbU) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                 >> 0xaU)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                >> 9U)))));
            tracep->chgBit(oldp+2114,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2115,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2116,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                             >> 9U))));
            tracep->chgCData(oldp+2117,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                               >> 2U))),3);
            tracep->chgBit(oldp+2118,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))) 
                                              | (0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                             | (0x14U 
                                                == 
                                                (0x14U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))))));
            tracep->chgBit(oldp+2119,((1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))));
            tracep->chgBit(oldp+2120,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 4U))));
            tracep->chgBit(oldp+2121,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 3U))));
            tracep->chgBit(oldp+2122,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s) 
                                             >> 2U))));
            tracep->chgCData(oldp+2123,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in),3);
            tracep->chgBit(oldp+2124,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+2125,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))))));
            tracep->chgBit(oldp+2126,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+2127,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+2128,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))));
            tracep->chgCData(oldp+2129,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                               >> 0x10U))),3);
            tracep->chgBit(oldp+2130,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                  >> 0x11U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                  >> 0x11U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                    >> 0x10U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                 >> 0x12U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                   >> 0x10U))))));
            tracep->chgBit(oldp+2131,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                               >> 0x12U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                 >> 0x11U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+2132,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2133,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2134,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2135,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+2136,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))))));
            tracep->chgBit(oldp+2137,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 2U))));
            tracep->chgBit(oldp+2138,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             >> 1U))));
            tracep->chgBit(oldp+2139,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s))));
            tracep->chgCData(oldp+2140,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                               >> 0x14U))),3);
            tracep->chgBit(oldp+2141,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                  >> 0x15U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                  >> 0x15U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                    >> 0x14U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                 >> 0x16U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                   >> 0x14U))))));
            tracep->chgBit(oldp+2142,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                               >> 0x16U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                 >> 0x15U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+2143,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2144,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2145,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                             >> 0x14U))));
            tracep->chgCData(oldp+2146,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in),3);
            tracep->chgBit(oldp+2147,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+2148,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+2149,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+2150,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))));
            tracep->chgCData(oldp+2151,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in),3);
            tracep->chgBit(oldp+2152,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgBit(oldp+2153,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+2154,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+2155,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))));
            tracep->chgCData(oldp+2156,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in),3);
            tracep->chgBit(oldp+2157,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+2158,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+2159,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
            tracep->chgIData(oldp+2160,((0x3fffffffU 
                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                             << 4U) 
                                            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                               >> 0x1cU)))),30);
            tracep->chgBit(oldp+2161,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgBit(oldp+2162,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))))));
            tracep->chgCData(oldp+2163,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s),7);
            tracep->chgCData(oldp+2164,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s),5);
            tracep->chgCData(oldp+2165,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s),3);
            tracep->chgCData(oldp+2166,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fifth_s),2);
            tracep->chgBit(oldp+2167,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa28__in))))));
            tracep->chgBit(oldp+2168,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa29__in))))));
            tracep->chgCData(oldp+2169,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in),3);
            tracep->chgBit(oldp+2170,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                 >> 2U) 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+2171,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))))));
            tracep->chgBit(oldp+2172,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 2U))));
            tracep->chgBit(oldp+2173,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                             >> 1U))));
            tracep->chgBit(oldp+2174,((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))));
            tracep->chgCData(oldp+2175,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                               >> 2U))),3);
            tracep->chgBit(oldp+2176,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                  >> 3U)) 
                                              | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                  >> 3U) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                    >> 2U))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2177,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                               >> 4U) 
                                              ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                 >> 3U)) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+2178,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                             >> 4U))));
            tracep->chgBit(oldp+2179,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                             >> 3U))));
            tracep->chgBit(oldp+2180,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                             >> 2U))));
            tracep->chgCData(oldp+2181,((7U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                << 1U) 
                                               | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                  >> 0x1fU)))),3);
            tracep->chgBit(oldp+2182,((1U & ((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                >> 1U) 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U]) 
                                              | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                    >> 0x1fU))) 
                                             | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                 >> 1U) 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                   >> 0x1fU))))));
            tracep->chgBit(oldp+2183,((1U & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                               >> 1U) 
                                              ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U]) 
                                             ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                >> 0x1fU)))));
            tracep->chgBit(oldp+2184,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2185,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U])));
        }
    }
}
