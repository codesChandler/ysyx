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
        tracep->chgQData(oldp+0,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_inst__DOT__pci),64);
        tracep->chgQData(oldp+2,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[0]),64);
        tracep->chgQData(oldp+4,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[1]),64);
        tracep->chgQData(oldp+6,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[2]),64);
        tracep->chgQData(oldp+8,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[3]),64);
        tracep->chgQData(oldp+10,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[4]),64);
        tracep->chgQData(oldp+12,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[5]),64);
        tracep->chgQData(oldp+14,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[6]),64);
        tracep->chgQData(oldp+16,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[7]),64);
        tracep->chgQData(oldp+18,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[8]),64);
        tracep->chgQData(oldp+20,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[9]),64);
        tracep->chgQData(oldp+22,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[10]),64);
        tracep->chgQData(oldp+24,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[11]),64);
        tracep->chgQData(oldp+26,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[12]),64);
        tracep->chgQData(oldp+28,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[13]),64);
        tracep->chgQData(oldp+30,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[14]),64);
        tracep->chgQData(oldp+32,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[15]),64);
        tracep->chgQData(oldp+34,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[16]),64);
        tracep->chgQData(oldp+36,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[17]),64);
        tracep->chgQData(oldp+38,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[18]),64);
        tracep->chgQData(oldp+40,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[19]),64);
        tracep->chgQData(oldp+42,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[20]),64);
        tracep->chgQData(oldp+44,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[21]),64);
        tracep->chgQData(oldp+46,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[22]),64);
        tracep->chgQData(oldp+48,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[23]),64);
        tracep->chgQData(oldp+50,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[24]),64);
        tracep->chgQData(oldp+52,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[25]),64);
        tracep->chgQData(oldp+54,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[26]),64);
        tracep->chgQData(oldp+56,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[27]),64);
        tracep->chgQData(oldp+58,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[28]),64);
        tracep->chgQData(oldp+60,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[29]),64);
        tracep->chgQData(oldp+62,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[30]),64);
        tracep->chgQData(oldp+64,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[31]),64);
        tracep->chgIData(oldp+66,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__unnamedblk2__DOT__i),32);
        tracep->chgIData(oldp+67,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgBit(oldp+68,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_inst__DOT__gprchg));
        tracep->chgBit(oldp+69,(vlSelf->ysyx_22040632_top__DOT__pcchg));
        tracep->chgQData(oldp+70,(vlSelf->ysyx_22040632_top__DOT__src1),64);
        tracep->chgQData(oldp+72,(vlSelf->ysyx_22040632_top__DOT__src2),64);
        tracep->chgCData(oldp+74,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__fun),4);
        tracep->chgCData(oldp+75,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__type_t),4);
        tracep->chgQData(oldp+76,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_inst__DOT__src1_op),64);
        tracep->chgQData(oldp+78,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_inst__DOT__src2_op),64);
    }
    tracep->chgBit(oldp+80,(vlSelf->clk));
    tracep->chgBit(oldp+81,(vlSelf->rst_n));
    tracep->chgIData(oldp+82,(vlSelf->inst),32);
    tracep->chgQData(oldp+83,(vlSelf->pc),64);
    tracep->chgQData(oldp+85,(((3U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__fun))
                                ? (vlSelf->ysyx_22040632_top__DOT__src1 
                                   + vlSelf->pc) : 
                               (vlSelf->ysyx_22040632_top__DOT__src1 
                                + vlSelf->ysyx_22040632_top__DOT__src2))),64);
    tracep->chgBit(oldp+87,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_inst__DOT__rrst_n));
    tracep->chgCData(oldp+88,((0x1fU & (vlSelf->inst 
                                        >> 7U))),5);
    tracep->chgCData(oldp+89,((0x1fU & (vlSelf->inst 
                                        >> 0xfU))),5);
    tracep->chgBit(oldp+90,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_inst__DOT__rrst_n));
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
}
