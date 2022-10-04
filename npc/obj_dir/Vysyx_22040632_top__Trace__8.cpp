// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vysyx_22040632_top__Syms.h"


void Vysyx_22040632_top___024root__trace_chg_sub_12(Vysyx_22040632_top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root__trace_chg_sub_12\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 26872);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgBit(oldp+0,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                      >> 0x1bU))));
        tracep->chgBit(oldp+1,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                      >> 0x1aU))));
        tracep->chgCData(oldp+2,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                        >> 0x17U))),3);
        tracep->chgBit(oldp+3,((1U & (((IData)((0x3000000U 
                                                == 
                                                (0x3000000U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U]))) 
                                       | (IData)((0x1800000U 
                                                  == 
                                                  (0x1800000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))) 
                                      | (IData)((0x2800000U 
                                                 == 
                                                 (0x2800000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))))));
        tracep->chgBit(oldp+4,((1U & VL_REDXOR_32((0x3800000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))));
        tracep->chgBit(oldp+5,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                      >> 0x19U))));
        tracep->chgBit(oldp+6,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                      >> 0x18U))));
        tracep->chgBit(oldp+7,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                      >> 0x17U))));
        tracep->chgCData(oldp+8,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                        >> 0x14U))),3);
        tracep->chgBit(oldp+9,((1U & (((IData)((0x600000U 
                                                == 
                                                (0x600000U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U]))) 
                                       | (IData)((0x300000U 
                                                  == 
                                                  (0x300000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))) 
                                      | (IData)((0x500000U 
                                                 == 
                                                 (0x500000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))))));
        tracep->chgBit(oldp+10,((1U & VL_REDXOR_32(
                                                   (0x700000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))));
        tracep->chgBit(oldp+11,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                       >> 0x16U))));
        tracep->chgBit(oldp+12,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                       >> 0x15U))));
        tracep->chgBit(oldp+13,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                       >> 0x14U))));
        tracep->chgCData(oldp+14,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                         >> 0x11U))),3);
        tracep->chgBit(oldp+15,((1U & (((IData)((0xc0000U 
                                                 == 
                                                 (0xc0000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U]))) 
                                        | (IData)((0x60000U 
                                                   == 
                                                   (0x60000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))) 
                                       | (IData)((0xa0000U 
                                                  == 
                                                  (0xa0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))))));
        tracep->chgBit(oldp+16,((1U & VL_REDXOR_32(
                                                   (0xe0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))));
        tracep->chgBit(oldp+17,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                       >> 0x13U))));
        tracep->chgBit(oldp+18,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                       >> 0x12U))));
        tracep->chgBit(oldp+19,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                       >> 0x11U))));
        tracep->chgCData(oldp+20,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                         >> 0xeU))),3);
        tracep->chgBit(oldp+21,((1U & (((IData)((0x18000U 
                                                 == 
                                                 (0x18000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U]))) 
                                        | (IData)((0xc000U 
                                                   == 
                                                   (0xc000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))) 
                                       | (IData)((0x14000U 
                                                  == 
                                                  (0x14000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))))));
        tracep->chgBit(oldp+22,((1U & VL_REDXOR_32(
                                                   (0x1c000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))));
        tracep->chgBit(oldp+23,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                       >> 0x10U))));
        tracep->chgBit(oldp+24,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                       >> 0xfU))));
        tracep->chgBit(oldp+25,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                       >> 0xeU))));
        tracep->chgCData(oldp+26,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                         >> 0xbU))),3);
        tracep->chgBit(oldp+27,((1U & (((IData)((0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U]))) 
                                        | (IData)((0x1800U 
                                                   == 
                                                   (0x1800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))) 
                                       | (IData)((0x2800U 
                                                  == 
                                                  (0x2800U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))))));
        tracep->chgBit(oldp+28,((1U & VL_REDXOR_16(
                                                   (0x3800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))));
        tracep->chgBit(oldp+29,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                       >> 0xdU))));
        tracep->chgBit(oldp+30,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                       >> 0xcU))));
        tracep->chgBit(oldp+31,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                       >> 0xbU))));
        tracep->chgCData(oldp+32,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                         >> 8U))),3);
        tracep->chgBit(oldp+33,((1U & (((IData)((0x600U 
                                                 == 
                                                 (0x600U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U]))) 
                                        | (IData)((0x300U 
                                                   == 
                                                   (0x300U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))) 
                                       | (IData)((0x500U 
                                                  == 
                                                  (0x500U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))))));
        tracep->chgBit(oldp+34,((1U & VL_REDXOR_16(
                                                   (0x700U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))));
        tracep->chgBit(oldp+35,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                       >> 0xaU))));
        tracep->chgBit(oldp+36,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                       >> 9U))));
        tracep->chgBit(oldp+37,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                       >> 8U))));
        tracep->chgCData(oldp+38,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                         >> 5U))),3);
        tracep->chgBit(oldp+39,((1U & (((IData)((0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U]))) 
                                        | (IData)((0x60U 
                                                   == 
                                                   (0x60U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))) 
                                       | (IData)((0xa0U 
                                                  == 
                                                  (0xa0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))))));
        tracep->chgBit(oldp+40,((1U & VL_REDXOR_8((0xe0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))));
        tracep->chgBit(oldp+41,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                       >> 7U))));
        tracep->chgBit(oldp+42,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                       >> 6U))));
        tracep->chgBit(oldp+43,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                       >> 5U))));
        tracep->chgCData(oldp+44,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                         >> 2U))),3);
        tracep->chgBit(oldp+45,((1U & (((IData)((0x18U 
                                                 == 
                                                 (0x18U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U]))) 
                                        | (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))) 
                                       | (IData)((0x14U 
                                                  == 
                                                  (0x14U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))))));
        tracep->chgBit(oldp+46,((1U & VL_REDXOR_8((0x1cU 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))));
        tracep->chgBit(oldp+47,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                       >> 4U))));
        tracep->chgBit(oldp+48,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                       >> 3U))));
        tracep->chgBit(oldp+49,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                       >> 2U))));
        tracep->chgCData(oldp+50,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])),2);
        tracep->chgBit(oldp+51,((IData)((3U == (3U 
                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))));
        tracep->chgBit(oldp+52,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                       ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                          >> 1U)))));
        tracep->chgBit(oldp+53,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])));
        tracep->chgBit(oldp+54,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                       >> 1U))));
        tracep->chgCData(oldp+55,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))),3);
        tracep->chgBit(oldp+56,((1U & (((IData)((0x600U 
                                                 == 
                                                 (0x600U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                        | (IData)((0x300U 
                                                   == 
                                                   (0x300U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                       | (IData)((0x500U 
                                                  == 
                                                  (0x500U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+57,((1U & VL_REDXOR_16(
                                                   (0x700U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+58,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 0xaU))));
        tracep->chgBit(oldp+59,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 9U))));
        tracep->chgBit(oldp+60,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 8U))));
        tracep->chgCData(oldp+61,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))),3);
        tracep->chgBit(oldp+62,((1U & (((IData)((0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                        | (IData)((0x60U 
                                                   == 
                                                   (0x60U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                       | (IData)((0xa0U 
                                                  == 
                                                  (0xa0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+63,((1U & VL_REDXOR_8((0xe0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+64,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 7U))));
        tracep->chgBit(oldp+65,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 6U))));
        tracep->chgBit(oldp+66,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 5U))));
        tracep->chgCData(oldp+67,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))),3);
        tracep->chgBit(oldp+68,((1U & (((IData)((0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                        | (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                       | (IData)((0x14U 
                                                  == 
                                                  (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+69,((1U & VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+70,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 4U))));
        tracep->chgBit(oldp+71,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 3U))));
        tracep->chgBit(oldp+72,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 2U))));
        tracep->chgIData(oldp+73,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU]),32);
        tracep->chgSData(oldp+74,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+75,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                   >> 0x1dU)),3);
        tracep->chgBit(oldp+76,((1U & (((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))))));
        tracep->chgBit(oldp+77,((1U & VL_REDXOR_32(
                                                   (0xe0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))));
        tracep->chgBit(oldp+78,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                 >> 0x1fU)));
        tracep->chgBit(oldp+79,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                       >> 0x1eU))));
        tracep->chgBit(oldp+80,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                       >> 0x1dU))));
        tracep->chgCData(oldp+81,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                         >> 0x1aU))),3);
        tracep->chgBit(oldp+82,((1U & (((IData)((0x18000000U 
                                                 == 
                                                 (0x18000000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU]))) 
                                        | (IData)((0xc000000U 
                                                   == 
                                                   (0xc000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))) 
                                       | (IData)((0x14000000U 
                                                  == 
                                                  (0x14000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))))));
        tracep->chgBit(oldp+83,((1U & VL_REDXOR_32(
                                                   (0x1c000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))));
        tracep->chgBit(oldp+84,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                       >> 0x1cU))));
        tracep->chgBit(oldp+85,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                       >> 0x1bU))));
        tracep->chgBit(oldp+86,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                       >> 0x1aU))));
        tracep->chgCData(oldp+87,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                         >> 0x17U))),3);
        tracep->chgBit(oldp+88,((1U & (((IData)((0x3000000U 
                                                 == 
                                                 (0x3000000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU]))) 
                                        | (IData)((0x1800000U 
                                                   == 
                                                   (0x1800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))) 
                                       | (IData)((0x2800000U 
                                                  == 
                                                  (0x2800000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))))));
        tracep->chgBit(oldp+89,((1U & VL_REDXOR_32(
                                                   (0x3800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))));
        tracep->chgBit(oldp+90,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                       >> 0x19U))));
        tracep->chgBit(oldp+91,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                       >> 0x18U))));
        tracep->chgBit(oldp+92,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                       >> 0x17U))));
        tracep->chgCData(oldp+93,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                         >> 0x14U))),3);
        tracep->chgBit(oldp+94,((1U & (((IData)((0x600000U 
                                                 == 
                                                 (0x600000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU]))) 
                                        | (IData)((0x300000U 
                                                   == 
                                                   (0x300000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))) 
                                       | (IData)((0x500000U 
                                                  == 
                                                  (0x500000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))))));
        tracep->chgBit(oldp+95,((1U & VL_REDXOR_32(
                                                   (0x700000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))));
        tracep->chgBit(oldp+96,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                       >> 0x16U))));
        tracep->chgBit(oldp+97,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                       >> 0x15U))));
        tracep->chgBit(oldp+98,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                       >> 0x14U))));
        tracep->chgCData(oldp+99,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                         >> 0x11U))),3);
        tracep->chgBit(oldp+100,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))))));
        tracep->chgBit(oldp+101,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))));
        tracep->chgBit(oldp+102,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+103,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+104,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+105,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+106,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))))));
        tracep->chgBit(oldp+107,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))));
        tracep->chgBit(oldp+108,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+109,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+110,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+111,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+112,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))))));
        tracep->chgBit(oldp+113,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))));
        tracep->chgBit(oldp+114,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+115,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+116,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+117,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+118,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))))));
        tracep->chgBit(oldp+119,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))));
        tracep->chgBit(oldp+120,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+121,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                        >> 9U))));
        tracep->chgBit(oldp+122,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                        >> 8U))));
        tracep->chgCData(oldp+123,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+124,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))))));
        tracep->chgBit(oldp+125,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))));
        tracep->chgBit(oldp+126,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                        >> 7U))));
        tracep->chgBit(oldp+127,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                        >> 6U))));
        tracep->chgBit(oldp+128,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                        >> 5U))));
        tracep->chgCData(oldp+129,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+130,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))))));
        tracep->chgBit(oldp+131,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))));
        tracep->chgBit(oldp+132,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                        >> 4U))));
        tracep->chgBit(oldp+133,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                        >> 3U))));
        tracep->chgBit(oldp+134,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                        >> 2U))));
        tracep->chgCData(oldp+135,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])),2);
        tracep->chgBit(oldp+136,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))));
        tracep->chgBit(oldp+137,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                           >> 1U)))));
        tracep->chgBit(oldp+138,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])));
        tracep->chgBit(oldp+139,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                        >> 1U))));
        tracep->chgCData(oldp+140,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+141,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+142,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+143,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+144,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+145,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+146,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+147,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+148,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+149,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+150,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+151,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+152,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+153,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+154,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+155,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+156,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+157,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+158,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU]),32);
        tracep->chgSData(oldp+159,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+160,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+161,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))))));
        tracep->chgBit(oldp+162,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))));
        tracep->chgBit(oldp+163,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+164,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+165,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+166,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+167,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))))));
        tracep->chgBit(oldp+168,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))));
        tracep->chgBit(oldp+169,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+170,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+171,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+172,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+173,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))))));
        tracep->chgBit(oldp+174,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))));
        tracep->chgBit(oldp+175,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+176,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+177,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+178,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+179,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))))));
        tracep->chgBit(oldp+180,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))));
        tracep->chgBit(oldp+181,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+182,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+183,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+184,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+185,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))))));
        tracep->chgBit(oldp+186,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))));
        tracep->chgBit(oldp+187,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+188,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+189,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+190,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+191,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))))));
        tracep->chgBit(oldp+192,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))));
        tracep->chgBit(oldp+193,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+194,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+195,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+196,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+197,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))))));
        tracep->chgBit(oldp+198,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))));
        tracep->chgBit(oldp+199,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+200,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+201,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+202,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+203,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))))));
        tracep->chgBit(oldp+204,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))));
        tracep->chgBit(oldp+205,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+206,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        >> 9U))));
        tracep->chgBit(oldp+207,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        >> 8U))));
        tracep->chgCData(oldp+208,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+209,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))))));
        tracep->chgBit(oldp+210,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))));
        tracep->chgBit(oldp+211,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        >> 7U))));
        tracep->chgBit(oldp+212,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        >> 6U))));
        tracep->chgBit(oldp+213,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        >> 5U))));
        tracep->chgCData(oldp+214,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+215,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))))));
        tracep->chgBit(oldp+216,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))));
        tracep->chgBit(oldp+217,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        >> 4U))));
        tracep->chgBit(oldp+218,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        >> 3U))));
        tracep->chgBit(oldp+219,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        >> 2U))));
        tracep->chgCData(oldp+220,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])),2);
        tracep->chgBit(oldp+221,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))));
        tracep->chgBit(oldp+222,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                           >> 1U)))));
        tracep->chgBit(oldp+223,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])));
        tracep->chgBit(oldp+224,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                        >> 1U))));
        tracep->chgCData(oldp+225,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+226,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+227,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+228,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+229,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+230,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+231,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+232,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+233,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+234,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+235,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+236,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+237,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+238,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+239,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+240,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+241,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+242,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+243,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU]),32);
        tracep->chgSData(oldp+244,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+245,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+246,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))))));
        tracep->chgBit(oldp+247,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))));
        tracep->chgBit(oldp+248,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+249,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+250,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+251,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+252,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))))));
        tracep->chgBit(oldp+253,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))));
        tracep->chgBit(oldp+254,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+255,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+256,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+257,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+258,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))))));
        tracep->chgBit(oldp+259,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))));
        tracep->chgBit(oldp+260,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+261,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+262,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+263,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+264,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))))));
        tracep->chgBit(oldp+265,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))));
        tracep->chgBit(oldp+266,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+267,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+268,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+269,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+270,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))))));
        tracep->chgBit(oldp+271,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))));
        tracep->chgBit(oldp+272,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+273,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+274,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+275,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+276,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))))));
        tracep->chgBit(oldp+277,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))));
        tracep->chgBit(oldp+278,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+279,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+280,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+281,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+282,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))))));
        tracep->chgBit(oldp+283,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))));
        tracep->chgBit(oldp+284,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+285,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+286,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+287,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+288,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))))));
        tracep->chgBit(oldp+289,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))));
        tracep->chgBit(oldp+290,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+291,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        >> 9U))));
        tracep->chgBit(oldp+292,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        >> 8U))));
        tracep->chgCData(oldp+293,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+294,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))))));
        tracep->chgBit(oldp+295,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))));
        tracep->chgBit(oldp+296,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        >> 7U))));
        tracep->chgBit(oldp+297,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        >> 6U))));
        tracep->chgBit(oldp+298,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        >> 5U))));
        tracep->chgCData(oldp+299,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+300,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))))));
        tracep->chgBit(oldp+301,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))));
        tracep->chgBit(oldp+302,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        >> 4U))));
        tracep->chgBit(oldp+303,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        >> 3U))));
        tracep->chgBit(oldp+304,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        >> 2U))));
        tracep->chgCData(oldp+305,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])),2);
        tracep->chgBit(oldp+306,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))));
        tracep->chgBit(oldp+307,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                           >> 1U)))));
        tracep->chgBit(oldp+308,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])));
        tracep->chgBit(oldp+309,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                        >> 1U))));
        tracep->chgCData(oldp+310,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+311,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+312,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+313,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+314,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+315,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+316,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+317,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+318,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+319,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+320,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+321,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+322,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+323,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+324,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+325,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+326,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+327,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+328,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU]),32);
        tracep->chgSData(oldp+329,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+330,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+331,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))))));
        tracep->chgBit(oldp+332,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))));
        tracep->chgBit(oldp+333,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+334,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+335,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+336,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+337,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))))));
        tracep->chgBit(oldp+338,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))));
        tracep->chgBit(oldp+339,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+340,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+341,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+342,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+343,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))))));
        tracep->chgBit(oldp+344,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))));
        tracep->chgBit(oldp+345,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+346,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+347,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+348,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+349,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))))));
        tracep->chgBit(oldp+350,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))));
        tracep->chgBit(oldp+351,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+352,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+353,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+354,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+355,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))))));
        tracep->chgBit(oldp+356,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))));
        tracep->chgBit(oldp+357,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+358,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+359,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+360,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+361,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))))));
        tracep->chgBit(oldp+362,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))));
        tracep->chgBit(oldp+363,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+364,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+365,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+366,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+367,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))))));
        tracep->chgBit(oldp+368,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))));
        tracep->chgBit(oldp+369,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+370,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+371,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+372,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+373,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))))));
        tracep->chgBit(oldp+374,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))));
        tracep->chgBit(oldp+375,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+376,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        >> 9U))));
        tracep->chgBit(oldp+377,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        >> 8U))));
        tracep->chgCData(oldp+378,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+379,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))))));
        tracep->chgBit(oldp+380,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))));
        tracep->chgBit(oldp+381,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        >> 7U))));
        tracep->chgBit(oldp+382,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        >> 6U))));
        tracep->chgBit(oldp+383,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        >> 5U))));
        tracep->chgCData(oldp+384,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+385,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))))));
        tracep->chgBit(oldp+386,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))));
        tracep->chgBit(oldp+387,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        >> 4U))));
        tracep->chgBit(oldp+388,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        >> 3U))));
        tracep->chgBit(oldp+389,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        >> 2U))));
        tracep->chgCData(oldp+390,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])),2);
        tracep->chgBit(oldp+391,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))));
        tracep->chgBit(oldp+392,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                           >> 1U)))));
        tracep->chgBit(oldp+393,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])));
        tracep->chgBit(oldp+394,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                        >> 1U))));
        tracep->chgCData(oldp+395,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+396,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+397,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+398,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+399,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+400,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+401,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+402,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+403,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+404,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+405,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+406,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+407,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+408,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+409,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+410,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+411,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+412,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+413,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU]),32);
        tracep->chgSData(oldp+414,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+415,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+416,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))))));
        tracep->chgBit(oldp+417,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))));
        tracep->chgBit(oldp+418,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+419,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+420,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+421,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+422,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))))));
        tracep->chgBit(oldp+423,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))));
        tracep->chgBit(oldp+424,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+425,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+426,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+427,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+428,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))))));
        tracep->chgBit(oldp+429,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))));
        tracep->chgBit(oldp+430,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+431,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+432,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+433,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+434,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))))));
        tracep->chgBit(oldp+435,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))));
        tracep->chgBit(oldp+436,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+437,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+438,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+439,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+440,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))))));
        tracep->chgBit(oldp+441,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))));
        tracep->chgBit(oldp+442,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+443,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+444,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+445,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+446,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))))));
        tracep->chgBit(oldp+447,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))));
        tracep->chgBit(oldp+448,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+449,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+450,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+451,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+452,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))))));
        tracep->chgBit(oldp+453,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))));
        tracep->chgBit(oldp+454,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+455,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+456,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+457,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+458,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))))));
        tracep->chgBit(oldp+459,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))));
        tracep->chgBit(oldp+460,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+461,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        >> 9U))));
        tracep->chgBit(oldp+462,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        >> 8U))));
        tracep->chgCData(oldp+463,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+464,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))))));
        tracep->chgBit(oldp+465,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))));
        tracep->chgBit(oldp+466,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        >> 7U))));
        tracep->chgBit(oldp+467,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        >> 6U))));
        tracep->chgBit(oldp+468,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        >> 5U))));
        tracep->chgCData(oldp+469,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+470,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))))));
        tracep->chgBit(oldp+471,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))));
        tracep->chgBit(oldp+472,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        >> 4U))));
        tracep->chgBit(oldp+473,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        >> 3U))));
        tracep->chgBit(oldp+474,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        >> 2U))));
        tracep->chgCData(oldp+475,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])),2);
        tracep->chgBit(oldp+476,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))));
        tracep->chgBit(oldp+477,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                           >> 1U)))));
        tracep->chgBit(oldp+478,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])));
        tracep->chgBit(oldp+479,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                        >> 1U))));
        tracep->chgCData(oldp+480,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+481,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+482,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+483,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+484,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+485,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+486,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+487,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+488,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+489,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+490,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+491,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+492,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+493,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+494,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+495,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+496,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+497,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+498,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU]),32);
        tracep->chgSData(oldp+499,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+500,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+501,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))))));
        tracep->chgBit(oldp+502,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))));
        tracep->chgBit(oldp+503,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+504,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+505,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+506,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+507,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))))));
        tracep->chgBit(oldp+508,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))));
        tracep->chgBit(oldp+509,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+510,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+511,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+512,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+513,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))))));
        tracep->chgBit(oldp+514,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))));
        tracep->chgBit(oldp+515,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+516,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+517,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+518,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+519,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))))));
        tracep->chgBit(oldp+520,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))));
        tracep->chgBit(oldp+521,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+522,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+523,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+524,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+525,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))))));
        tracep->chgBit(oldp+526,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))));
        tracep->chgBit(oldp+527,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+528,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+529,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+530,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+531,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))))));
        tracep->chgBit(oldp+532,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))));
        tracep->chgBit(oldp+533,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+534,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+535,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+536,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+537,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))))));
        tracep->chgBit(oldp+538,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))));
        tracep->chgBit(oldp+539,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+540,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+541,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+542,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+543,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))))));
        tracep->chgBit(oldp+544,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))));
        tracep->chgBit(oldp+545,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+546,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        >> 9U))));
        tracep->chgBit(oldp+547,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        >> 8U))));
        tracep->chgCData(oldp+548,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+549,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))))));
        tracep->chgBit(oldp+550,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))));
        tracep->chgBit(oldp+551,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        >> 7U))));
        tracep->chgBit(oldp+552,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        >> 6U))));
        tracep->chgBit(oldp+553,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        >> 5U))));
        tracep->chgCData(oldp+554,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+555,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))))));
        tracep->chgBit(oldp+556,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))));
        tracep->chgBit(oldp+557,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        >> 4U))));
        tracep->chgBit(oldp+558,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        >> 3U))));
        tracep->chgBit(oldp+559,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        >> 2U))));
        tracep->chgCData(oldp+560,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])),2);
        tracep->chgBit(oldp+561,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))));
        tracep->chgBit(oldp+562,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                           >> 1U)))));
        tracep->chgBit(oldp+563,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])));
        tracep->chgBit(oldp+564,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                        >> 1U))));
        tracep->chgCData(oldp+565,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+566,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+567,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+568,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+569,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+570,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+571,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+572,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+573,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+574,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+575,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+576,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+577,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+578,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+579,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+580,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+581,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+582,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+583,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U]),32);
        tracep->chgSData(oldp+584,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+585,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+586,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))))));
        tracep->chgBit(oldp+587,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))));
        tracep->chgBit(oldp+588,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+589,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+590,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+591,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+592,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))))));
        tracep->chgBit(oldp+593,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))));
        tracep->chgBit(oldp+594,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+595,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+596,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+597,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+598,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))))));
        tracep->chgBit(oldp+599,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))));
        tracep->chgBit(oldp+600,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+601,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+602,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+603,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+604,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))))));
        tracep->chgBit(oldp+605,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))));
        tracep->chgBit(oldp+606,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+607,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+608,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+609,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+610,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))))));
        tracep->chgBit(oldp+611,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))));
        tracep->chgBit(oldp+612,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+613,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+614,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+615,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+616,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))))));
        tracep->chgBit(oldp+617,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))));
        tracep->chgBit(oldp+618,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+619,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+620,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+621,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+622,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))))));
        tracep->chgBit(oldp+623,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))));
        tracep->chgBit(oldp+624,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+625,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+626,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+627,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+628,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))))));
        tracep->chgBit(oldp+629,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))));
        tracep->chgBit(oldp+630,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+631,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        >> 9U))));
        tracep->chgBit(oldp+632,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        >> 8U))));
        tracep->chgCData(oldp+633,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+634,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))))));
        tracep->chgBit(oldp+635,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))));
        tracep->chgBit(oldp+636,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        >> 7U))));
        tracep->chgBit(oldp+637,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        >> 6U))));
        tracep->chgBit(oldp+638,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        >> 5U))));
        tracep->chgCData(oldp+639,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+640,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))))));
        tracep->chgBit(oldp+641,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))));
        tracep->chgBit(oldp+642,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        >> 4U))));
        tracep->chgBit(oldp+643,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        >> 3U))));
        tracep->chgBit(oldp+644,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        >> 2U))));
        tracep->chgCData(oldp+645,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])),2);
        tracep->chgBit(oldp+646,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))));
        tracep->chgBit(oldp+647,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                           >> 1U)))));
        tracep->chgBit(oldp+648,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])));
        tracep->chgBit(oldp+649,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                        >> 1U))));
        tracep->chgCData(oldp+650,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+651,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+652,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+653,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+654,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+655,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+656,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+657,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+658,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+659,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+660,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+661,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+662,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+663,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+664,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+665,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+666,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+667,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+668,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U]),32);
        tracep->chgSData(oldp+669,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+670,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+671,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))))));
        tracep->chgBit(oldp+672,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))));
        tracep->chgBit(oldp+673,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+674,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+675,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+676,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+677,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))))));
        tracep->chgBit(oldp+678,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))));
        tracep->chgBit(oldp+679,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+680,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+681,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+682,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+683,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))))));
        tracep->chgBit(oldp+684,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))));
        tracep->chgBit(oldp+685,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+686,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+687,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+688,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+689,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))))));
        tracep->chgBit(oldp+690,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))));
        tracep->chgBit(oldp+691,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+692,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+693,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+694,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+695,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))))));
        tracep->chgBit(oldp+696,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))));
        tracep->chgBit(oldp+697,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+698,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+699,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+700,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+701,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))))));
        tracep->chgBit(oldp+702,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))));
        tracep->chgBit(oldp+703,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+704,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+705,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+706,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+707,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))))));
        tracep->chgBit(oldp+708,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))));
        tracep->chgBit(oldp+709,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+710,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+711,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+712,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+713,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))))));
        tracep->chgBit(oldp+714,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))));
        tracep->chgBit(oldp+715,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+716,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        >> 9U))));
        tracep->chgBit(oldp+717,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        >> 8U))));
        tracep->chgCData(oldp+718,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+719,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))))));
        tracep->chgBit(oldp+720,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))));
        tracep->chgBit(oldp+721,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        >> 7U))));
        tracep->chgBit(oldp+722,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        >> 6U))));
        tracep->chgBit(oldp+723,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        >> 5U))));
        tracep->chgCData(oldp+724,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+725,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))))));
        tracep->chgBit(oldp+726,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))));
        tracep->chgBit(oldp+727,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        >> 4U))));
        tracep->chgBit(oldp+728,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        >> 3U))));
        tracep->chgBit(oldp+729,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        >> 2U))));
        tracep->chgCData(oldp+730,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])),2);
        tracep->chgBit(oldp+731,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))));
        tracep->chgBit(oldp+732,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                           >> 1U)))));
        tracep->chgBit(oldp+733,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])));
        tracep->chgBit(oldp+734,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                        >> 1U))));
        tracep->chgCData(oldp+735,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+736,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+737,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+738,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+739,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+740,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+741,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+742,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+743,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+744,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+745,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+746,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+747,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+748,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+749,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+750,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+751,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+752,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+753,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U]),32);
        tracep->chgSData(oldp+754,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+755,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+756,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))))));
        tracep->chgBit(oldp+757,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))));
        tracep->chgBit(oldp+758,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+759,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+760,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+761,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+762,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))))));
        tracep->chgBit(oldp+763,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))));
        tracep->chgBit(oldp+764,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+765,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+766,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+767,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+768,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))))));
        tracep->chgBit(oldp+769,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))));
        tracep->chgBit(oldp+770,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+771,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+772,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+773,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+774,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))))));
        tracep->chgBit(oldp+775,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))));
        tracep->chgBit(oldp+776,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+777,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+778,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+779,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+780,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))))));
        tracep->chgBit(oldp+781,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))));
        tracep->chgBit(oldp+782,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+783,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+784,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+785,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+786,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))))));
        tracep->chgBit(oldp+787,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))));
        tracep->chgBit(oldp+788,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+789,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+790,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+791,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+792,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))))));
        tracep->chgBit(oldp+793,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))));
        tracep->chgBit(oldp+794,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+795,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+796,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+797,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+798,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))))));
        tracep->chgBit(oldp+799,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))));
        tracep->chgBit(oldp+800,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+801,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        >> 9U))));
        tracep->chgBit(oldp+802,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        >> 8U))));
        tracep->chgCData(oldp+803,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+804,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))))));
        tracep->chgBit(oldp+805,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))));
        tracep->chgBit(oldp+806,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        >> 7U))));
        tracep->chgBit(oldp+807,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        >> 6U))));
        tracep->chgBit(oldp+808,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        >> 5U))));
        tracep->chgCData(oldp+809,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+810,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))))));
        tracep->chgBit(oldp+811,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))));
        tracep->chgBit(oldp+812,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        >> 4U))));
        tracep->chgBit(oldp+813,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        >> 3U))));
        tracep->chgBit(oldp+814,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        >> 2U))));
        tracep->chgCData(oldp+815,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])),2);
        tracep->chgBit(oldp+816,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))));
        tracep->chgBit(oldp+817,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                           >> 1U)))));
        tracep->chgBit(oldp+818,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])));
        tracep->chgBit(oldp+819,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                        >> 1U))));
        tracep->chgCData(oldp+820,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+821,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+822,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+823,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+824,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+825,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+826,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+827,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+828,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+829,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+830,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+831,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+832,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+833,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+834,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+835,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+836,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+837,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+838,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]),32);
        tracep->chgSData(oldp+839,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+840,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+841,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))))));
        tracep->chgBit(oldp+842,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))));
        tracep->chgBit(oldp+843,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+844,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+845,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+846,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+847,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))))));
        tracep->chgBit(oldp+848,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))));
        tracep->chgBit(oldp+849,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+850,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+851,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+852,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+853,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))))));
        tracep->chgBit(oldp+854,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))));
        tracep->chgBit(oldp+855,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+856,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+857,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+858,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+859,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))))));
        tracep->chgBit(oldp+860,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))));
        tracep->chgBit(oldp+861,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+862,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+863,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+864,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+865,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))))));
        tracep->chgBit(oldp+866,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))));
        tracep->chgBit(oldp+867,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+868,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+869,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+870,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+871,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))))));
        tracep->chgBit(oldp+872,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))));
        tracep->chgBit(oldp+873,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+874,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+875,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+876,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+877,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))))));
        tracep->chgBit(oldp+878,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))));
        tracep->chgBit(oldp+879,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+880,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+881,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+882,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+883,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))))));
        tracep->chgBit(oldp+884,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))));
        tracep->chgBit(oldp+885,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+886,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        >> 9U))));
        tracep->chgBit(oldp+887,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        >> 8U))));
        tracep->chgCData(oldp+888,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+889,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))))));
        tracep->chgBit(oldp+890,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))));
        tracep->chgBit(oldp+891,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        >> 7U))));
        tracep->chgBit(oldp+892,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        >> 6U))));
        tracep->chgBit(oldp+893,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        >> 5U))));
        tracep->chgCData(oldp+894,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+895,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))))));
        tracep->chgBit(oldp+896,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))));
        tracep->chgBit(oldp+897,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        >> 4U))));
        tracep->chgBit(oldp+898,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        >> 3U))));
        tracep->chgBit(oldp+899,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        >> 2U))));
        tracep->chgCData(oldp+900,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])),2);
        tracep->chgBit(oldp+901,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))));
        tracep->chgBit(oldp+902,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                           >> 1U)))));
        tracep->chgBit(oldp+903,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])));
        tracep->chgBit(oldp+904,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                        >> 1U))));
        tracep->chgCData(oldp+905,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+906,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+907,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+908,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+909,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+910,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+911,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+912,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+913,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+914,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+915,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+916,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+917,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+918,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+919,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+920,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+921,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+922,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+923,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]),32);
        tracep->chgSData(oldp+924,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+925,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+926,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))))));
        tracep->chgBit(oldp+927,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))));
        tracep->chgBit(oldp+928,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+929,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+930,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+931,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+932,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))))));
        tracep->chgBit(oldp+933,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))));
        tracep->chgBit(oldp+934,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+935,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+936,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+937,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+938,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))))));
        tracep->chgBit(oldp+939,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))));
        tracep->chgBit(oldp+940,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+941,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+942,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+943,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+944,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))))));
        tracep->chgBit(oldp+945,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))));
        tracep->chgBit(oldp+946,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+947,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+948,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+949,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+950,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))))));
        tracep->chgBit(oldp+951,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))));
        tracep->chgBit(oldp+952,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+953,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+954,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+955,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+956,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))))));
        tracep->chgBit(oldp+957,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))));
        tracep->chgBit(oldp+958,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+959,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+960,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+961,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+962,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))))));
        tracep->chgBit(oldp+963,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))));
        tracep->chgBit(oldp+964,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+965,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+966,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+967,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+968,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))))));
        tracep->chgBit(oldp+969,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))));
        tracep->chgBit(oldp+970,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+971,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        >> 9U))));
        tracep->chgBit(oldp+972,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        >> 8U))));
        tracep->chgCData(oldp+973,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+974,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))))));
        tracep->chgBit(oldp+975,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))));
        tracep->chgBit(oldp+976,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        >> 7U))));
        tracep->chgBit(oldp+977,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        >> 6U))));
        tracep->chgBit(oldp+978,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        >> 5U))));
        tracep->chgCData(oldp+979,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+980,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))))));
        tracep->chgBit(oldp+981,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))));
        tracep->chgBit(oldp+982,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        >> 4U))));
        tracep->chgBit(oldp+983,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        >> 3U))));
        tracep->chgBit(oldp+984,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        >> 2U))));
        tracep->chgCData(oldp+985,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])),2);
        tracep->chgBit(oldp+986,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))));
        tracep->chgBit(oldp+987,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                           >> 1U)))));
        tracep->chgBit(oldp+988,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])));
        tracep->chgBit(oldp+989,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                        >> 1U))));
        tracep->chgCData(oldp+990,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+991,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+992,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+993,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+994,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+995,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+996,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+997,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+998,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+999,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+1000,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1001,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1002,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1003,((1U & (((IData)((0x18U 
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
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1004,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1005,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1006,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1007,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1008,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U]),32);
        tracep->chgSData(oldp+1009,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1010,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1011,((1U & (((IData)((0xc0000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))))));
        tracep->chgBit(oldp+1012,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))));
        tracep->chgBit(oldp+1013,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1014,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1015,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1016,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1017,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))))));
        tracep->chgBit(oldp+1018,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))));
        tracep->chgBit(oldp+1019,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1020,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1021,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1022,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1023,((1U & (((IData)((0x3000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))))));
        tracep->chgBit(oldp+1024,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))));
        tracep->chgBit(oldp+1025,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1026,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1027,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1028,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1029,((1U & (((IData)((0x600000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))))));
        tracep->chgBit(oldp+1030,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))));
        tracep->chgBit(oldp+1031,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1032,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1033,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1034,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1035,((1U & (((IData)((0xc0000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))))));
        tracep->chgBit(oldp+1036,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))));
        tracep->chgBit(oldp+1037,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1038,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1039,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1040,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1041,((1U & (((IData)((0x18000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))))));
        tracep->chgBit(oldp+1042,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))));
        tracep->chgBit(oldp+1043,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1044,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1045,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1046,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1047,((1U & (((IData)((0x3000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))))));
        tracep->chgBit(oldp+1048,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))));
        tracep->chgBit(oldp+1049,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1050,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1051,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1052,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1053,((1U & (((IData)((0x600U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))))));
        tracep->chgBit(oldp+1054,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))));
        tracep->chgBit(oldp+1055,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1056,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         >> 9U))));
        tracep->chgBit(oldp+1057,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         >> 8U))));
        tracep->chgCData(oldp+1058,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1059,((1U & (((IData)((0xc0U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))))));
        tracep->chgBit(oldp+1060,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))));
        tracep->chgBit(oldp+1061,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         >> 7U))));
        tracep->chgBit(oldp+1062,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         >> 6U))));
        tracep->chgBit(oldp+1063,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         >> 5U))));
        tracep->chgCData(oldp+1064,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1065,((1U & (((IData)((0x18U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))))));
        tracep->chgBit(oldp+1066,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))));
        tracep->chgBit(oldp+1067,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         >> 4U))));
        tracep->chgBit(oldp+1068,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         >> 3U))));
        tracep->chgBit(oldp+1069,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         >> 2U))));
        tracep->chgCData(oldp+1070,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])),2);
        tracep->chgBit(oldp+1071,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))));
        tracep->chgBit(oldp+1072,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1073,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])));
        tracep->chgBit(oldp+1074,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                         >> 1U))));
        tracep->chgCData(oldp+1075,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1076,((1U & (((IData)((0x600U 
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
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1077,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1078,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1079,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1080,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1081,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1082,((1U & (((IData)((0xc0U 
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
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1083,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1084,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1085,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1086,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1087,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1088,((1U & (((IData)((0x18U 
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
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1089,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1090,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1091,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1092,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1093,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U]),32);
        tracep->chgSData(oldp+1094,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1095,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1096,((1U & (((IData)((0xc0000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))))));
        tracep->chgBit(oldp+1097,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))));
        tracep->chgBit(oldp+1098,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1099,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1100,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1101,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1102,((1U & (((IData)((0x18000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))))));
        tracep->chgBit(oldp+1103,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))));
        tracep->chgBit(oldp+1104,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1105,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1106,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1107,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1108,((1U & (((IData)((0x3000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))))));
        tracep->chgBit(oldp+1109,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))));
        tracep->chgBit(oldp+1110,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1111,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1112,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1113,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1114,((1U & (((IData)((0x600000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))))));
        tracep->chgBit(oldp+1115,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))));
        tracep->chgBit(oldp+1116,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1117,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1118,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1119,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1120,((1U & (((IData)((0xc0000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))))));
        tracep->chgBit(oldp+1121,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))));
        tracep->chgBit(oldp+1122,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1123,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1124,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1125,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1126,((1U & (((IData)((0x18000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))))));
        tracep->chgBit(oldp+1127,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))));
        tracep->chgBit(oldp+1128,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1129,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1130,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1131,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1132,((1U & (((IData)((0x3000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))))));
        tracep->chgBit(oldp+1133,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))));
        tracep->chgBit(oldp+1134,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1135,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1136,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1137,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1138,((1U & (((IData)((0x600U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))))));
        tracep->chgBit(oldp+1139,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))));
        tracep->chgBit(oldp+1140,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1141,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         >> 9U))));
        tracep->chgBit(oldp+1142,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         >> 8U))));
        tracep->chgCData(oldp+1143,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1144,((1U & (((IData)((0xc0U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))))));
        tracep->chgBit(oldp+1145,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))));
        tracep->chgBit(oldp+1146,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         >> 7U))));
        tracep->chgBit(oldp+1147,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         >> 6U))));
        tracep->chgBit(oldp+1148,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         >> 5U))));
        tracep->chgCData(oldp+1149,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1150,((1U & (((IData)((0x18U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))))));
        tracep->chgBit(oldp+1151,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))));
        tracep->chgBit(oldp+1152,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         >> 4U))));
        tracep->chgBit(oldp+1153,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         >> 3U))));
        tracep->chgBit(oldp+1154,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         >> 2U))));
        tracep->chgCData(oldp+1155,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])),2);
        tracep->chgBit(oldp+1156,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))));
        tracep->chgBit(oldp+1157,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1158,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])));
        tracep->chgBit(oldp+1159,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                         >> 1U))));
        tracep->chgCData(oldp+1160,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1161,((1U & (((IData)((0x600U 
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
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1162,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1163,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1164,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1165,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1166,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1167,((1U & (((IData)((0xc0U 
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
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1168,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1169,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1170,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1171,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1172,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1173,((1U & (((IData)((0x18U 
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
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1174,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1175,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1176,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1177,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1178,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U]),32);
        tracep->chgSData(oldp+1179,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1180,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1181,((1U & (((IData)((0xc0000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))))));
        tracep->chgBit(oldp+1182,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))));
        tracep->chgBit(oldp+1183,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1184,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1185,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1186,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1187,((1U & (((IData)((0x18000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))))));
        tracep->chgBit(oldp+1188,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))));
        tracep->chgBit(oldp+1189,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1190,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1191,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1192,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1193,((1U & (((IData)((0x3000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))))));
        tracep->chgBit(oldp+1194,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))));
        tracep->chgBit(oldp+1195,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1196,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1197,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1198,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1199,((1U & (((IData)((0x600000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))))));
        tracep->chgBit(oldp+1200,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))));
        tracep->chgBit(oldp+1201,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1202,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1203,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1204,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1205,((1U & (((IData)((0xc0000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))))));
        tracep->chgBit(oldp+1206,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))));
        tracep->chgBit(oldp+1207,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1208,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1209,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1210,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1211,((1U & (((IData)((0x18000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))))));
        tracep->chgBit(oldp+1212,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))));
        tracep->chgBit(oldp+1213,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1214,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1215,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1216,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1217,((1U & (((IData)((0x3000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))))));
        tracep->chgBit(oldp+1218,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))));
        tracep->chgBit(oldp+1219,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1220,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1221,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1222,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1223,((1U & (((IData)((0x600U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))))));
        tracep->chgBit(oldp+1224,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))));
        tracep->chgBit(oldp+1225,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1226,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         >> 9U))));
        tracep->chgBit(oldp+1227,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         >> 8U))));
        tracep->chgCData(oldp+1228,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1229,((1U & (((IData)((0xc0U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))))));
        tracep->chgBit(oldp+1230,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))));
        tracep->chgBit(oldp+1231,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         >> 7U))));
        tracep->chgBit(oldp+1232,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         >> 6U))));
        tracep->chgBit(oldp+1233,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         >> 5U))));
        tracep->chgCData(oldp+1234,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1235,((1U & (((IData)((0x18U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))))));
        tracep->chgBit(oldp+1236,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))));
        tracep->chgBit(oldp+1237,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         >> 4U))));
        tracep->chgBit(oldp+1238,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         >> 3U))));
        tracep->chgBit(oldp+1239,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         >> 2U))));
        tracep->chgCData(oldp+1240,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])),2);
        tracep->chgBit(oldp+1241,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))));
        tracep->chgBit(oldp+1242,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1243,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])));
        tracep->chgBit(oldp+1244,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                         >> 1U))));
        tracep->chgCData(oldp+1245,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1246,((1U & (((IData)((0x600U 
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
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1247,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1248,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1249,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1250,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1251,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1252,((1U & (((IData)((0xc0U 
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
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1253,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1254,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1255,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1256,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1257,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1258,((1U & (((IData)((0x18U 
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
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1259,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1260,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1261,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1262,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1263,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U]),32);
        tracep->chgSData(oldp+1264,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1265,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1266,((1U & (((IData)((0xc0000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))))));
        tracep->chgBit(oldp+1267,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))));
        tracep->chgBit(oldp+1268,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1269,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1270,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1271,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1272,((1U & (((IData)((0x18000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))))));
        tracep->chgBit(oldp+1273,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))));
        tracep->chgBit(oldp+1274,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1275,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1276,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1277,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1278,((1U & (((IData)((0x3000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))))));
        tracep->chgBit(oldp+1279,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))));
        tracep->chgBit(oldp+1280,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1281,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1282,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1283,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1284,((1U & (((IData)((0x600000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))))));
        tracep->chgBit(oldp+1285,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))));
        tracep->chgBit(oldp+1286,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1287,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1288,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1289,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1290,((1U & (((IData)((0xc0000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))))));
        tracep->chgBit(oldp+1291,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))));
        tracep->chgBit(oldp+1292,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1293,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1294,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1295,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1296,((1U & (((IData)((0x18000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))))));
        tracep->chgBit(oldp+1297,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))));
        tracep->chgBit(oldp+1298,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1299,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1300,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1301,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1302,((1U & (((IData)((0x3000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))))));
        tracep->chgBit(oldp+1303,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))));
        tracep->chgBit(oldp+1304,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1305,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1306,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1307,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1308,((1U & (((IData)((0x600U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))))));
        tracep->chgBit(oldp+1309,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))));
        tracep->chgBit(oldp+1310,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1311,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         >> 9U))));
        tracep->chgBit(oldp+1312,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         >> 8U))));
        tracep->chgCData(oldp+1313,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1314,((1U & (((IData)((0xc0U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))))));
        tracep->chgBit(oldp+1315,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))));
        tracep->chgBit(oldp+1316,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         >> 7U))));
        tracep->chgBit(oldp+1317,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         >> 6U))));
        tracep->chgBit(oldp+1318,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         >> 5U))));
        tracep->chgCData(oldp+1319,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1320,((1U & (((IData)((0x18U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))))));
        tracep->chgBit(oldp+1321,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))));
        tracep->chgBit(oldp+1322,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         >> 4U))));
        tracep->chgBit(oldp+1323,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         >> 3U))));
        tracep->chgBit(oldp+1324,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         >> 2U))));
        tracep->chgCData(oldp+1325,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])),2);
        tracep->chgBit(oldp+1326,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))));
        tracep->chgBit(oldp+1327,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1328,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])));
        tracep->chgBit(oldp+1329,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                         >> 1U))));
        tracep->chgCData(oldp+1330,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1331,((1U & (((IData)((0x600U 
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
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1332,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1333,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1334,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1335,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1336,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1337,((1U & (((IData)((0xc0U 
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
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1338,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1339,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1340,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1341,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1342,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1343,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1344,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1345,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1346,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1347,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1348,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U]),32);
        tracep->chgSData(oldp+1349,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1350,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1351,((1U & (((IData)((0xc0000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))))));
        tracep->chgBit(oldp+1352,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))));
        tracep->chgBit(oldp+1353,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1354,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1355,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1356,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1357,((1U & (((IData)((0x18000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))))));
        tracep->chgBit(oldp+1358,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))));
        tracep->chgBit(oldp+1359,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1360,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1361,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1362,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1363,((1U & (((IData)((0x3000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))))));
        tracep->chgBit(oldp+1364,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))));
        tracep->chgBit(oldp+1365,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1366,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1367,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1368,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1369,((1U & (((IData)((0x600000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))))));
        tracep->chgBit(oldp+1370,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))));
        tracep->chgBit(oldp+1371,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1372,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1373,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1374,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1375,((1U & (((IData)((0xc0000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))))));
        tracep->chgBit(oldp+1376,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))));
        tracep->chgBit(oldp+1377,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1378,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1379,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1380,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1381,((1U & (((IData)((0x18000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))))));
        tracep->chgBit(oldp+1382,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))));
        tracep->chgBit(oldp+1383,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1384,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1385,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1386,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1387,((1U & (((IData)((0x3000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))))));
        tracep->chgBit(oldp+1388,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))));
        tracep->chgBit(oldp+1389,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1390,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1391,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1392,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1393,((1U & (((IData)((0x600U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))))));
        tracep->chgBit(oldp+1394,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))));
        tracep->chgBit(oldp+1395,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1396,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         >> 9U))));
        tracep->chgBit(oldp+1397,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         >> 8U))));
        tracep->chgCData(oldp+1398,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1399,((1U & (((IData)((0xc0U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))))));
        tracep->chgBit(oldp+1400,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))));
        tracep->chgBit(oldp+1401,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         >> 7U))));
        tracep->chgBit(oldp+1402,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         >> 6U))));
        tracep->chgBit(oldp+1403,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         >> 5U))));
        tracep->chgCData(oldp+1404,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1405,((1U & (((IData)((0x18U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))))));
        tracep->chgBit(oldp+1406,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))));
        tracep->chgBit(oldp+1407,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         >> 4U))));
        tracep->chgBit(oldp+1408,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         >> 3U))));
        tracep->chgBit(oldp+1409,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         >> 2U))));
        tracep->chgCData(oldp+1410,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])),2);
        tracep->chgBit(oldp+1411,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))));
        tracep->chgBit(oldp+1412,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1413,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])));
        tracep->chgBit(oldp+1414,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                         >> 1U))));
        tracep->chgCData(oldp+1415,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1416,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1417,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1418,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1419,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1420,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1421,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1422,((1U & (((IData)((0xc0U 
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
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1423,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1424,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1425,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1426,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1427,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1428,((1U & (((IData)((0x18U 
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
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1429,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1430,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1431,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1432,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1433,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU]),32);
        tracep->chgSData(oldp+1434,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1435,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1436,((1U & (((IData)((0xc0000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))))));
        tracep->chgBit(oldp+1437,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))));
        tracep->chgBit(oldp+1438,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1439,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1440,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1441,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1442,((1U & (((IData)((0x18000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))))));
        tracep->chgBit(oldp+1443,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))));
        tracep->chgBit(oldp+1444,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1445,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1446,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1447,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1448,((1U & (((IData)((0x3000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))))));
        tracep->chgBit(oldp+1449,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))));
        tracep->chgBit(oldp+1450,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1451,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1452,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1453,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1454,((1U & (((IData)((0x600000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))))));
        tracep->chgBit(oldp+1455,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))));
        tracep->chgBit(oldp+1456,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1457,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1458,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1459,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1460,((1U & (((IData)((0xc0000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))))));
        tracep->chgBit(oldp+1461,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))));
        tracep->chgBit(oldp+1462,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1463,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1464,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1465,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1466,((1U & (((IData)((0x18000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))))));
        tracep->chgBit(oldp+1467,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))));
        tracep->chgBit(oldp+1468,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1469,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1470,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1471,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1472,((1U & (((IData)((0x3000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))))));
        tracep->chgBit(oldp+1473,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))));
        tracep->chgBit(oldp+1474,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1475,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1476,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1477,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1478,((1U & (((IData)((0x600U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))))));
        tracep->chgBit(oldp+1479,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))));
        tracep->chgBit(oldp+1480,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1481,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         >> 9U))));
        tracep->chgBit(oldp+1482,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         >> 8U))));
        tracep->chgCData(oldp+1483,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1484,((1U & (((IData)((0xc0U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))))));
        tracep->chgBit(oldp+1485,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))));
        tracep->chgBit(oldp+1486,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         >> 7U))));
        tracep->chgBit(oldp+1487,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         >> 6U))));
        tracep->chgBit(oldp+1488,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         >> 5U))));
        tracep->chgCData(oldp+1489,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1490,((1U & (((IData)((0x18U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))))));
        tracep->chgBit(oldp+1491,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))));
        tracep->chgBit(oldp+1492,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         >> 4U))));
        tracep->chgBit(oldp+1493,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         >> 3U))));
        tracep->chgBit(oldp+1494,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         >> 2U))));
        tracep->chgCData(oldp+1495,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])),2);
        tracep->chgBit(oldp+1496,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))));
        tracep->chgBit(oldp+1497,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1498,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])));
        tracep->chgBit(oldp+1499,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                         >> 1U))));
        tracep->chgCData(oldp+1500,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1501,((1U & (((IData)((0x600U 
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
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1502,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1503,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1504,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1505,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1506,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1507,((1U & (((IData)((0xc0U 
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
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1508,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1509,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1510,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1511,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1512,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1513,((1U & (((IData)((0x18U 
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
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1514,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1515,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1516,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1517,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1518,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU]),32);
        tracep->chgSData(oldp+1519,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1520,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1521,((1U & (((IData)((0xc0000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))))));
        tracep->chgBit(oldp+1522,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))));
        tracep->chgBit(oldp+1523,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1524,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1525,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1526,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1527,((1U & (((IData)((0x18000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))))));
        tracep->chgBit(oldp+1528,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))));
        tracep->chgBit(oldp+1529,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1530,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1531,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1532,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1533,((1U & (((IData)((0x3000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))))));
        tracep->chgBit(oldp+1534,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))));
        tracep->chgBit(oldp+1535,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1536,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1537,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1538,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1539,((1U & (((IData)((0x600000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))))));
        tracep->chgBit(oldp+1540,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))));
        tracep->chgBit(oldp+1541,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1542,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1543,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1544,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1545,((1U & (((IData)((0xc0000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))))));
        tracep->chgBit(oldp+1546,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))));
        tracep->chgBit(oldp+1547,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1548,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1549,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1550,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1551,((1U & (((IData)((0x18000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))))));
        tracep->chgBit(oldp+1552,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))));
        tracep->chgBit(oldp+1553,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1554,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1555,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1556,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1557,((1U & (((IData)((0x3000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))))));
        tracep->chgBit(oldp+1558,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))));
        tracep->chgBit(oldp+1559,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1560,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1561,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1562,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1563,((1U & (((IData)((0x600U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))))));
        tracep->chgBit(oldp+1564,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))));
        tracep->chgBit(oldp+1565,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1566,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         >> 9U))));
        tracep->chgBit(oldp+1567,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         >> 8U))));
        tracep->chgCData(oldp+1568,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1569,((1U & (((IData)((0xc0U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))))));
        tracep->chgBit(oldp+1570,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))));
        tracep->chgBit(oldp+1571,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         >> 7U))));
        tracep->chgBit(oldp+1572,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         >> 6U))));
        tracep->chgBit(oldp+1573,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         >> 5U))));
        tracep->chgCData(oldp+1574,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1575,((1U & (((IData)((0x18U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))))));
        tracep->chgBit(oldp+1576,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))));
        tracep->chgBit(oldp+1577,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         >> 4U))));
        tracep->chgBit(oldp+1578,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         >> 3U))));
        tracep->chgBit(oldp+1579,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         >> 2U))));
        tracep->chgCData(oldp+1580,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])),2);
        tracep->chgBit(oldp+1581,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))));
        tracep->chgBit(oldp+1582,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1583,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])));
        tracep->chgBit(oldp+1584,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                         >> 1U))));
        tracep->chgCData(oldp+1585,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1586,((1U & (((IData)((0x600U 
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
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1587,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1588,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1589,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1590,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1591,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1592,((1U & (((IData)((0xc0U 
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
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1593,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1594,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1595,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1596,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1597,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1598,((1U & (((IData)((0x18U 
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
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1599,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1600,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1601,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1602,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1603,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU]),32);
        tracep->chgSData(oldp+1604,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1605,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1606,((1U & (((IData)((0xc0000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))))));
        tracep->chgBit(oldp+1607,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))));
        tracep->chgBit(oldp+1608,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1609,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1610,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1611,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1612,((1U & (((IData)((0x18000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))))));
        tracep->chgBit(oldp+1613,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))));
        tracep->chgBit(oldp+1614,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1615,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1616,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1617,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1618,((1U & (((IData)((0x3000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))))));
        tracep->chgBit(oldp+1619,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))));
        tracep->chgBit(oldp+1620,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1621,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1622,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1623,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1624,((1U & (((IData)((0x600000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))))));
        tracep->chgBit(oldp+1625,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))));
        tracep->chgBit(oldp+1626,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1627,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1628,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1629,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1630,((1U & (((IData)((0xc0000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))))));
        tracep->chgBit(oldp+1631,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))));
        tracep->chgBit(oldp+1632,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1633,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1634,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1635,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1636,((1U & (((IData)((0x18000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))))));
        tracep->chgBit(oldp+1637,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))));
        tracep->chgBit(oldp+1638,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1639,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1640,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1641,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1642,((1U & (((IData)((0x3000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))))));
        tracep->chgBit(oldp+1643,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))));
        tracep->chgBit(oldp+1644,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1645,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1646,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1647,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1648,((1U & (((IData)((0x600U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))))));
        tracep->chgBit(oldp+1649,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))));
        tracep->chgBit(oldp+1650,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1651,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         >> 9U))));
        tracep->chgBit(oldp+1652,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         >> 8U))));
        tracep->chgCData(oldp+1653,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1654,((1U & (((IData)((0xc0U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))))));
        tracep->chgBit(oldp+1655,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))));
        tracep->chgBit(oldp+1656,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         >> 7U))));
        tracep->chgBit(oldp+1657,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         >> 6U))));
        tracep->chgBit(oldp+1658,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         >> 5U))));
        tracep->chgCData(oldp+1659,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1660,((1U & (((IData)((0x18U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))))));
        tracep->chgBit(oldp+1661,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))));
        tracep->chgBit(oldp+1662,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         >> 4U))));
        tracep->chgBit(oldp+1663,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         >> 3U))));
        tracep->chgBit(oldp+1664,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         >> 2U))));
        tracep->chgCData(oldp+1665,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])),2);
        tracep->chgBit(oldp+1666,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))));
        tracep->chgBit(oldp+1667,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1668,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])));
        tracep->chgBit(oldp+1669,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                         >> 1U))));
        tracep->chgCData(oldp+1670,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1671,((1U & (((IData)((0x600U 
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
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1672,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1673,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1674,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1675,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1676,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1677,((1U & (((IData)((0xc0U 
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
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1678,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1679,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1680,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1681,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1682,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1683,((1U & (((IData)((0x18U 
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
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1684,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1685,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1686,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1687,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1688,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU]),32);
        tracep->chgSData(oldp+1689,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1690,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1691,((1U & (((IData)((0xc0000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))))));
        tracep->chgBit(oldp+1692,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))));
        tracep->chgBit(oldp+1693,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1694,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1695,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1696,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1697,((1U & (((IData)((0x18000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))))));
        tracep->chgBit(oldp+1698,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))));
        tracep->chgBit(oldp+1699,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1700,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1701,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1702,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1703,((1U & (((IData)((0x3000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))))));
        tracep->chgBit(oldp+1704,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))));
        tracep->chgBit(oldp+1705,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1706,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1707,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1708,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1709,((1U & (((IData)((0x600000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))))));
        tracep->chgBit(oldp+1710,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))));
        tracep->chgBit(oldp+1711,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1712,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1713,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1714,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1715,((1U & (((IData)((0xc0000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))))));
        tracep->chgBit(oldp+1716,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))));
        tracep->chgBit(oldp+1717,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1718,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1719,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1720,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1721,((1U & (((IData)((0x18000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))))));
        tracep->chgBit(oldp+1722,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))));
        tracep->chgBit(oldp+1723,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1724,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1725,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1726,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1727,((1U & (((IData)((0x3000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))))));
        tracep->chgBit(oldp+1728,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))));
        tracep->chgBit(oldp+1729,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1730,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1731,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1732,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1733,((1U & (((IData)((0x600U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))))));
        tracep->chgBit(oldp+1734,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))));
        tracep->chgBit(oldp+1735,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1736,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         >> 9U))));
        tracep->chgBit(oldp+1737,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         >> 8U))));
        tracep->chgCData(oldp+1738,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1739,((1U & (((IData)((0xc0U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))))));
        tracep->chgBit(oldp+1740,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))));
        tracep->chgBit(oldp+1741,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         >> 7U))));
        tracep->chgBit(oldp+1742,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         >> 6U))));
        tracep->chgBit(oldp+1743,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         >> 5U))));
        tracep->chgCData(oldp+1744,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1745,((1U & (((IData)((0x18U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))))));
        tracep->chgBit(oldp+1746,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))));
        tracep->chgBit(oldp+1747,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         >> 4U))));
        tracep->chgBit(oldp+1748,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         >> 3U))));
        tracep->chgBit(oldp+1749,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         >> 2U))));
        tracep->chgCData(oldp+1750,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])),2);
        tracep->chgBit(oldp+1751,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))));
        tracep->chgBit(oldp+1752,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1753,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])));
        tracep->chgBit(oldp+1754,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                         >> 1U))));
        tracep->chgCData(oldp+1755,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1756,((1U & (((IData)((0x600U 
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
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1757,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1758,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1759,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1760,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1761,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1762,((1U & (((IData)((0xc0U 
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
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1763,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1764,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1765,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1766,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1767,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1768,((1U & (((IData)((0x18U 
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
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1769,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1770,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1771,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1772,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1773,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU]),32);
        tracep->chgSData(oldp+1774,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1775,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1776,((1U & (((IData)((0xc0000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))))));
        tracep->chgBit(oldp+1777,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))));
        tracep->chgBit(oldp+1778,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1779,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1780,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1781,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1782,((1U & (((IData)((0x18000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))))));
        tracep->chgBit(oldp+1783,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))));
        tracep->chgBit(oldp+1784,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1785,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1786,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1787,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1788,((1U & (((IData)((0x3000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))))));
        tracep->chgBit(oldp+1789,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))));
        tracep->chgBit(oldp+1790,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1791,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1792,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1793,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1794,((1U & (((IData)((0x600000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))))));
        tracep->chgBit(oldp+1795,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))));
        tracep->chgBit(oldp+1796,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1797,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1798,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1799,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1800,((1U & (((IData)((0xc0000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))))));
        tracep->chgBit(oldp+1801,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))));
        tracep->chgBit(oldp+1802,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1803,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1804,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1805,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1806,((1U & (((IData)((0x18000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))))));
        tracep->chgBit(oldp+1807,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))));
        tracep->chgBit(oldp+1808,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1809,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1810,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1811,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1812,((1U & (((IData)((0x3000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))))));
        tracep->chgBit(oldp+1813,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))));
        tracep->chgBit(oldp+1814,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1815,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1816,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1817,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1818,((1U & (((IData)((0x600U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))))));
        tracep->chgBit(oldp+1819,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))));
        tracep->chgBit(oldp+1820,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1821,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         >> 9U))));
        tracep->chgBit(oldp+1822,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         >> 8U))));
        tracep->chgCData(oldp+1823,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1824,((1U & (((IData)((0xc0U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))))));
        tracep->chgBit(oldp+1825,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))));
        tracep->chgBit(oldp+1826,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         >> 7U))));
        tracep->chgBit(oldp+1827,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         >> 6U))));
        tracep->chgBit(oldp+1828,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         >> 5U))));
        tracep->chgCData(oldp+1829,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1830,((1U & (((IData)((0x18U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))))));
        tracep->chgBit(oldp+1831,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))));
        tracep->chgBit(oldp+1832,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         >> 4U))));
        tracep->chgBit(oldp+1833,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         >> 3U))));
        tracep->chgBit(oldp+1834,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         >> 2U))));
        tracep->chgCData(oldp+1835,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])),2);
        tracep->chgBit(oldp+1836,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))));
        tracep->chgBit(oldp+1837,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1838,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])));
        tracep->chgBit(oldp+1839,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                         >> 1U))));
        tracep->chgCData(oldp+1840,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1841,((1U & (((IData)((0x600U 
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
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1842,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1843,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1844,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1845,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1846,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1847,((1U & (((IData)((0xc0U 
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
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1848,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1849,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1850,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1851,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1852,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1853,((1U & (((IData)((0x18U 
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
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1854,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1855,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1856,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1857,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1858,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU]),32);
        tracep->chgSData(oldp+1859,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1860,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1861,((1U & (((IData)((0xc0000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))))));
        tracep->chgBit(oldp+1862,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))));
        tracep->chgBit(oldp+1863,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1864,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1865,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1866,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1867,((1U & (((IData)((0x18000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))))));
        tracep->chgBit(oldp+1868,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))));
        tracep->chgBit(oldp+1869,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1870,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1871,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1872,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1873,((1U & (((IData)((0x3000000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))))));
        tracep->chgBit(oldp+1874,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))));
        tracep->chgBit(oldp+1875,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1876,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1877,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1878,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1879,((1U & (((IData)((0x600000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))))));
        tracep->chgBit(oldp+1880,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))));
        tracep->chgBit(oldp+1881,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1882,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1883,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1884,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1885,((1U & (((IData)((0xc0000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))))));
        tracep->chgBit(oldp+1886,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))));
        tracep->chgBit(oldp+1887,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1888,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1889,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1890,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1891,((1U & (((IData)((0x18000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))))));
        tracep->chgBit(oldp+1892,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))));
        tracep->chgBit(oldp+1893,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1894,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1895,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1896,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1897,((1U & (((IData)((0x3000U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))))));
        tracep->chgBit(oldp+1898,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))));
        tracep->chgBit(oldp+1899,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1900,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1901,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1902,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1903,((1U & (((IData)((0x600U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))))));
        tracep->chgBit(oldp+1904,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))));
        tracep->chgBit(oldp+1905,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1906,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                         >> 9U))));
        tracep->chgBit(oldp+1907,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                         >> 8U))));
        tracep->chgCData(oldp+1908,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1909,((1U & (((IData)((0xc0U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))))));
        tracep->chgBit(oldp+1910,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))));
        tracep->chgBit(oldp+1911,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                         >> 7U))));
        tracep->chgBit(oldp+1912,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                         >> 6U))));
        tracep->chgBit(oldp+1913,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                         >> 5U))));
        tracep->chgCData(oldp+1914,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1915,((1U & (((IData)((0x18U 
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
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))))));
    }
}
