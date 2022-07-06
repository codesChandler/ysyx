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
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBit(c+94,"rst_n", false,-1);
    tracep->declQuad(c+95,"pc", false,-1, 63,0);
    tracep->declBus(c+97,"inst", false,-1, 31,0);
    tracep->declBit(c+93,"ysyx_22040632_top clk", false,-1);
    tracep->declBit(c+94,"ysyx_22040632_top rst_n", false,-1);
    tracep->declQuad(c+95,"ysyx_22040632_top pc", false,-1, 63,0);
    tracep->declBus(c+97,"ysyx_22040632_top inst", false,-1, 31,0);
    tracep->declBit(c+1,"ysyx_22040632_top pcchg", false,-1);
    tracep->declBit(c+2,"ysyx_22040632_top rdy", false,-1);
    tracep->declQuad(c+3,"ysyx_22040632_top src1", false,-1, 63,0);
    tracep->declQuad(c+5,"ysyx_22040632_top src2", false,-1, 63,0);
    tracep->declQuad(c+7,"ysyx_22040632_top dest", false,-1, 63,0);
    tracep->declBus(c+9,"ysyx_22040632_top operation", false,-1, 5,0);
    tracep->declQuad(c+10,"ysyx_22040632_top data", false,-1, 63,0);
    tracep->declQuad(c+12,"ysyx_22040632_top pc_op", false,-1, 63,0);
    tracep->declBit(c+93,"ysyx_22040632_top ysyx_22040632_EXU_i clk", false,-1);
    tracep->declBit(c+94,"ysyx_22040632_top ysyx_22040632_EXU_i rst_n", false,-1);
    tracep->declQuad(c+3,"ysyx_22040632_top ysyx_22040632_EXU_i src1", false,-1, 63,0);
    tracep->declQuad(c+5,"ysyx_22040632_top ysyx_22040632_EXU_i src2", false,-1, 63,0);
    tracep->declQuad(c+7,"ysyx_22040632_top ysyx_22040632_EXU_i dest", false,-1, 63,0);
    tracep->declQuad(c+95,"ysyx_22040632_top ysyx_22040632_EXU_i pc", false,-1, 63,0);
    tracep->declBus(c+9,"ysyx_22040632_top ysyx_22040632_EXU_i operation", false,-1, 5,0);
    tracep->declQuad(c+10,"ysyx_22040632_top ysyx_22040632_EXU_i data_out", false,-1, 63,0);
    tracep->declQuad(c+12,"ysyx_22040632_top ysyx_22040632_EXU_i pc_op", false,-1, 63,0);
    tracep->declBit(c+1,"ysyx_22040632_top ysyx_22040632_EXU_i pcchg", false,-1);
    tracep->declBit(c+2,"ysyx_22040632_top ysyx_22040632_EXU_i rdy", false,-1);
    tracep->declQuad(c+14,"ysyx_22040632_top ysyx_22040632_EXU_i data_op", false,-1, 63,0);
    tracep->declBit(c+98,"ysyx_22040632_top ysyx_22040632_EXU_i rrst_n", false,-1);
    tracep->declBit(c+2,"ysyx_22040632_top ysyx_22040632_EXU_i gprchg", false,-1);
    tracep->declQuad(c+16,"ysyx_22040632_top ysyx_22040632_EXU_i src1_op", false,-1, 63,0);
    tracep->declQuad(c+18,"ysyx_22040632_top ysyx_22040632_EXU_i src2_op", false,-1, 63,0);
    tracep->declQuad(c+20,"ysyx_22040632_top ysyx_22040632_EXU_i ld_wr", false,-1, 63,0);
    tracep->declBit(c+93,"ysyx_22040632_top ysyx_22040632_IFU_i clk", false,-1);
    tracep->declBit(c+94,"ysyx_22040632_top ysyx_22040632_IFU_i rst_n", false,-1);
    tracep->declBit(c+1,"ysyx_22040632_top ysyx_22040632_IFU_i pcchg", false,-1);
    tracep->declQuad(c+12,"ysyx_22040632_top ysyx_22040632_IFU_i pc_op", false,-1, 63,0);
    tracep->declQuad(c+95,"ysyx_22040632_top ysyx_22040632_IFU_i pc", false,-1, 63,0);
    tracep->declBus(c+97,"ysyx_22040632_top ysyx_22040632_IFU_i inst", false,-1, 31,0);
    tracep->declQuad(c+22,"ysyx_22040632_top ysyx_22040632_IFU_i pci", false,-1, 63,0);
    tracep->declQuad(c+24,"ysyx_22040632_top ysyx_22040632_IFU_i inst_t", false,-1, 63,0);
    tracep->declBit(c+99,"ysyx_22040632_top ysyx_22040632_IFU_i rrst_n", false,-1);
    tracep->declBit(c+93,"ysyx_22040632_top ysyx_22040632_IDU_i clk", false,-1);
    tracep->declBit(c+94,"ysyx_22040632_top ysyx_22040632_IDU_i rst_n", false,-1);
    tracep->declBus(c+97,"ysyx_22040632_top ysyx_22040632_IDU_i inst", false,-1, 31,0);
    tracep->declQuad(c+10,"ysyx_22040632_top ysyx_22040632_IDU_i data_in", false,-1, 63,0);
    tracep->declBit(c+2,"ysyx_22040632_top ysyx_22040632_IDU_i rdy", false,-1);
    tracep->declQuad(c+95,"ysyx_22040632_top ysyx_22040632_IDU_i pc", false,-1, 63,0);
    tracep->declQuad(c+3,"ysyx_22040632_top ysyx_22040632_IDU_i src1", false,-1, 63,0);
    tracep->declQuad(c+5,"ysyx_22040632_top ysyx_22040632_IDU_i src2", false,-1, 63,0);
    tracep->declBus(c+9,"ysyx_22040632_top ysyx_22040632_IDU_i operation", false,-1, 5,0);
    tracep->declQuad(c+7,"ysyx_22040632_top ysyx_22040632_IDU_i dest", false,-1, 63,0);
    {int i; for (i=0; i<32; i++) {
            tracep->declQuad(c+26+i*2,"ysyx_22040632_top ysyx_22040632_IDU_i gpr", true,(i+0), 63,0);}}
    tracep->declBus(c+9,"ysyx_22040632_top ysyx_22040632_IDU_i fun", false,-1, 5,0);
    tracep->declBus(c+90,"ysyx_22040632_top ysyx_22040632_IDU_i type_t", false,-1, 3,0);
    tracep->declBus(c+100,"ysyx_22040632_top ysyx_22040632_IDU_i rd", false,-1, 4,0);
    tracep->declBus(c+101,"ysyx_22040632_top ysyx_22040632_IDU_i rs1", false,-1, 4,0);
    tracep->declBus(c+102,"ysyx_22040632_top ysyx_22040632_IDU_i rs2", false,-1, 4,0);
    tracep->declBit(c+99,"ysyx_22040632_top ysyx_22040632_IDU_i rrst_n", false,-1);
    tracep->declBus(c+91,"ysyx_22040632_top ysyx_22040632_IDU_i unnamedblk2 i", false,-1, 31,0);
    tracep->declBus(c+92,"ysyx_22040632_top ysyx_22040632_IDU_i unnamedblk1 i", false,-1, 31,0);
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
    tracep->fullBit(oldp+1,(vlSelf->ysyx_22040632_top__DOT__pcchg));
    tracep->fullBit(oldp+2,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg));
    tracep->fullQData(oldp+3,(vlSelf->ysyx_22040632_top__DOT__src1),64);
    tracep->fullQData(oldp+5,(vlSelf->ysyx_22040632_top__DOT__src2),64);
    tracep->fullQData(oldp+7,(vlSelf->ysyx_22040632_top__DOT__dest),64);
    tracep->fullCData(oldp+9,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun),6);
    tracep->fullQData(oldp+10,(vlSelf->ysyx_22040632_top__DOT__data),64);
    tracep->fullQData(oldp+12,(vlSelf->ysyx_22040632_top__DOT__pc_op),64);
    tracep->fullQData(oldp+14,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op),64);
    tracep->fullQData(oldp+16,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op),64);
    tracep->fullQData(oldp+18,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op),64);
    tracep->fullQData(oldp+20,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr),64);
    tracep->fullQData(oldp+22,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__pci),64);
    tracep->fullQData(oldp+24,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__inst_t),64);
    tracep->fullQData(oldp+26,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0]),64);
    tracep->fullQData(oldp+28,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[1]),64);
    tracep->fullQData(oldp+30,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[2]),64);
    tracep->fullQData(oldp+32,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[3]),64);
    tracep->fullQData(oldp+34,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[4]),64);
    tracep->fullQData(oldp+36,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[5]),64);
    tracep->fullQData(oldp+38,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[6]),64);
    tracep->fullQData(oldp+40,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[7]),64);
    tracep->fullQData(oldp+42,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[8]),64);
    tracep->fullQData(oldp+44,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[9]),64);
    tracep->fullQData(oldp+46,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[10]),64);
    tracep->fullQData(oldp+48,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[11]),64);
    tracep->fullQData(oldp+50,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[12]),64);
    tracep->fullQData(oldp+52,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[13]),64);
    tracep->fullQData(oldp+54,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[14]),64);
    tracep->fullQData(oldp+56,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[15]),64);
    tracep->fullQData(oldp+58,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[16]),64);
    tracep->fullQData(oldp+60,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[17]),64);
    tracep->fullQData(oldp+62,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[18]),64);
    tracep->fullQData(oldp+64,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[19]),64);
    tracep->fullQData(oldp+66,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[20]),64);
    tracep->fullQData(oldp+68,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[21]),64);
    tracep->fullQData(oldp+70,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[22]),64);
    tracep->fullQData(oldp+72,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[23]),64);
    tracep->fullQData(oldp+74,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[24]),64);
    tracep->fullQData(oldp+76,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[25]),64);
    tracep->fullQData(oldp+78,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[26]),64);
    tracep->fullQData(oldp+80,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[27]),64);
    tracep->fullQData(oldp+82,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[28]),64);
    tracep->fullQData(oldp+84,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[29]),64);
    tracep->fullQData(oldp+86,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[30]),64);
    tracep->fullQData(oldp+88,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[31]),64);
    tracep->fullCData(oldp+90,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t),4);
    tracep->fullIData(oldp+91,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__unnamedblk2__DOT__i),32);
    tracep->fullIData(oldp+92,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__unnamedblk1__DOT__i),32);
    tracep->fullBit(oldp+93,(vlSelf->clk));
    tracep->fullBit(oldp+94,(vlSelf->rst_n));
    tracep->fullQData(oldp+95,(vlSelf->pc),64);
    tracep->fullIData(oldp+97,(vlSelf->inst),32);
    tracep->fullBit(oldp+98,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__rrst_n));
    tracep->fullBit(oldp+99,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__rrst_n));
    tracep->fullCData(oldp+100,((0x1fU & (vlSelf->inst 
                                          >> 7U))),5);
    tracep->fullCData(oldp+101,((0x1fU & (vlSelf->inst 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+102,((0x1fU & (vlSelf->inst 
                                          >> 0x14U))),5);
}
