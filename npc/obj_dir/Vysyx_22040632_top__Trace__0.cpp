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
        tracep->chgQData(oldp+11,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op),64);
        tracep->chgQData(oldp+13,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op),64);
        tracep->chgWData(oldp+15,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd),128);
        tracep->chgQData(oldp+19,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__dvs),64);
        tracep->chgCData(oldp+21,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt),7);
        tracep->chgQData(oldp+22,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__result),64);
        tracep->chgBit(oldp+24,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn_rmd));
        tracep->chgBit(oldp+25,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn_qt));
        tracep->chgBit(oldp+26,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_flag));
        tracep->chgBit(oldp+27,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__valid_out));
        tracep->chgCData(oldp+28,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__len),7);
        tracep->chgQData(oldp+29,((1ULL + (~ (((QData)((IData)(
                                                               vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[0U])))))),64);
        tracep->chgQData(oldp+31,((1ULL + (~ (((QData)((IData)(
                                                               vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[2U])))))),64);
        tracep->chgCData(oldp+33,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__cs),2);
        tracep->chgBit(oldp+34,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__ready));
        tracep->chgQData(oldp+35,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__pci),64);
        tracep->chgQData(oldp+37,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__inst_t),64);
        tracep->chgQData(oldp+39,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0]),64);
        tracep->chgQData(oldp+41,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[1]),64);
        tracep->chgQData(oldp+43,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[2]),64);
        tracep->chgQData(oldp+45,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[3]),64);
        tracep->chgQData(oldp+47,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[4]),64);
        tracep->chgQData(oldp+49,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[5]),64);
        tracep->chgQData(oldp+51,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[6]),64);
        tracep->chgQData(oldp+53,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[7]),64);
        tracep->chgQData(oldp+55,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[8]),64);
        tracep->chgQData(oldp+57,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[9]),64);
        tracep->chgQData(oldp+59,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[10]),64);
        tracep->chgQData(oldp+61,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[11]),64);
        tracep->chgQData(oldp+63,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[12]),64);
        tracep->chgQData(oldp+65,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[13]),64);
        tracep->chgQData(oldp+67,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[14]),64);
        tracep->chgQData(oldp+69,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[15]),64);
        tracep->chgQData(oldp+71,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[16]),64);
        tracep->chgQData(oldp+73,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[17]),64);
        tracep->chgQData(oldp+75,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[18]),64);
        tracep->chgQData(oldp+77,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[19]),64);
        tracep->chgQData(oldp+79,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[20]),64);
        tracep->chgQData(oldp+81,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[21]),64);
        tracep->chgQData(oldp+83,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[22]),64);
        tracep->chgQData(oldp+85,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[23]),64);
        tracep->chgQData(oldp+87,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[24]),64);
        tracep->chgQData(oldp+89,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[25]),64);
        tracep->chgQData(oldp+91,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[26]),64);
        tracep->chgQData(oldp+93,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[27]),64);
        tracep->chgQData(oldp+95,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[28]),64);
        tracep->chgQData(oldp+97,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[29]),64);
        tracep->chgQData(oldp+99,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[30]),64);
        tracep->chgQData(oldp+101,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[31]),64);
        tracep->chgCData(oldp+103,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t),4);
        tracep->chgIData(oldp+104,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__unnamedblk2__DOT__i),32);
        tracep->chgIData(oldp+105,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__unnamedblk1__DOT__i),32);
        tracep->chgBit(oldp+106,(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.divw));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgCData(oldp+107,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__ns),2);
        tracep->chgBit(oldp+108,(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_valid));
        tracep->chgBit(oldp+109,(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_signed));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgQData(oldp+110,(vlSelf->ysyx_22040632_top__DOT__data),64);
        tracep->chgQData(oldp+112,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op),64);
        tracep->chgQData(oldp+114,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr),64);
        tracep->chgQData(oldp+116,(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.quotient),64);
        tracep->chgQData(oldp+118,(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.remainder),64);
    }
    tracep->chgBit(oldp+120,(vlSelf->clk));
    tracep->chgBit(oldp+121,(vlSelf->rst_n));
    tracep->chgQData(oldp+122,(vlSelf->pc),64);
    tracep->chgIData(oldp+124,(vlSelf->inst),32);
    tracep->chgBit(oldp+125,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__rrst_n));
    tracep->chgBit(oldp+126,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__rrst_n));
    tracep->chgBit(oldp+127,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn));
    tracep->chgCData(oldp+128,((0x1fU & (vlSelf->inst 
                                         >> 7U))),5);
    tracep->chgCData(oldp+129,((0x1fU & (vlSelf->inst 
                                         >> 0xfU))),5);
    tracep->chgCData(oldp+130,((0x1fU & (vlSelf->inst 
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
