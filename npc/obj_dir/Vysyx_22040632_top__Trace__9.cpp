// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vysyx_22040632_top__Syms.h"


void Vysyx_22040632_top___024root__trace_chg_sub_13(Vysyx_22040632_top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root__trace_chg_sub_13\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 28788);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgBit(oldp+0,((1U & VL_REDXOR_8((0x1cU 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))));
        tracep->chgBit(oldp+1,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                      >> 4U))));
        tracep->chgBit(oldp+2,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                      >> 3U))));
        tracep->chgBit(oldp+3,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                      >> 2U))));
        tracep->chgCData(oldp+4,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])),2);
        tracep->chgBit(oldp+5,((IData)((3U == (3U & 
                                               vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))));
        tracep->chgBit(oldp+6,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                      ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                         >> 1U)))));
        tracep->chgBit(oldp+7,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])));
        tracep->chgBit(oldp+8,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                      >> 1U))));
        tracep->chgCData(oldp+9,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                        >> 8U))),3);
        tracep->chgBit(oldp+10,((1U & (((IData)((0x600U 
                                                 == 
                                                 (0x600U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                        | (IData)((0x300U 
                                                   == 
                                                   (0x300U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                       | (IData)((0x500U 
                                                  == 
                                                  (0x500U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+11,((1U & VL_REDXOR_16(
                                                   (0x700U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+12,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 0xaU))));
        tracep->chgBit(oldp+13,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 9U))));
        tracep->chgBit(oldp+14,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 8U))));
        tracep->chgCData(oldp+15,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))),3);
        tracep->chgBit(oldp+16,((1U & (((IData)((0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                        | (IData)((0x60U 
                                                   == 
                                                   (0x60U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                       | (IData)((0xa0U 
                                                  == 
                                                  (0xa0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+17,((1U & VL_REDXOR_8((0xe0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+18,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 7U))));
        tracep->chgBit(oldp+19,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 6U))));
        tracep->chgBit(oldp+20,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 5U))));
        tracep->chgCData(oldp+21,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))),3);
        tracep->chgBit(oldp+22,((1U & (((IData)((0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                        | (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                       | (IData)((0x14U 
                                                  == 
                                                  (0x14U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))))));
        tracep->chgBit(oldp+23,((1U & VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+24,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 4U))));
        tracep->chgBit(oldp+25,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 3U))));
        tracep->chgBit(oldp+26,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 2U))));
        tracep->chgIData(oldp+27,(vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.pc2id),32);
        tracep->chgIData(oldp+28,(vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id),32);
        tracep->chgBit(oldp+29,(vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.pcen_btb2id));
        tracep->chgQData(oldp+30,(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.src1),64);
        tracep->chgQData(oldp+32,(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.src2),64);
        tracep->chgCData(oldp+34,(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation),7);
        tracep->chgIData(oldp+35,(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.pc2ex),32);
        tracep->chgIData(oldp+36,(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.inst2ex),32);
        tracep->chgQData(oldp+37,(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.data_ext),64);
        tracep->chgCData(oldp+39,(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.rd),5);
        tracep->chgCData(oldp+40,(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.rs1_2ex),5);
        tracep->chgCData(oldp+41,(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.rs2_2ex),5);
        tracep->chgCData(oldp+42,(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.src_from_gpr2ex),3);
        tracep->chgBit(oldp+43,(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.uart_en2ex));
        tracep->chgBit(oldp+44,(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.quit2ex));
        tracep->chgIData(oldp+45,(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.pc_mret_ecall2ex),32);
        tracep->chgIData(oldp+46,(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.csr_addr_write2ex),32);
        tracep->chgQData(oldp+47,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem),64);
        tracep->chgBit(oldp+49,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.ld_en2mem));
        tracep->chgCData(oldp+50,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.ld_ty),3);
        tracep->chgBit(oldp+51,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.sd_en2mem));
        tracep->chgCData(oldp+52,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.sd_ty),2);
        tracep->chgBit(oldp+53,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.rd_w_ena));
        tracep->chgCData(oldp+54,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.rd2mem),5);
        tracep->chgIData(oldp+55,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.pc2mem),32);
        tracep->chgIData(oldp+56,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.inst2mem),32);
        tracep->chgBit(oldp+57,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.uart_en2mem));
        tracep->chgBit(oldp+58,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.quit2mem));
        tracep->chgBit(oldp+59,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.wen_csr2mem));
        tracep->chgBit(oldp+60,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.wen_ecall2mem));
        tracep->chgQData(oldp+61,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.NO2mem),64);
        tracep->chgQData(oldp+63,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.csr_data_write2mem),64);
        tracep->chgIData(oldp+65,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.csr_addr_write2mem),32);
        tracep->chgBit(oldp+66,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.wen_mstatus_ecall2mem));
        tracep->chgBit(oldp+67,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.wen_mstatus_mret2mem));
        tracep->chgBit(oldp+68,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.not_submit2mem));
        tracep->chgIData(oldp+69,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2if.pc2if),32);
        tracep->chgBit(oldp+70,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2if.btb_add2if));
        tracep->chgQData(oldp+71,(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.data2wb),64);
        tracep->chgQData(oldp+73,(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.data_ld2wb),64);
        tracep->chgBit(oldp+75,(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.ld_en2wb));
        tracep->chgIData(oldp+76,(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.inst2wb),32);
        tracep->chgBit(oldp+77,(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.uart_en2wb));
        tracep->chgBit(oldp+78,(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.quit2wb));
        tracep->chgBit(oldp+79,(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_mstatus_ecall2wb));
        tracep->chgBit(oldp+80,(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_mstatus_mret2wb));
        tracep->chgBit(oldp+81,(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.not_submit2wb));
        tracep->chgBit(oldp+82,(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.skip_clint2wb));
        tracep->chgQData(oldp+83,(vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg),64);
        tracep->chgBit(oldp+85,(vlSymsp->TOP__ysyx_22040632_top__DOT__id2if.block_id2if));
        tracep->chgBit(oldp+86,(vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.valid));
        tracep->chgWData(oldp+87,(vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.inst),128);
        tracep->chgCData(oldp+91,(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2dc.size),3);
        tracep->chgBit(oldp+92,(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2dc.ready));
        tracep->chgBit(oldp+93,(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2dc.valid));
        tracep->chgQData(oldp+94,(((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable)
                                    ? (QData)((IData)(
                                                      (vlSymsp->TOP__ysyx_22040632_top__DOT__immem.data_read 
                                                       >> 
                                                       (0x38U 
                                                        & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem) 
                                                           << 3U)))))
                                    : ((1U == (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd) 
                                                << 1U) 
                                               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st)))
                                        ? (((QData)((IData)(
                                                            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[
                                                            (((IData)(0x3fU) 
                                                              + 
                                                              (0x78U 
                                                               & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem) 
                                                                  << 3U))) 
                                                             >> 5U)])) 
                                            << ((0U 
                                                 == 
                                                 (0x18U 
                                                  & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem) 
                                                     << 3U)))
                                                 ? 0x20U
                                                 : 
                                                ((IData)(0x40U) 
                                                 - 
                                                 (0x18U 
                                                  & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem) 
                                                     << 3U))))) 
                                           | (((0U 
                                                == 
                                                (0x18U 
                                                 & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem) 
                                                    << 3U)))
                                                ? 0ULL
                                                : ((QData)((IData)(
                                                                   vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[
                                                                   (((IData)(0x1fU) 
                                                                     + 
                                                                     (0x78U 
                                                                      & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem) 
                                                                         << 3U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x18U 
                                                     & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem) 
                                                        << 3U))))) 
                                              | ((QData)((IData)(
                                                                 vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[
                                                                 (3U 
                                                                  & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem) 
                                                                     >> 2U))])) 
                                                 >> 
                                                 (0x18U 
                                                  & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem) 
                                                     << 3U)))))
                                        : ((2U == (
                                                   ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st)))
                                            ? (((QData)((IData)(
                                                                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[
                                                                (((IData)(0x3fU) 
                                                                  + 
                                                                  (0x78U 
                                                                   & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem) 
                                                                      << 3U))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x18U 
                                                   & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem) 
                                                      << 3U)))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x18U 
                                                   & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem) 
                                                      << 3U))))) 
                                               | (((0U 
                                                    == 
                                                    (0x18U 
                                                     & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem) 
                                                        << 3U)))
                                                    ? 0ULL
                                                    : 
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[
                                                                    (((IData)(0x1fU) 
                                                                      + 
                                                                      (0x78U 
                                                                       & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem) 
                                                                          << 3U))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x18U 
                                                      & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem) 
                                                         << 3U))))) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[
                                                                     (3U 
                                                                      & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem) 
                                                                         >> 2U))])) 
                                                     >> 
                                                     (0x18U 
                                                      & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem) 
                                                         << 3U)))))
                                            : 0ULL)))),64);
        tracep->chgBit(oldp+96,(vlSymsp->TOP__ysyx_22040632_top__DOT__axi.axi_aw_valid));
        tracep->chgQData(oldp+97,(((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg)
                                    ? ((8U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cs))
                                        ? ((0x20U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cnt_f))
                                            ? ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_cnt)
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[0U])))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[2U]))))
                                            : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_cnt)
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[0U])))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[2U])))))
                                        : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable)
                                            ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__data2sd
                                            : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_way)
                                                ? ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_cnt)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[0U])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[2U]))))
                                                : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_cnt)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[0U])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[2U])))))))
                                    : vlSymsp->TOP__ysyx_22040632_top__DOT__imif.rw_w_data)),64);
        tracep->chgCData(oldp+99,(((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg)
                                    ? ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable)
                                        ? (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask_uncacheble)
                                        : 0xffU) : 0U)),8);
        tracep->chgBit(oldp+100,(vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.w_last));
        tracep->chgBit(oldp+101,(vlSymsp->TOP__ysyx_22040632_top__DOT__axi.axi_ar_valid));
        tracep->chgBit(oldp+102,(vlSymsp->TOP__ysyx_22040632_top__DOT__imif.rw_valid));
        tracep->chgBit(oldp+103,(vlSymsp->TOP__ysyx_22040632_top__DOT__imif.rw_ready));
        tracep->chgQData(oldp+104,(vlSymsp->TOP__ysyx_22040632_top__DOT__imif.data_read),64);
        tracep->chgIData(oldp+106,(((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__uncacheable)
                                     ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc
                                     : (0xffffffc0U 
                                        & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc))),32);
        tracep->chgCData(oldp+107,(((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__uncacheable)
                                     ? 2U : 3U)),3);
        tracep->chgCData(oldp+108,(((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__uncacheable)
                                     ? 0U : 7U)),8);
        tracep->chgBit(oldp+109,(((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__idle_flg)) 
                                  & ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg)) 
                                     & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_hs)))));
        tracep->chgBit(oldp+110,(vlSymsp->TOP__ysyx_22040632_top__DOT__immem.rw_valid));
        tracep->chgQData(oldp+111,(vlSymsp->TOP__ysyx_22040632_top__DOT__immem.data_read),64);
        tracep->chgQData(oldp+113,(((8U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cs))
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
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[0U])))
                                                 : 
                                                (((QData)((IData)(
                                                                  vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[2U]))))
                                             : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_cnt)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[0U])))
                                                 : 
                                                (((QData)((IData)(
                                                                  vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[2U])))))))),64);
        tracep->chgIData(oldp+115,(((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable)
                                     ? (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)
                                     : ((8U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cs))
                                         ? ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__tag_read 
                                             << 0xbU) 
                                            | (0x7c0U 
                                               & ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cnt_f) 
                                                  << 6U)))
                                         : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__axi_write_state)
                                             ? ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__tag_read 
                                                 << 0xbU) 
                                                | (0x7c0U 
                                                   & ((IData)(
                                                              (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                               >> 6U)) 
                                                      << 6U)))
                                             : ((IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 6U)) 
                                                << 6U))))),32);
        tracep->chgCData(oldp+116,(((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable)
                                     ? (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2dc.size)
                                     : 3U)),3);
        tracep->chgCData(oldp+117,(((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable)
                                     ? 0U : 7U)),8);
        tracep->chgBit(oldp+118,(vlSymsp->TOP__ysyx_22040632_top__DOT__immem.w_hs));
        tracep->chgBit(oldp+119,(((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable)
                                   ? (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__immem.w_hs)
                                   : (8U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__w_cnt)))));
        tracep->chgCData(oldp+120,(((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable)
                                     ? (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask_uncacheble)
                                     : 0xffU)),8);
        tracep->chgBit(oldp+121,(((1U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_state)) 
                                  & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_valid))));
        tracep->chgBit(oldp+122,(vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_valid));
        tracep->chgQData(oldp+123,(vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.data_read),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgCData(oldp+125,(vlSymsp->TOP__ysyx_22040632_top__DOT__axi.axi_b_resp),2);
        tracep->chgBit(oldp+126,(vlSymsp->TOP__ysyx_22040632_top__DOT__axi.axi_r_valid));
        tracep->chgCData(oldp+127,(vlSymsp->TOP__ysyx_22040632_top__DOT__axi.axi_r_resp),2);
        tracep->chgQData(oldp+128,(vlSymsp->TOP__ysyx_22040632_top__DOT__axi.axi_r_data),64);
        tracep->chgBit(oldp+130,(vlSymsp->TOP__ysyx_22040632_top__DOT__axi.axi_r_last));
        tracep->chgCData(oldp+131,(vlSymsp->TOP__ysyx_22040632_top__DOT__axi.axi_r_id),4);
        tracep->chgBit(oldp+132,(vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.r_last));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        tracep->chgBit(oldp+133,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_hs));
        tracep->chgBit(oldp+134,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_done));
        tracep->chgBit(oldp+135,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__trans_done));
        tracep->chgCData(oldp+136,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_state_nxt),2);
        tracep->chgBit(oldp+137,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__rw_sh));
        tracep->chgBit(oldp+138,(vlSymsp->TOP__ysyx_22040632_top__DOT__imif.r_hs));
    }
    tracep->chgBit(oldp+139,(vlSelf->clk));
    tracep->chgBit(oldp+140,(vlSelf->rst_n));
    tracep->chgIData(oldp+141,(vlSelf->pc),32);
    tracep->chgIData(oldp+142,(vlSelf->inst),32);
    tracep->chgBit(oldp+143,(vlSelf->submit));
    tracep->chgIData(oldp+144,(vlSelf->npc),32);
    tracep->chgBit(oldp+145,(vlSelf->axi_aw_valid_o));
    tracep->chgIData(oldp+146,(vlSelf->axi_aw_addr_o),32);
    tracep->chgCData(oldp+147,(vlSelf->axi_aw_prot_o),3);
    tracep->chgCData(oldp+148,(vlSelf->axi_aw_id_o),4);
    tracep->chgBit(oldp+149,(vlSelf->axi_aw_user_o));
    tracep->chgCData(oldp+150,(vlSelf->axi_aw_len_o),8);
    tracep->chgCData(oldp+151,(vlSelf->axi_aw_size_o),3);
    tracep->chgCData(oldp+152,(vlSelf->axi_aw_burst_o),2);
    tracep->chgBit(oldp+153,(vlSelf->axi_aw_lock_o));
    tracep->chgCData(oldp+154,(vlSelf->axi_aw_cache_o),4);
    tracep->chgCData(oldp+155,(vlSelf->axi_aw_qos_o),4);
    tracep->chgCData(oldp+156,(vlSelf->axi_aw_region_o),4);
    tracep->chgBit(oldp+157,(vlSelf->axi_aw_ready_i));
    tracep->chgBit(oldp+158,(vlSelf->axi_w_valid_o));
    tracep->chgQData(oldp+159,(vlSelf->axi_w_data_o),64);
    tracep->chgCData(oldp+161,(vlSelf->axi_w_strb_o),8);
    tracep->chgBit(oldp+162,(vlSelf->axi_w_last_o));
    tracep->chgBit(oldp+163,(vlSelf->axi_w_user_o));
    tracep->chgBit(oldp+164,(vlSelf->axi_w_ready_i));
    tracep->chgBit(oldp+165,(vlSelf->axi_b_ready_o));
    tracep->chgBit(oldp+166,(vlSelf->axi_b_valid_i));
    tracep->chgCData(oldp+167,(vlSelf->axi_b_resp_i),2);
    tracep->chgCData(oldp+168,(vlSelf->axi_b_id_i),4);
    tracep->chgBit(oldp+169,(vlSelf->axi_b_user_i));
    tracep->chgBit(oldp+170,(vlSelf->axi_ar_valid_o));
    tracep->chgIData(oldp+171,(vlSelf->axi_ar_addr_o),32);
    tracep->chgCData(oldp+172,(vlSelf->axi_ar_prot_o),3);
    tracep->chgCData(oldp+173,(vlSelf->axi_ar_id_o),4);
    tracep->chgBit(oldp+174,(vlSelf->axi_ar_user_o));
    tracep->chgCData(oldp+175,(vlSelf->axi_ar_len_o),8);
    tracep->chgCData(oldp+176,(vlSelf->axi_ar_size_o),3);
    tracep->chgCData(oldp+177,(vlSelf->axi_ar_burst_o),2);
    tracep->chgBit(oldp+178,(vlSelf->axi_ar_lock_o));
    tracep->chgCData(oldp+179,(vlSelf->axi_ar_cache_o),4);
    tracep->chgCData(oldp+180,(vlSelf->axi_ar_qos_o),4);
    tracep->chgCData(oldp+181,(vlSelf->axi_ar_region_o),4);
    tracep->chgBit(oldp+182,(vlSelf->axi_ar_ready_i));
    tracep->chgBit(oldp+183,(vlSelf->axi_r_ready_o));
    tracep->chgBit(oldp+184,(vlSelf->axi_r_valid_i));
    tracep->chgCData(oldp+185,(vlSelf->axi_r_resp_i),2);
    tracep->chgQData(oldp+186,(vlSelf->axi_r_data_i),64);
    tracep->chgBit(oldp+188,(vlSelf->axi_r_last_i));
    tracep->chgCData(oldp+189,(vlSelf->axi_r_id_i),4);
    tracep->chgBit(oldp+190,(vlSelf->axi_r_user_i));
    tracep->chgBit(oldp+191,(vlSelf->ysyx_22040632_top__DOT__rst_s2));
    tracep->chgBit(oldp+192,(vlSelf->ysyx_22040632_top__DOT__rst_s1));
    tracep->chgBit(oldp+193,(((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__trans_done) 
                              | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__rw_ready))));
    tracep->chgCData(oldp+194,(((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_req)
                                 ? (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__axi.axi_r_resp)
                                 : (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__axi.axi_b_resp))),2);
    tracep->chgBit(oldp+195,(((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__uncacheable)
                               ? (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imif.r_hs)
                               : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__hit_1st) 
                                  | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__hit_2nd)))));
    tracep->chgBit(oldp+196,(((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__idle_flg)) 
                              & ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg)) 
                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.r_last)))));
    tracep->chgBit(oldp+197,(((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__idle_flg)) 
                              & ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg) 
                                 & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_hs)))));
    tracep->chgBit(oldp+198,(((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__idle_flg)) 
                              & ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg) 
                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.r_last)))));
}

void Vysyx_22040632_top___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root__trace_cleanup\n"); );
    // Init
    Vysyx_22040632_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22040632_top___024root*>(voidSelf);
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
