// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vysyx_22040632_top__Syms.h"


void Vysyx_22040632_top___024root__trace_chg_sub_10(Vysyx_22040632_top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root__trace_chg_sub_10\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 23038);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgBit(oldp+0,((1U & VL_REDXOR_32((0xe0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))));
        tracep->chgBit(oldp+1,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                >> 0x1fU)));
        tracep->chgBit(oldp+2,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                      >> 0x1eU))));
        tracep->chgBit(oldp+3,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                      >> 0x1dU))));
        tracep->chgCData(oldp+4,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                        >> 0x1aU))),3);
        tracep->chgBit(oldp+5,((1U & (((IData)((0x18000000U 
                                                == 
                                                (0x18000000U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU]))) 
                                       | (IData)((0xc000000U 
                                                  == 
                                                  (0xc000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))) 
                                      | (IData)((0x14000000U 
                                                 == 
                                                 (0x14000000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))))));
        tracep->chgBit(oldp+6,((1U & VL_REDXOR_32((0x1c000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))));
        tracep->chgBit(oldp+7,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                      >> 0x1cU))));
        tracep->chgBit(oldp+8,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                      >> 0x1bU))));
        tracep->chgBit(oldp+9,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                      >> 0x1aU))));
        tracep->chgCData(oldp+10,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                         >> 0x17U))),3);
        tracep->chgBit(oldp+11,((1U & (((IData)((0x3000000U 
                                                 == 
                                                 (0x3000000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU]))) 
                                        | (IData)((0x1800000U 
                                                   == 
                                                   (0x1800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))) 
                                       | (IData)((0x2800000U 
                                                  == 
                                                  (0x2800000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))))));
        tracep->chgBit(oldp+12,((1U & VL_REDXOR_32(
                                                   (0x3800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))));
        tracep->chgBit(oldp+13,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                       >> 0x19U))));
        tracep->chgBit(oldp+14,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                       >> 0x18U))));
        tracep->chgBit(oldp+15,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                       >> 0x17U))));
        tracep->chgCData(oldp+16,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                         >> 0x14U))),3);
        tracep->chgBit(oldp+17,((1U & (((IData)((0x600000U 
                                                 == 
                                                 (0x600000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU]))) 
                                        | (IData)((0x300000U 
                                                   == 
                                                   (0x300000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))) 
                                       | (IData)((0x500000U 
                                                  == 
                                                  (0x500000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))))));
        tracep->chgBit(oldp+18,((1U & VL_REDXOR_32(
                                                   (0x700000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))));
        tracep->chgBit(oldp+19,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                       >> 0x16U))));
        tracep->chgBit(oldp+20,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                       >> 0x15U))));
        tracep->chgBit(oldp+21,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                       >> 0x14U))));
        tracep->chgCData(oldp+22,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                         >> 0x11U))),3);
        tracep->chgBit(oldp+23,((1U & (((IData)((0xc0000U 
                                                 == 
                                                 (0xc0000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU]))) 
                                        | (IData)((0x60000U 
                                                   == 
                                                   (0x60000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))) 
                                       | (IData)((0xa0000U 
                                                  == 
                                                  (0xa0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))))));
        tracep->chgBit(oldp+24,((1U & VL_REDXOR_32(
                                                   (0xe0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))));
        tracep->chgBit(oldp+25,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                       >> 0x13U))));
        tracep->chgBit(oldp+26,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                       >> 0x12U))));
        tracep->chgBit(oldp+27,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                       >> 0x11U))));
        tracep->chgCData(oldp+28,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                         >> 0xeU))),3);
        tracep->chgBit(oldp+29,((1U & (((IData)((0x18000U 
                                                 == 
                                                 (0x18000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU]))) 
                                        | (IData)((0xc000U 
                                                   == 
                                                   (0xc000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))) 
                                       | (IData)((0x14000U 
                                                  == 
                                                  (0x14000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))))));
        tracep->chgBit(oldp+30,((1U & VL_REDXOR_32(
                                                   (0x1c000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))));
        tracep->chgBit(oldp+31,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                       >> 0x10U))));
        tracep->chgBit(oldp+32,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                       >> 0xfU))));
        tracep->chgBit(oldp+33,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                       >> 0xeU))));
        tracep->chgCData(oldp+34,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                         >> 0xbU))),3);
        tracep->chgBit(oldp+35,((1U & (((IData)((0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU]))) 
                                        | (IData)((0x1800U 
                                                   == 
                                                   (0x1800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))) 
                                       | (IData)((0x2800U 
                                                  == 
                                                  (0x2800U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))))));
        tracep->chgBit(oldp+36,((1U & VL_REDXOR_16(
                                                   (0x3800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))));
        tracep->chgBit(oldp+37,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                       >> 0xdU))));
        tracep->chgBit(oldp+38,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                       >> 0xcU))));
        tracep->chgBit(oldp+39,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                       >> 0xbU))));
        tracep->chgCData(oldp+40,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                         >> 8U))),3);
        tracep->chgBit(oldp+41,((1U & (((IData)((0x600U 
                                                 == 
                                                 (0x600U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU]))) 
                                        | (IData)((0x300U 
                                                   == 
                                                   (0x300U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))) 
                                       | (IData)((0x500U 
                                                  == 
                                                  (0x500U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))))));
        tracep->chgBit(oldp+42,((1U & VL_REDXOR_16(
                                                   (0x700U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))));
        tracep->chgBit(oldp+43,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                       >> 0xaU))));
        tracep->chgBit(oldp+44,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                       >> 9U))));
        tracep->chgBit(oldp+45,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                       >> 8U))));
        tracep->chgCData(oldp+46,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                         >> 5U))),3);
        tracep->chgBit(oldp+47,((1U & (((IData)((0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU]))) 
                                        | (IData)((0x60U 
                                                   == 
                                                   (0x60U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))) 
                                       | (IData)((0xa0U 
                                                  == 
                                                  (0xa0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))))));
        tracep->chgBit(oldp+48,((1U & VL_REDXOR_8((0xe0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))));
        tracep->chgBit(oldp+49,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                       >> 7U))));
        tracep->chgBit(oldp+50,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                       >> 6U))));
        tracep->chgBit(oldp+51,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                       >> 5U))));
        tracep->chgCData(oldp+52,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                         >> 2U))),3);
        tracep->chgBit(oldp+53,((1U & (((IData)((0x18U 
                                                 == 
                                                 (0x18U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU]))) 
                                        | (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))) 
                                       | (IData)((0x14U 
                                                  == 
                                                  (0x14U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))))));
        tracep->chgBit(oldp+54,((1U & VL_REDXOR_8((0x1cU 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))));
        tracep->chgBit(oldp+55,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                       >> 4U))));
        tracep->chgBit(oldp+56,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                       >> 3U))));
        tracep->chgBit(oldp+57,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                       >> 2U))));
        tracep->chgCData(oldp+58,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])),2);
        tracep->chgBit(oldp+59,((IData)((3U == (3U 
                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))));
        tracep->chgBit(oldp+60,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                       ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                          >> 1U)))));
        tracep->chgBit(oldp+61,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])));
        tracep->chgBit(oldp+62,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                       >> 1U))));
        tracep->chgCData(oldp+63,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))),3);
        tracep->chgBit(oldp+64,((1U & (((IData)((0x600U 
                                                 == 
                                                 (0x600U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                        | (IData)((0x300U 
                                                   == 
                                                   (0x300U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                       | (IData)((0x500U 
                                                  == 
                                                  (0x500U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+65,((1U & VL_REDXOR_16(
                                                   (0x700U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+66,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 0xaU))));
        tracep->chgBit(oldp+67,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 9U))));
        tracep->chgBit(oldp+68,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 8U))));
        tracep->chgCData(oldp+69,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))),3);
        tracep->chgBit(oldp+70,((1U & (((IData)((0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                        | (IData)((0x60U 
                                                   == 
                                                   (0x60U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                       | (IData)((0xa0U 
                                                  == 
                                                  (0xa0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+71,((1U & VL_REDXOR_8((0xe0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+72,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 7U))));
        tracep->chgBit(oldp+73,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 6U))));
        tracep->chgBit(oldp+74,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 5U))));
        tracep->chgCData(oldp+75,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))),3);
        tracep->chgBit(oldp+76,((1U & (((IData)((0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                        | (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                       | (IData)((0x14U 
                                                  == 
                                                  (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+77,((1U & VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+78,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 4U))));
        tracep->chgBit(oldp+79,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 3U))));
        tracep->chgBit(oldp+80,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 2U))));
        tracep->chgIData(oldp+81,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU]),32);
        tracep->chgSData(oldp+82,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+83,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                   >> 0x1dU)),3);
        tracep->chgBit(oldp+84,((1U & (((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))))));
        tracep->chgBit(oldp+85,((1U & VL_REDXOR_32(
                                                   (0xe0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))));
        tracep->chgBit(oldp+86,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                 >> 0x1fU)));
        tracep->chgBit(oldp+87,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                       >> 0x1eU))));
        tracep->chgBit(oldp+88,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                       >> 0x1dU))));
        tracep->chgCData(oldp+89,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                         >> 0x1aU))),3);
        tracep->chgBit(oldp+90,((1U & (((IData)((0x18000000U 
                                                 == 
                                                 (0x18000000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU]))) 
                                        | (IData)((0xc000000U 
                                                   == 
                                                   (0xc000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))) 
                                       | (IData)((0x14000000U 
                                                  == 
                                                  (0x14000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))))));
        tracep->chgBit(oldp+91,((1U & VL_REDXOR_32(
                                                   (0x1c000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))));
        tracep->chgBit(oldp+92,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                       >> 0x1cU))));
        tracep->chgBit(oldp+93,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                       >> 0x1bU))));
        tracep->chgBit(oldp+94,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                       >> 0x1aU))));
        tracep->chgCData(oldp+95,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                         >> 0x17U))),3);
        tracep->chgBit(oldp+96,((1U & (((IData)((0x3000000U 
                                                 == 
                                                 (0x3000000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU]))) 
                                        | (IData)((0x1800000U 
                                                   == 
                                                   (0x1800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))) 
                                       | (IData)((0x2800000U 
                                                  == 
                                                  (0x2800000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))))));
        tracep->chgBit(oldp+97,((1U & VL_REDXOR_32(
                                                   (0x3800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))));
        tracep->chgBit(oldp+98,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                       >> 0x19U))));
        tracep->chgBit(oldp+99,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                       >> 0x18U))));
        tracep->chgBit(oldp+100,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+101,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+102,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))))));
        tracep->chgBit(oldp+103,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))));
        tracep->chgBit(oldp+104,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+105,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+106,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+107,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+108,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))))));
        tracep->chgBit(oldp+109,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))));
        tracep->chgBit(oldp+110,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+111,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+112,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+113,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+114,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))))));
        tracep->chgBit(oldp+115,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))));
        tracep->chgBit(oldp+116,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+117,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+118,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+119,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+120,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))))));
        tracep->chgBit(oldp+121,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))));
        tracep->chgBit(oldp+122,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+123,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+124,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+125,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+126,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))))));
        tracep->chgBit(oldp+127,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))));
        tracep->chgBit(oldp+128,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+129,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                        >> 9U))));
        tracep->chgBit(oldp+130,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                        >> 8U))));
        tracep->chgCData(oldp+131,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+132,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))))));
        tracep->chgBit(oldp+133,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))));
        tracep->chgBit(oldp+134,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                        >> 7U))));
        tracep->chgBit(oldp+135,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                        >> 6U))));
        tracep->chgBit(oldp+136,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                        >> 5U))));
        tracep->chgCData(oldp+137,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+138,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))))));
        tracep->chgBit(oldp+139,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))));
        tracep->chgBit(oldp+140,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                        >> 4U))));
        tracep->chgBit(oldp+141,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                        >> 3U))));
        tracep->chgBit(oldp+142,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                        >> 2U))));
        tracep->chgCData(oldp+143,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])),2);
        tracep->chgBit(oldp+144,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))));
        tracep->chgBit(oldp+145,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                           >> 1U)))));
        tracep->chgBit(oldp+146,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])));
        tracep->chgBit(oldp+147,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                        >> 1U))));
        tracep->chgCData(oldp+148,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+149,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+150,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+151,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+152,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+153,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+154,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+155,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+156,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+157,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+158,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+159,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+160,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+161,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+162,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+163,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+164,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+165,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+166,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU]),32);
        tracep->chgSData(oldp+167,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+168,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+169,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))))));
        tracep->chgBit(oldp+170,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))));
        tracep->chgBit(oldp+171,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+172,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+173,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+174,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+175,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))))));
        tracep->chgBit(oldp+176,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))));
        tracep->chgBit(oldp+177,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+178,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+179,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+180,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+181,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))))));
        tracep->chgBit(oldp+182,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))));
        tracep->chgBit(oldp+183,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+184,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+185,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+186,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+187,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))))));
        tracep->chgBit(oldp+188,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))));
        tracep->chgBit(oldp+189,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+190,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+191,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+192,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+193,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))))));
        tracep->chgBit(oldp+194,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))));
        tracep->chgBit(oldp+195,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+196,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+197,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+198,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+199,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))))));
        tracep->chgBit(oldp+200,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))));
        tracep->chgBit(oldp+201,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+202,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+203,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+204,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+205,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))))));
        tracep->chgBit(oldp+206,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))));
        tracep->chgBit(oldp+207,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+208,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+209,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+210,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+211,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))))));
        tracep->chgBit(oldp+212,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))));
        tracep->chgBit(oldp+213,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+214,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        >> 9U))));
        tracep->chgBit(oldp+215,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        >> 8U))));
        tracep->chgCData(oldp+216,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+217,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))))));
        tracep->chgBit(oldp+218,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))));
        tracep->chgBit(oldp+219,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        >> 7U))));
        tracep->chgBit(oldp+220,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        >> 6U))));
        tracep->chgBit(oldp+221,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        >> 5U))));
        tracep->chgCData(oldp+222,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+223,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))))));
        tracep->chgBit(oldp+224,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))));
        tracep->chgBit(oldp+225,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        >> 4U))));
        tracep->chgBit(oldp+226,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        >> 3U))));
        tracep->chgBit(oldp+227,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        >> 2U))));
        tracep->chgCData(oldp+228,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])),2);
        tracep->chgBit(oldp+229,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))));
        tracep->chgBit(oldp+230,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                           >> 1U)))));
        tracep->chgBit(oldp+231,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])));
        tracep->chgBit(oldp+232,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                        >> 1U))));
        tracep->chgCData(oldp+233,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+234,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+235,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+236,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+237,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+238,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+239,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+240,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+241,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+242,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+243,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+244,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+245,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+246,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+247,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+248,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+249,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+250,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+251,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU]),32);
        tracep->chgSData(oldp+252,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+253,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+254,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))))));
        tracep->chgBit(oldp+255,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))));
        tracep->chgBit(oldp+256,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+257,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+258,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+259,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+260,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))))));
        tracep->chgBit(oldp+261,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))));
        tracep->chgBit(oldp+262,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+263,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+264,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+265,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+266,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))))));
        tracep->chgBit(oldp+267,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))));
        tracep->chgBit(oldp+268,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+269,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+270,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+271,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+272,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))))));
        tracep->chgBit(oldp+273,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))));
        tracep->chgBit(oldp+274,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+275,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+276,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+277,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+278,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))))));
        tracep->chgBit(oldp+279,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))));
        tracep->chgBit(oldp+280,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+281,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+282,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+283,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+284,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))))));
        tracep->chgBit(oldp+285,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))));
        tracep->chgBit(oldp+286,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+287,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+288,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+289,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+290,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))))));
        tracep->chgBit(oldp+291,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))));
        tracep->chgBit(oldp+292,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+293,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+294,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+295,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+296,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))))));
        tracep->chgBit(oldp+297,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))));
        tracep->chgBit(oldp+298,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+299,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        >> 9U))));
        tracep->chgBit(oldp+300,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        >> 8U))));
        tracep->chgCData(oldp+301,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+302,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))))));
        tracep->chgBit(oldp+303,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))));
        tracep->chgBit(oldp+304,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        >> 7U))));
        tracep->chgBit(oldp+305,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        >> 6U))));
        tracep->chgBit(oldp+306,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        >> 5U))));
        tracep->chgCData(oldp+307,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+308,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))))));
        tracep->chgBit(oldp+309,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))));
        tracep->chgBit(oldp+310,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        >> 4U))));
        tracep->chgBit(oldp+311,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        >> 3U))));
        tracep->chgBit(oldp+312,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        >> 2U))));
        tracep->chgCData(oldp+313,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])),2);
        tracep->chgBit(oldp+314,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))));
        tracep->chgBit(oldp+315,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                           >> 1U)))));
        tracep->chgBit(oldp+316,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])));
        tracep->chgBit(oldp+317,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                        >> 1U))));
        tracep->chgCData(oldp+318,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+319,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+320,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+321,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+322,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+323,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+324,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+325,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+326,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+327,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+328,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+329,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+330,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+331,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+332,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+333,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+334,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+335,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+336,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U]),32);
        tracep->chgSData(oldp+337,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+338,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+339,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))))));
        tracep->chgBit(oldp+340,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))));
        tracep->chgBit(oldp+341,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+342,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+343,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+344,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+345,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))))));
        tracep->chgBit(oldp+346,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))));
        tracep->chgBit(oldp+347,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+348,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+349,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+350,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+351,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))))));
        tracep->chgBit(oldp+352,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))));
        tracep->chgBit(oldp+353,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+354,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+355,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+356,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+357,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))))));
        tracep->chgBit(oldp+358,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))));
        tracep->chgBit(oldp+359,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+360,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+361,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+362,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+363,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))))));
        tracep->chgBit(oldp+364,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))));
        tracep->chgBit(oldp+365,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+366,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+367,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+368,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+369,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))))));
        tracep->chgBit(oldp+370,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))));
        tracep->chgBit(oldp+371,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+372,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+373,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+374,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+375,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))))));
        tracep->chgBit(oldp+376,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))));
        tracep->chgBit(oldp+377,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+378,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+379,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+380,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+381,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))))));
        tracep->chgBit(oldp+382,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))));
        tracep->chgBit(oldp+383,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+384,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        >> 9U))));
        tracep->chgBit(oldp+385,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        >> 8U))));
        tracep->chgCData(oldp+386,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+387,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))))));
        tracep->chgBit(oldp+388,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))));
        tracep->chgBit(oldp+389,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        >> 7U))));
        tracep->chgBit(oldp+390,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        >> 6U))));
        tracep->chgBit(oldp+391,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        >> 5U))));
        tracep->chgCData(oldp+392,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+393,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))))));
        tracep->chgBit(oldp+394,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))));
        tracep->chgBit(oldp+395,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        >> 4U))));
        tracep->chgBit(oldp+396,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        >> 3U))));
        tracep->chgBit(oldp+397,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        >> 2U))));
        tracep->chgCData(oldp+398,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])),2);
        tracep->chgBit(oldp+399,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))));
        tracep->chgBit(oldp+400,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                           >> 1U)))));
        tracep->chgBit(oldp+401,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])));
        tracep->chgBit(oldp+402,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                        >> 1U))));
        tracep->chgCData(oldp+403,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+404,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+405,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+406,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+407,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+408,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+409,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+410,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+411,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+412,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+413,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+414,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+415,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+416,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+417,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+418,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+419,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+420,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+421,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U]),32);
        tracep->chgSData(oldp+422,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+423,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+424,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))))));
        tracep->chgBit(oldp+425,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))));
        tracep->chgBit(oldp+426,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+427,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+428,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+429,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+430,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))))));
        tracep->chgBit(oldp+431,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))));
        tracep->chgBit(oldp+432,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+433,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+434,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+435,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+436,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))))));
        tracep->chgBit(oldp+437,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))));
        tracep->chgBit(oldp+438,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+439,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+440,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+441,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+442,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))))));
        tracep->chgBit(oldp+443,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))));
        tracep->chgBit(oldp+444,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+445,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+446,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+447,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+448,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))))));
        tracep->chgBit(oldp+449,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))));
        tracep->chgBit(oldp+450,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+451,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+452,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+453,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+454,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))))));
        tracep->chgBit(oldp+455,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))));
        tracep->chgBit(oldp+456,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+457,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+458,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+459,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+460,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))))));
        tracep->chgBit(oldp+461,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))));
        tracep->chgBit(oldp+462,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+463,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+464,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+465,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+466,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))))));
        tracep->chgBit(oldp+467,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))));
        tracep->chgBit(oldp+468,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+469,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        >> 9U))));
        tracep->chgBit(oldp+470,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        >> 8U))));
        tracep->chgCData(oldp+471,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+472,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))))));
        tracep->chgBit(oldp+473,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))));
        tracep->chgBit(oldp+474,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        >> 7U))));
        tracep->chgBit(oldp+475,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        >> 6U))));
        tracep->chgBit(oldp+476,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        >> 5U))));
        tracep->chgCData(oldp+477,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+478,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))))));
        tracep->chgBit(oldp+479,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))));
        tracep->chgBit(oldp+480,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        >> 4U))));
        tracep->chgBit(oldp+481,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        >> 3U))));
        tracep->chgBit(oldp+482,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        >> 2U))));
        tracep->chgCData(oldp+483,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])),2);
        tracep->chgBit(oldp+484,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))));
        tracep->chgBit(oldp+485,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                           >> 1U)))));
        tracep->chgBit(oldp+486,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])));
        tracep->chgBit(oldp+487,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                        >> 1U))));
        tracep->chgCData(oldp+488,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+489,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+490,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+491,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+492,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+493,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+494,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+495,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+496,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+497,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+498,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+499,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+500,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+501,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+502,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+503,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+504,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+505,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+506,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U]),32);
        tracep->chgSData(oldp+507,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+508,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+509,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))))));
        tracep->chgBit(oldp+510,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))));
        tracep->chgBit(oldp+511,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+512,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+513,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+514,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+515,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))))));
        tracep->chgBit(oldp+516,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))));
        tracep->chgBit(oldp+517,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+518,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+519,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+520,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+521,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))))));
        tracep->chgBit(oldp+522,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))));
        tracep->chgBit(oldp+523,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+524,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+525,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+526,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+527,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))))));
        tracep->chgBit(oldp+528,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))));
        tracep->chgBit(oldp+529,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+530,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+531,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+532,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+533,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))))));
        tracep->chgBit(oldp+534,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))));
        tracep->chgBit(oldp+535,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+536,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+537,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+538,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+539,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))))));
        tracep->chgBit(oldp+540,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))));
        tracep->chgBit(oldp+541,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+542,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+543,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+544,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+545,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))))));
        tracep->chgBit(oldp+546,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))));
        tracep->chgBit(oldp+547,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+548,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+549,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+550,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+551,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))))));
        tracep->chgBit(oldp+552,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))));
        tracep->chgBit(oldp+553,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+554,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        >> 9U))));
        tracep->chgBit(oldp+555,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        >> 8U))));
        tracep->chgCData(oldp+556,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+557,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))))));
        tracep->chgBit(oldp+558,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))));
        tracep->chgBit(oldp+559,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        >> 7U))));
        tracep->chgBit(oldp+560,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        >> 6U))));
        tracep->chgBit(oldp+561,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        >> 5U))));
        tracep->chgCData(oldp+562,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+563,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))))));
        tracep->chgBit(oldp+564,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))));
        tracep->chgBit(oldp+565,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        >> 4U))));
        tracep->chgBit(oldp+566,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        >> 3U))));
        tracep->chgBit(oldp+567,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        >> 2U))));
        tracep->chgCData(oldp+568,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])),2);
        tracep->chgBit(oldp+569,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))));
        tracep->chgBit(oldp+570,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                           >> 1U)))));
        tracep->chgBit(oldp+571,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])));
        tracep->chgBit(oldp+572,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                        >> 1U))));
        tracep->chgCData(oldp+573,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+574,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+575,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+576,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+577,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+578,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+579,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+580,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+581,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+582,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+583,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+584,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+585,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+586,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+587,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+588,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+589,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+590,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+591,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U]),32);
        tracep->chgSData(oldp+592,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+593,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+594,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))))));
        tracep->chgBit(oldp+595,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))));
        tracep->chgBit(oldp+596,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+597,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+598,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+599,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+600,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))))));
        tracep->chgBit(oldp+601,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))));
        tracep->chgBit(oldp+602,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+603,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+604,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+605,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+606,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))))));
        tracep->chgBit(oldp+607,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))));
        tracep->chgBit(oldp+608,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+609,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+610,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+611,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+612,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))))));
        tracep->chgBit(oldp+613,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))));
        tracep->chgBit(oldp+614,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+615,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+616,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+617,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+618,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))))));
        tracep->chgBit(oldp+619,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))));
        tracep->chgBit(oldp+620,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+621,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+622,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+623,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+624,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))))));
        tracep->chgBit(oldp+625,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))));
        tracep->chgBit(oldp+626,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+627,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+628,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+629,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+630,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))))));
        tracep->chgBit(oldp+631,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))));
        tracep->chgBit(oldp+632,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+633,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+634,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+635,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+636,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))))));
        tracep->chgBit(oldp+637,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))));
        tracep->chgBit(oldp+638,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+639,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        >> 9U))));
        tracep->chgBit(oldp+640,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        >> 8U))));
        tracep->chgCData(oldp+641,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+642,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))))));
        tracep->chgBit(oldp+643,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))));
        tracep->chgBit(oldp+644,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        >> 7U))));
        tracep->chgBit(oldp+645,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        >> 6U))));
        tracep->chgBit(oldp+646,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        >> 5U))));
        tracep->chgCData(oldp+647,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+648,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))))));
        tracep->chgBit(oldp+649,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))));
        tracep->chgBit(oldp+650,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        >> 4U))));
        tracep->chgBit(oldp+651,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        >> 3U))));
        tracep->chgBit(oldp+652,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        >> 2U))));
        tracep->chgCData(oldp+653,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])),2);
        tracep->chgBit(oldp+654,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))));
        tracep->chgBit(oldp+655,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                           >> 1U)))));
        tracep->chgBit(oldp+656,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])));
        tracep->chgBit(oldp+657,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                        >> 1U))));
        tracep->chgCData(oldp+658,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+659,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+660,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+661,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+662,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+663,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+664,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+665,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+666,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+667,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+668,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+669,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+670,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+671,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+672,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+673,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+674,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+675,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+676,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U]),32);
        tracep->chgSData(oldp+677,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+678,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+679,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))))));
        tracep->chgBit(oldp+680,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))));
        tracep->chgBit(oldp+681,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+682,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+683,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+684,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+685,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))))));
        tracep->chgBit(oldp+686,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))));
        tracep->chgBit(oldp+687,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+688,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+689,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+690,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+691,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))))));
        tracep->chgBit(oldp+692,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))));
        tracep->chgBit(oldp+693,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+694,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+695,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+696,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+697,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))))));
        tracep->chgBit(oldp+698,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))));
        tracep->chgBit(oldp+699,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+700,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+701,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+702,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+703,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))))));
        tracep->chgBit(oldp+704,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))));
        tracep->chgBit(oldp+705,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+706,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+707,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+708,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+709,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))))));
        tracep->chgBit(oldp+710,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))));
        tracep->chgBit(oldp+711,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+712,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+713,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+714,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+715,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))))));
        tracep->chgBit(oldp+716,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))));
        tracep->chgBit(oldp+717,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+718,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+719,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+720,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+721,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))))));
        tracep->chgBit(oldp+722,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))));
        tracep->chgBit(oldp+723,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+724,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        >> 9U))));
        tracep->chgBit(oldp+725,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        >> 8U))));
        tracep->chgCData(oldp+726,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+727,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))))));
        tracep->chgBit(oldp+728,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))));
        tracep->chgBit(oldp+729,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        >> 7U))));
        tracep->chgBit(oldp+730,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        >> 6U))));
        tracep->chgBit(oldp+731,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        >> 5U))));
        tracep->chgCData(oldp+732,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+733,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))))));
        tracep->chgBit(oldp+734,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))));
        tracep->chgBit(oldp+735,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        >> 4U))));
        tracep->chgBit(oldp+736,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        >> 3U))));
        tracep->chgBit(oldp+737,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        >> 2U))));
        tracep->chgCData(oldp+738,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])),2);
        tracep->chgBit(oldp+739,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))));
        tracep->chgBit(oldp+740,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                           >> 1U)))));
        tracep->chgBit(oldp+741,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])));
        tracep->chgBit(oldp+742,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                        >> 1U))));
        tracep->chgCData(oldp+743,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+744,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+745,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+746,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+747,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+748,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+749,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+750,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+751,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+752,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+753,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+754,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+755,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+756,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+757,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+758,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+759,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+760,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+761,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U]),32);
        tracep->chgSData(oldp+762,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+763,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+764,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))))));
        tracep->chgBit(oldp+765,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))));
        tracep->chgBit(oldp+766,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+767,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+768,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+769,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+770,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))))));
        tracep->chgBit(oldp+771,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))));
        tracep->chgBit(oldp+772,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+773,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+774,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+775,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+776,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))))));
        tracep->chgBit(oldp+777,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))));
        tracep->chgBit(oldp+778,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+779,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+780,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+781,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+782,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))))));
        tracep->chgBit(oldp+783,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))));
        tracep->chgBit(oldp+784,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+785,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+786,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+787,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+788,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))))));
        tracep->chgBit(oldp+789,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))));
        tracep->chgBit(oldp+790,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+791,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+792,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+793,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+794,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))))));
        tracep->chgBit(oldp+795,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))));
        tracep->chgBit(oldp+796,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+797,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+798,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+799,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+800,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))))));
        tracep->chgBit(oldp+801,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))));
        tracep->chgBit(oldp+802,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+803,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+804,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+805,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+806,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))))));
        tracep->chgBit(oldp+807,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))));
        tracep->chgBit(oldp+808,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+809,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        >> 9U))));
        tracep->chgBit(oldp+810,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        >> 8U))));
        tracep->chgCData(oldp+811,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+812,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))))));
        tracep->chgBit(oldp+813,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))));
        tracep->chgBit(oldp+814,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        >> 7U))));
        tracep->chgBit(oldp+815,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        >> 6U))));
        tracep->chgBit(oldp+816,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        >> 5U))));
        tracep->chgCData(oldp+817,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+818,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))))));
        tracep->chgBit(oldp+819,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))));
        tracep->chgBit(oldp+820,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        >> 4U))));
        tracep->chgBit(oldp+821,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        >> 3U))));
        tracep->chgBit(oldp+822,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        >> 2U))));
        tracep->chgCData(oldp+823,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])),2);
        tracep->chgBit(oldp+824,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))));
        tracep->chgBit(oldp+825,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                           >> 1U)))));
        tracep->chgBit(oldp+826,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])));
        tracep->chgBit(oldp+827,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                        >> 1U))));
        tracep->chgCData(oldp+828,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+829,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+830,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+831,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+832,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+833,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+834,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+835,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+836,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+837,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+838,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+839,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+840,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+841,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+842,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+843,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+844,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+845,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+846,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U]),32);
        tracep->chgSData(oldp+847,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+848,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+849,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))))));
        tracep->chgBit(oldp+850,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))));
        tracep->chgBit(oldp+851,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+852,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+853,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+854,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+855,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))))));
        tracep->chgBit(oldp+856,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))));
        tracep->chgBit(oldp+857,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+858,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+859,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+860,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+861,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))))));
        tracep->chgBit(oldp+862,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))));
        tracep->chgBit(oldp+863,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+864,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+865,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+866,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+867,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))))));
        tracep->chgBit(oldp+868,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))));
        tracep->chgBit(oldp+869,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+870,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+871,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+872,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+873,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))))));
        tracep->chgBit(oldp+874,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))));
        tracep->chgBit(oldp+875,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+876,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+877,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+878,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+879,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))))));
        tracep->chgBit(oldp+880,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))));
        tracep->chgBit(oldp+881,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+882,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+883,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+884,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+885,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))))));
        tracep->chgBit(oldp+886,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))));
        tracep->chgBit(oldp+887,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+888,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+889,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+890,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+891,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))))));
        tracep->chgBit(oldp+892,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))));
        tracep->chgBit(oldp+893,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+894,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        >> 9U))));
        tracep->chgBit(oldp+895,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        >> 8U))));
        tracep->chgCData(oldp+896,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+897,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))))));
        tracep->chgBit(oldp+898,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))));
        tracep->chgBit(oldp+899,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        >> 7U))));
        tracep->chgBit(oldp+900,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        >> 6U))));
        tracep->chgBit(oldp+901,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        >> 5U))));
        tracep->chgCData(oldp+902,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+903,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))))));
        tracep->chgBit(oldp+904,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))));
        tracep->chgBit(oldp+905,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        >> 4U))));
        tracep->chgBit(oldp+906,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        >> 3U))));
        tracep->chgBit(oldp+907,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        >> 2U))));
        tracep->chgCData(oldp+908,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])),2);
        tracep->chgBit(oldp+909,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))));
        tracep->chgBit(oldp+910,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                           >> 1U)))));
        tracep->chgBit(oldp+911,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])));
        tracep->chgBit(oldp+912,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                        >> 1U))));
        tracep->chgCData(oldp+913,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+914,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+915,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+916,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+917,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+918,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+919,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+920,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+921,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+922,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+923,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+924,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+925,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+926,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+927,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+928,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+929,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+930,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+931,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U]),32);
        tracep->chgSData(oldp+932,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+933,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+934,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))))));
        tracep->chgBit(oldp+935,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))));
        tracep->chgBit(oldp+936,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+937,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+938,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+939,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+940,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))))));
        tracep->chgBit(oldp+941,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))));
        tracep->chgBit(oldp+942,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+943,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+944,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+945,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+946,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))))));
        tracep->chgBit(oldp+947,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))));
        tracep->chgBit(oldp+948,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+949,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+950,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+951,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+952,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))))));
        tracep->chgBit(oldp+953,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))));
        tracep->chgBit(oldp+954,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+955,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+956,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+957,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+958,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))))));
        tracep->chgBit(oldp+959,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))));
        tracep->chgBit(oldp+960,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+961,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+962,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+963,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+964,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))))));
        tracep->chgBit(oldp+965,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))));
        tracep->chgBit(oldp+966,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+967,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+968,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+969,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+970,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))))));
        tracep->chgBit(oldp+971,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))));
        tracep->chgBit(oldp+972,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+973,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+974,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+975,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+976,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))))));
        tracep->chgBit(oldp+977,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))));
        tracep->chgBit(oldp+978,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+979,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        >> 9U))));
        tracep->chgBit(oldp+980,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        >> 8U))));
        tracep->chgCData(oldp+981,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+982,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))))));
        tracep->chgBit(oldp+983,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))));
        tracep->chgBit(oldp+984,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        >> 7U))));
        tracep->chgBit(oldp+985,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        >> 6U))));
        tracep->chgBit(oldp+986,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        >> 5U))));
        tracep->chgCData(oldp+987,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+988,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))))));
        tracep->chgBit(oldp+989,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))));
        tracep->chgBit(oldp+990,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        >> 4U))));
        tracep->chgBit(oldp+991,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        >> 3U))));
        tracep->chgBit(oldp+992,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        >> 2U))));
        tracep->chgCData(oldp+993,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])),2);
        tracep->chgBit(oldp+994,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))));
        tracep->chgBit(oldp+995,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                           >> 1U)))));
        tracep->chgBit(oldp+996,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])));
        tracep->chgBit(oldp+997,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                        >> 1U))));
        tracep->chgCData(oldp+998,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+999,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1000,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1001,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1002,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1003,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1004,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1005,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1006,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1007,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1008,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1009,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1010,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1011,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1012,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1013,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1014,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1015,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1016,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U]),32);
        tracep->chgSData(oldp+1017,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1018,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1019,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))))));
        tracep->chgBit(oldp+1020,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))));
        tracep->chgBit(oldp+1021,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1022,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1023,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1024,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1025,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))))));
        tracep->chgBit(oldp+1026,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))));
        tracep->chgBit(oldp+1027,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1028,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1029,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1030,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1031,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))))));
        tracep->chgBit(oldp+1032,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))));
        tracep->chgBit(oldp+1033,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1034,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1035,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1036,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1037,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))))));
        tracep->chgBit(oldp+1038,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))));
        tracep->chgBit(oldp+1039,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1040,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1041,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1042,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1043,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))))));
        tracep->chgBit(oldp+1044,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))));
        tracep->chgBit(oldp+1045,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1046,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1047,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1048,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1049,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))))));
        tracep->chgBit(oldp+1050,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))));
        tracep->chgBit(oldp+1051,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1052,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1053,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1054,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1055,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))))));
        tracep->chgBit(oldp+1056,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))));
        tracep->chgBit(oldp+1057,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1058,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1059,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1060,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1061,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))))));
        tracep->chgBit(oldp+1062,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))));
        tracep->chgBit(oldp+1063,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1064,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         >> 9U))));
        tracep->chgBit(oldp+1065,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         >> 8U))));
        tracep->chgCData(oldp+1066,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1067,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))))));
        tracep->chgBit(oldp+1068,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))));
        tracep->chgBit(oldp+1069,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         >> 7U))));
        tracep->chgBit(oldp+1070,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         >> 6U))));
        tracep->chgBit(oldp+1071,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         >> 5U))));
        tracep->chgCData(oldp+1072,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1073,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))))));
        tracep->chgBit(oldp+1074,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))));
        tracep->chgBit(oldp+1075,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         >> 4U))));
        tracep->chgBit(oldp+1076,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         >> 3U))));
        tracep->chgBit(oldp+1077,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         >> 2U))));
        tracep->chgCData(oldp+1078,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])),2);
        tracep->chgBit(oldp+1079,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))));
        tracep->chgBit(oldp+1080,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1081,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])));
        tracep->chgBit(oldp+1082,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                         >> 1U))));
        tracep->chgCData(oldp+1083,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1084,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1085,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1086,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1087,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1088,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1089,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1090,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1091,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1092,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1093,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1094,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1095,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1096,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1097,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1098,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1099,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1100,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1101,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U]),32);
        tracep->chgSData(oldp+1102,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1103,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1104,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))))));
        tracep->chgBit(oldp+1105,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))));
        tracep->chgBit(oldp+1106,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1107,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1108,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1109,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1110,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))))));
        tracep->chgBit(oldp+1111,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))));
        tracep->chgBit(oldp+1112,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1113,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1114,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1115,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1116,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))))));
        tracep->chgBit(oldp+1117,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))));
        tracep->chgBit(oldp+1118,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1119,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1120,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1121,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1122,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))))));
        tracep->chgBit(oldp+1123,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))));
        tracep->chgBit(oldp+1124,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1125,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1126,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1127,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1128,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))))));
        tracep->chgBit(oldp+1129,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))));
        tracep->chgBit(oldp+1130,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1131,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1132,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1133,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1134,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))))));
        tracep->chgBit(oldp+1135,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))));
        tracep->chgBit(oldp+1136,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1137,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1138,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1139,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1140,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))))));
        tracep->chgBit(oldp+1141,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))));
        tracep->chgBit(oldp+1142,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1143,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1144,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1145,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1146,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))))));
        tracep->chgBit(oldp+1147,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))));
        tracep->chgBit(oldp+1148,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1149,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         >> 9U))));
        tracep->chgBit(oldp+1150,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         >> 8U))));
        tracep->chgCData(oldp+1151,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1152,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))))));
        tracep->chgBit(oldp+1153,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))));
        tracep->chgBit(oldp+1154,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         >> 7U))));
        tracep->chgBit(oldp+1155,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         >> 6U))));
        tracep->chgBit(oldp+1156,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         >> 5U))));
        tracep->chgCData(oldp+1157,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1158,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))))));
        tracep->chgBit(oldp+1159,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))));
        tracep->chgBit(oldp+1160,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         >> 4U))));
        tracep->chgBit(oldp+1161,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         >> 3U))));
        tracep->chgBit(oldp+1162,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         >> 2U))));
        tracep->chgCData(oldp+1163,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])),2);
        tracep->chgBit(oldp+1164,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))));
        tracep->chgBit(oldp+1165,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1166,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])));
        tracep->chgBit(oldp+1167,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                         >> 1U))));
        tracep->chgCData(oldp+1168,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1169,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1170,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1171,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1172,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1173,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1174,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1175,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1176,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1177,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1178,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1179,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1180,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1181,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1182,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1183,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1184,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1185,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1186,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU]),32);
        tracep->chgSData(oldp+1187,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1188,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1189,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))))));
        tracep->chgBit(oldp+1190,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))));
        tracep->chgBit(oldp+1191,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1192,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1193,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1194,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1195,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))))));
        tracep->chgBit(oldp+1196,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))));
        tracep->chgBit(oldp+1197,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1198,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1199,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1200,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1201,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))))));
        tracep->chgBit(oldp+1202,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))));
        tracep->chgBit(oldp+1203,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1204,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1205,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1206,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1207,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))))));
        tracep->chgBit(oldp+1208,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))));
        tracep->chgBit(oldp+1209,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1210,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1211,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1212,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1213,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))))));
        tracep->chgBit(oldp+1214,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))));
        tracep->chgBit(oldp+1215,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1216,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1217,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1218,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1219,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))))));
        tracep->chgBit(oldp+1220,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))));
        tracep->chgBit(oldp+1221,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1222,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1223,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1224,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1225,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))))));
        tracep->chgBit(oldp+1226,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))));
        tracep->chgBit(oldp+1227,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1228,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1229,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1230,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1231,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))))));
        tracep->chgBit(oldp+1232,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))));
        tracep->chgBit(oldp+1233,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1234,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         >> 9U))));
        tracep->chgBit(oldp+1235,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         >> 8U))));
        tracep->chgCData(oldp+1236,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1237,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))))));
        tracep->chgBit(oldp+1238,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))));
        tracep->chgBit(oldp+1239,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         >> 7U))));
        tracep->chgBit(oldp+1240,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         >> 6U))));
        tracep->chgBit(oldp+1241,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         >> 5U))));
        tracep->chgCData(oldp+1242,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1243,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))))));
        tracep->chgBit(oldp+1244,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))));
        tracep->chgBit(oldp+1245,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         >> 4U))));
        tracep->chgBit(oldp+1246,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         >> 3U))));
        tracep->chgBit(oldp+1247,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         >> 2U))));
        tracep->chgCData(oldp+1248,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])),2);
        tracep->chgBit(oldp+1249,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))));
        tracep->chgBit(oldp+1250,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1251,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])));
        tracep->chgBit(oldp+1252,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                         >> 1U))));
        tracep->chgCData(oldp+1253,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1254,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1255,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1256,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1257,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1258,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1259,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1260,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1261,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1262,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1263,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1264,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1265,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1266,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1267,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1268,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1269,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1270,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1271,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU]),32);
        tracep->chgSData(oldp+1272,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1273,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1274,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))))));
        tracep->chgBit(oldp+1275,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))));
        tracep->chgBit(oldp+1276,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1277,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1278,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1279,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1280,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))))));
        tracep->chgBit(oldp+1281,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))));
        tracep->chgBit(oldp+1282,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1283,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1284,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1285,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1286,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))))));
        tracep->chgBit(oldp+1287,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))));
        tracep->chgBit(oldp+1288,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1289,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1290,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1291,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1292,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))))));
        tracep->chgBit(oldp+1293,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))));
        tracep->chgBit(oldp+1294,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1295,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1296,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1297,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1298,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))))));
        tracep->chgBit(oldp+1299,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))));
        tracep->chgBit(oldp+1300,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1301,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1302,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1303,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1304,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))))));
        tracep->chgBit(oldp+1305,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))));
        tracep->chgBit(oldp+1306,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1307,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1308,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1309,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1310,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))))));
        tracep->chgBit(oldp+1311,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))));
        tracep->chgBit(oldp+1312,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1313,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1314,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1315,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1316,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))))));
        tracep->chgBit(oldp+1317,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))));
        tracep->chgBit(oldp+1318,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1319,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         >> 9U))));
        tracep->chgBit(oldp+1320,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         >> 8U))));
        tracep->chgCData(oldp+1321,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1322,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))))));
        tracep->chgBit(oldp+1323,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))));
        tracep->chgBit(oldp+1324,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         >> 7U))));
        tracep->chgBit(oldp+1325,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         >> 6U))));
        tracep->chgBit(oldp+1326,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         >> 5U))));
        tracep->chgCData(oldp+1327,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1328,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))))));
        tracep->chgBit(oldp+1329,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))));
        tracep->chgBit(oldp+1330,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         >> 4U))));
        tracep->chgBit(oldp+1331,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         >> 3U))));
        tracep->chgBit(oldp+1332,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         >> 2U))));
        tracep->chgCData(oldp+1333,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])),2);
        tracep->chgBit(oldp+1334,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))));
        tracep->chgBit(oldp+1335,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1336,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])));
        tracep->chgBit(oldp+1337,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                         >> 1U))));
        tracep->chgCData(oldp+1338,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1339,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1340,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1341,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1342,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1343,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1344,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1345,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1346,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1347,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1348,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1349,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1350,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1351,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1352,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1353,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1354,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1355,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1356,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU]),32);
        tracep->chgSData(oldp+1357,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1358,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1359,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))))));
        tracep->chgBit(oldp+1360,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))));
        tracep->chgBit(oldp+1361,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1362,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1363,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1364,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1365,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))))));
        tracep->chgBit(oldp+1366,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))));
        tracep->chgBit(oldp+1367,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1368,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1369,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1370,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1371,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))))));
        tracep->chgBit(oldp+1372,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))));
        tracep->chgBit(oldp+1373,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1374,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1375,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1376,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1377,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))))));
        tracep->chgBit(oldp+1378,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))));
        tracep->chgBit(oldp+1379,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1380,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1381,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1382,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1383,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))))));
        tracep->chgBit(oldp+1384,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))));
        tracep->chgBit(oldp+1385,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1386,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1387,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1388,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1389,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))))));
        tracep->chgBit(oldp+1390,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))));
        tracep->chgBit(oldp+1391,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1392,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1393,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1394,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1395,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))))));
        tracep->chgBit(oldp+1396,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))));
        tracep->chgBit(oldp+1397,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1398,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1399,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1400,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1401,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))))));
        tracep->chgBit(oldp+1402,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))));
        tracep->chgBit(oldp+1403,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1404,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         >> 9U))));
        tracep->chgBit(oldp+1405,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         >> 8U))));
        tracep->chgCData(oldp+1406,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1407,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))))));
        tracep->chgBit(oldp+1408,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))));
        tracep->chgBit(oldp+1409,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         >> 7U))));
        tracep->chgBit(oldp+1410,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         >> 6U))));
        tracep->chgBit(oldp+1411,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         >> 5U))));
        tracep->chgCData(oldp+1412,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1413,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))))));
        tracep->chgBit(oldp+1414,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))));
        tracep->chgBit(oldp+1415,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         >> 4U))));
        tracep->chgBit(oldp+1416,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         >> 3U))));
        tracep->chgBit(oldp+1417,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         >> 2U))));
        tracep->chgCData(oldp+1418,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])),2);
        tracep->chgBit(oldp+1419,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))));
        tracep->chgBit(oldp+1420,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1421,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])));
        tracep->chgBit(oldp+1422,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                         >> 1U))));
        tracep->chgCData(oldp+1423,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1424,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1425,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1426,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1427,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1428,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1429,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1430,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1431,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1432,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1433,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1434,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1435,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1436,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1437,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1438,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1439,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1440,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1441,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU]),32);
        tracep->chgSData(oldp+1442,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1443,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1444,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))))));
        tracep->chgBit(oldp+1445,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))));
        tracep->chgBit(oldp+1446,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1447,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1448,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1449,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1450,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))))));
        tracep->chgBit(oldp+1451,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))));
        tracep->chgBit(oldp+1452,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1453,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1454,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1455,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1456,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))))));
        tracep->chgBit(oldp+1457,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))));
        tracep->chgBit(oldp+1458,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1459,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1460,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1461,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1462,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))))));
        tracep->chgBit(oldp+1463,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))));
        tracep->chgBit(oldp+1464,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1465,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1466,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1467,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1468,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))))));
        tracep->chgBit(oldp+1469,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))));
        tracep->chgBit(oldp+1470,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1471,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1472,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1473,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1474,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))))));
        tracep->chgBit(oldp+1475,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))));
        tracep->chgBit(oldp+1476,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1477,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1478,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1479,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1480,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))))));
        tracep->chgBit(oldp+1481,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))));
        tracep->chgBit(oldp+1482,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1483,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1484,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1485,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1486,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))))));
        tracep->chgBit(oldp+1487,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))));
        tracep->chgBit(oldp+1488,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1489,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         >> 9U))));
        tracep->chgBit(oldp+1490,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         >> 8U))));
        tracep->chgCData(oldp+1491,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1492,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))))));
        tracep->chgBit(oldp+1493,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))));
        tracep->chgBit(oldp+1494,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         >> 7U))));
        tracep->chgBit(oldp+1495,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         >> 6U))));
        tracep->chgBit(oldp+1496,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         >> 5U))));
        tracep->chgCData(oldp+1497,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1498,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))))));
        tracep->chgBit(oldp+1499,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))));
        tracep->chgBit(oldp+1500,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         >> 4U))));
        tracep->chgBit(oldp+1501,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         >> 3U))));
        tracep->chgBit(oldp+1502,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         >> 2U))));
        tracep->chgCData(oldp+1503,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])),2);
        tracep->chgBit(oldp+1504,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))));
        tracep->chgBit(oldp+1505,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1506,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])));
        tracep->chgBit(oldp+1507,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                         >> 1U))));
        tracep->chgCData(oldp+1508,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1509,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1510,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1511,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1512,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1513,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1514,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1515,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1516,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1517,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1518,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1519,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1520,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1521,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1522,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1523,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1524,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1525,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1526,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU]),32);
        tracep->chgSData(oldp+1527,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1528,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1529,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))))));
        tracep->chgBit(oldp+1530,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))));
        tracep->chgBit(oldp+1531,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1532,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1533,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1534,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1535,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))))));
        tracep->chgBit(oldp+1536,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))));
        tracep->chgBit(oldp+1537,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1538,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1539,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1540,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1541,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))))));
        tracep->chgBit(oldp+1542,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))));
        tracep->chgBit(oldp+1543,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1544,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1545,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1546,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1547,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))))));
        tracep->chgBit(oldp+1548,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))));
        tracep->chgBit(oldp+1549,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1550,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1551,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1552,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1553,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))))));
        tracep->chgBit(oldp+1554,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))));
        tracep->chgBit(oldp+1555,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1556,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1557,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1558,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1559,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))))));
        tracep->chgBit(oldp+1560,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))));
        tracep->chgBit(oldp+1561,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1562,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1563,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1564,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1565,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))))));
        tracep->chgBit(oldp+1566,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))));
        tracep->chgBit(oldp+1567,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1568,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1569,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1570,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1571,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))))));
        tracep->chgBit(oldp+1572,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))));
        tracep->chgBit(oldp+1573,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1574,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         >> 9U))));
        tracep->chgBit(oldp+1575,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         >> 8U))));
        tracep->chgCData(oldp+1576,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1577,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))))));
        tracep->chgBit(oldp+1578,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))));
        tracep->chgBit(oldp+1579,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         >> 7U))));
        tracep->chgBit(oldp+1580,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         >> 6U))));
        tracep->chgBit(oldp+1581,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         >> 5U))));
        tracep->chgCData(oldp+1582,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1583,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))))));
        tracep->chgBit(oldp+1584,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))));
        tracep->chgBit(oldp+1585,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         >> 4U))));
        tracep->chgBit(oldp+1586,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         >> 3U))));
        tracep->chgBit(oldp+1587,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         >> 2U))));
        tracep->chgCData(oldp+1588,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])),2);
        tracep->chgBit(oldp+1589,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))));
        tracep->chgBit(oldp+1590,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1591,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])));
        tracep->chgBit(oldp+1592,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                         >> 1U))));
        tracep->chgCData(oldp+1593,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1594,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1595,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1596,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1597,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1598,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1599,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1600,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1601,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1602,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1603,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1604,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1605,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1606,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1607,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1608,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1609,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1610,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1611,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU]),32);
        tracep->chgSData(oldp+1612,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1613,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1614,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))))));
        tracep->chgBit(oldp+1615,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))));
        tracep->chgBit(oldp+1616,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1617,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1618,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1619,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1620,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))))));
        tracep->chgBit(oldp+1621,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))));
        tracep->chgBit(oldp+1622,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1623,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1624,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1625,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1626,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))))));
        tracep->chgBit(oldp+1627,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))));
        tracep->chgBit(oldp+1628,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1629,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1630,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1631,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1632,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))))));
        tracep->chgBit(oldp+1633,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))));
        tracep->chgBit(oldp+1634,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1635,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1636,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1637,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1638,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))))));
        tracep->chgBit(oldp+1639,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))));
        tracep->chgBit(oldp+1640,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1641,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1642,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1643,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1644,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))))));
        tracep->chgBit(oldp+1645,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))));
        tracep->chgBit(oldp+1646,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1647,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1648,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1649,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1650,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))))));
        tracep->chgBit(oldp+1651,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))));
        tracep->chgBit(oldp+1652,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1653,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1654,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1655,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1656,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))))));
        tracep->chgBit(oldp+1657,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))));
        tracep->chgBit(oldp+1658,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1659,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         >> 9U))));
        tracep->chgBit(oldp+1660,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         >> 8U))));
        tracep->chgCData(oldp+1661,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1662,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))))));
        tracep->chgBit(oldp+1663,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))));
        tracep->chgBit(oldp+1664,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         >> 7U))));
        tracep->chgBit(oldp+1665,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         >> 6U))));
        tracep->chgBit(oldp+1666,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         >> 5U))));
        tracep->chgCData(oldp+1667,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1668,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))))));
        tracep->chgBit(oldp+1669,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))));
        tracep->chgBit(oldp+1670,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         >> 4U))));
        tracep->chgBit(oldp+1671,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         >> 3U))));
        tracep->chgBit(oldp+1672,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         >> 2U))));
        tracep->chgCData(oldp+1673,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])),2);
        tracep->chgBit(oldp+1674,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))));
        tracep->chgBit(oldp+1675,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1676,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])));
        tracep->chgBit(oldp+1677,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                         >> 1U))));
        tracep->chgCData(oldp+1678,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1679,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1680,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1681,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1682,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1683,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1684,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1685,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1686,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1687,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1688,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1689,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1690,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1691,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1692,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1693,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1694,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1695,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1696,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U]),32);
        tracep->chgSData(oldp+1697,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1698,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1699,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))))));
        tracep->chgBit(oldp+1700,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))));
        tracep->chgBit(oldp+1701,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1702,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1703,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1704,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1705,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))))));
        tracep->chgBit(oldp+1706,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))));
        tracep->chgBit(oldp+1707,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1708,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1709,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1710,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1711,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))))));
        tracep->chgBit(oldp+1712,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))));
        tracep->chgBit(oldp+1713,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1714,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1715,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1716,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1717,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))))));
        tracep->chgBit(oldp+1718,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))));
        tracep->chgBit(oldp+1719,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1720,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1721,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1722,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1723,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))))));
        tracep->chgBit(oldp+1724,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))));
        tracep->chgBit(oldp+1725,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1726,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1727,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1728,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1729,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))))));
        tracep->chgBit(oldp+1730,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))));
        tracep->chgBit(oldp+1731,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1732,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1733,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1734,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1735,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))))));
        tracep->chgBit(oldp+1736,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))));
        tracep->chgBit(oldp+1737,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1738,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1739,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1740,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1741,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))))));
        tracep->chgBit(oldp+1742,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))));
        tracep->chgBit(oldp+1743,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1744,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         >> 9U))));
        tracep->chgBit(oldp+1745,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         >> 8U))));
        tracep->chgCData(oldp+1746,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1747,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))))));
        tracep->chgBit(oldp+1748,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))));
        tracep->chgBit(oldp+1749,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         >> 7U))));
        tracep->chgBit(oldp+1750,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         >> 6U))));
        tracep->chgBit(oldp+1751,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         >> 5U))));
        tracep->chgCData(oldp+1752,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1753,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))))));
        tracep->chgBit(oldp+1754,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))));
        tracep->chgBit(oldp+1755,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         >> 4U))));
        tracep->chgBit(oldp+1756,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         >> 3U))));
        tracep->chgBit(oldp+1757,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         >> 2U))));
        tracep->chgCData(oldp+1758,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])),2);
        tracep->chgBit(oldp+1759,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])))));
        tracep->chgBit(oldp+1760,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1761,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U])));
        tracep->chgBit(oldp+1762,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                         >> 1U))));
        tracep->chgCData(oldp+1763,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1764,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1765,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1766,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1767,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1768,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1769,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1770,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1771,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1772,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1773,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1774,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1775,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1776,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1777,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1778,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1779,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1780,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1781,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U]),32);
        tracep->chgSData(oldp+1782,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1783,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1784,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))))));
        tracep->chgBit(oldp+1785,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))));
        tracep->chgBit(oldp+1786,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1787,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1788,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1789,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1790,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))))));
        tracep->chgBit(oldp+1791,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))));
        tracep->chgBit(oldp+1792,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1793,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1794,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1795,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1796,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))))));
        tracep->chgBit(oldp+1797,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))));
        tracep->chgBit(oldp+1798,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1799,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1800,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1801,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1802,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))))));
        tracep->chgBit(oldp+1803,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))));
        tracep->chgBit(oldp+1804,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1805,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1806,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1807,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1808,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))))));
        tracep->chgBit(oldp+1809,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))));
        tracep->chgBit(oldp+1810,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1811,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1812,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1813,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1814,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))))));
        tracep->chgBit(oldp+1815,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))));
        tracep->chgBit(oldp+1816,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1817,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1818,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1819,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1820,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))))));
        tracep->chgBit(oldp+1821,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))));
        tracep->chgBit(oldp+1822,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1823,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1824,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1825,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1826,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))))));
        tracep->chgBit(oldp+1827,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))));
        tracep->chgBit(oldp+1828,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1829,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         >> 9U))));
        tracep->chgBit(oldp+1830,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         >> 8U))));
        tracep->chgCData(oldp+1831,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1832,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))))));
        tracep->chgBit(oldp+1833,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))));
        tracep->chgBit(oldp+1834,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         >> 7U))));
        tracep->chgBit(oldp+1835,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         >> 6U))));
        tracep->chgBit(oldp+1836,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         >> 5U))));
        tracep->chgCData(oldp+1837,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1838,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))))));
        tracep->chgBit(oldp+1839,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))));
        tracep->chgBit(oldp+1840,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         >> 4U))));
        tracep->chgBit(oldp+1841,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         >> 3U))));
        tracep->chgBit(oldp+1842,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         >> 2U))));
        tracep->chgCData(oldp+1843,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])),2);
        tracep->chgBit(oldp+1844,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])))));
        tracep->chgBit(oldp+1845,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1846,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U])));
        tracep->chgBit(oldp+1847,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                         >> 1U))));
        tracep->chgCData(oldp+1848,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1849,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1850,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1851,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1852,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1853,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1854,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1855,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1856,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1857,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1858,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1859,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1860,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1861,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1862,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1863,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1864,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1865,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1866,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U]),32);
        tracep->chgSData(oldp+1867,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__82__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1868,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1869,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U])))))));
        tracep->chgBit(oldp+1870,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U])))));
        tracep->chgBit(oldp+1871,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1872,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1873,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1874,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1875,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U])))))));
        tracep->chgBit(oldp+1876,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U])))));
        tracep->chgBit(oldp+1877,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1878,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1879,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1880,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1881,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U])))))));
        tracep->chgBit(oldp+1882,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U])))));
        tracep->chgBit(oldp+1883,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1884,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1885,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1886,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1887,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U])))))));
        tracep->chgBit(oldp+1888,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U])))));
        tracep->chgBit(oldp+1889,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1890,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1891,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1892,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1893,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U])))))));
        tracep->chgBit(oldp+1894,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U])))));
        tracep->chgBit(oldp+1895,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1896,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1897,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1898,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1899,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U])))))));
        tracep->chgBit(oldp+1900,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U])))));
        tracep->chgBit(oldp+1901,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1902,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1903,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1904,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1905,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U])))))));
        tracep->chgBit(oldp+1906,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U])))));
        tracep->chgBit(oldp+1907,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1908,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1909,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1910,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1911,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U])))))));
        tracep->chgBit(oldp+1912,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U])))));
        tracep->chgBit(oldp+1913,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1914,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                         >> 9U))));
        tracep->chgBit(oldp+1915,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                         >> 8U))));
    }
}
