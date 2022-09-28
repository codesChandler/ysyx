// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040632_top__Syms.h"


void Vysyx_22040632_top___024root__trace_chg_sub_8(Vysyx_22040632_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root__trace_chg_sub_8\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 17154);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgBit(oldp+0,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                      >> 7U))));
        tracep->chgBit(oldp+1,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                      >> 6U))));
        tracep->chgBit(oldp+2,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                      >> 5U))));
        tracep->chgCData(oldp+3,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))),3);
        tracep->chgBit(oldp+4,((1U & (((IData)((0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                       | (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                      | (IData)((0x14U 
                                                 == 
                                                 (0x14U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+5,((1U & VL_REDXOR_8((0x1cU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+6,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                      >> 4U))));
        tracep->chgBit(oldp+7,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                      >> 3U))));
        tracep->chgBit(oldp+8,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                      >> 2U))));
        tracep->chgIData(oldp+9,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU]),32);
        tracep->chgSData(oldp+10,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+11,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                   >> 0x1dU)),3);
        tracep->chgBit(oldp+12,((1U & (((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))))));
        tracep->chgBit(oldp+13,((1U & VL_REDXOR_32(
                                                   (0xe0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))));
        tracep->chgBit(oldp+14,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                 >> 0x1fU)));
        tracep->chgBit(oldp+15,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       >> 0x1eU))));
        tracep->chgBit(oldp+16,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       >> 0x1dU))));
        tracep->chgCData(oldp+17,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                         >> 0x1aU))),3);
        tracep->chgBit(oldp+18,((1U & (((IData)((0x18000000U 
                                                 == 
                                                 (0x18000000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU]))) 
                                        | (IData)((0xc000000U 
                                                   == 
                                                   (0xc000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))) 
                                       | (IData)((0x14000000U 
                                                  == 
                                                  (0x14000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))))));
        tracep->chgBit(oldp+19,((1U & VL_REDXOR_32(
                                                   (0x1c000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))));
        tracep->chgBit(oldp+20,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       >> 0x1cU))));
        tracep->chgBit(oldp+21,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       >> 0x1bU))));
        tracep->chgBit(oldp+22,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       >> 0x1aU))));
        tracep->chgCData(oldp+23,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                         >> 0x17U))),3);
        tracep->chgBit(oldp+24,((1U & (((IData)((0x3000000U 
                                                 == 
                                                 (0x3000000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU]))) 
                                        | (IData)((0x1800000U 
                                                   == 
                                                   (0x1800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))) 
                                       | (IData)((0x2800000U 
                                                  == 
                                                  (0x2800000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))))));
        tracep->chgBit(oldp+25,((1U & VL_REDXOR_32(
                                                   (0x3800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))));
        tracep->chgBit(oldp+26,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       >> 0x19U))));
        tracep->chgBit(oldp+27,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       >> 0x18U))));
        tracep->chgBit(oldp+28,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       >> 0x17U))));
        tracep->chgCData(oldp+29,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                         >> 0x14U))),3);
        tracep->chgBit(oldp+30,((1U & (((IData)((0x600000U 
                                                 == 
                                                 (0x600000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU]))) 
                                        | (IData)((0x300000U 
                                                   == 
                                                   (0x300000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))) 
                                       | (IData)((0x500000U 
                                                  == 
                                                  (0x500000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))))));
        tracep->chgBit(oldp+31,((1U & VL_REDXOR_32(
                                                   (0x700000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))));
        tracep->chgBit(oldp+32,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       >> 0x16U))));
        tracep->chgBit(oldp+33,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       >> 0x15U))));
        tracep->chgBit(oldp+34,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       >> 0x14U))));
        tracep->chgCData(oldp+35,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                         >> 0x11U))),3);
        tracep->chgBit(oldp+36,((1U & (((IData)((0xc0000U 
                                                 == 
                                                 (0xc0000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU]))) 
                                        | (IData)((0x60000U 
                                                   == 
                                                   (0x60000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))) 
                                       | (IData)((0xa0000U 
                                                  == 
                                                  (0xa0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))))));
        tracep->chgBit(oldp+37,((1U & VL_REDXOR_32(
                                                   (0xe0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))));
        tracep->chgBit(oldp+38,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       >> 0x13U))));
        tracep->chgBit(oldp+39,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       >> 0x12U))));
        tracep->chgBit(oldp+40,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       >> 0x11U))));
        tracep->chgCData(oldp+41,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                         >> 0xeU))),3);
        tracep->chgBit(oldp+42,((1U & (((IData)((0x18000U 
                                                 == 
                                                 (0x18000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU]))) 
                                        | (IData)((0xc000U 
                                                   == 
                                                   (0xc000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))) 
                                       | (IData)((0x14000U 
                                                  == 
                                                  (0x14000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))))));
        tracep->chgBit(oldp+43,((1U & VL_REDXOR_32(
                                                   (0x1c000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))));
        tracep->chgBit(oldp+44,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       >> 0x10U))));
        tracep->chgBit(oldp+45,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       >> 0xfU))));
        tracep->chgBit(oldp+46,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       >> 0xeU))));
        tracep->chgCData(oldp+47,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                         >> 0xbU))),3);
        tracep->chgBit(oldp+48,((1U & (((IData)((0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU]))) 
                                        | (IData)((0x1800U 
                                                   == 
                                                   (0x1800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))) 
                                       | (IData)((0x2800U 
                                                  == 
                                                  (0x2800U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))))));
        tracep->chgBit(oldp+49,((1U & VL_REDXOR_16(
                                                   (0x3800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))));
        tracep->chgBit(oldp+50,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       >> 0xdU))));
        tracep->chgBit(oldp+51,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       >> 0xcU))));
        tracep->chgBit(oldp+52,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       >> 0xbU))));
        tracep->chgCData(oldp+53,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                         >> 8U))),3);
        tracep->chgBit(oldp+54,((1U & (((IData)((0x600U 
                                                 == 
                                                 (0x600U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU]))) 
                                        | (IData)((0x300U 
                                                   == 
                                                   (0x300U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))) 
                                       | (IData)((0x500U 
                                                  == 
                                                  (0x500U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))))));
        tracep->chgBit(oldp+55,((1U & VL_REDXOR_16(
                                                   (0x700U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))));
        tracep->chgBit(oldp+56,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       >> 0xaU))));
        tracep->chgBit(oldp+57,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       >> 9U))));
        tracep->chgBit(oldp+58,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       >> 8U))));
        tracep->chgCData(oldp+59,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                         >> 5U))),3);
        tracep->chgBit(oldp+60,((1U & (((IData)((0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU]))) 
                                        | (IData)((0x60U 
                                                   == 
                                                   (0x60U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))) 
                                       | (IData)((0xa0U 
                                                  == 
                                                  (0xa0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))))));
        tracep->chgBit(oldp+61,((1U & VL_REDXOR_8((0xe0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))));
        tracep->chgBit(oldp+62,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       >> 7U))));
        tracep->chgBit(oldp+63,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       >> 6U))));
        tracep->chgBit(oldp+64,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       >> 5U))));
        tracep->chgCData(oldp+65,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                         >> 2U))),3);
        tracep->chgBit(oldp+66,((1U & (((IData)((0x18U 
                                                 == 
                                                 (0x18U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU]))) 
                                        | (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))) 
                                       | (IData)((0x14U 
                                                  == 
                                                  (0x14U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))))));
        tracep->chgBit(oldp+67,((1U & VL_REDXOR_8((0x1cU 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))));
        tracep->chgBit(oldp+68,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       >> 4U))));
        tracep->chgBit(oldp+69,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       >> 3U))));
        tracep->chgBit(oldp+70,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       >> 2U))));
        tracep->chgCData(oldp+71,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])),2);
        tracep->chgBit(oldp+72,((IData)((3U == (3U 
                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))));
        tracep->chgBit(oldp+73,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                          >> 1U)))));
        tracep->chgBit(oldp+74,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])));
        tracep->chgBit(oldp+75,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                       >> 1U))));
        tracep->chgCData(oldp+76,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))),3);
        tracep->chgBit(oldp+77,((1U & (((IData)((0x600U 
                                                 == 
                                                 (0x600U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                        | (IData)((0x300U 
                                                   == 
                                                   (0x300U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                       | (IData)((0x500U 
                                                  == 
                                                  (0x500U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+78,((1U & VL_REDXOR_16(
                                                   (0x700U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+79,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 0xaU))));
        tracep->chgBit(oldp+80,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 9U))));
        tracep->chgBit(oldp+81,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 8U))));
        tracep->chgCData(oldp+82,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))),3);
        tracep->chgBit(oldp+83,((1U & (((IData)((0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                        | (IData)((0x60U 
                                                   == 
                                                   (0x60U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                       | (IData)((0xa0U 
                                                  == 
                                                  (0xa0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+84,((1U & VL_REDXOR_8((0xe0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+85,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 7U))));
        tracep->chgBit(oldp+86,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 6U))));
        tracep->chgBit(oldp+87,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 5U))));
        tracep->chgCData(oldp+88,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))),3);
        tracep->chgBit(oldp+89,((1U & (((IData)((0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                        | (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                       | (IData)((0x14U 
                                                  == 
                                                  (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+90,((1U & VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+91,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 4U))));
        tracep->chgBit(oldp+92,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 3U))));
        tracep->chgBit(oldp+93,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 2U))));
        tracep->chgIData(oldp+94,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U]),32);
        tracep->chgSData(oldp+95,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+96,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                   >> 0x1dU)),3);
        tracep->chgBit(oldp+97,((1U & (((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))))));
        tracep->chgBit(oldp+98,((1U & VL_REDXOR_32(
                                                   (0xe0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))));
        tracep->chgBit(oldp+99,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                 >> 0x1fU)));
        tracep->chgBit(oldp+100,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+101,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+102,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+103,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))))));
        tracep->chgBit(oldp+104,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))));
        tracep->chgBit(oldp+105,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+106,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+107,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+108,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+109,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))))));
        tracep->chgBit(oldp+110,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))));
        tracep->chgBit(oldp+111,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+112,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+113,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+114,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+115,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))))));
        tracep->chgBit(oldp+116,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))));
        tracep->chgBit(oldp+117,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+118,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+119,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+120,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+121,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))))));
        tracep->chgBit(oldp+122,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))));
        tracep->chgBit(oldp+123,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+124,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+125,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+126,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+127,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))))));
        tracep->chgBit(oldp+128,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))));
        tracep->chgBit(oldp+129,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+130,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+131,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+132,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+133,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))))));
        tracep->chgBit(oldp+134,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))));
        tracep->chgBit(oldp+135,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+136,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+137,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+138,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+139,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))))));
        tracep->chgBit(oldp+140,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))));
        tracep->chgBit(oldp+141,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+142,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        >> 9U))));
        tracep->chgBit(oldp+143,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        >> 8U))));
        tracep->chgCData(oldp+144,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+145,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))))));
        tracep->chgBit(oldp+146,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))));
        tracep->chgBit(oldp+147,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        >> 7U))));
        tracep->chgBit(oldp+148,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        >> 6U))));
        tracep->chgBit(oldp+149,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        >> 5U))));
        tracep->chgCData(oldp+150,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+151,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))))));
        tracep->chgBit(oldp+152,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))));
        tracep->chgBit(oldp+153,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        >> 4U))));
        tracep->chgBit(oldp+154,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        >> 3U))));
        tracep->chgBit(oldp+155,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        >> 2U))));
        tracep->chgCData(oldp+156,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])),2);
        tracep->chgBit(oldp+157,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))));
        tracep->chgBit(oldp+158,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                           >> 1U)))));
        tracep->chgBit(oldp+159,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])));
        tracep->chgBit(oldp+160,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                        >> 1U))));
        tracep->chgCData(oldp+161,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+162,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+163,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+164,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+165,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+166,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+167,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+168,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+169,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+170,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+171,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+172,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+173,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+174,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+175,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+176,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+177,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+178,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+179,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U]),32);
        tracep->chgSData(oldp+180,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+181,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+182,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))))));
        tracep->chgBit(oldp+183,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))));
        tracep->chgBit(oldp+184,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+185,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+186,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+187,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+188,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))))));
        tracep->chgBit(oldp+189,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))));
        tracep->chgBit(oldp+190,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+191,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+192,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+193,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+194,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))))));
        tracep->chgBit(oldp+195,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))));
        tracep->chgBit(oldp+196,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+197,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+198,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+199,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+200,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))))));
        tracep->chgBit(oldp+201,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))));
        tracep->chgBit(oldp+202,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+203,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+204,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+205,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+206,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))))));
        tracep->chgBit(oldp+207,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))));
        tracep->chgBit(oldp+208,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+209,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+210,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+211,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+212,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))))));
        tracep->chgBit(oldp+213,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))));
        tracep->chgBit(oldp+214,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+215,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+216,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+217,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+218,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))))));
        tracep->chgBit(oldp+219,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))));
        tracep->chgBit(oldp+220,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+221,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+222,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+223,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+224,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))))));
        tracep->chgBit(oldp+225,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))));
        tracep->chgBit(oldp+226,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+227,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        >> 9U))));
        tracep->chgBit(oldp+228,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        >> 8U))));
        tracep->chgCData(oldp+229,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+230,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))))));
        tracep->chgBit(oldp+231,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))));
        tracep->chgBit(oldp+232,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        >> 7U))));
        tracep->chgBit(oldp+233,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        >> 6U))));
        tracep->chgBit(oldp+234,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        >> 5U))));
        tracep->chgCData(oldp+235,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+236,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))))));
        tracep->chgBit(oldp+237,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))));
        tracep->chgBit(oldp+238,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        >> 4U))));
        tracep->chgBit(oldp+239,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        >> 3U))));
        tracep->chgBit(oldp+240,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        >> 2U))));
        tracep->chgCData(oldp+241,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])),2);
        tracep->chgBit(oldp+242,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))));
        tracep->chgBit(oldp+243,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                           >> 1U)))));
        tracep->chgBit(oldp+244,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])));
        tracep->chgBit(oldp+245,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                        >> 1U))));
        tracep->chgCData(oldp+246,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+247,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+248,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+249,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+250,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+251,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+252,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+253,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+254,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+255,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+256,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+257,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+258,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+259,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+260,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+261,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+262,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+263,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+264,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U]),32);
        tracep->chgSData(oldp+265,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+266,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+267,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))))));
        tracep->chgBit(oldp+268,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))));
        tracep->chgBit(oldp+269,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+270,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+271,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+272,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+273,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))))));
        tracep->chgBit(oldp+274,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))));
        tracep->chgBit(oldp+275,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+276,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+277,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+278,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+279,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))))));
        tracep->chgBit(oldp+280,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))));
        tracep->chgBit(oldp+281,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+282,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+283,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+284,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+285,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))))));
        tracep->chgBit(oldp+286,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))));
        tracep->chgBit(oldp+287,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+288,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+289,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+290,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+291,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))))));
        tracep->chgBit(oldp+292,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))));
        tracep->chgBit(oldp+293,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+294,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+295,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+296,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+297,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))))));
        tracep->chgBit(oldp+298,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))));
        tracep->chgBit(oldp+299,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+300,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+301,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+302,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+303,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))))));
        tracep->chgBit(oldp+304,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))));
        tracep->chgBit(oldp+305,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+306,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+307,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+308,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+309,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))))));
        tracep->chgBit(oldp+310,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))));
        tracep->chgBit(oldp+311,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+312,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        >> 9U))));
        tracep->chgBit(oldp+313,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        >> 8U))));
        tracep->chgCData(oldp+314,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+315,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))))));
        tracep->chgBit(oldp+316,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))));
        tracep->chgBit(oldp+317,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        >> 7U))));
        tracep->chgBit(oldp+318,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        >> 6U))));
        tracep->chgBit(oldp+319,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        >> 5U))));
        tracep->chgCData(oldp+320,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+321,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))))));
        tracep->chgBit(oldp+322,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))));
        tracep->chgBit(oldp+323,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        >> 4U))));
        tracep->chgBit(oldp+324,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        >> 3U))));
        tracep->chgBit(oldp+325,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        >> 2U))));
        tracep->chgCData(oldp+326,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])),2);
        tracep->chgBit(oldp+327,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))));
        tracep->chgBit(oldp+328,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                           >> 1U)))));
        tracep->chgBit(oldp+329,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])));
        tracep->chgBit(oldp+330,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                        >> 1U))));
        tracep->chgCData(oldp+331,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+332,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+333,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+334,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+335,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+336,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+337,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+338,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+339,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+340,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+341,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+342,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+343,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+344,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+345,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+346,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+347,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+348,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+349,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U]),32);
        tracep->chgSData(oldp+350,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+351,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+352,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))))));
        tracep->chgBit(oldp+353,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))));
        tracep->chgBit(oldp+354,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+355,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+356,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+357,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+358,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))))));
        tracep->chgBit(oldp+359,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))));
        tracep->chgBit(oldp+360,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+361,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+362,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+363,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+364,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))))));
        tracep->chgBit(oldp+365,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))));
        tracep->chgBit(oldp+366,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+367,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+368,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+369,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+370,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))))));
        tracep->chgBit(oldp+371,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))));
        tracep->chgBit(oldp+372,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+373,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+374,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+375,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+376,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))))));
        tracep->chgBit(oldp+377,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))));
        tracep->chgBit(oldp+378,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+379,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+380,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+381,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+382,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))))));
        tracep->chgBit(oldp+383,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))));
        tracep->chgBit(oldp+384,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+385,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+386,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+387,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+388,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))))));
        tracep->chgBit(oldp+389,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))));
        tracep->chgBit(oldp+390,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+391,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+392,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+393,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+394,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))))));
        tracep->chgBit(oldp+395,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))));
        tracep->chgBit(oldp+396,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+397,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        >> 9U))));
        tracep->chgBit(oldp+398,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        >> 8U))));
        tracep->chgCData(oldp+399,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+400,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))))));
        tracep->chgBit(oldp+401,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))));
        tracep->chgBit(oldp+402,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        >> 7U))));
        tracep->chgBit(oldp+403,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        >> 6U))));
        tracep->chgBit(oldp+404,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        >> 5U))));
        tracep->chgCData(oldp+405,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+406,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))))));
        tracep->chgBit(oldp+407,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))));
        tracep->chgBit(oldp+408,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        >> 4U))));
        tracep->chgBit(oldp+409,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        >> 3U))));
        tracep->chgBit(oldp+410,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        >> 2U))));
        tracep->chgCData(oldp+411,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])),2);
        tracep->chgBit(oldp+412,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))));
        tracep->chgBit(oldp+413,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                           >> 1U)))));
        tracep->chgBit(oldp+414,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])));
        tracep->chgBit(oldp+415,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                        >> 1U))));
        tracep->chgCData(oldp+416,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+417,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+418,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+419,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+420,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+421,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+422,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+423,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+424,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+425,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+426,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+427,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+428,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+429,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+430,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+431,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+432,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+433,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+434,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U]),32);
        tracep->chgSData(oldp+435,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+436,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+437,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))))));
        tracep->chgBit(oldp+438,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))));
        tracep->chgBit(oldp+439,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+440,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+441,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+442,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+443,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))))));
        tracep->chgBit(oldp+444,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))));
        tracep->chgBit(oldp+445,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+446,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+447,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+448,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+449,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))))));
        tracep->chgBit(oldp+450,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))));
        tracep->chgBit(oldp+451,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+452,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+453,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+454,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+455,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))))));
        tracep->chgBit(oldp+456,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))));
        tracep->chgBit(oldp+457,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+458,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+459,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+460,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+461,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))))));
        tracep->chgBit(oldp+462,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))));
        tracep->chgBit(oldp+463,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+464,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+465,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+466,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+467,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))))));
        tracep->chgBit(oldp+468,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))));
        tracep->chgBit(oldp+469,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+470,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+471,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+472,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+473,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))))));
        tracep->chgBit(oldp+474,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))));
        tracep->chgBit(oldp+475,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+476,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+477,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+478,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+479,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))))));
        tracep->chgBit(oldp+480,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))));
        tracep->chgBit(oldp+481,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+482,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        >> 9U))));
        tracep->chgBit(oldp+483,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        >> 8U))));
        tracep->chgCData(oldp+484,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+485,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))))));
        tracep->chgBit(oldp+486,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))));
        tracep->chgBit(oldp+487,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        >> 7U))));
        tracep->chgBit(oldp+488,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        >> 6U))));
        tracep->chgBit(oldp+489,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        >> 5U))));
        tracep->chgCData(oldp+490,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+491,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))))));
        tracep->chgBit(oldp+492,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))));
        tracep->chgBit(oldp+493,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        >> 4U))));
        tracep->chgBit(oldp+494,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        >> 3U))));
        tracep->chgBit(oldp+495,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        >> 2U))));
        tracep->chgCData(oldp+496,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])),2);
        tracep->chgBit(oldp+497,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))));
        tracep->chgBit(oldp+498,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                           >> 1U)))));
        tracep->chgBit(oldp+499,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])));
        tracep->chgBit(oldp+500,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                        >> 1U))));
        tracep->chgCData(oldp+501,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+502,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+503,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+504,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+505,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+506,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+507,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+508,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+509,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+510,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+511,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+512,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+513,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+514,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+515,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+516,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+517,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+518,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+519,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U]),32);
        tracep->chgSData(oldp+520,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+521,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+522,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))))));
        tracep->chgBit(oldp+523,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))));
        tracep->chgBit(oldp+524,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+525,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+526,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+527,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+528,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))))));
        tracep->chgBit(oldp+529,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))));
        tracep->chgBit(oldp+530,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+531,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+532,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+533,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+534,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))))));
        tracep->chgBit(oldp+535,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))));
        tracep->chgBit(oldp+536,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+537,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+538,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+539,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+540,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))))));
        tracep->chgBit(oldp+541,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))));
        tracep->chgBit(oldp+542,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+543,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+544,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+545,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+546,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))))));
        tracep->chgBit(oldp+547,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))));
        tracep->chgBit(oldp+548,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+549,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+550,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+551,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+552,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))))));
        tracep->chgBit(oldp+553,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))));
        tracep->chgBit(oldp+554,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+555,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+556,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+557,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+558,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))))));
        tracep->chgBit(oldp+559,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))));
        tracep->chgBit(oldp+560,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+561,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+562,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+563,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+564,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))))));
        tracep->chgBit(oldp+565,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))));
        tracep->chgBit(oldp+566,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+567,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        >> 9U))));
        tracep->chgBit(oldp+568,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        >> 8U))));
        tracep->chgCData(oldp+569,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+570,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))))));
        tracep->chgBit(oldp+571,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))));
        tracep->chgBit(oldp+572,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        >> 7U))));
        tracep->chgBit(oldp+573,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        >> 6U))));
        tracep->chgBit(oldp+574,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        >> 5U))));
        tracep->chgCData(oldp+575,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+576,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))))));
        tracep->chgBit(oldp+577,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))));
        tracep->chgBit(oldp+578,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        >> 4U))));
        tracep->chgBit(oldp+579,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        >> 3U))));
        tracep->chgBit(oldp+580,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        >> 2U))));
        tracep->chgCData(oldp+581,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])),2);
        tracep->chgBit(oldp+582,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))));
        tracep->chgBit(oldp+583,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                           >> 1U)))));
        tracep->chgBit(oldp+584,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])));
        tracep->chgBit(oldp+585,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                        >> 1U))));
        tracep->chgCData(oldp+586,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+587,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+588,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+589,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+590,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+591,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+592,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+593,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+594,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+595,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+596,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+597,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+598,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+599,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+600,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+601,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+602,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+603,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+604,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U]),32);
        tracep->chgSData(oldp+605,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+606,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+607,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))))));
        tracep->chgBit(oldp+608,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))));
        tracep->chgBit(oldp+609,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+610,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+611,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+612,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+613,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))))));
        tracep->chgBit(oldp+614,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))));
        tracep->chgBit(oldp+615,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+616,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+617,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+618,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+619,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))))));
        tracep->chgBit(oldp+620,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))));
        tracep->chgBit(oldp+621,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+622,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+623,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+624,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+625,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))))));
        tracep->chgBit(oldp+626,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))));
        tracep->chgBit(oldp+627,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+628,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+629,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+630,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+631,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))))));
        tracep->chgBit(oldp+632,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))));
        tracep->chgBit(oldp+633,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+634,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+635,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+636,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+637,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))))));
        tracep->chgBit(oldp+638,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))));
        tracep->chgBit(oldp+639,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+640,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+641,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+642,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+643,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))))));
        tracep->chgBit(oldp+644,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))));
        tracep->chgBit(oldp+645,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+646,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+647,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+648,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+649,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))))));
        tracep->chgBit(oldp+650,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))));
        tracep->chgBit(oldp+651,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+652,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        >> 9U))));
        tracep->chgBit(oldp+653,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        >> 8U))));
        tracep->chgCData(oldp+654,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+655,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))))));
        tracep->chgBit(oldp+656,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))));
        tracep->chgBit(oldp+657,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        >> 7U))));
        tracep->chgBit(oldp+658,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        >> 6U))));
        tracep->chgBit(oldp+659,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        >> 5U))));
        tracep->chgCData(oldp+660,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+661,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))))));
        tracep->chgBit(oldp+662,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))));
        tracep->chgBit(oldp+663,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        >> 4U))));
        tracep->chgBit(oldp+664,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        >> 3U))));
        tracep->chgBit(oldp+665,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        >> 2U))));
        tracep->chgCData(oldp+666,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])),2);
        tracep->chgBit(oldp+667,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))));
        tracep->chgBit(oldp+668,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                           >> 1U)))));
        tracep->chgBit(oldp+669,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])));
        tracep->chgBit(oldp+670,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                        >> 1U))));
        tracep->chgCData(oldp+671,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+672,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+673,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+674,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+675,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+676,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+677,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+678,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+679,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+680,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+681,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+682,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+683,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+684,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+685,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+686,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+687,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+688,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+689,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U]),32);
        tracep->chgSData(oldp+690,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+691,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+692,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))))));
        tracep->chgBit(oldp+693,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))));
        tracep->chgBit(oldp+694,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+695,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+696,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+697,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+698,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))))));
        tracep->chgBit(oldp+699,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))));
        tracep->chgBit(oldp+700,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+701,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+702,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+703,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+704,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))))));
        tracep->chgBit(oldp+705,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))));
        tracep->chgBit(oldp+706,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+707,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+708,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+709,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+710,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))))));
        tracep->chgBit(oldp+711,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))));
        tracep->chgBit(oldp+712,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+713,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+714,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+715,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+716,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))))));
        tracep->chgBit(oldp+717,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))));
        tracep->chgBit(oldp+718,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+719,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+720,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+721,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+722,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))))));
        tracep->chgBit(oldp+723,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))));
        tracep->chgBit(oldp+724,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+725,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+726,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+727,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+728,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))))));
        tracep->chgBit(oldp+729,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))));
        tracep->chgBit(oldp+730,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+731,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+732,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+733,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+734,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))))));
        tracep->chgBit(oldp+735,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))));
        tracep->chgBit(oldp+736,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+737,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        >> 9U))));
        tracep->chgBit(oldp+738,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        >> 8U))));
        tracep->chgCData(oldp+739,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+740,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))))));
        tracep->chgBit(oldp+741,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))));
        tracep->chgBit(oldp+742,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        >> 7U))));
        tracep->chgBit(oldp+743,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        >> 6U))));
        tracep->chgBit(oldp+744,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        >> 5U))));
        tracep->chgCData(oldp+745,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+746,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))))));
        tracep->chgBit(oldp+747,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))));
        tracep->chgBit(oldp+748,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        >> 4U))));
        tracep->chgBit(oldp+749,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        >> 3U))));
        tracep->chgBit(oldp+750,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        >> 2U))));
        tracep->chgCData(oldp+751,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])),2);
        tracep->chgBit(oldp+752,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))));
        tracep->chgBit(oldp+753,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                           >> 1U)))));
        tracep->chgBit(oldp+754,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])));
        tracep->chgBit(oldp+755,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                        >> 1U))));
        tracep->chgCData(oldp+756,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+757,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+758,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+759,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+760,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+761,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+762,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+763,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+764,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+765,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+766,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+767,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+768,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+769,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+770,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+771,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+772,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+773,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+774,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U]),32);
        tracep->chgSData(oldp+775,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+776,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+777,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))))));
        tracep->chgBit(oldp+778,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))));
        tracep->chgBit(oldp+779,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+780,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+781,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+782,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+783,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))))));
        tracep->chgBit(oldp+784,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))));
        tracep->chgBit(oldp+785,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+786,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+787,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+788,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+789,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))))));
        tracep->chgBit(oldp+790,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))));
        tracep->chgBit(oldp+791,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+792,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+793,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+794,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+795,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))))));
        tracep->chgBit(oldp+796,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))));
        tracep->chgBit(oldp+797,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+798,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+799,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+800,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+801,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))))));
        tracep->chgBit(oldp+802,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))));
        tracep->chgBit(oldp+803,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+804,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+805,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+806,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+807,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))))));
        tracep->chgBit(oldp+808,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))));
        tracep->chgBit(oldp+809,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+810,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+811,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+812,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+813,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))))));
        tracep->chgBit(oldp+814,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))));
        tracep->chgBit(oldp+815,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+816,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+817,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+818,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+819,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))))));
        tracep->chgBit(oldp+820,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))));
        tracep->chgBit(oldp+821,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+822,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        >> 9U))));
        tracep->chgBit(oldp+823,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        >> 8U))));
        tracep->chgCData(oldp+824,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+825,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))))));
        tracep->chgBit(oldp+826,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))));
        tracep->chgBit(oldp+827,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        >> 7U))));
        tracep->chgBit(oldp+828,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        >> 6U))));
        tracep->chgBit(oldp+829,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        >> 5U))));
        tracep->chgCData(oldp+830,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+831,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))))));
        tracep->chgBit(oldp+832,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))));
        tracep->chgBit(oldp+833,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        >> 4U))));
        tracep->chgBit(oldp+834,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        >> 3U))));
        tracep->chgBit(oldp+835,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        >> 2U))));
        tracep->chgCData(oldp+836,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])),2);
        tracep->chgBit(oldp+837,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))));
        tracep->chgBit(oldp+838,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                           >> 1U)))));
        tracep->chgBit(oldp+839,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])));
        tracep->chgBit(oldp+840,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                        >> 1U))));
        tracep->chgCData(oldp+841,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+842,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+843,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+844,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+845,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+846,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+847,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+848,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+849,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+850,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+851,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+852,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+853,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+854,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+855,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+856,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+857,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+858,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+859,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U]),32);
        tracep->chgSData(oldp+860,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+861,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+862,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))))));
        tracep->chgBit(oldp+863,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))));
        tracep->chgBit(oldp+864,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+865,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+866,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+867,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+868,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))))));
        tracep->chgBit(oldp+869,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))));
        tracep->chgBit(oldp+870,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+871,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+872,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+873,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+874,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))))));
        tracep->chgBit(oldp+875,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))));
        tracep->chgBit(oldp+876,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+877,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+878,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+879,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+880,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))))));
        tracep->chgBit(oldp+881,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))));
        tracep->chgBit(oldp+882,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+883,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+884,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+885,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+886,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))))));
        tracep->chgBit(oldp+887,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))));
        tracep->chgBit(oldp+888,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+889,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+890,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+891,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+892,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))))));
        tracep->chgBit(oldp+893,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))));
        tracep->chgBit(oldp+894,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+895,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+896,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+897,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+898,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))))));
        tracep->chgBit(oldp+899,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))));
        tracep->chgBit(oldp+900,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+901,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+902,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+903,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+904,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))))));
        tracep->chgBit(oldp+905,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))));
        tracep->chgBit(oldp+906,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+907,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        >> 9U))));
        tracep->chgBit(oldp+908,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        >> 8U))));
        tracep->chgCData(oldp+909,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+910,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))))));
        tracep->chgBit(oldp+911,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))));
        tracep->chgBit(oldp+912,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        >> 7U))));
        tracep->chgBit(oldp+913,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        >> 6U))));
        tracep->chgBit(oldp+914,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        >> 5U))));
        tracep->chgCData(oldp+915,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+916,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))))));
        tracep->chgBit(oldp+917,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))));
        tracep->chgBit(oldp+918,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        >> 4U))));
        tracep->chgBit(oldp+919,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        >> 3U))));
        tracep->chgBit(oldp+920,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        >> 2U))));
        tracep->chgCData(oldp+921,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])),2);
        tracep->chgBit(oldp+922,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))));
        tracep->chgBit(oldp+923,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                           >> 1U)))));
        tracep->chgBit(oldp+924,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])));
        tracep->chgBit(oldp+925,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                        >> 1U))));
        tracep->chgCData(oldp+926,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+927,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+928,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+929,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+930,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+931,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+932,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+933,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+934,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+935,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+936,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+937,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+938,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+939,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+940,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+941,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+942,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+943,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+944,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU]),32);
        tracep->chgSData(oldp+945,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+946,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+947,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))))));
        tracep->chgBit(oldp+948,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))));
        tracep->chgBit(oldp+949,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+950,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+951,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+952,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+953,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))))));
        tracep->chgBit(oldp+954,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))));
        tracep->chgBit(oldp+955,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+956,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+957,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+958,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+959,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))))));
        tracep->chgBit(oldp+960,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))));
        tracep->chgBit(oldp+961,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+962,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+963,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+964,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+965,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))))));
        tracep->chgBit(oldp+966,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))));
        tracep->chgBit(oldp+967,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+968,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+969,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+970,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+971,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))))));
        tracep->chgBit(oldp+972,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))));
        tracep->chgBit(oldp+973,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+974,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+975,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+976,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+977,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))))));
        tracep->chgBit(oldp+978,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))));
        tracep->chgBit(oldp+979,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+980,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+981,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+982,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+983,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))))));
        tracep->chgBit(oldp+984,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))));
        tracep->chgBit(oldp+985,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+986,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+987,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+988,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+989,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))))));
        tracep->chgBit(oldp+990,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))));
        tracep->chgBit(oldp+991,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+992,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                        >> 9U))));
        tracep->chgBit(oldp+993,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                        >> 8U))));
        tracep->chgCData(oldp+994,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+995,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))))));
        tracep->chgBit(oldp+996,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))));
        tracep->chgBit(oldp+997,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                        >> 7U))));
        tracep->chgBit(oldp+998,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                        >> 6U))));
        tracep->chgBit(oldp+999,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                        >> 5U))));
        tracep->chgCData(oldp+1000,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1001,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))))));
        tracep->chgBit(oldp+1002,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))));
        tracep->chgBit(oldp+1003,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                         >> 4U))));
        tracep->chgBit(oldp+1004,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                         >> 3U))));
        tracep->chgBit(oldp+1005,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                         >> 2U))));
        tracep->chgCData(oldp+1006,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])),2);
        tracep->chgBit(oldp+1007,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))));
        tracep->chgBit(oldp+1008,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1009,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])));
        tracep->chgBit(oldp+1010,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                         >> 1U))));
        tracep->chgCData(oldp+1011,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1012,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1013,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1014,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1015,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1016,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1017,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1018,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1019,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1020,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1021,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1022,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1023,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1024,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1025,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1026,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1027,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1028,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1029,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU]),32);
        tracep->chgSData(oldp+1030,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1031,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1032,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))))));
        tracep->chgBit(oldp+1033,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))));
        tracep->chgBit(oldp+1034,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1035,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1036,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1037,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1038,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))))));
        tracep->chgBit(oldp+1039,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))));
        tracep->chgBit(oldp+1040,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1041,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1042,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1043,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1044,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))))));
        tracep->chgBit(oldp+1045,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))));
        tracep->chgBit(oldp+1046,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1047,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1048,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1049,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1050,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))))));
        tracep->chgBit(oldp+1051,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))));
        tracep->chgBit(oldp+1052,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1053,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1054,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1055,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1056,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))))));
        tracep->chgBit(oldp+1057,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))));
        tracep->chgBit(oldp+1058,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1059,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1060,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1061,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1062,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))))));
        tracep->chgBit(oldp+1063,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))));
        tracep->chgBit(oldp+1064,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1065,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1066,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1067,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1068,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))))));
        tracep->chgBit(oldp+1069,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))));
        tracep->chgBit(oldp+1070,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1071,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1072,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1073,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1074,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))))));
        tracep->chgBit(oldp+1075,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))));
        tracep->chgBit(oldp+1076,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1077,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         >> 9U))));
        tracep->chgBit(oldp+1078,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         >> 8U))));
        tracep->chgCData(oldp+1079,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1080,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))))));
        tracep->chgBit(oldp+1081,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))));
        tracep->chgBit(oldp+1082,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         >> 7U))));
        tracep->chgBit(oldp+1083,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         >> 6U))));
        tracep->chgBit(oldp+1084,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         >> 5U))));
        tracep->chgCData(oldp+1085,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1086,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))))));
        tracep->chgBit(oldp+1087,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))));
        tracep->chgBit(oldp+1088,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         >> 4U))));
        tracep->chgBit(oldp+1089,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         >> 3U))));
        tracep->chgBit(oldp+1090,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         >> 2U))));
        tracep->chgCData(oldp+1091,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])),2);
        tracep->chgBit(oldp+1092,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))));
        tracep->chgBit(oldp+1093,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1094,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])));
        tracep->chgBit(oldp+1095,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                         >> 1U))));
        tracep->chgCData(oldp+1096,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1097,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1098,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1099,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1100,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1101,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1102,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1103,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1104,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1105,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1106,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1107,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1108,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1109,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1110,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1111,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1112,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1113,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1114,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU]),32);
        tracep->chgSData(oldp+1115,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1116,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1117,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))))));
        tracep->chgBit(oldp+1118,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))));
        tracep->chgBit(oldp+1119,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1120,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1121,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1122,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1123,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))))));
        tracep->chgBit(oldp+1124,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))));
        tracep->chgBit(oldp+1125,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1126,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1127,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1128,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1129,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))))));
        tracep->chgBit(oldp+1130,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))));
        tracep->chgBit(oldp+1131,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1132,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1133,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1134,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1135,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))))));
        tracep->chgBit(oldp+1136,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))));
        tracep->chgBit(oldp+1137,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1138,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1139,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1140,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1141,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))))));
        tracep->chgBit(oldp+1142,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))));
        tracep->chgBit(oldp+1143,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1144,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1145,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1146,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1147,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))))));
        tracep->chgBit(oldp+1148,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))));
        tracep->chgBit(oldp+1149,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1150,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1151,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1152,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1153,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))))));
        tracep->chgBit(oldp+1154,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))));
        tracep->chgBit(oldp+1155,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1156,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1157,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1158,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1159,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))))));
        tracep->chgBit(oldp+1160,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))));
        tracep->chgBit(oldp+1161,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1162,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         >> 9U))));
        tracep->chgBit(oldp+1163,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         >> 8U))));
        tracep->chgCData(oldp+1164,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1165,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))))));
        tracep->chgBit(oldp+1166,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))));
        tracep->chgBit(oldp+1167,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         >> 7U))));
        tracep->chgBit(oldp+1168,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         >> 6U))));
        tracep->chgBit(oldp+1169,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         >> 5U))));
        tracep->chgCData(oldp+1170,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1171,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))))));
        tracep->chgBit(oldp+1172,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))));
        tracep->chgBit(oldp+1173,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         >> 4U))));
        tracep->chgBit(oldp+1174,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         >> 3U))));
        tracep->chgBit(oldp+1175,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         >> 2U))));
        tracep->chgCData(oldp+1176,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])),2);
        tracep->chgBit(oldp+1177,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))));
        tracep->chgBit(oldp+1178,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1179,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])));
        tracep->chgBit(oldp+1180,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                         >> 1U))));
        tracep->chgCData(oldp+1181,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1182,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1183,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1184,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1185,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1186,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1187,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1188,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1189,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1190,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1191,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1192,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1193,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1194,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1195,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1196,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1197,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1198,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1199,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU]),32);
        tracep->chgSData(oldp+1200,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1201,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1202,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))))));
        tracep->chgBit(oldp+1203,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))));
        tracep->chgBit(oldp+1204,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1205,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1206,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1207,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1208,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))))));
        tracep->chgBit(oldp+1209,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))));
        tracep->chgBit(oldp+1210,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1211,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1212,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1213,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1214,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))))));
        tracep->chgBit(oldp+1215,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))));
        tracep->chgBit(oldp+1216,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1217,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1218,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1219,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1220,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))))));
        tracep->chgBit(oldp+1221,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))));
        tracep->chgBit(oldp+1222,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1223,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1224,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1225,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1226,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))))));
        tracep->chgBit(oldp+1227,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))));
        tracep->chgBit(oldp+1228,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1229,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1230,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1231,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1232,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))))));
        tracep->chgBit(oldp+1233,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))));
        tracep->chgBit(oldp+1234,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1235,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1236,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1237,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1238,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))))));
        tracep->chgBit(oldp+1239,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))));
        tracep->chgBit(oldp+1240,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1241,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1242,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1243,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1244,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))))));
        tracep->chgBit(oldp+1245,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))));
        tracep->chgBit(oldp+1246,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1247,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         >> 9U))));
        tracep->chgBit(oldp+1248,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         >> 8U))));
        tracep->chgCData(oldp+1249,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1250,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))))));
        tracep->chgBit(oldp+1251,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))));
        tracep->chgBit(oldp+1252,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         >> 7U))));
        tracep->chgBit(oldp+1253,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         >> 6U))));
        tracep->chgBit(oldp+1254,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         >> 5U))));
        tracep->chgCData(oldp+1255,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1256,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))))));
        tracep->chgBit(oldp+1257,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))));
        tracep->chgBit(oldp+1258,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         >> 4U))));
        tracep->chgBit(oldp+1259,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         >> 3U))));
        tracep->chgBit(oldp+1260,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         >> 2U))));
        tracep->chgCData(oldp+1261,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])),2);
        tracep->chgBit(oldp+1262,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))));
        tracep->chgBit(oldp+1263,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1264,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])));
        tracep->chgBit(oldp+1265,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                         >> 1U))));
        tracep->chgCData(oldp+1266,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1267,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1268,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1269,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1270,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1271,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1272,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1273,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1274,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1275,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1276,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1277,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1278,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1279,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1280,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1281,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1282,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1283,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1284,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU]),32);
        tracep->chgSData(oldp+1285,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1286,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1287,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))))));
        tracep->chgBit(oldp+1288,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))));
        tracep->chgBit(oldp+1289,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1290,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1291,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1292,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1293,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))))));
        tracep->chgBit(oldp+1294,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))));
        tracep->chgBit(oldp+1295,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1296,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1297,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1298,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1299,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))))));
        tracep->chgBit(oldp+1300,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))));
        tracep->chgBit(oldp+1301,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1302,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1303,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1304,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1305,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))))));
        tracep->chgBit(oldp+1306,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))));
        tracep->chgBit(oldp+1307,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1308,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1309,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1310,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1311,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))))));
        tracep->chgBit(oldp+1312,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))));
        tracep->chgBit(oldp+1313,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1314,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1315,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1316,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1317,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))))));
        tracep->chgBit(oldp+1318,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))));
        tracep->chgBit(oldp+1319,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1320,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1321,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1322,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1323,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))))));
        tracep->chgBit(oldp+1324,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))));
        tracep->chgBit(oldp+1325,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1326,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1327,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1328,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1329,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))))));
        tracep->chgBit(oldp+1330,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))));
        tracep->chgBit(oldp+1331,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1332,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         >> 9U))));
        tracep->chgBit(oldp+1333,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         >> 8U))));
        tracep->chgCData(oldp+1334,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1335,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))))));
        tracep->chgBit(oldp+1336,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))));
        tracep->chgBit(oldp+1337,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         >> 7U))));
        tracep->chgBit(oldp+1338,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         >> 6U))));
        tracep->chgBit(oldp+1339,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         >> 5U))));
        tracep->chgCData(oldp+1340,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1341,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))))));
        tracep->chgBit(oldp+1342,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))));
        tracep->chgBit(oldp+1343,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         >> 4U))));
        tracep->chgBit(oldp+1344,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         >> 3U))));
        tracep->chgBit(oldp+1345,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         >> 2U))));
        tracep->chgCData(oldp+1346,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])),2);
        tracep->chgBit(oldp+1347,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))));
        tracep->chgBit(oldp+1348,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1349,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])));
        tracep->chgBit(oldp+1350,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                         >> 1U))));
        tracep->chgCData(oldp+1351,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1352,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1353,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1354,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1355,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1356,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1357,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1358,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1359,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1360,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1361,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1362,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1363,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1364,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1365,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1366,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1367,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1368,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1369,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU]),32);
        tracep->chgSData(oldp+1370,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1371,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1372,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))))));
        tracep->chgBit(oldp+1373,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))));
        tracep->chgBit(oldp+1374,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1375,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1376,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1377,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1378,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))))));
        tracep->chgBit(oldp+1379,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))));
        tracep->chgBit(oldp+1380,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1381,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1382,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1383,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1384,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))))));
        tracep->chgBit(oldp+1385,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))));
        tracep->chgBit(oldp+1386,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1387,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1388,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1389,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1390,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))))));
        tracep->chgBit(oldp+1391,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))));
        tracep->chgBit(oldp+1392,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1393,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1394,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1395,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1396,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))))));
        tracep->chgBit(oldp+1397,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))));
        tracep->chgBit(oldp+1398,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1399,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1400,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1401,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1402,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))))));
        tracep->chgBit(oldp+1403,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))));
        tracep->chgBit(oldp+1404,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1405,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1406,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1407,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1408,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))))));
        tracep->chgBit(oldp+1409,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))));
        tracep->chgBit(oldp+1410,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1411,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1412,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1413,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1414,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))))));
        tracep->chgBit(oldp+1415,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))));
        tracep->chgBit(oldp+1416,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1417,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         >> 9U))));
        tracep->chgBit(oldp+1418,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         >> 8U))));
        tracep->chgCData(oldp+1419,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1420,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))))));
        tracep->chgBit(oldp+1421,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))));
        tracep->chgBit(oldp+1422,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         >> 7U))));
        tracep->chgBit(oldp+1423,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         >> 6U))));
        tracep->chgBit(oldp+1424,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         >> 5U))));
        tracep->chgCData(oldp+1425,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1426,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))))));
        tracep->chgBit(oldp+1427,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))));
        tracep->chgBit(oldp+1428,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         >> 4U))));
        tracep->chgBit(oldp+1429,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         >> 3U))));
        tracep->chgBit(oldp+1430,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         >> 2U))));
        tracep->chgCData(oldp+1431,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])),2);
        tracep->chgBit(oldp+1432,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))));
        tracep->chgBit(oldp+1433,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1434,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])));
        tracep->chgBit(oldp+1435,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                         >> 1U))));
        tracep->chgCData(oldp+1436,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1437,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1438,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1439,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1440,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1441,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1442,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1443,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1444,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1445,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1446,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1447,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1448,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1449,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1450,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1451,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1452,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1453,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1454,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U]),32);
        tracep->chgSData(oldp+1455,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1456,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1457,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))))));
        tracep->chgBit(oldp+1458,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))));
        tracep->chgBit(oldp+1459,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1460,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1461,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1462,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1463,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))))));
        tracep->chgBit(oldp+1464,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))));
        tracep->chgBit(oldp+1465,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1466,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1467,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1468,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1469,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))))));
        tracep->chgBit(oldp+1470,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))));
        tracep->chgBit(oldp+1471,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1472,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1473,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1474,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1475,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))))));
        tracep->chgBit(oldp+1476,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))));
        tracep->chgBit(oldp+1477,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1478,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1479,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1480,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1481,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))))));
        tracep->chgBit(oldp+1482,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))));
        tracep->chgBit(oldp+1483,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1484,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1485,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1486,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1487,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))))));
        tracep->chgBit(oldp+1488,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))));
        tracep->chgBit(oldp+1489,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1490,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1491,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1492,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1493,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))))));
        tracep->chgBit(oldp+1494,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))));
        tracep->chgBit(oldp+1495,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1496,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1497,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1498,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1499,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))))));
        tracep->chgBit(oldp+1500,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))));
        tracep->chgBit(oldp+1501,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1502,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         >> 9U))));
        tracep->chgBit(oldp+1503,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         >> 8U))));
        tracep->chgCData(oldp+1504,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1505,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))))));
        tracep->chgBit(oldp+1506,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))));
        tracep->chgBit(oldp+1507,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         >> 7U))));
        tracep->chgBit(oldp+1508,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         >> 6U))));
        tracep->chgBit(oldp+1509,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         >> 5U))));
        tracep->chgCData(oldp+1510,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1511,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))))));
        tracep->chgBit(oldp+1512,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))));
        tracep->chgBit(oldp+1513,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         >> 4U))));
        tracep->chgBit(oldp+1514,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         >> 3U))));
        tracep->chgBit(oldp+1515,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         >> 2U))));
        tracep->chgCData(oldp+1516,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])),2);
        tracep->chgBit(oldp+1517,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])))));
        tracep->chgBit(oldp+1518,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1519,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U])));
        tracep->chgBit(oldp+1520,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
                                         >> 1U))));
        tracep->chgCData(oldp+1521,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1522,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1523,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1524,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1525,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1526,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1527,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1528,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1529,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1530,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1531,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1532,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1533,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1534,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1535,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1536,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1537,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1538,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1539,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U]),32);
        tracep->chgSData(oldp+1540,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1541,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1542,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))))));
        tracep->chgBit(oldp+1543,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))));
        tracep->chgBit(oldp+1544,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1545,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1546,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1547,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1548,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))))));
        tracep->chgBit(oldp+1549,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))));
        tracep->chgBit(oldp+1550,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1551,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1552,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1553,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1554,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))))));
        tracep->chgBit(oldp+1555,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))));
        tracep->chgBit(oldp+1556,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1557,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1558,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1559,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1560,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))))));
        tracep->chgBit(oldp+1561,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))));
        tracep->chgBit(oldp+1562,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1563,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1564,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1565,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1566,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))))));
        tracep->chgBit(oldp+1567,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))));
        tracep->chgBit(oldp+1568,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1569,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1570,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1571,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1572,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))))));
        tracep->chgBit(oldp+1573,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))));
        tracep->chgBit(oldp+1574,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1575,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1576,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1577,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1578,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))))));
        tracep->chgBit(oldp+1579,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))));
        tracep->chgBit(oldp+1580,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1581,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1582,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1583,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1584,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))))));
        tracep->chgBit(oldp+1585,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))));
        tracep->chgBit(oldp+1586,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1587,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         >> 9U))));
        tracep->chgBit(oldp+1588,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         >> 8U))));
        tracep->chgCData(oldp+1589,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1590,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))))));
        tracep->chgBit(oldp+1591,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))));
        tracep->chgBit(oldp+1592,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         >> 7U))));
        tracep->chgBit(oldp+1593,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         >> 6U))));
        tracep->chgBit(oldp+1594,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         >> 5U))));
        tracep->chgCData(oldp+1595,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1596,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))))));
        tracep->chgBit(oldp+1597,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))));
        tracep->chgBit(oldp+1598,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         >> 4U))));
        tracep->chgBit(oldp+1599,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         >> 3U))));
        tracep->chgBit(oldp+1600,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         >> 2U))));
        tracep->chgCData(oldp+1601,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])),2);
        tracep->chgBit(oldp+1602,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])))));
        tracep->chgBit(oldp+1603,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1604,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U])));
        tracep->chgBit(oldp+1605,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
                                         >> 1U))));
        tracep->chgCData(oldp+1606,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1607,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1608,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1609,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1610,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1611,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1612,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1613,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1614,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1615,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1616,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1617,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1618,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1619,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1620,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1621,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1622,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1623,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1624,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U]),32);
        tracep->chgSData(oldp+1625,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1626,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1627,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))))));
        tracep->chgBit(oldp+1628,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))));
        tracep->chgBit(oldp+1629,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1630,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1631,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1632,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1633,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))))));
        tracep->chgBit(oldp+1634,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))));
        tracep->chgBit(oldp+1635,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1636,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1637,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1638,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1639,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))))));
        tracep->chgBit(oldp+1640,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))));
        tracep->chgBit(oldp+1641,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1642,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1643,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1644,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1645,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))))));
        tracep->chgBit(oldp+1646,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))));
        tracep->chgBit(oldp+1647,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1648,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1649,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1650,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1651,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))))));
        tracep->chgBit(oldp+1652,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))));
        tracep->chgBit(oldp+1653,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1654,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1655,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1656,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1657,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))))));
        tracep->chgBit(oldp+1658,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))));
        tracep->chgBit(oldp+1659,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1660,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1661,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1662,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1663,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))))));
        tracep->chgBit(oldp+1664,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))));
        tracep->chgBit(oldp+1665,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1666,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1667,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1668,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1669,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))))));
        tracep->chgBit(oldp+1670,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))));
        tracep->chgBit(oldp+1671,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1672,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         >> 9U))));
        tracep->chgBit(oldp+1673,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         >> 8U))));
        tracep->chgCData(oldp+1674,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1675,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))))));
        tracep->chgBit(oldp+1676,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))));
        tracep->chgBit(oldp+1677,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         >> 7U))));
        tracep->chgBit(oldp+1678,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         >> 6U))));
        tracep->chgBit(oldp+1679,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         >> 5U))));
        tracep->chgCData(oldp+1680,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1681,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))))));
        tracep->chgBit(oldp+1682,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))));
        tracep->chgBit(oldp+1683,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         >> 4U))));
        tracep->chgBit(oldp+1684,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         >> 3U))));
        tracep->chgBit(oldp+1685,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         >> 2U))));
        tracep->chgCData(oldp+1686,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])),2);
        tracep->chgBit(oldp+1687,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])))));
        tracep->chgBit(oldp+1688,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1689,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U])));
        tracep->chgBit(oldp+1690,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
                                         >> 1U))));
        tracep->chgCData(oldp+1691,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1692,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1693,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1694,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1695,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1696,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1697,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1698,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1699,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1700,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1701,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1702,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1703,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1704,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1705,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1706,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1707,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1708,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1709,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U]),32);
        tracep->chgSData(oldp+1710,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1711,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1712,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))))));
        tracep->chgBit(oldp+1713,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))));
        tracep->chgBit(oldp+1714,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1715,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1716,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1717,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1718,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))))));
        tracep->chgBit(oldp+1719,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))));
        tracep->chgBit(oldp+1720,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1721,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1722,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1723,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1724,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))))));
        tracep->chgBit(oldp+1725,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))));
        tracep->chgBit(oldp+1726,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1727,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1728,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1729,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1730,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))))));
        tracep->chgBit(oldp+1731,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))));
        tracep->chgBit(oldp+1732,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1733,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1734,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1735,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1736,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))))));
        tracep->chgBit(oldp+1737,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))));
        tracep->chgBit(oldp+1738,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1739,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1740,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1741,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1742,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))))));
        tracep->chgBit(oldp+1743,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))));
        tracep->chgBit(oldp+1744,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1745,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1746,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1747,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1748,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))))));
        tracep->chgBit(oldp+1749,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))));
        tracep->chgBit(oldp+1750,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1751,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1752,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1753,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1754,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))))));
        tracep->chgBit(oldp+1755,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))));
        tracep->chgBit(oldp+1756,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1757,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         >> 9U))));
        tracep->chgBit(oldp+1758,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         >> 8U))));
        tracep->chgCData(oldp+1759,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1760,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))))));
        tracep->chgBit(oldp+1761,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))));
        tracep->chgBit(oldp+1762,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         >> 7U))));
        tracep->chgBit(oldp+1763,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         >> 6U))));
        tracep->chgBit(oldp+1764,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         >> 5U))));
        tracep->chgCData(oldp+1765,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1766,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))))));
        tracep->chgBit(oldp+1767,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))));
        tracep->chgBit(oldp+1768,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         >> 4U))));
        tracep->chgBit(oldp+1769,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         >> 3U))));
        tracep->chgBit(oldp+1770,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         >> 2U))));
        tracep->chgCData(oldp+1771,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])),2);
        tracep->chgBit(oldp+1772,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])))));
        tracep->chgBit(oldp+1773,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1774,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U])));
        tracep->chgBit(oldp+1775,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
                                         >> 1U))));
        tracep->chgCData(oldp+1776,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1777,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1778,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1779,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1780,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1781,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1782,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1783,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1784,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1785,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1786,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1787,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1788,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1789,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1790,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1791,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1792,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1793,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1794,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U]),32);
        tracep->chgSData(oldp+1795,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1796,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1797,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))))));
        tracep->chgBit(oldp+1798,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))));
        tracep->chgBit(oldp+1799,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1800,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1801,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1802,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1803,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))))));
        tracep->chgBit(oldp+1804,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))));
        tracep->chgBit(oldp+1805,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1806,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1807,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1808,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1809,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))))));
        tracep->chgBit(oldp+1810,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))));
        tracep->chgBit(oldp+1811,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1812,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1813,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1814,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1815,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))))));
        tracep->chgBit(oldp+1816,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))));
        tracep->chgBit(oldp+1817,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1818,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1819,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1820,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1821,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))))));
        tracep->chgBit(oldp+1822,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))));
        tracep->chgBit(oldp+1823,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1824,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1825,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1826,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1827,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))))));
        tracep->chgBit(oldp+1828,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))));
        tracep->chgBit(oldp+1829,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1830,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1831,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1832,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1833,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))))));
        tracep->chgBit(oldp+1834,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))));
        tracep->chgBit(oldp+1835,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1836,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1837,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1838,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1839,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))))));
        tracep->chgBit(oldp+1840,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))));
        tracep->chgBit(oldp+1841,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1842,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         >> 9U))));
        tracep->chgBit(oldp+1843,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         >> 8U))));
        tracep->chgCData(oldp+1844,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1845,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))))));
        tracep->chgBit(oldp+1846,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))));
        tracep->chgBit(oldp+1847,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         >> 7U))));
        tracep->chgBit(oldp+1848,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         >> 6U))));
        tracep->chgBit(oldp+1849,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         >> 5U))));
        tracep->chgCData(oldp+1850,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1851,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))))));
        tracep->chgBit(oldp+1852,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))));
        tracep->chgBit(oldp+1853,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         >> 4U))));
        tracep->chgBit(oldp+1854,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         >> 3U))));
        tracep->chgBit(oldp+1855,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         >> 2U))));
        tracep->chgCData(oldp+1856,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])),2);
        tracep->chgBit(oldp+1857,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])))));
        tracep->chgBit(oldp+1858,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1859,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U])));
        tracep->chgBit(oldp+1860,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
                                         >> 1U))));
        tracep->chgCData(oldp+1861,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1862,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1863,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1864,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1865,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1866,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1867,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1868,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1869,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1870,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1871,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1872,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1873,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1874,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1875,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1876,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1877,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1878,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1879,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U]),32);
        tracep->chgSData(oldp+1880,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1881,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1882,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U])))))));
        tracep->chgBit(oldp+1883,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U])))));
        tracep->chgBit(oldp+1884,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1885,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1886,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1887,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1888,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U])))))));
        tracep->chgBit(oldp+1889,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U])))));
        tracep->chgBit(oldp+1890,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1891,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1892,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1893,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1894,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U])))))));
        tracep->chgBit(oldp+1895,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U])))));
        tracep->chgBit(oldp+1896,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1897,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1898,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1899,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1900,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U])))))));
        tracep->chgBit(oldp+1901,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U])))));
        tracep->chgBit(oldp+1902,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1903,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1904,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1905,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1906,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U])))))));
        tracep->chgBit(oldp+1907,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U])))));
        tracep->chgBit(oldp+1908,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1909,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1910,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1911,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1912,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U])))))));
        tracep->chgBit(oldp+1913,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U])))));
        tracep->chgBit(oldp+1914,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1915,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1916,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1917,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1918,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U])))))));
    }
}
