// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040632_top__Syms.h"


VL_ATTR_COLD void Vysyx_22040632_top___024root__trace_init_sub_0(Vysyx_22040632_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vysyx_22040632_top___024root__trace_init_top(Vysyx_22040632_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root__trace_init_top\n"); );
    // Body
    Vysyx_22040632_top___024root__trace_init_sub_0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_22040632_top___024root__trace_init_sub_0(Vysyx_22040632_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root__trace_init_sub_0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    tracep->declBit(c+83,"clk", false,-1);
    tracep->declBit(c+84,"rst_n", false,-1);
    tracep->declBus(c+85,"inst", false,-1, 31,0);
    tracep->declQuad(c+86,"pc", false,-1, 63,0);
    tracep->declBit(c+83,"ysyx_22040632_top clk", false,-1);
    tracep->declBit(c+84,"ysyx_22040632_top rst_n", false,-1);
    tracep->declBus(c+85,"ysyx_22040632_top inst", false,-1, 31,0);
    tracep->declQuad(c+86,"ysyx_22040632_top pc", false,-1, 63,0);
    tracep->declBit(c+69,"ysyx_22040632_top pcchg", false,-1);
    tracep->declBit(c+70,"ysyx_22040632_top rdy", false,-1);
    tracep->declQuad(c+71,"ysyx_22040632_top src1", false,-1, 63,0);
    tracep->declQuad(c+73,"ysyx_22040632_top src2", false,-1, 63,0);
    tracep->declBus(c+75,"ysyx_22040632_top operation", false,-1, 3,0);
    tracep->declQuad(c+76,"ysyx_22040632_top data", false,-1, 63,0);
    tracep->declQuad(c+88,"ysyx_22040632_top pc_op", false,-1, 63,0);
    tracep->declBit(c+83,"ysyx_22040632_top ysyx_22040632_EXU_i clk", false,-1);
    tracep->declBit(c+84,"ysyx_22040632_top ysyx_22040632_EXU_i rst_n", false,-1);
    tracep->declQuad(c+71,"ysyx_22040632_top ysyx_22040632_EXU_i src1", false,-1, 63,0);
    tracep->declQuad(c+73,"ysyx_22040632_top ysyx_22040632_EXU_i src2", false,-1, 63,0);
    tracep->declQuad(c+86,"ysyx_22040632_top ysyx_22040632_EXU_i pc", false,-1, 63,0);
    tracep->declBus(c+75,"ysyx_22040632_top ysyx_22040632_EXU_i operation", false,-1, 3,0);
    tracep->declQuad(c+76,"ysyx_22040632_top ysyx_22040632_EXU_i data_out", false,-1, 63,0);
    tracep->declQuad(c+88,"ysyx_22040632_top ysyx_22040632_EXU_i pc_op", false,-1, 63,0);
    tracep->declBit(c+69,"ysyx_22040632_top ysyx_22040632_EXU_i pcchg", false,-1);
    tracep->declBit(c+70,"ysyx_22040632_top ysyx_22040632_EXU_i rdy", false,-1);
    tracep->declQuad(c+76,"ysyx_22040632_top ysyx_22040632_EXU_i data_op", false,-1, 63,0);
    tracep->declBit(c+90,"ysyx_22040632_top ysyx_22040632_EXU_i rrst_n", false,-1);
    tracep->declBit(c+70,"ysyx_22040632_top ysyx_22040632_EXU_i gprchg", false,-1);
    tracep->declQuad(c+78,"ysyx_22040632_top ysyx_22040632_EXU_i src1_op", false,-1, 63,0);
    tracep->declQuad(c+80,"ysyx_22040632_top ysyx_22040632_EXU_i src2_op", false,-1, 63,0);
    tracep->declBit(c+83,"ysyx_22040632_top ysyx_22040632_IFU_i clk", false,-1);
    tracep->declBit(c+84,"ysyx_22040632_top ysyx_22040632_IFU_i rst_n", false,-1);
    tracep->declBit(c+69,"ysyx_22040632_top ysyx_22040632_IFU_i pcchg", false,-1);
    tracep->declQuad(c+88,"ysyx_22040632_top ysyx_22040632_IFU_i pc_op", false,-1, 63,0);
    tracep->declQuad(c+86,"ysyx_22040632_top ysyx_22040632_IFU_i pc", false,-1, 63,0);
    tracep->declQuad(c+1,"ysyx_22040632_top ysyx_22040632_IFU_i pci", false,-1, 63,0);
    tracep->declBit(c+91,"ysyx_22040632_top ysyx_22040632_IFU_i rrst_n", false,-1);
    tracep->declBit(c+83,"ysyx_22040632_top ysyx_22040632_IDU_i clk", false,-1);
    tracep->declBit(c+84,"ysyx_22040632_top ysyx_22040632_IDU_i rst_n", false,-1);
    tracep->declBus(c+85,"ysyx_22040632_top ysyx_22040632_IDU_i inst", false,-1, 31,0);
    tracep->declQuad(c+76,"ysyx_22040632_top ysyx_22040632_IDU_i data_in", false,-1, 63,0);
    tracep->declBit(c+70,"ysyx_22040632_top ysyx_22040632_IDU_i rdy", false,-1);
    tracep->declQuad(c+86,"ysyx_22040632_top ysyx_22040632_IDU_i pc", false,-1, 63,0);
    tracep->declQuad(c+71,"ysyx_22040632_top ysyx_22040632_IDU_i src1", false,-1, 63,0);
    tracep->declQuad(c+73,"ysyx_22040632_top ysyx_22040632_IDU_i src2", false,-1, 63,0);
    tracep->declBus(c+75,"ysyx_22040632_top ysyx_22040632_IDU_i operation", false,-1, 3,0);
    {int i; for (i=0; i<32; i++) {
            tracep->declQuad(c+3+i*2,"ysyx_22040632_top ysyx_22040632_IDU_i gpr", true,(i+0), 63,0);}}
    tracep->declBus(c+75,"ysyx_22040632_top ysyx_22040632_IDU_i fun", false,-1, 3,0);
    tracep->declBus(c+82,"ysyx_22040632_top ysyx_22040632_IDU_i type_t", false,-1, 3,0);
    tracep->declBus(c+92,"ysyx_22040632_top ysyx_22040632_IDU_i rd", false,-1, 4,0);
    tracep->declBus(c+93,"ysyx_22040632_top ysyx_22040632_IDU_i rs1", false,-1, 4,0);
    tracep->declBit(c+91,"ysyx_22040632_top ysyx_22040632_IDU_i rrst_n", false,-1);
    tracep->declBus(c+67,"ysyx_22040632_top ysyx_22040632_IDU_i unnamedblk2 i", false,-1, 31,0);
    tracep->declBus(c+68,"ysyx_22040632_top ysyx_22040632_IDU_i unnamedblk1 i", false,-1, 31,0);
}

VL_ATTR_COLD void Vysyx_22040632_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22040632_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22040632_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_22040632_top___024root__trace_register(Vysyx_22040632_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_22040632_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_22040632_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_22040632_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_22040632_top___024root__trace_full_sub_0(Vysyx_22040632_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vysyx_22040632_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_22040632_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22040632_top___024root*>(voidSelf);
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_22040632_top___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vysyx_22040632_top___024root__trace_full_sub_0(Vysyx_22040632_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullQData(oldp+1,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__pci),64);
    tracep->fullQData(oldp+3,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0]),64);
    tracep->fullQData(oldp+5,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[1]),64);
    tracep->fullQData(oldp+7,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[2]),64);
    tracep->fullQData(oldp+9,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[3]),64);
    tracep->fullQData(oldp+11,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[4]),64);
    tracep->fullQData(oldp+13,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[5]),64);
    tracep->fullQData(oldp+15,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[6]),64);
    tracep->fullQData(oldp+17,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[7]),64);
    tracep->fullQData(oldp+19,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[8]),64);
    tracep->fullQData(oldp+21,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[9]),64);
    tracep->fullQData(oldp+23,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[10]),64);
    tracep->fullQData(oldp+25,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[11]),64);
    tracep->fullQData(oldp+27,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[12]),64);
    tracep->fullQData(oldp+29,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[13]),64);
    tracep->fullQData(oldp+31,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[14]),64);
    tracep->fullQData(oldp+33,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[15]),64);
    tracep->fullQData(oldp+35,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[16]),64);
    tracep->fullQData(oldp+37,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[17]),64);
    tracep->fullQData(oldp+39,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[18]),64);
    tracep->fullQData(oldp+41,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[19]),64);
    tracep->fullQData(oldp+43,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[20]),64);
    tracep->fullQData(oldp+45,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[21]),64);
    tracep->fullQData(oldp+47,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[22]),64);
    tracep->fullQData(oldp+49,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[23]),64);
    tracep->fullQData(oldp+51,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[24]),64);
    tracep->fullQData(oldp+53,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[25]),64);
    tracep->fullQData(oldp+55,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[26]),64);
    tracep->fullQData(oldp+57,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[27]),64);
    tracep->fullQData(oldp+59,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[28]),64);
    tracep->fullQData(oldp+61,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[29]),64);
    tracep->fullQData(oldp+63,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[30]),64);
    tracep->fullQData(oldp+65,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[31]),64);
    tracep->fullIData(oldp+67,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__unnamedblk2__DOT__i),32);
    tracep->fullIData(oldp+68,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__unnamedblk1__DOT__i),32);
    tracep->fullBit(oldp+69,(vlSelf->ysyx_22040632_top__DOT__pcchg));
    tracep->fullBit(oldp+70,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg));
    tracep->fullQData(oldp+71,(vlSelf->ysyx_22040632_top__DOT__src1),64);
    tracep->fullQData(oldp+73,(vlSelf->ysyx_22040632_top__DOT__src2),64);
    tracep->fullCData(oldp+75,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun),4);
    tracep->fullQData(oldp+76,((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                                + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op)),64);
    tracep->fullQData(oldp+78,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op),64);
    tracep->fullQData(oldp+80,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op),64);
    tracep->fullCData(oldp+82,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t),4);
    tracep->fullBit(oldp+83,(vlSelf->clk));
    tracep->fullBit(oldp+84,(vlSelf->rst_n));
    tracep->fullIData(oldp+85,(vlSelf->inst),32);
    tracep->fullQData(oldp+86,(vlSelf->pc),64);
    tracep->fullQData(oldp+88,(((3U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                 ? (vlSelf->ysyx_22040632_top__DOT__src1 
                                    + vlSelf->pc) : 
                                (vlSelf->ysyx_22040632_top__DOT__src1 
                                 + vlSelf->ysyx_22040632_top__DOT__src2))),64);
    tracep->fullBit(oldp+90,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__rrst_n));
    tracep->fullBit(oldp+91,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__rrst_n));
    tracep->fullCData(oldp+92,((0x1fU & (vlSelf->inst 
                                         >> 7U))),5);
    tracep->fullCData(oldp+93,((0x1fU & (vlSelf->inst 
                                         >> 0xfU))),5);
}
