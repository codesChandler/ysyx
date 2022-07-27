// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040632_top__Syms.h"


void Vysyx_22040632_top___024root__trace_chg_sub_0(Vysyx_22040632_top___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22040632_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_22040632_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22040632_top___024root*>(voidSelf);
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_22040632_top___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vysyx_22040632_top___024root__trace_chg_sub_0(Vysyx_22040632_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(vlSelf->ysyx_22040632_top__DOT__pcchg));
        tracep->chgBit(oldp+1,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg));
        tracep->chgQData(oldp+2,(vlSelf->ysyx_22040632_top__DOT__src1),64);
        tracep->chgQData(oldp+4,(vlSelf->ysyx_22040632_top__DOT__src2),64);
        tracep->chgQData(oldp+6,(vlSelf->ysyx_22040632_top__DOT__dest),64);
        tracep->chgCData(oldp+8,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun),6);
        tracep->chgQData(oldp+9,(vlSelf->ysyx_22040632_top__DOT__pc_op),64);
        tracep->chgBit(oldp+11,(((IData)(vlSelf->ysyx_22040632_top__DOT__op_div) 
                                 & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__valid_out)))));
        tracep->chgBit(oldp+12,(vlSelf->ysyx_22040632_top__DOT__op_div));
        tracep->chgQData(oldp+13,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op),64);
        tracep->chgQData(oldp+15,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op),64);
        tracep->chgBit(oldp+17,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__div_doing));
        tracep->chgWData(oldp+18,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd),128);
        tracep->chgQData(oldp+22,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__dvs),64);
        tracep->chgCData(oldp+24,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt),7);
        tracep->chgQData(oldp+25,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__result),64);
        tracep->chgBit(oldp+27,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn_rmd));
        tracep->chgBit(oldp+28,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn_qt));
        tracep->chgBit(oldp+29,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_flag));
        tracep->chgBit(oldp+30,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__valid_out));
        tracep->chgCData(oldp+31,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__len),7);
        tracep->chgQData(oldp+32,((1ULL + (~ (((QData)((IData)(
                                                               vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[0U])))))),64);
        tracep->chgQData(oldp+34,((1ULL + (~ (((QData)((IData)(
                                                               vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[2U])))))),64);
        tracep->chgCData(oldp+36,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__cs),2);
        tracep->chgBit(oldp+37,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__ready));
        tracep->chgQData(oldp+38,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__pci),64);
        tracep->chgQData(oldp+40,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__inst_t),64);
        tracep->chgQData(oldp+42,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0]),64);
        tracep->chgQData(oldp+44,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[1]),64);
        tracep->chgQData(oldp+46,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[2]),64);
        tracep->chgQData(oldp+48,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[3]),64);
        tracep->chgQData(oldp+50,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[4]),64);
        tracep->chgQData(oldp+52,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[5]),64);
        tracep->chgQData(oldp+54,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[6]),64);
        tracep->chgQData(oldp+56,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[7]),64);
        tracep->chgQData(oldp+58,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[8]),64);
        tracep->chgQData(oldp+60,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[9]),64);
        tracep->chgQData(oldp+62,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[10]),64);
        tracep->chgQData(oldp+64,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[11]),64);
        tracep->chgQData(oldp+66,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[12]),64);
        tracep->chgQData(oldp+68,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[13]),64);
        tracep->chgQData(oldp+70,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[14]),64);
        tracep->chgQData(oldp+72,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[15]),64);
        tracep->chgQData(oldp+74,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[16]),64);
        tracep->chgQData(oldp+76,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[17]),64);
        tracep->chgQData(oldp+78,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[18]),64);
        tracep->chgQData(oldp+80,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[19]),64);
        tracep->chgQData(oldp+82,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[20]),64);
        tracep->chgQData(oldp+84,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[21]),64);
        tracep->chgQData(oldp+86,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[22]),64);
        tracep->chgQData(oldp+88,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[23]),64);
        tracep->chgQData(oldp+90,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[24]),64);
        tracep->chgQData(oldp+92,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[25]),64);
        tracep->chgQData(oldp+94,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[26]),64);
        tracep->chgQData(oldp+96,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[27]),64);
        tracep->chgQData(oldp+98,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[28]),64);
        tracep->chgQData(oldp+100,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[29]),64);
        tracep->chgQData(oldp+102,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[30]),64);
        tracep->chgQData(oldp+104,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[31]),64);
        tracep->chgCData(oldp+106,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t),4);
        tracep->chgIData(oldp+107,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__unnamedblk2__DOT__i),32);
        tracep->chgIData(oldp+108,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__unnamedblk1__DOT__i),32);
        tracep->chgBit(oldp+109,(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.divw));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgCData(oldp+110,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__ns),2);
        tracep->chgBit(oldp+111,(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_valid));
        tracep->chgBit(oldp+112,(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_signed));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgQData(oldp+113,(vlSelf->ysyx_22040632_top__DOT__data),64);
        tracep->chgQData(oldp+115,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op),64);
        tracep->chgQData(oldp+117,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr),64);
        tracep->chgQData(oldp+119,(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.quotient),64);
        tracep->chgQData(oldp+121,(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.remainder),64);
    }
    tracep->chgBit(oldp+123,(vlSelf->clk));
    tracep->chgBit(oldp+124,(vlSelf->rst_n));
    tracep->chgQData(oldp+125,(vlSelf->pc),64);
    tracep->chgIData(oldp+127,(vlSelf->inst),32);
    tracep->chgBit(oldp+128,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__rrst_n));
    tracep->chgBit(oldp+129,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn));
    tracep->chgCData(oldp+130,((0x1fU & (vlSelf->inst 
                                         >> 7U))),5);
    tracep->chgCData(oldp+131,((0x1fU & (vlSelf->inst 
                                         >> 0xfU))),5);
    tracep->chgCData(oldp+132,((0x1fU & (vlSelf->inst 
                                         >> 0x14U))),5);
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
