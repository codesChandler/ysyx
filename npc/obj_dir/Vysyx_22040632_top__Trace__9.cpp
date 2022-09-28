// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040632_top__Syms.h"


void Vysyx_22040632_top___024root__trace_chg_sub_13(Vysyx_22040632_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root__trace_chg_sub_13\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 26748);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgCData(oldp+0,((7U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                        >> 2U))),3);
        tracep->chgBit(oldp+1,((1U & (((IData)((0x18U 
                                                == 
                                                (0x18U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU]))) 
                                       | (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))) 
                                      | (IData)((0x14U 
                                                 == 
                                                 (0x14U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))))));
        tracep->chgBit(oldp+2,((1U & VL_REDXOR_8((0x1cU 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))));
        tracep->chgBit(oldp+3,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                      >> 4U))));
        tracep->chgBit(oldp+4,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                      >> 3U))));
        tracep->chgBit(oldp+5,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                      >> 2U))));
        tracep->chgCData(oldp+6,((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])),2);
        tracep->chgBit(oldp+7,((IData)((3U == (3U & 
                                               vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))));
        tracep->chgBit(oldp+8,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                      ^ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                         >> 1U)))));
        tracep->chgBit(oldp+9,((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])));
        tracep->chgBit(oldp+10,((1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                       >> 1U))));
        tracep->chgCData(oldp+11,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 8U))),3);
        tracep->chgBit(oldp+12,((1U & (((IData)((0x600U 
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
        tracep->chgBit(oldp+13,((1U & VL_REDXOR_16(
                                                   (0x700U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+14,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 0xaU))));
        tracep->chgBit(oldp+15,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 9U))));
        tracep->chgBit(oldp+16,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 8U))));
        tracep->chgCData(oldp+17,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 5U))),3);
        tracep->chgBit(oldp+18,((1U & (((IData)((0xc0U 
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
        tracep->chgBit(oldp+19,((1U & VL_REDXOR_8((0xe0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+20,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 7U))));
        tracep->chgBit(oldp+21,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 6U))));
        tracep->chgBit(oldp+22,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 5U))));
        tracep->chgCData(oldp+23,((7U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                         >> 2U))),3);
        tracep->chgBit(oldp+24,((1U & (((IData)((0x18U 
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
        tracep->chgBit(oldp+25,((1U & VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))));
        tracep->chgBit(oldp+26,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 4U))));
        tracep->chgBit(oldp+27,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 3U))));
        tracep->chgBit(oldp+28,((1U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s) 
                                       >> 2U))));
        tracep->chgIData(oldp+29,(vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.pc2id),32);
        tracep->chgIData(oldp+30,(vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id),32);
        tracep->chgBit(oldp+31,(vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.pcen_btb2id));
        tracep->chgQData(oldp+32,(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.src1),64);
        tracep->chgQData(oldp+34,(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.src2),64);
        tracep->chgCData(oldp+36,(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation),7);
        tracep->chgIData(oldp+37,(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.pc2ex),32);
        tracep->chgIData(oldp+38,(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.inst2ex),32);
        tracep->chgQData(oldp+39,(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.data_ext),64);
        tracep->chgCData(oldp+41,(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.rd),5);
        tracep->chgCData(oldp+42,(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.rs1_2ex),5);
        tracep->chgCData(oldp+43,(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.rs2_2ex),5);
        tracep->chgCData(oldp+44,(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.src_from_gpr2ex),3);
        tracep->chgBit(oldp+45,(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.uart_en2ex));
        tracep->chgIData(oldp+46,(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.pc_mret_ecall2ex),32);
        tracep->chgIData(oldp+47,(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.csr_addr_write2ex),32);
        tracep->chgQData(oldp+48,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem),64);
        tracep->chgBit(oldp+50,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.ld_en2mem));
        tracep->chgCData(oldp+51,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.ld_ty),3);
        tracep->chgBit(oldp+52,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.sd_en2mem));
        tracep->chgCData(oldp+53,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.sd_ty),2);
        tracep->chgBit(oldp+54,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.rd_w_ena));
        tracep->chgCData(oldp+55,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.rd2mem),5);
        tracep->chgIData(oldp+56,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.pc2mem),32);
        tracep->chgIData(oldp+57,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.inst2mem),32);
        tracep->chgBit(oldp+58,(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.uart_en2mem));
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
        tracep->chgBit(oldp+78,(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_mstatus_ecall2wb));
        tracep->chgBit(oldp+79,(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_mstatus_mret2wb));
        tracep->chgBit(oldp+80,(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.not_submit2wb));
        tracep->chgBit(oldp+81,(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.skip_clint2wb));
        tracep->chgQData(oldp+82,(vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg),64);
        tracep->chgBit(oldp+84,(vlSymsp->TOP__ysyx_22040632_top__DOT__id2if.block_id2if));
        tracep->chgBit(oldp+85,(vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.valid));
        tracep->chgWData(oldp+86,(vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.inst),128);
        tracep->chgBit(oldp+90,(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2dc.ready));
        tracep->chgBit(oldp+91,(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2dc.valid));
        tracep->chgBit(oldp+92,(vlSymsp->TOP__ysyx_22040632_top__DOT__axi.axi_aw_valid));
        tracep->chgCData(oldp+93,(((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg)
                                    ? ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable)
                                        ? (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask_uncacheble)
                                        : 0xffU) : 0U)),8);
        tracep->chgBit(oldp+94,(vlSymsp->TOP__ysyx_22040632_top__DOT__axi.axi_ar_valid));
        tracep->chgBit(oldp+95,(vlSymsp->TOP__ysyx_22040632_top__DOT__imif.rw_valid));
        tracep->chgBit(oldp+96,(vlSymsp->TOP__ysyx_22040632_top__DOT__imif.rw_ready));
        tracep->chgQData(oldp+97,(vlSymsp->TOP__ysyx_22040632_top__DOT__imif.data_read),64);
        tracep->chgIData(oldp+99,(((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__uncacheable)
                                    ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc
                                    : (0xffffffc0U 
                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc))),32);
        tracep->chgCData(oldp+100,(((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__uncacheable)
                                     ? 2U : 3U)),3);
        tracep->chgCData(oldp+101,(((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__uncacheable)
                                     ? 0U : 7U)),8);
        tracep->chgBit(oldp+102,(vlSymsp->TOP__ysyx_22040632_top__DOT__immem.rw_valid));
        tracep->chgQData(oldp+103,(vlSymsp->TOP__ysyx_22040632_top__DOT__immem.data_read),64);
        tracep->chgIData(oldp+105,((((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable) 
                                     & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uart))
                                     ? (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)
                                     : (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable) 
                                         & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uart)))
                                         ? ((IData)(
                                                    (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                     >> 2U)) 
                                            << 2U) : 
                                        ((8U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cs))
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
                                                 << 6U)))))),32);
        tracep->chgCData(oldp+106,((((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable) 
                                     & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uart))
                                     ? 0U : (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable) 
                                              & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uart)))
                                              ? 2U : 3U))),3);
        tracep->chgCData(oldp+107,(((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable)
                                     ? 0U : 7U)),8);
        tracep->chgCData(oldp+108,(((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable)
                                     ? (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask_uncacheble)
                                     : 0xffU)),8);
        tracep->chgBit(oldp+109,(((1U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_state)) 
                                  & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_valid))));
        tracep->chgBit(oldp+110,(vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_valid));
        tracep->chgQData(oldp+111,(vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.data_read),64);
    }
    tracep->chgBit(oldp+113,(vlSelf->clk));
    tracep->chgBit(oldp+114,(vlSelf->rst_n));
    tracep->chgBit(oldp+115,(vlSelf->io_uart_out_valid));
    tracep->chgCData(oldp+116,(vlSelf->io_uart_out_ch),8);
    tracep->chgBit(oldp+117,(vlSelf->axi_aw_valid_o));
    tracep->chgIData(oldp+118,(vlSelf->axi_aw_addr_o),32);
    tracep->chgCData(oldp+119,(vlSelf->axi_aw_prot_o),3);
    tracep->chgCData(oldp+120,(vlSelf->axi_aw_id_o),4);
    tracep->chgBit(oldp+121,(vlSelf->axi_aw_user_o));
    tracep->chgCData(oldp+122,(vlSelf->axi_aw_len_o),8);
    tracep->chgCData(oldp+123,(vlSelf->axi_aw_size_o),3);
    tracep->chgCData(oldp+124,(vlSelf->axi_aw_burst_o),2);
    tracep->chgBit(oldp+125,(vlSelf->axi_aw_lock_o));
    tracep->chgCData(oldp+126,(vlSelf->axi_aw_cache_o),4);
    tracep->chgCData(oldp+127,(vlSelf->axi_aw_qos_o),4);
    tracep->chgCData(oldp+128,(vlSelf->axi_aw_region_o),4);
    tracep->chgBit(oldp+129,(vlSelf->axi_aw_ready_i));
    tracep->chgBit(oldp+130,(vlSelf->axi_w_valid_o));
    tracep->chgQData(oldp+131,(vlSelf->axi_w_data_o),64);
    tracep->chgCData(oldp+133,(vlSelf->axi_w_strb_o),8);
    tracep->chgBit(oldp+134,(vlSelf->axi_w_last_o));
    tracep->chgBit(oldp+135,(vlSelf->axi_w_user_o));
    tracep->chgBit(oldp+136,(vlSelf->axi_w_ready_i));
    tracep->chgBit(oldp+137,(vlSelf->axi_b_ready_o));
    tracep->chgBit(oldp+138,(vlSelf->axi_b_valid_i));
    tracep->chgCData(oldp+139,(vlSelf->axi_b_resp_i),2);
    tracep->chgCData(oldp+140,(vlSelf->axi_b_id_i),4);
    tracep->chgBit(oldp+141,(vlSelf->axi_b_user_i));
    tracep->chgBit(oldp+142,(vlSelf->axi_ar_valid_o));
    tracep->chgIData(oldp+143,(vlSelf->axi_ar_addr_o),32);
    tracep->chgCData(oldp+144,(vlSelf->axi_ar_prot_o),3);
    tracep->chgCData(oldp+145,(vlSelf->axi_ar_id_o),4);
    tracep->chgBit(oldp+146,(vlSelf->axi_ar_user_o));
    tracep->chgCData(oldp+147,(vlSelf->axi_ar_len_o),8);
    tracep->chgCData(oldp+148,(vlSelf->axi_ar_size_o),3);
    tracep->chgCData(oldp+149,(vlSelf->axi_ar_burst_o),2);
    tracep->chgBit(oldp+150,(vlSelf->axi_ar_lock_o));
    tracep->chgCData(oldp+151,(vlSelf->axi_ar_cache_o),4);
    tracep->chgCData(oldp+152,(vlSelf->axi_ar_qos_o),4);
    tracep->chgCData(oldp+153,(vlSelf->axi_ar_region_o),4);
    tracep->chgBit(oldp+154,(vlSelf->axi_ar_ready_i));
    tracep->chgBit(oldp+155,(vlSelf->axi_r_ready_o));
    tracep->chgBit(oldp+156,(vlSelf->axi_r_valid_i));
    tracep->chgCData(oldp+157,(vlSelf->axi_r_resp_i),2);
    tracep->chgQData(oldp+158,(vlSelf->axi_r_data_i),64);
    tracep->chgBit(oldp+160,(vlSelf->axi_r_last_i));
    tracep->chgCData(oldp+161,(vlSelf->axi_r_id_i),4);
    tracep->chgBit(oldp+162,(vlSelf->axi_r_user_i));
    tracep->chgBit(oldp+163,(vlSelf->ysyx_22040632_top__DOT__rst_s2));
    tracep->chgBit(oldp+164,(vlSelf->ysyx_22040632_top__DOT__rst_s1));
    tracep->chgBit(oldp+165,(((IData)(vlSelf->axi_aw_ready_i) 
                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__axi.axi_aw_valid))));
    tracep->chgBit(oldp+166,(((IData)(vlSelf->axi_ar_ready_i) 
                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__axi.axi_ar_valid))));
    tracep->chgCData(oldp+167,(((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_req)
                                 ? (IData)(vlSelf->axi_r_resp_i)
                                 : (IData)(vlSelf->axi_b_resp_i))),2);
    tracep->chgBit(oldp+168,(((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__idle_flg)) 
                              & ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg)) 
                                 & (IData)(vlSelf->axi_r_last_i)))));
    tracep->chgBit(oldp+169,(((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__idle_flg)) 
                              & ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg) 
                                 & (IData)(vlSelf->axi_r_last_i)))));
}

void Vysyx_22040632_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
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
}
