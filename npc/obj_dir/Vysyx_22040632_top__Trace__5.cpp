// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vysyx_22040632_top__Syms.h"


void Vysyx_22040632_top___024root__trace_chg_sub_9(Vysyx_22040632_top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root__trace_chg_sub_9\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 21110);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgBit(oldp+0,((1U & VL_REDXOR_16((0x700U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U])))));
        tracep->chgBit(oldp+1,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                      >> 0xaU))));
        tracep->chgBit(oldp+2,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                      >> 9U))));
        tracep->chgBit(oldp+3,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                      >> 8U))));
        tracep->chgCData(oldp+4,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                        >> 5U))),3);
        tracep->chgBit(oldp+5,((1U & (((IData)((0xc0U 
                                                == 
                                                (0xc0U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U]))) 
                                       | (IData)((0x60U 
                                                  == 
                                                  (0x60U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U])))) 
                                      | (IData)((0xa0U 
                                                 == 
                                                 (0xa0U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U])))))));
        tracep->chgBit(oldp+6,((1U & VL_REDXOR_8((0xe0U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U])))));
        tracep->chgBit(oldp+7,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                      >> 7U))));
        tracep->chgBit(oldp+8,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                      >> 6U))));
        tracep->chgBit(oldp+9,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                      >> 5U))));
        tracep->chgCData(oldp+10,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                         >> 2U))),3);
        tracep->chgBit(oldp+11,((1U & (((IData)((0x18U 
                                                 == 
                                                 (0x18U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U]))) 
                                        | (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U])))) 
                                       | (IData)((0x14U 
                                                  == 
                                                  (0x14U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U])))))));
        tracep->chgBit(oldp+12,((1U & VL_REDXOR_8((0x1cU 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U])))));
        tracep->chgBit(oldp+13,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                       >> 4U))));
        tracep->chgBit(oldp+14,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                       >> 3U))));
        tracep->chgBit(oldp+15,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                       >> 2U))));
        tracep->chgCData(oldp+16,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U])),2);
        tracep->chgBit(oldp+17,((IData)((3U == (3U 
                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U])))));
        tracep->chgBit(oldp+18,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                       ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                          >> 1U)))));
        tracep->chgBit(oldp+19,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U])));
        tracep->chgBit(oldp+20,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
                                       >> 1U))));
        tracep->chgCData(oldp+21,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))),3);
        tracep->chgBit(oldp+22,((1U & (((IData)((0x600U 
                                                 == 
                                                 (0x600U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                        | (IData)((0x300U 
                                                   == 
                                                   (0x300U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                       | (IData)((0x500U 
                                                  == 
                                                  (0x500U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+23,((1U & VL_REDXOR_16(
                                                   (0x700U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+24,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 0xaU))));
        tracep->chgBit(oldp+25,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 9U))));
        tracep->chgBit(oldp+26,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 8U))));
        tracep->chgCData(oldp+27,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))),3);
        tracep->chgBit(oldp+28,((1U & (((IData)((0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                        | (IData)((0x60U 
                                                   == 
                                                   (0x60U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                       | (IData)((0xa0U 
                                                  == 
                                                  (0xa0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+29,((1U & VL_REDXOR_8((0xe0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+30,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 7U))));
        tracep->chgBit(oldp+31,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 6U))));
        tracep->chgBit(oldp+32,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 5U))));
        tracep->chgCData(oldp+33,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))),3);
        tracep->chgBit(oldp+34,((1U & (((IData)((0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                        | (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                       | (IData)((0x14U 
                                                  == 
                                                  (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+35,((1U & VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+36,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 4U))));
        tracep->chgBit(oldp+37,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 3U))));
        tracep->chgBit(oldp+38,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 2U))));
        tracep->chgIData(oldp+39,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U]),32);
        tracep->chgSData(oldp+40,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+41,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                   >> 0x1dU)),3);
        tracep->chgBit(oldp+42,((1U & (((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))))));
        tracep->chgBit(oldp+43,((1U & VL_REDXOR_32(
                                                   (0xe0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))));
        tracep->chgBit(oldp+44,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                 >> 0x1fU)));
        tracep->chgBit(oldp+45,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                       >> 0x1eU))));
        tracep->chgBit(oldp+46,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                       >> 0x1dU))));
        tracep->chgCData(oldp+47,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                         >> 0x1aU))),3);
        tracep->chgBit(oldp+48,((1U & (((IData)((0x18000000U 
                                                 == 
                                                 (0x18000000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U]))) 
                                        | (IData)((0xc000000U 
                                                   == 
                                                   (0xc000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))) 
                                       | (IData)((0x14000000U 
                                                  == 
                                                  (0x14000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))))));
        tracep->chgBit(oldp+49,((1U & VL_REDXOR_32(
                                                   (0x1c000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))));
        tracep->chgBit(oldp+50,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                       >> 0x1cU))));
        tracep->chgBit(oldp+51,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                       >> 0x1bU))));
        tracep->chgBit(oldp+52,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                       >> 0x1aU))));
        tracep->chgCData(oldp+53,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                         >> 0x17U))),3);
        tracep->chgBit(oldp+54,((1U & (((IData)((0x3000000U 
                                                 == 
                                                 (0x3000000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U]))) 
                                        | (IData)((0x1800000U 
                                                   == 
                                                   (0x1800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))) 
                                       | (IData)((0x2800000U 
                                                  == 
                                                  (0x2800000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))))));
        tracep->chgBit(oldp+55,((1U & VL_REDXOR_32(
                                                   (0x3800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))));
        tracep->chgBit(oldp+56,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                       >> 0x19U))));
        tracep->chgBit(oldp+57,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                       >> 0x18U))));
        tracep->chgBit(oldp+58,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                       >> 0x17U))));
        tracep->chgCData(oldp+59,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                         >> 0x14U))),3);
        tracep->chgBit(oldp+60,((1U & (((IData)((0x600000U 
                                                 == 
                                                 (0x600000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U]))) 
                                        | (IData)((0x300000U 
                                                   == 
                                                   (0x300000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))) 
                                       | (IData)((0x500000U 
                                                  == 
                                                  (0x500000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))))));
        tracep->chgBit(oldp+61,((1U & VL_REDXOR_32(
                                                   (0x700000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))));
        tracep->chgBit(oldp+62,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                       >> 0x16U))));
        tracep->chgBit(oldp+63,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                       >> 0x15U))));
        tracep->chgBit(oldp+64,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                       >> 0x14U))));
        tracep->chgCData(oldp+65,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                         >> 0x11U))),3);
        tracep->chgBit(oldp+66,((1U & (((IData)((0xc0000U 
                                                 == 
                                                 (0xc0000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U]))) 
                                        | (IData)((0x60000U 
                                                   == 
                                                   (0x60000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))) 
                                       | (IData)((0xa0000U 
                                                  == 
                                                  (0xa0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))))));
        tracep->chgBit(oldp+67,((1U & VL_REDXOR_32(
                                                   (0xe0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))));
        tracep->chgBit(oldp+68,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                       >> 0x13U))));
        tracep->chgBit(oldp+69,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                       >> 0x12U))));
        tracep->chgBit(oldp+70,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                       >> 0x11U))));
        tracep->chgCData(oldp+71,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                         >> 0xeU))),3);
        tracep->chgBit(oldp+72,((1U & (((IData)((0x18000U 
                                                 == 
                                                 (0x18000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U]))) 
                                        | (IData)((0xc000U 
                                                   == 
                                                   (0xc000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))) 
                                       | (IData)((0x14000U 
                                                  == 
                                                  (0x14000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))))));
        tracep->chgBit(oldp+73,((1U & VL_REDXOR_32(
                                                   (0x1c000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))));
        tracep->chgBit(oldp+74,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                       >> 0x10U))));
        tracep->chgBit(oldp+75,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                       >> 0xfU))));
        tracep->chgBit(oldp+76,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                       >> 0xeU))));
        tracep->chgCData(oldp+77,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                         >> 0xbU))),3);
        tracep->chgBit(oldp+78,((1U & (((IData)((0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U]))) 
                                        | (IData)((0x1800U 
                                                   == 
                                                   (0x1800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))) 
                                       | (IData)((0x2800U 
                                                  == 
                                                  (0x2800U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))))));
        tracep->chgBit(oldp+79,((1U & VL_REDXOR_16(
                                                   (0x3800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))));
        tracep->chgBit(oldp+80,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                       >> 0xdU))));
        tracep->chgBit(oldp+81,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                       >> 0xcU))));
        tracep->chgBit(oldp+82,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                       >> 0xbU))));
        tracep->chgCData(oldp+83,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                         >> 8U))),3);
        tracep->chgBit(oldp+84,((1U & (((IData)((0x600U 
                                                 == 
                                                 (0x600U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U]))) 
                                        | (IData)((0x300U 
                                                   == 
                                                   (0x300U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))) 
                                       | (IData)((0x500U 
                                                  == 
                                                  (0x500U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))))));
        tracep->chgBit(oldp+85,((1U & VL_REDXOR_16(
                                                   (0x700U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))));
        tracep->chgBit(oldp+86,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                       >> 0xaU))));
        tracep->chgBit(oldp+87,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                       >> 9U))));
        tracep->chgBit(oldp+88,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                       >> 8U))));
        tracep->chgCData(oldp+89,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                         >> 5U))),3);
        tracep->chgBit(oldp+90,((1U & (((IData)((0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U]))) 
                                        | (IData)((0x60U 
                                                   == 
                                                   (0x60U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))) 
                                       | (IData)((0xa0U 
                                                  == 
                                                  (0xa0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))))));
        tracep->chgBit(oldp+91,((1U & VL_REDXOR_8((0xe0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))));
        tracep->chgBit(oldp+92,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                       >> 7U))));
        tracep->chgBit(oldp+93,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                       >> 6U))));
        tracep->chgBit(oldp+94,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                       >> 5U))));
        tracep->chgCData(oldp+95,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                         >> 2U))),3);
        tracep->chgBit(oldp+96,((1U & (((IData)((0x18U 
                                                 == 
                                                 (0x18U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U]))) 
                                        | (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))) 
                                       | (IData)((0x14U 
                                                  == 
                                                  (0x14U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))))));
        tracep->chgBit(oldp+97,((1U & VL_REDXOR_8((0x1cU 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))));
        tracep->chgBit(oldp+98,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                       >> 4U))));
        tracep->chgBit(oldp+99,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                       >> 3U))));
        tracep->chgBit(oldp+100,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                        >> 2U))));
        tracep->chgCData(oldp+101,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])),2);
        tracep->chgBit(oldp+102,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))));
        tracep->chgBit(oldp+103,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                           >> 1U)))));
        tracep->chgBit(oldp+104,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])));
        tracep->chgBit(oldp+105,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                        >> 1U))));
        tracep->chgCData(oldp+106,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+107,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+108,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+109,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+110,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+111,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+112,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+113,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+114,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+115,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+116,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+117,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+118,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+119,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+120,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+121,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+122,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+123,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+124,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U]),32);
        tracep->chgSData(oldp+125,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+126,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+127,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))))));
        tracep->chgBit(oldp+128,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))));
        tracep->chgBit(oldp+129,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+130,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+131,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+132,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+133,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))))));
        tracep->chgBit(oldp+134,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))));
        tracep->chgBit(oldp+135,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+136,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+137,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+138,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+139,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))))));
        tracep->chgBit(oldp+140,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))));
        tracep->chgBit(oldp+141,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+142,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+143,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+144,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+145,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))))));
        tracep->chgBit(oldp+146,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))));
        tracep->chgBit(oldp+147,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+148,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+149,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+150,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+151,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))))));
        tracep->chgBit(oldp+152,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))));
        tracep->chgBit(oldp+153,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+154,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+155,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+156,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+157,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))))));
        tracep->chgBit(oldp+158,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))));
        tracep->chgBit(oldp+159,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+160,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+161,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+162,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+163,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))))));
        tracep->chgBit(oldp+164,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))));
        tracep->chgBit(oldp+165,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+166,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+167,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+168,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+169,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))))));
        tracep->chgBit(oldp+170,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))));
        tracep->chgBit(oldp+171,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+172,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        >> 9U))));
        tracep->chgBit(oldp+173,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        >> 8U))));
        tracep->chgCData(oldp+174,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+175,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))))));
        tracep->chgBit(oldp+176,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))));
        tracep->chgBit(oldp+177,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        >> 7U))));
        tracep->chgBit(oldp+178,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        >> 6U))));
        tracep->chgBit(oldp+179,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        >> 5U))));
        tracep->chgCData(oldp+180,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+181,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))))));
        tracep->chgBit(oldp+182,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))));
        tracep->chgBit(oldp+183,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        >> 4U))));
        tracep->chgBit(oldp+184,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        >> 3U))));
        tracep->chgBit(oldp+185,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        >> 2U))));
        tracep->chgCData(oldp+186,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])),2);
        tracep->chgBit(oldp+187,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))));
        tracep->chgBit(oldp+188,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                           >> 1U)))));
        tracep->chgBit(oldp+189,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])));
        tracep->chgBit(oldp+190,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                        >> 1U))));
        tracep->chgCData(oldp+191,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+192,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+193,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+194,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+195,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+196,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+197,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+198,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+199,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+200,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+201,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+202,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+203,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+204,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+205,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+206,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+207,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+208,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+209,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U]),32);
        tracep->chgSData(oldp+210,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+211,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+212,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))))));
        tracep->chgBit(oldp+213,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))));
        tracep->chgBit(oldp+214,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+215,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+216,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+217,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+218,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))))));
        tracep->chgBit(oldp+219,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))));
        tracep->chgBit(oldp+220,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+221,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+222,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+223,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+224,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))))));
        tracep->chgBit(oldp+225,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))));
        tracep->chgBit(oldp+226,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+227,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+228,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+229,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+230,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))))));
        tracep->chgBit(oldp+231,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))));
        tracep->chgBit(oldp+232,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+233,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+234,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+235,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+236,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))))));
        tracep->chgBit(oldp+237,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))));
        tracep->chgBit(oldp+238,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+239,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+240,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+241,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+242,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))))));
        tracep->chgBit(oldp+243,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))));
        tracep->chgBit(oldp+244,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+245,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+246,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+247,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+248,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))))));
        tracep->chgBit(oldp+249,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))));
        tracep->chgBit(oldp+250,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+251,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+252,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+253,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+254,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))))));
        tracep->chgBit(oldp+255,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))));
        tracep->chgBit(oldp+256,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+257,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        >> 9U))));
        tracep->chgBit(oldp+258,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        >> 8U))));
        tracep->chgCData(oldp+259,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+260,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))))));
        tracep->chgBit(oldp+261,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))));
        tracep->chgBit(oldp+262,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        >> 7U))));
        tracep->chgBit(oldp+263,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        >> 6U))));
        tracep->chgBit(oldp+264,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        >> 5U))));
        tracep->chgCData(oldp+265,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+266,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))))));
        tracep->chgBit(oldp+267,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))));
        tracep->chgBit(oldp+268,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        >> 4U))));
        tracep->chgBit(oldp+269,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        >> 3U))));
        tracep->chgBit(oldp+270,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        >> 2U))));
        tracep->chgCData(oldp+271,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])),2);
        tracep->chgBit(oldp+272,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))));
        tracep->chgBit(oldp+273,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                           >> 1U)))));
        tracep->chgBit(oldp+274,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])));
        tracep->chgBit(oldp+275,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                        >> 1U))));
        tracep->chgCData(oldp+276,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+277,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+278,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+279,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+280,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+281,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+282,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+283,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+284,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+285,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+286,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+287,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+288,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+289,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+290,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+291,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+292,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+293,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+294,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U]),32);
        tracep->chgSData(oldp+295,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+296,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+297,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))))));
        tracep->chgBit(oldp+298,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))));
        tracep->chgBit(oldp+299,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+300,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+301,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+302,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+303,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))))));
        tracep->chgBit(oldp+304,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))));
        tracep->chgBit(oldp+305,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+306,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+307,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+308,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+309,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))))));
        tracep->chgBit(oldp+310,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))));
        tracep->chgBit(oldp+311,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+312,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+313,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+314,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+315,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))))));
        tracep->chgBit(oldp+316,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))));
        tracep->chgBit(oldp+317,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+318,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+319,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+320,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+321,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))))));
        tracep->chgBit(oldp+322,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))));
        tracep->chgBit(oldp+323,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+324,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+325,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+326,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+327,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))))));
        tracep->chgBit(oldp+328,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))));
        tracep->chgBit(oldp+329,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+330,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+331,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+332,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+333,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))))));
        tracep->chgBit(oldp+334,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))));
        tracep->chgBit(oldp+335,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+336,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+337,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+338,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+339,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))))));
        tracep->chgBit(oldp+340,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))));
        tracep->chgBit(oldp+341,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+342,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        >> 9U))));
        tracep->chgBit(oldp+343,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        >> 8U))));
        tracep->chgCData(oldp+344,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+345,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))))));
        tracep->chgBit(oldp+346,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))));
        tracep->chgBit(oldp+347,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        >> 7U))));
        tracep->chgBit(oldp+348,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        >> 6U))));
        tracep->chgBit(oldp+349,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        >> 5U))));
        tracep->chgCData(oldp+350,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+351,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))))));
        tracep->chgBit(oldp+352,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))));
        tracep->chgBit(oldp+353,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        >> 4U))));
        tracep->chgBit(oldp+354,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        >> 3U))));
        tracep->chgBit(oldp+355,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        >> 2U))));
        tracep->chgCData(oldp+356,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])),2);
        tracep->chgBit(oldp+357,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))));
        tracep->chgBit(oldp+358,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                           >> 1U)))));
        tracep->chgBit(oldp+359,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])));
        tracep->chgBit(oldp+360,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                        >> 1U))));
        tracep->chgCData(oldp+361,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+362,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+363,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+364,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+365,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+366,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+367,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+368,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+369,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+370,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+371,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+372,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+373,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+374,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+375,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+376,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+377,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+378,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+379,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU]),32);
        tracep->chgSData(oldp+380,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+381,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+382,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))))));
        tracep->chgBit(oldp+383,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))));
        tracep->chgBit(oldp+384,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+385,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+386,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+387,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+388,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))))));
        tracep->chgBit(oldp+389,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))));
        tracep->chgBit(oldp+390,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+391,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+392,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+393,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+394,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))))));
        tracep->chgBit(oldp+395,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))));
        tracep->chgBit(oldp+396,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+397,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+398,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+399,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+400,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))))));
        tracep->chgBit(oldp+401,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))));
        tracep->chgBit(oldp+402,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+403,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+404,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+405,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+406,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))))));
        tracep->chgBit(oldp+407,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))));
        tracep->chgBit(oldp+408,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+409,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+410,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+411,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+412,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))))));
        tracep->chgBit(oldp+413,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))));
        tracep->chgBit(oldp+414,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+415,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+416,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+417,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+418,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))))));
        tracep->chgBit(oldp+419,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))));
        tracep->chgBit(oldp+420,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+421,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+422,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+423,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+424,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))))));
        tracep->chgBit(oldp+425,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))));
        tracep->chgBit(oldp+426,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+427,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        >> 9U))));
        tracep->chgBit(oldp+428,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        >> 8U))));
        tracep->chgCData(oldp+429,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+430,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))))));
        tracep->chgBit(oldp+431,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))));
        tracep->chgBit(oldp+432,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        >> 7U))));
        tracep->chgBit(oldp+433,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        >> 6U))));
        tracep->chgBit(oldp+434,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        >> 5U))));
        tracep->chgCData(oldp+435,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+436,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))))));
        tracep->chgBit(oldp+437,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))));
        tracep->chgBit(oldp+438,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        >> 4U))));
        tracep->chgBit(oldp+439,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        >> 3U))));
        tracep->chgBit(oldp+440,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        >> 2U))));
        tracep->chgCData(oldp+441,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])),2);
        tracep->chgBit(oldp+442,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))));
        tracep->chgBit(oldp+443,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                           >> 1U)))));
        tracep->chgBit(oldp+444,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])));
        tracep->chgBit(oldp+445,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                        >> 1U))));
        tracep->chgCData(oldp+446,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+447,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+448,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+449,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+450,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+451,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+452,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+453,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+454,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+455,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+456,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+457,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+458,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+459,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+460,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+461,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+462,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+463,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+464,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU]),32);
        tracep->chgSData(oldp+465,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+466,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+467,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))))));
        tracep->chgBit(oldp+468,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))));
        tracep->chgBit(oldp+469,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+470,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+471,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+472,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+473,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))))));
        tracep->chgBit(oldp+474,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))));
        tracep->chgBit(oldp+475,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+476,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+477,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+478,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+479,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))))));
        tracep->chgBit(oldp+480,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))));
        tracep->chgBit(oldp+481,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+482,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+483,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+484,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+485,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))))));
        tracep->chgBit(oldp+486,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))));
        tracep->chgBit(oldp+487,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+488,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+489,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+490,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+491,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))))));
        tracep->chgBit(oldp+492,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))));
        tracep->chgBit(oldp+493,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+494,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+495,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+496,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+497,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))))));
        tracep->chgBit(oldp+498,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))));
        tracep->chgBit(oldp+499,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+500,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+501,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+502,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+503,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))))));
        tracep->chgBit(oldp+504,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))));
        tracep->chgBit(oldp+505,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+506,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+507,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+508,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+509,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))))));
        tracep->chgBit(oldp+510,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))));
        tracep->chgBit(oldp+511,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+512,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        >> 9U))));
        tracep->chgBit(oldp+513,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        >> 8U))));
        tracep->chgCData(oldp+514,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+515,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))))));
        tracep->chgBit(oldp+516,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))));
        tracep->chgBit(oldp+517,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        >> 7U))));
        tracep->chgBit(oldp+518,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        >> 6U))));
        tracep->chgBit(oldp+519,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        >> 5U))));
        tracep->chgCData(oldp+520,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+521,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))))));
        tracep->chgBit(oldp+522,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))));
        tracep->chgBit(oldp+523,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        >> 4U))));
        tracep->chgBit(oldp+524,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        >> 3U))));
        tracep->chgBit(oldp+525,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        >> 2U))));
        tracep->chgCData(oldp+526,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])),2);
        tracep->chgBit(oldp+527,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))));
        tracep->chgBit(oldp+528,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                           >> 1U)))));
        tracep->chgBit(oldp+529,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])));
        tracep->chgBit(oldp+530,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                        >> 1U))));
        tracep->chgCData(oldp+531,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+532,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+533,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+534,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+535,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+536,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+537,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+538,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+539,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+540,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+541,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+542,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+543,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+544,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+545,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+546,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+547,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+548,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+549,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU]),32);
        tracep->chgSData(oldp+550,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+551,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+552,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))))));
        tracep->chgBit(oldp+553,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))));
        tracep->chgBit(oldp+554,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+555,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+556,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+557,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+558,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))))));
        tracep->chgBit(oldp+559,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))));
        tracep->chgBit(oldp+560,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+561,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+562,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+563,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+564,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))))));
        tracep->chgBit(oldp+565,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))));
        tracep->chgBit(oldp+566,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+567,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+568,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+569,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+570,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))))));
        tracep->chgBit(oldp+571,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))));
        tracep->chgBit(oldp+572,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+573,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+574,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+575,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+576,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))))));
        tracep->chgBit(oldp+577,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))));
        tracep->chgBit(oldp+578,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+579,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+580,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+581,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+582,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))))));
        tracep->chgBit(oldp+583,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))));
        tracep->chgBit(oldp+584,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+585,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+586,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+587,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+588,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))))));
        tracep->chgBit(oldp+589,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))));
        tracep->chgBit(oldp+590,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+591,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+592,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+593,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+594,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))))));
        tracep->chgBit(oldp+595,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))));
        tracep->chgBit(oldp+596,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+597,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        >> 9U))));
        tracep->chgBit(oldp+598,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        >> 8U))));
        tracep->chgCData(oldp+599,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+600,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))))));
        tracep->chgBit(oldp+601,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))));
        tracep->chgBit(oldp+602,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        >> 7U))));
        tracep->chgBit(oldp+603,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        >> 6U))));
        tracep->chgBit(oldp+604,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        >> 5U))));
        tracep->chgCData(oldp+605,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+606,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))))));
        tracep->chgBit(oldp+607,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))));
        tracep->chgBit(oldp+608,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        >> 4U))));
        tracep->chgBit(oldp+609,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        >> 3U))));
        tracep->chgBit(oldp+610,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        >> 2U))));
        tracep->chgCData(oldp+611,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])),2);
        tracep->chgBit(oldp+612,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))));
        tracep->chgBit(oldp+613,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                           >> 1U)))));
        tracep->chgBit(oldp+614,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])));
        tracep->chgBit(oldp+615,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                        >> 1U))));
        tracep->chgCData(oldp+616,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+617,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+618,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+619,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+620,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+621,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+622,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+623,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+624,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+625,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+626,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+627,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+628,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+629,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+630,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+631,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+632,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+633,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgBit(oldp+634,(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_valid));
        tracep->chgBit(oldp+635,(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.divw));
        tracep->chgBit(oldp+636,(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_signed));
        tracep->chgQData(oldp+637,(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.quotient),64);
        tracep->chgQData(oldp+639,(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.remainder),64);
        tracep->chgBit(oldp+641,((0x1eU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))));
        tracep->chgCData(oldp+642,(vlSymsp->TOP__ysyx_22040632_top__DOT__mif.mul_signed),2);
        tracep->chgIData(oldp+643,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU]),32);
        tracep->chgSData(oldp+644,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+645,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+646,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))))));
        tracep->chgBit(oldp+647,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))));
        tracep->chgBit(oldp+648,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+649,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+650,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+651,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+652,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))))));
        tracep->chgBit(oldp+653,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))));
        tracep->chgBit(oldp+654,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+655,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+656,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+657,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+658,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))))));
        tracep->chgBit(oldp+659,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))));
        tracep->chgBit(oldp+660,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+661,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+662,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+663,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+664,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))))));
        tracep->chgBit(oldp+665,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))));
        tracep->chgBit(oldp+666,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+667,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+668,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+669,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+670,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))))));
        tracep->chgBit(oldp+671,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))));
        tracep->chgBit(oldp+672,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+673,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+674,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+675,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+676,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))))));
        tracep->chgBit(oldp+677,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))));
        tracep->chgBit(oldp+678,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+679,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+680,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+681,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+682,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))))));
        tracep->chgBit(oldp+683,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))));
        tracep->chgBit(oldp+684,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+685,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+686,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+687,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+688,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))))));
        tracep->chgBit(oldp+689,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))));
        tracep->chgBit(oldp+690,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+691,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        >> 9U))));
        tracep->chgBit(oldp+692,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        >> 8U))));
        tracep->chgCData(oldp+693,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+694,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))))));
        tracep->chgBit(oldp+695,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))));
        tracep->chgBit(oldp+696,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        >> 7U))));
        tracep->chgBit(oldp+697,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        >> 6U))));
        tracep->chgBit(oldp+698,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        >> 5U))));
        tracep->chgCData(oldp+699,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+700,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))))));
        tracep->chgBit(oldp+701,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))));
        tracep->chgBit(oldp+702,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        >> 4U))));
        tracep->chgBit(oldp+703,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        >> 3U))));
        tracep->chgBit(oldp+704,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        >> 2U))));
        tracep->chgCData(oldp+705,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])),2);
        tracep->chgBit(oldp+706,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))));
        tracep->chgBit(oldp+707,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                           >> 1U)))));
        tracep->chgBit(oldp+708,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])));
        tracep->chgBit(oldp+709,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                        >> 1U))));
        tracep->chgCData(oldp+710,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+711,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+712,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+713,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+714,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+715,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+716,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+717,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+718,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+719,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+720,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+721,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+722,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+723,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+724,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+725,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+726,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+727,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+728,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU]),32);
        tracep->chgSData(oldp+729,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+730,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+731,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))))));
        tracep->chgBit(oldp+732,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))));
        tracep->chgBit(oldp+733,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+734,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+735,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+736,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+737,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))))));
        tracep->chgBit(oldp+738,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))));
        tracep->chgBit(oldp+739,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+740,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+741,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+742,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+743,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))))));
        tracep->chgBit(oldp+744,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))));
        tracep->chgBit(oldp+745,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+746,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+747,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+748,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+749,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))))));
        tracep->chgBit(oldp+750,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))));
        tracep->chgBit(oldp+751,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+752,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+753,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+754,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+755,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))))));
        tracep->chgBit(oldp+756,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))));
        tracep->chgBit(oldp+757,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+758,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+759,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+760,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+761,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))))));
        tracep->chgBit(oldp+762,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))));
        tracep->chgBit(oldp+763,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+764,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+765,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+766,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+767,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))))));
        tracep->chgBit(oldp+768,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))));
        tracep->chgBit(oldp+769,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+770,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+771,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+772,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+773,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))))));
        tracep->chgBit(oldp+774,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))));
        tracep->chgBit(oldp+775,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+776,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        >> 9U))));
        tracep->chgBit(oldp+777,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        >> 8U))));
        tracep->chgCData(oldp+778,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+779,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))))));
        tracep->chgBit(oldp+780,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))));
        tracep->chgBit(oldp+781,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        >> 7U))));
        tracep->chgBit(oldp+782,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        >> 6U))));
        tracep->chgBit(oldp+783,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        >> 5U))));
        tracep->chgCData(oldp+784,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+785,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))))));
        tracep->chgBit(oldp+786,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))));
        tracep->chgBit(oldp+787,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        >> 4U))));
        tracep->chgBit(oldp+788,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        >> 3U))));
        tracep->chgBit(oldp+789,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        >> 2U))));
        tracep->chgCData(oldp+790,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])),2);
        tracep->chgBit(oldp+791,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))));
        tracep->chgBit(oldp+792,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                           >> 1U)))));
        tracep->chgBit(oldp+793,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])));
        tracep->chgBit(oldp+794,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                        >> 1U))));
        tracep->chgCData(oldp+795,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+796,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+797,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+798,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+799,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+800,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+801,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+802,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+803,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+804,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+805,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+806,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+807,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+808,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+809,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+810,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+811,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+812,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+813,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU]),32);
        tracep->chgSData(oldp+814,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+815,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+816,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))))));
        tracep->chgBit(oldp+817,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))));
        tracep->chgBit(oldp+818,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+819,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+820,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+821,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+822,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))))));
        tracep->chgBit(oldp+823,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))));
        tracep->chgBit(oldp+824,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+825,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+826,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+827,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+828,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))))));
        tracep->chgBit(oldp+829,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))));
        tracep->chgBit(oldp+830,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+831,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+832,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+833,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+834,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))))));
        tracep->chgBit(oldp+835,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))));
        tracep->chgBit(oldp+836,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+837,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+838,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+839,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+840,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))))));
        tracep->chgBit(oldp+841,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))));
        tracep->chgBit(oldp+842,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+843,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+844,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+845,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+846,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))))));
        tracep->chgBit(oldp+847,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))));
        tracep->chgBit(oldp+848,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+849,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+850,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+851,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+852,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))))));
        tracep->chgBit(oldp+853,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))));
        tracep->chgBit(oldp+854,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+855,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+856,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+857,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+858,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))))));
        tracep->chgBit(oldp+859,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))));
        tracep->chgBit(oldp+860,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+861,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        >> 9U))));
        tracep->chgBit(oldp+862,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        >> 8U))));
        tracep->chgCData(oldp+863,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+864,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))))));
        tracep->chgBit(oldp+865,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))));
        tracep->chgBit(oldp+866,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        >> 7U))));
        tracep->chgBit(oldp+867,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        >> 6U))));
        tracep->chgBit(oldp+868,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        >> 5U))));
        tracep->chgCData(oldp+869,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+870,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))))));
        tracep->chgBit(oldp+871,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))));
        tracep->chgBit(oldp+872,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        >> 4U))));
        tracep->chgBit(oldp+873,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        >> 3U))));
        tracep->chgBit(oldp+874,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        >> 2U))));
        tracep->chgCData(oldp+875,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])),2);
        tracep->chgBit(oldp+876,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))));
        tracep->chgBit(oldp+877,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                           >> 1U)))));
        tracep->chgBit(oldp+878,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])));
        tracep->chgBit(oldp+879,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                        >> 1U))));
        tracep->chgCData(oldp+880,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+881,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+882,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+883,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+884,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+885,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+886,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+887,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+888,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+889,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+890,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+891,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+892,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+893,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+894,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+895,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+896,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+897,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+898,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U]),32);
        tracep->chgSData(oldp+899,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+900,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+901,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))))));
        tracep->chgBit(oldp+902,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))));
        tracep->chgBit(oldp+903,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+904,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+905,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+906,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+907,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))))));
        tracep->chgBit(oldp+908,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))));
        tracep->chgBit(oldp+909,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+910,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+911,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+912,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+913,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))))));
        tracep->chgBit(oldp+914,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))));
        tracep->chgBit(oldp+915,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+916,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        >> 0x18U))));
        tracep->chgBit(oldp+917,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        >> 0x17U))));
        tracep->chgCData(oldp+918,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                          >> 0x14U))),3);
        tracep->chgBit(oldp+919,((1U & (((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U]))) 
                                         | (IData)(
                                                   (0x300000U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))) 
                                        | (IData)((0x500000U 
                                                   == 
                                                   (0x500000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))))));
        tracep->chgBit(oldp+920,((1U & VL_REDXOR_32(
                                                    (0x700000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))));
        tracep->chgBit(oldp+921,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        >> 0x16U))));
        tracep->chgBit(oldp+922,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+923,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        >> 0x14U))));
        tracep->chgCData(oldp+924,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                          >> 0x11U))),3);
        tracep->chgBit(oldp+925,((1U & (((IData)((0xc0000U 
                                                  == 
                                                  (0xc0000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U]))) 
                                         | (IData)(
                                                   (0x60000U 
                                                    == 
                                                    (0x60000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))) 
                                        | (IData)((0xa0000U 
                                                   == 
                                                   (0xa0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))))));
        tracep->chgBit(oldp+926,((1U & VL_REDXOR_32(
                                                    (0xe0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))));
        tracep->chgBit(oldp+927,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+928,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+929,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        >> 0x11U))));
        tracep->chgCData(oldp+930,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                          >> 0xeU))),3);
        tracep->chgBit(oldp+931,((1U & (((IData)((0x18000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U]))) 
                                         | (IData)(
                                                   (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))) 
                                        | (IData)((0x14000U 
                                                   == 
                                                   (0x14000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))))));
        tracep->chgBit(oldp+932,((1U & VL_REDXOR_32(
                                                    (0x1c000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))));
        tracep->chgBit(oldp+933,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+934,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+935,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+936,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                          >> 0xbU))),3);
        tracep->chgBit(oldp+937,((1U & (((IData)((0x3000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U]))) 
                                         | (IData)(
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))) 
                                        | (IData)((0x2800U 
                                                   == 
                                                   (0x2800U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))))));
        tracep->chgBit(oldp+938,((1U & VL_REDXOR_16(
                                                    (0x3800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))));
        tracep->chgBit(oldp+939,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+940,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+941,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        >> 0xbU))));
        tracep->chgCData(oldp+942,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                          >> 8U))),3);
        tracep->chgBit(oldp+943,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U]))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))))));
        tracep->chgBit(oldp+944,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))));
        tracep->chgBit(oldp+945,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+946,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        >> 9U))));
        tracep->chgBit(oldp+947,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        >> 8U))));
        tracep->chgCData(oldp+948,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                          >> 5U))),3);
        tracep->chgBit(oldp+949,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U]))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))))));
        tracep->chgBit(oldp+950,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))));
        tracep->chgBit(oldp+951,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        >> 7U))));
        tracep->chgBit(oldp+952,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        >> 6U))));
        tracep->chgBit(oldp+953,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        >> 5U))));
        tracep->chgCData(oldp+954,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                          >> 2U))),3);
        tracep->chgBit(oldp+955,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U]))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))))));
        tracep->chgBit(oldp+956,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))));
        tracep->chgBit(oldp+957,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        >> 4U))));
        tracep->chgBit(oldp+958,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        >> 3U))));
        tracep->chgBit(oldp+959,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        >> 2U))));
        tracep->chgCData(oldp+960,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])),2);
        tracep->chgBit(oldp+961,((IData)((3U == (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))));
        tracep->chgBit(oldp+962,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                           >> 1U)))));
        tracep->chgBit(oldp+963,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])));
        tracep->chgBit(oldp+964,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                        >> 1U))));
        tracep->chgCData(oldp+965,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 8U))),3);
        tracep->chgBit(oldp+966,((1U & (((IData)((0x600U 
                                                  == 
                                                  (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x500U 
                                                   == 
                                                   (0x500U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+967,((1U & VL_REDXOR_16(
                                                    (0x700U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+968,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 0xaU))));
        tracep->chgBit(oldp+969,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 9U))));
        tracep->chgBit(oldp+970,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))));
        tracep->chgCData(oldp+971,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+972,((1U & (((IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0xa0U 
                                                   == 
                                                   (0xa0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+973,((1U & VL_REDXOR_8(
                                                   (0xe0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+974,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 7U))));
        tracep->chgBit(oldp+975,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 6U))));
        tracep->chgBit(oldp+976,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 5U))));
        tracep->chgCData(oldp+977,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                          >> 2U))),3);
        tracep->chgBit(oldp+978,((1U & (((IData)((0x18U 
                                                  == 
                                                  (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                         | (IData)(
                                                   (0xcU 
                                                    == 
                                                    (0xcU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                        | (IData)((0x14U 
                                                   == 
                                                   (0x14U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+979,((1U & VL_REDXOR_8(
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+980,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 4U))));
        tracep->chgBit(oldp+981,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 3U))));
        tracep->chgBit(oldp+982,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 2U))));
        tracep->chgIData(oldp+983,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U]),32);
        tracep->chgSData(oldp+984,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+985,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                    >> 0x1dU)),3);
        tracep->chgBit(oldp+986,((1U & (((IData)((0xc0000000U 
                                                  == 
                                                  (0xc0000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U]))) 
                                         | (IData)(
                                                   (0x60000000U 
                                                    == 
                                                    (0x60000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))) 
                                        | (IData)((0xa0000000U 
                                                   == 
                                                   (0xa0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))))));
        tracep->chgBit(oldp+987,((1U & VL_REDXOR_32(
                                                    (0xe0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))));
        tracep->chgBit(oldp+988,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+989,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+990,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                        >> 0x1dU))));
        tracep->chgCData(oldp+991,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                          >> 0x1aU))),3);
        tracep->chgBit(oldp+992,((1U & (((IData)((0x18000000U 
                                                  == 
                                                  (0x18000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U]))) 
                                         | (IData)(
                                                   (0xc000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))) 
                                        | (IData)((0x14000000U 
                                                   == 
                                                   (0x14000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))))));
        tracep->chgBit(oldp+993,((1U & VL_REDXOR_32(
                                                    (0x1c000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))));
        tracep->chgBit(oldp+994,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+995,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+996,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+997,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                          >> 0x17U))),3);
        tracep->chgBit(oldp+998,((1U & (((IData)((0x3000000U 
                                                  == 
                                                  (0x3000000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U]))) 
                                         | (IData)(
                                                   (0x1800000U 
                                                    == 
                                                    (0x1800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))) 
                                        | (IData)((0x2800000U 
                                                   == 
                                                   (0x2800000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))))));
        tracep->chgBit(oldp+999,((1U & VL_REDXOR_32(
                                                    (0x3800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))));
        tracep->chgBit(oldp+1000,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1001,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1002,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1003,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1004,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))))));
        tracep->chgBit(oldp+1005,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))));
        tracep->chgBit(oldp+1006,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1007,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1008,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1009,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1010,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))))));
        tracep->chgBit(oldp+1011,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))));
        tracep->chgBit(oldp+1012,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1013,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1014,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1015,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1016,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))))));
        tracep->chgBit(oldp+1017,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))));
        tracep->chgBit(oldp+1018,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1019,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1020,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1021,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1022,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))))));
        tracep->chgBit(oldp+1023,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))));
        tracep->chgBit(oldp+1024,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1025,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1026,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1027,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1028,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))))));
        tracep->chgBit(oldp+1029,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))));
        tracep->chgBit(oldp+1030,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1031,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                         >> 9U))));
        tracep->chgBit(oldp+1032,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                         >> 8U))));
        tracep->chgCData(oldp+1033,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1034,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))))));
        tracep->chgBit(oldp+1035,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))));
        tracep->chgBit(oldp+1036,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                         >> 7U))));
        tracep->chgBit(oldp+1037,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                         >> 6U))));
        tracep->chgBit(oldp+1038,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                         >> 5U))));
        tracep->chgCData(oldp+1039,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1040,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))))));
        tracep->chgBit(oldp+1041,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))));
        tracep->chgBit(oldp+1042,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                         >> 4U))));
        tracep->chgBit(oldp+1043,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                         >> 3U))));
        tracep->chgBit(oldp+1044,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                         >> 2U))));
        tracep->chgCData(oldp+1045,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])),2);
        tracep->chgBit(oldp+1046,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))));
        tracep->chgBit(oldp+1047,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1048,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])));
        tracep->chgBit(oldp+1049,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                         >> 1U))));
        tracep->chgCData(oldp+1050,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1051,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1052,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1053,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1054,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1055,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1056,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1057,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1058,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1059,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1060,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1061,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1062,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1063,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1064,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1065,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1066,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1067,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1068,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U]),32);
        tracep->chgSData(oldp+1069,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1070,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1071,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))))));
        tracep->chgBit(oldp+1072,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))));
        tracep->chgBit(oldp+1073,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1074,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1075,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1076,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1077,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))))));
        tracep->chgBit(oldp+1078,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))));
        tracep->chgBit(oldp+1079,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1080,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1081,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1082,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1083,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))))));
        tracep->chgBit(oldp+1084,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))));
        tracep->chgBit(oldp+1085,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1086,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1087,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1088,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1089,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))))));
        tracep->chgBit(oldp+1090,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))));
        tracep->chgBit(oldp+1091,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1092,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1093,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1094,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1095,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))))));
        tracep->chgBit(oldp+1096,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))));
        tracep->chgBit(oldp+1097,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1098,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1099,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1100,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1101,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))))));
        tracep->chgBit(oldp+1102,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))));
        tracep->chgBit(oldp+1103,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1104,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1105,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1106,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1107,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))))));
        tracep->chgBit(oldp+1108,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))));
        tracep->chgBit(oldp+1109,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1110,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1111,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1112,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1113,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))))));
        tracep->chgBit(oldp+1114,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))));
        tracep->chgBit(oldp+1115,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1116,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         >> 9U))));
        tracep->chgBit(oldp+1117,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         >> 8U))));
        tracep->chgCData(oldp+1118,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1119,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))))));
        tracep->chgBit(oldp+1120,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))));
        tracep->chgBit(oldp+1121,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         >> 7U))));
        tracep->chgBit(oldp+1122,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         >> 6U))));
        tracep->chgBit(oldp+1123,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         >> 5U))));
        tracep->chgCData(oldp+1124,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1125,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))))));
        tracep->chgBit(oldp+1126,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))));
        tracep->chgBit(oldp+1127,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         >> 4U))));
        tracep->chgBit(oldp+1128,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         >> 3U))));
        tracep->chgBit(oldp+1129,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         >> 2U))));
        tracep->chgCData(oldp+1130,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])),2);
        tracep->chgBit(oldp+1131,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))));
        tracep->chgBit(oldp+1132,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1133,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])));
        tracep->chgBit(oldp+1134,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                         >> 1U))));
        tracep->chgCData(oldp+1135,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1136,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1137,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1138,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1139,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1140,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1141,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1142,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1143,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1144,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1145,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1146,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1147,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1148,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1149,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1150,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1151,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1152,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1153,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U]),32);
        tracep->chgSData(oldp+1154,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1155,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1156,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))))));
        tracep->chgBit(oldp+1157,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))));
        tracep->chgBit(oldp+1158,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1159,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1160,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1161,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1162,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))))));
        tracep->chgBit(oldp+1163,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))));
        tracep->chgBit(oldp+1164,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1165,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1166,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1167,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1168,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))))));
        tracep->chgBit(oldp+1169,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))));
        tracep->chgBit(oldp+1170,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1171,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1172,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1173,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1174,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))))));
        tracep->chgBit(oldp+1175,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))));
        tracep->chgBit(oldp+1176,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1177,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1178,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1179,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1180,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))))));
        tracep->chgBit(oldp+1181,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))));
        tracep->chgBit(oldp+1182,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1183,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1184,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1185,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1186,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))))));
        tracep->chgBit(oldp+1187,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))));
        tracep->chgBit(oldp+1188,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1189,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1190,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1191,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1192,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))))));
        tracep->chgBit(oldp+1193,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))));
        tracep->chgBit(oldp+1194,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1195,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1196,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1197,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1198,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))))));
        tracep->chgBit(oldp+1199,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))));
        tracep->chgBit(oldp+1200,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1201,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         >> 9U))));
        tracep->chgBit(oldp+1202,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         >> 8U))));
        tracep->chgCData(oldp+1203,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1204,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))))));
        tracep->chgBit(oldp+1205,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))));
        tracep->chgBit(oldp+1206,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         >> 7U))));
        tracep->chgBit(oldp+1207,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         >> 6U))));
        tracep->chgBit(oldp+1208,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         >> 5U))));
        tracep->chgCData(oldp+1209,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1210,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))))));
        tracep->chgBit(oldp+1211,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))));
        tracep->chgBit(oldp+1212,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         >> 4U))));
        tracep->chgBit(oldp+1213,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         >> 3U))));
        tracep->chgBit(oldp+1214,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         >> 2U))));
        tracep->chgCData(oldp+1215,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])),2);
        tracep->chgBit(oldp+1216,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))));
        tracep->chgBit(oldp+1217,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1218,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])));
        tracep->chgBit(oldp+1219,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                         >> 1U))));
        tracep->chgCData(oldp+1220,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1221,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1222,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1223,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1224,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1225,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1226,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1227,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1228,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1229,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1230,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1231,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1232,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1233,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1234,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1235,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1236,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1237,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1238,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U]),32);
        tracep->chgSData(oldp+1239,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1240,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1241,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))))));
        tracep->chgBit(oldp+1242,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))));
        tracep->chgBit(oldp+1243,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1244,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1245,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1246,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1247,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))))));
        tracep->chgBit(oldp+1248,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))));
        tracep->chgBit(oldp+1249,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1250,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1251,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1252,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1253,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))))));
        tracep->chgBit(oldp+1254,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))));
        tracep->chgBit(oldp+1255,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1256,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1257,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1258,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1259,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))))));
        tracep->chgBit(oldp+1260,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))));
        tracep->chgBit(oldp+1261,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1262,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1263,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1264,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1265,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))))));
        tracep->chgBit(oldp+1266,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))));
        tracep->chgBit(oldp+1267,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1268,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1269,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1270,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1271,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))))));
        tracep->chgBit(oldp+1272,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))));
        tracep->chgBit(oldp+1273,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1274,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1275,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1276,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1277,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))))));
        tracep->chgBit(oldp+1278,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))));
        tracep->chgBit(oldp+1279,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1280,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1281,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1282,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1283,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))))));
        tracep->chgBit(oldp+1284,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))));
        tracep->chgBit(oldp+1285,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1286,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         >> 9U))));
        tracep->chgBit(oldp+1287,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         >> 8U))));
        tracep->chgCData(oldp+1288,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1289,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))))));
        tracep->chgBit(oldp+1290,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))));
        tracep->chgBit(oldp+1291,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         >> 7U))));
        tracep->chgBit(oldp+1292,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         >> 6U))));
        tracep->chgBit(oldp+1293,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         >> 5U))));
        tracep->chgCData(oldp+1294,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1295,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))))));
        tracep->chgBit(oldp+1296,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))));
        tracep->chgBit(oldp+1297,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         >> 4U))));
        tracep->chgBit(oldp+1298,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         >> 3U))));
        tracep->chgBit(oldp+1299,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         >> 2U))));
        tracep->chgCData(oldp+1300,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])),2);
        tracep->chgBit(oldp+1301,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))));
        tracep->chgBit(oldp+1302,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1303,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])));
        tracep->chgBit(oldp+1304,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                         >> 1U))));
        tracep->chgCData(oldp+1305,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1306,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1307,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1308,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1309,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1310,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1311,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1312,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1313,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1314,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1315,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1316,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1317,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1318,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1319,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1320,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1321,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1322,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1323,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U]),32);
        tracep->chgSData(oldp+1324,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1325,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1326,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))))));
        tracep->chgBit(oldp+1327,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))));
        tracep->chgBit(oldp+1328,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1329,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1330,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1331,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1332,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))))));
        tracep->chgBit(oldp+1333,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))));
        tracep->chgBit(oldp+1334,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1335,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1336,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1337,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1338,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))))));
        tracep->chgBit(oldp+1339,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))));
        tracep->chgBit(oldp+1340,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1341,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1342,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1343,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1344,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))))));
        tracep->chgBit(oldp+1345,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))));
        tracep->chgBit(oldp+1346,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1347,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1348,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1349,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1350,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))))));
        tracep->chgBit(oldp+1351,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))));
        tracep->chgBit(oldp+1352,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1353,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1354,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1355,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1356,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))))));
        tracep->chgBit(oldp+1357,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))));
        tracep->chgBit(oldp+1358,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1359,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1360,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1361,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1362,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))))));
        tracep->chgBit(oldp+1363,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))));
        tracep->chgBit(oldp+1364,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1365,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1366,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1367,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1368,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))))));
        tracep->chgBit(oldp+1369,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))));
        tracep->chgBit(oldp+1370,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1371,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         >> 9U))));
        tracep->chgBit(oldp+1372,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         >> 8U))));
        tracep->chgCData(oldp+1373,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1374,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))))));
        tracep->chgBit(oldp+1375,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))));
        tracep->chgBit(oldp+1376,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         >> 7U))));
        tracep->chgBit(oldp+1377,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         >> 6U))));
        tracep->chgBit(oldp+1378,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         >> 5U))));
        tracep->chgCData(oldp+1379,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1380,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))))));
        tracep->chgBit(oldp+1381,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))));
        tracep->chgBit(oldp+1382,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         >> 4U))));
        tracep->chgBit(oldp+1383,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         >> 3U))));
        tracep->chgBit(oldp+1384,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         >> 2U))));
        tracep->chgCData(oldp+1385,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])),2);
        tracep->chgBit(oldp+1386,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))));
        tracep->chgBit(oldp+1387,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1388,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])));
        tracep->chgBit(oldp+1389,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                         >> 1U))));
        tracep->chgCData(oldp+1390,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1391,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1392,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1393,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1394,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1395,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1396,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1397,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1398,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1399,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1400,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1401,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1402,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1403,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1404,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1405,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1406,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1407,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1408,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U]),32);
        tracep->chgSData(oldp+1409,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1410,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1411,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))))));
        tracep->chgBit(oldp+1412,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))));
        tracep->chgBit(oldp+1413,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1414,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1415,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1416,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1417,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))))));
        tracep->chgBit(oldp+1418,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))));
        tracep->chgBit(oldp+1419,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1420,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1421,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1422,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1423,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))))));
        tracep->chgBit(oldp+1424,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))));
        tracep->chgBit(oldp+1425,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1426,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1427,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1428,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1429,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))))));
        tracep->chgBit(oldp+1430,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))));
        tracep->chgBit(oldp+1431,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1432,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1433,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1434,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1435,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))))));
        tracep->chgBit(oldp+1436,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))));
        tracep->chgBit(oldp+1437,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1438,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1439,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1440,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1441,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))))));
        tracep->chgBit(oldp+1442,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))));
        tracep->chgBit(oldp+1443,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1444,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1445,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1446,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1447,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))))));
        tracep->chgBit(oldp+1448,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))));
        tracep->chgBit(oldp+1449,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1450,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1451,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1452,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1453,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))))));
        tracep->chgBit(oldp+1454,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))));
        tracep->chgBit(oldp+1455,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1456,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         >> 9U))));
        tracep->chgBit(oldp+1457,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         >> 8U))));
        tracep->chgCData(oldp+1458,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1459,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))))));
        tracep->chgBit(oldp+1460,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))));
        tracep->chgBit(oldp+1461,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         >> 7U))));
        tracep->chgBit(oldp+1462,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         >> 6U))));
        tracep->chgBit(oldp+1463,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         >> 5U))));
        tracep->chgCData(oldp+1464,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1465,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))))));
        tracep->chgBit(oldp+1466,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))));
        tracep->chgBit(oldp+1467,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         >> 4U))));
        tracep->chgBit(oldp+1468,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         >> 3U))));
        tracep->chgBit(oldp+1469,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         >> 2U))));
        tracep->chgCData(oldp+1470,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])),2);
        tracep->chgBit(oldp+1471,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))));
        tracep->chgBit(oldp+1472,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1473,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])));
        tracep->chgBit(oldp+1474,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                         >> 1U))));
        tracep->chgCData(oldp+1475,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1476,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1477,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1478,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1479,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1480,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1481,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1482,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1483,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1484,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1485,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1486,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1487,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1488,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1489,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1490,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1491,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1492,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1493,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U]),32);
        tracep->chgSData(oldp+1494,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1495,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1496,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))))));
        tracep->chgBit(oldp+1497,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))));
        tracep->chgBit(oldp+1498,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1499,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1500,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1501,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1502,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))))));
        tracep->chgBit(oldp+1503,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))));
        tracep->chgBit(oldp+1504,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1505,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1506,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1507,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1508,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))))));
        tracep->chgBit(oldp+1509,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))));
        tracep->chgBit(oldp+1510,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1511,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1512,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1513,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1514,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))))));
        tracep->chgBit(oldp+1515,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))));
        tracep->chgBit(oldp+1516,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1517,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1518,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1519,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1520,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))))));
        tracep->chgBit(oldp+1521,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))));
        tracep->chgBit(oldp+1522,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1523,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1524,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1525,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1526,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))))));
        tracep->chgBit(oldp+1527,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))));
        tracep->chgBit(oldp+1528,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1529,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1530,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1531,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1532,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))))));
        tracep->chgBit(oldp+1533,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))));
        tracep->chgBit(oldp+1534,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1535,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1536,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1537,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1538,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))))));
        tracep->chgBit(oldp+1539,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))));
        tracep->chgBit(oldp+1540,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1541,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         >> 9U))));
        tracep->chgBit(oldp+1542,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         >> 8U))));
        tracep->chgCData(oldp+1543,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1544,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))))));
        tracep->chgBit(oldp+1545,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))));
        tracep->chgBit(oldp+1546,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         >> 7U))));
        tracep->chgBit(oldp+1547,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         >> 6U))));
        tracep->chgBit(oldp+1548,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         >> 5U))));
        tracep->chgCData(oldp+1549,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1550,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))))));
        tracep->chgBit(oldp+1551,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))));
        tracep->chgBit(oldp+1552,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         >> 4U))));
        tracep->chgBit(oldp+1553,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         >> 3U))));
        tracep->chgBit(oldp+1554,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         >> 2U))));
        tracep->chgCData(oldp+1555,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])),2);
        tracep->chgBit(oldp+1556,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))));
        tracep->chgBit(oldp+1557,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1558,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])));
        tracep->chgBit(oldp+1559,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                         >> 1U))));
        tracep->chgCData(oldp+1560,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1561,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1562,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1563,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1564,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1565,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1566,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1567,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1568,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1569,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1570,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1571,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1572,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1573,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1574,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1575,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1576,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1577,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1578,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U]),32);
        tracep->chgSData(oldp+1579,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1580,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1581,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))))));
        tracep->chgBit(oldp+1582,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))));
        tracep->chgBit(oldp+1583,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1584,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1585,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1586,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1587,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))))));
        tracep->chgBit(oldp+1588,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))));
        tracep->chgBit(oldp+1589,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1590,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1591,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1592,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1593,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))))));
        tracep->chgBit(oldp+1594,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))));
        tracep->chgBit(oldp+1595,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1596,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1597,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1598,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1599,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))))));
        tracep->chgBit(oldp+1600,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))));
        tracep->chgBit(oldp+1601,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1602,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1603,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1604,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1605,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))))));
        tracep->chgBit(oldp+1606,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))));
        tracep->chgBit(oldp+1607,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1608,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1609,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1610,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1611,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))))));
        tracep->chgBit(oldp+1612,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))));
        tracep->chgBit(oldp+1613,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1614,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1615,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1616,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1617,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))))));
        tracep->chgBit(oldp+1618,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))));
        tracep->chgBit(oldp+1619,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1620,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1621,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1622,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1623,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))))));
        tracep->chgBit(oldp+1624,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))));
        tracep->chgBit(oldp+1625,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1626,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         >> 9U))));
        tracep->chgBit(oldp+1627,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         >> 8U))));
        tracep->chgCData(oldp+1628,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1629,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))))));
        tracep->chgBit(oldp+1630,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))));
        tracep->chgBit(oldp+1631,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         >> 7U))));
        tracep->chgBit(oldp+1632,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         >> 6U))));
        tracep->chgBit(oldp+1633,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         >> 5U))));
        tracep->chgCData(oldp+1634,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1635,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))))));
        tracep->chgBit(oldp+1636,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))));
        tracep->chgBit(oldp+1637,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         >> 4U))));
        tracep->chgBit(oldp+1638,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         >> 3U))));
        tracep->chgBit(oldp+1639,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         >> 2U))));
        tracep->chgCData(oldp+1640,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])),2);
        tracep->chgBit(oldp+1641,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))));
        tracep->chgBit(oldp+1642,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1643,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])));
        tracep->chgBit(oldp+1644,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                         >> 1U))));
        tracep->chgCData(oldp+1645,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1646,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1647,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1648,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1649,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1650,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1651,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1652,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1653,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1654,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1655,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1656,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1657,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1658,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1659,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1660,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1661,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1662,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1663,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U]),32);
        tracep->chgSData(oldp+1664,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1665,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1666,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))))));
        tracep->chgBit(oldp+1667,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))));
        tracep->chgBit(oldp+1668,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1669,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1670,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1671,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1672,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))))));
        tracep->chgBit(oldp+1673,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))));
        tracep->chgBit(oldp+1674,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1675,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1676,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1677,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1678,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))))));
        tracep->chgBit(oldp+1679,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))));
        tracep->chgBit(oldp+1680,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1681,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1682,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1683,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1684,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))))));
        tracep->chgBit(oldp+1685,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))));
        tracep->chgBit(oldp+1686,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1687,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1688,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1689,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1690,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))))));
        tracep->chgBit(oldp+1691,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))));
        tracep->chgBit(oldp+1692,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1693,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1694,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1695,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1696,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))))));
        tracep->chgBit(oldp+1697,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))));
        tracep->chgBit(oldp+1698,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1699,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1700,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1701,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1702,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))))));
        tracep->chgBit(oldp+1703,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))));
        tracep->chgBit(oldp+1704,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1705,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1706,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1707,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1708,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))))));
        tracep->chgBit(oldp+1709,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))));
        tracep->chgBit(oldp+1710,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1711,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         >> 9U))));
        tracep->chgBit(oldp+1712,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         >> 8U))));
        tracep->chgCData(oldp+1713,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1714,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))))));
        tracep->chgBit(oldp+1715,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))));
        tracep->chgBit(oldp+1716,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         >> 7U))));
        tracep->chgBit(oldp+1717,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         >> 6U))));
        tracep->chgBit(oldp+1718,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         >> 5U))));
        tracep->chgCData(oldp+1719,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1720,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))))));
        tracep->chgBit(oldp+1721,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))));
        tracep->chgBit(oldp+1722,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         >> 4U))));
        tracep->chgBit(oldp+1723,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         >> 3U))));
        tracep->chgBit(oldp+1724,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         >> 2U))));
        tracep->chgCData(oldp+1725,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])),2);
        tracep->chgBit(oldp+1726,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))));
        tracep->chgBit(oldp+1727,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1728,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])));
        tracep->chgBit(oldp+1729,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                         >> 1U))));
        tracep->chgCData(oldp+1730,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1731,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1732,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1733,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1734,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1735,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1736,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1737,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1738,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1739,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1740,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1741,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1742,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1743,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1744,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1745,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1746,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1747,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1748,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU]),32);
        tracep->chgSData(oldp+1749,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1750,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1751,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))))));
        tracep->chgBit(oldp+1752,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))));
        tracep->chgBit(oldp+1753,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1754,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1755,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1756,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1757,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))))));
        tracep->chgBit(oldp+1758,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))));
        tracep->chgBit(oldp+1759,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1760,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1761,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1762,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1763,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))))));
        tracep->chgBit(oldp+1764,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))));
        tracep->chgBit(oldp+1765,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1766,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1767,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1768,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1769,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))))));
        tracep->chgBit(oldp+1770,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))));
        tracep->chgBit(oldp+1771,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1772,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1773,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1774,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1775,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))))));
        tracep->chgBit(oldp+1776,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))));
        tracep->chgBit(oldp+1777,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1778,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1779,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1780,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1781,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))))));
        tracep->chgBit(oldp+1782,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))));
        tracep->chgBit(oldp+1783,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1784,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1785,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1786,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1787,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))))));
        tracep->chgBit(oldp+1788,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))));
        tracep->chgBit(oldp+1789,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1790,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1791,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1792,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1793,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))))));
        tracep->chgBit(oldp+1794,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))));
        tracep->chgBit(oldp+1795,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1796,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         >> 9U))));
        tracep->chgBit(oldp+1797,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         >> 8U))));
        tracep->chgCData(oldp+1798,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1799,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))))));
        tracep->chgBit(oldp+1800,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))));
        tracep->chgBit(oldp+1801,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         >> 7U))));
        tracep->chgBit(oldp+1802,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         >> 6U))));
        tracep->chgBit(oldp+1803,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         >> 5U))));
        tracep->chgCData(oldp+1804,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1805,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))))));
        tracep->chgBit(oldp+1806,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))));
        tracep->chgBit(oldp+1807,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         >> 4U))));
        tracep->chgBit(oldp+1808,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         >> 3U))));
        tracep->chgBit(oldp+1809,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         >> 2U))));
        tracep->chgCData(oldp+1810,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])),2);
        tracep->chgBit(oldp+1811,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))));
        tracep->chgBit(oldp+1812,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1813,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])));
        tracep->chgBit(oldp+1814,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                         >> 1U))));
        tracep->chgCData(oldp+1815,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1816,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1817,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1818,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1819,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1820,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1821,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1822,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1823,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1824,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1825,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1826,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1827,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1828,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1829,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1830,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1831,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1832,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1833,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU]),32);
        tracep->chgSData(oldp+1834,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1835,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1836,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))))));
        tracep->chgBit(oldp+1837,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))));
        tracep->chgBit(oldp+1838,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1839,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1840,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1841,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                           >> 0x1aU))),3);
        tracep->chgBit(oldp+1842,((1U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU]))) 
                                          | (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xc000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))) 
                                         | (IData)(
                                                   (0x14000000U 
                                                    == 
                                                    (0x14000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))))));
        tracep->chgBit(oldp+1843,((1U & VL_REDXOR_32(
                                                     (0x1c000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))));
        tracep->chgBit(oldp+1844,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1845,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1846,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         >> 0x1aU))));
        tracep->chgCData(oldp+1847,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                           >> 0x17U))),3);
        tracep->chgBit(oldp+1848,((1U & (((IData)((0x3000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU]))) 
                                          | (IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))) 
                                         | (IData)(
                                                   (0x2800000U 
                                                    == 
                                                    (0x2800000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))))));
        tracep->chgBit(oldp+1849,((1U & VL_REDXOR_32(
                                                     (0x3800000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))));
        tracep->chgBit(oldp+1850,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1851,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1852,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         >> 0x17U))));
        tracep->chgCData(oldp+1853,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                           >> 0x14U))),3);
        tracep->chgBit(oldp+1854,((1U & (((IData)((0x600000U 
                                                   == 
                                                   (0x600000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU]))) 
                                          | (IData)(
                                                    (0x300000U 
                                                     == 
                                                     (0x300000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))) 
                                         | (IData)(
                                                   (0x500000U 
                                                    == 
                                                    (0x500000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))))));
        tracep->chgBit(oldp+1855,((1U & VL_REDXOR_32(
                                                     (0x700000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))));
        tracep->chgBit(oldp+1856,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1857,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1858,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         >> 0x14U))));
        tracep->chgCData(oldp+1859,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                           >> 0x11U))),3);
        tracep->chgBit(oldp+1860,((1U & (((IData)((0xc0000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU]))) 
                                          | (IData)(
                                                    (0x60000U 
                                                     == 
                                                     (0x60000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))) 
                                         | (IData)(
                                                   (0xa0000U 
                                                    == 
                                                    (0xa0000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))))));
        tracep->chgBit(oldp+1861,((1U & VL_REDXOR_32(
                                                     (0xe0000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))));
        tracep->chgBit(oldp+1862,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1863,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1864,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         >> 0x11U))));
        tracep->chgCData(oldp+1865,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                           >> 0xeU))),3);
        tracep->chgBit(oldp+1866,((1U & (((IData)((0x18000U 
                                                   == 
                                                   (0x18000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU]))) 
                                          | (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))) 
                                         | (IData)(
                                                   (0x14000U 
                                                    == 
                                                    (0x14000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))))));
        tracep->chgBit(oldp+1867,((1U & VL_REDXOR_32(
                                                     (0x1c000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))));
        tracep->chgBit(oldp+1868,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1869,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1870,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         >> 0xeU))));
        tracep->chgCData(oldp+1871,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                           >> 0xbU))),3);
        tracep->chgBit(oldp+1872,((1U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU]))) 
                                          | (IData)(
                                                    (0x1800U 
                                                     == 
                                                     (0x1800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))) 
                                         | (IData)(
                                                   (0x2800U 
                                                    == 
                                                    (0x2800U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))))));
        tracep->chgBit(oldp+1873,((1U & VL_REDXOR_16(
                                                     (0x3800U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))));
        tracep->chgBit(oldp+1874,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1875,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1876,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1877,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1878,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU]))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))))));
        tracep->chgBit(oldp+1879,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))));
        tracep->chgBit(oldp+1880,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1881,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         >> 9U))));
        tracep->chgBit(oldp+1882,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         >> 8U))));
        tracep->chgCData(oldp+1883,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1884,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU]))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))))));
        tracep->chgBit(oldp+1885,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))));
        tracep->chgBit(oldp+1886,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         >> 7U))));
        tracep->chgBit(oldp+1887,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         >> 6U))));
        tracep->chgBit(oldp+1888,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         >> 5U))));
        tracep->chgCData(oldp+1889,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1890,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU]))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))))));
        tracep->chgBit(oldp+1891,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))));
        tracep->chgBit(oldp+1892,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         >> 4U))));
        tracep->chgBit(oldp+1893,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         >> 3U))));
        tracep->chgBit(oldp+1894,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         >> 2U))));
        tracep->chgCData(oldp+1895,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])),2);
        tracep->chgBit(oldp+1896,((IData)((3U == (3U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))));
        tracep->chgBit(oldp+1897,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                            >> 1U)))));
        tracep->chgBit(oldp+1898,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])));
        tracep->chgBit(oldp+1899,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                         >> 1U))));
        tracep->chgCData(oldp+1900,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 8U))),3);
        tracep->chgBit(oldp+1901,((1U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1902,((1U & VL_REDXOR_16(
                                                     (0x700U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1903,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1904,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 9U))));
        tracep->chgBit(oldp+1905,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))));
        tracep->chgCData(oldp+1906,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 5U))),3);
        tracep->chgBit(oldp+1907,((1U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x60U 
                                                     == 
                                                     (0x60U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0xa0U 
                                                    == 
                                                    (0xa0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1908,((1U & VL_REDXOR_8(
                                                    (0xe0U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1909,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 7U))));
        tracep->chgBit(oldp+1910,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 6U))));
        tracep->chgBit(oldp+1911,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))));
        tracep->chgCData(oldp+1912,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1913,((1U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                          | (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x14U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+1914,((1U & VL_REDXOR_8(
                                                    (0x1cU 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+1915,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 4U))));
        tracep->chgBit(oldp+1916,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 3U))));
        tracep->chgBit(oldp+1917,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))));
        tracep->chgIData(oldp+1918,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU]),32);
        tracep->chgSData(oldp+1919,(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s),11);
        tracep->chgCData(oldp+1920,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                     >> 0x1dU)),3);
        tracep->chgBit(oldp+1921,((1U & (((IData)((0xc0000000U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU]))) 
                                          | (IData)(
                                                    (0x60000000U 
                                                     == 
                                                     (0x60000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))) 
                                         | (IData)(
                                                   (0xa0000000U 
                                                    == 
                                                    (0xa0000000U 
                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))))));
        tracep->chgBit(oldp+1922,((1U & VL_REDXOR_32(
                                                     (0xe0000000U 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))));
        tracep->chgBit(oldp+1923,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+1924,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1925,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                         >> 0x1dU))));
        tracep->chgCData(oldp+1926,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                           >> 0x1aU))),3);
    }
}
