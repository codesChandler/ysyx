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

VL_ATTR_COLD void Vysyx_22040632_top___024root__trace_init_sub_1(Vysyx_22040632_top___024root* vlSelf, VerilatedVcd* tracep, int scopet, const char* scopep);

VL_ATTR_COLD void Vysyx_22040632_top___024root__trace_init_sub_0(Vysyx_22040632_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root__trace_init_sub_0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    tracep->declBit(c+124,"clk", false,-1);
    tracep->declBit(c+125,"rst_n", false,-1);
    tracep->declQuad(c+126,"pc", false,-1, 63,0);
    tracep->declBus(c+128,"inst", false,-1, 31,0);
    tracep->declBit(c+124,"ysyx_22040632_top clk", false,-1);
    tracep->declBit(c+125,"ysyx_22040632_top rst_n", false,-1);
    tracep->declQuad(c+126,"ysyx_22040632_top pc", false,-1, 63,0);
    tracep->declBus(c+128,"ysyx_22040632_top inst", false,-1, 31,0);
    tracep->declBit(c+1,"ysyx_22040632_top pcchg", false,-1);
    tracep->declBit(c+2,"ysyx_22040632_top rdy", false,-1);
    tracep->declQuad(c+3,"ysyx_22040632_top src1", false,-1, 63,0);
    tracep->declQuad(c+5,"ysyx_22040632_top src2", false,-1, 63,0);
    tracep->declQuad(c+7,"ysyx_22040632_top dest", false,-1, 63,0);
    tracep->declBus(c+9,"ysyx_22040632_top operation", false,-1, 5,0);
    tracep->declQuad(c+114,"ysyx_22040632_top data", false,-1, 63,0);
    tracep->declQuad(c+10,"ysyx_22040632_top pc_op", false,-1, 63,0);
    tracep->declBit(c+12,"ysyx_22040632_top alu_busy", false,-1);
    tracep->declBit(c+13,"ysyx_22040632_top op_div", false,-1);
    tracep->declBit(c+124,"ysyx_22040632_top ysyx_22040632_EXU_i clk", false,-1);
    tracep->declBit(c+125,"ysyx_22040632_top ysyx_22040632_EXU_i rst_n", false,-1);
    tracep->declQuad(c+3,"ysyx_22040632_top ysyx_22040632_EXU_i src1", false,-1, 63,0);
    tracep->declQuad(c+5,"ysyx_22040632_top ysyx_22040632_EXU_i src2", false,-1, 63,0);
    tracep->declQuad(c+7,"ysyx_22040632_top ysyx_22040632_EXU_i dest", false,-1, 63,0);
    tracep->declQuad(c+126,"ysyx_22040632_top ysyx_22040632_EXU_i pc", false,-1, 63,0);
    tracep->declBus(c+9,"ysyx_22040632_top ysyx_22040632_EXU_i operation", false,-1, 5,0);
    tracep->declBit(c+13,"ysyx_22040632_top ysyx_22040632_EXU_i op_div", false,-1);
    tracep->declQuad(c+114,"ysyx_22040632_top ysyx_22040632_EXU_i data_out", false,-1, 63,0);
    tracep->declQuad(c+10,"ysyx_22040632_top ysyx_22040632_EXU_i pc_op", false,-1, 63,0);
    tracep->declBit(c+1,"ysyx_22040632_top ysyx_22040632_EXU_i pcchg", false,-1);
    tracep->declBit(c+2,"ysyx_22040632_top ysyx_22040632_EXU_i rdy", false,-1);
    tracep->declBit(c+12,"ysyx_22040632_top ysyx_22040632_EXU_i alu_busy", false,-1);
    tracep->declQuad(c+116,"ysyx_22040632_top ysyx_22040632_EXU_i data_op", false,-1, 63,0);
    tracep->declBit(c+129,"ysyx_22040632_top ysyx_22040632_EXU_i rrst_n", false,-1);
    tracep->declBit(c+2,"ysyx_22040632_top ysyx_22040632_EXU_i gprchg", false,-1);
    tracep->declQuad(c+14,"ysyx_22040632_top ysyx_22040632_EXU_i src1_op", false,-1, 63,0);
    tracep->declQuad(c+16,"ysyx_22040632_top ysyx_22040632_EXU_i src2_op", false,-1, 63,0);
    tracep->declQuad(c+118,"ysyx_22040632_top ysyx_22040632_EXU_i ld_wr", false,-1, 63,0);
    tracep->declBit(c+134,"ysyx_22040632_top ysyx_22040632_EXU_i div_valid_o", false,-1);
    tracep->declBit(c+135,"ysyx_22040632_top ysyx_22040632_EXU_i signed_o", false,-1);
    tracep->declBit(c+136,"ysyx_22040632_top ysyx_22040632_EXU_i divw_o", false,-1);
    tracep->declBit(c+18,"ysyx_22040632_top ysyx_22040632_EXU_i div_doing", false,-1);
    tracep->declBus(c+137,"ysyx_22040632_top ysyx_22040632_DIV_i XLEN", false,-1, 31,0);
    tracep->declBit(c+124,"ysyx_22040632_top ysyx_22040632_DIV_i clk", false,-1);
    tracep->declBit(c+125,"ysyx_22040632_top ysyx_22040632_DIV_i rst_n", false,-1);
    tracep->declBit(c+129,"ysyx_22040632_top ysyx_22040632_DIV_i rrst_n", false,-1);
    tracep->declArray(c+19,"ysyx_22040632_top ysyx_22040632_DIV_i qt_rmd", false,-1, 127,0);
    tracep->declQuad(c+23,"ysyx_22040632_top ysyx_22040632_DIV_i dvs", false,-1, 63,0);
    tracep->declBus(c+25,"ysyx_22040632_top ysyx_22040632_DIV_i eval_cnt", false,-1, 6,0);
    tracep->declQuad(c+26,"ysyx_22040632_top ysyx_22040632_DIV_i result", false,-1, 63,0);
    tracep->declBit(c+28,"ysyx_22040632_top ysyx_22040632_DIV_i sgn_rmd", false,-1);
    tracep->declBit(c+29,"ysyx_22040632_top ysyx_22040632_DIV_i sgn_qt", false,-1);
    tracep->declBit(c+130,"ysyx_22040632_top ysyx_22040632_DIV_i sgn", false,-1);
    tracep->declBit(c+30,"ysyx_22040632_top ysyx_22040632_DIV_i eval_flag", false,-1);
    tracep->declBit(c+138,"ysyx_22040632_top ysyx_22040632_DIV_i idle_flag", false,-1);
    tracep->declBit(c+31,"ysyx_22040632_top ysyx_22040632_DIV_i valid_out", false,-1);
    tracep->declBus(c+32,"ysyx_22040632_top ysyx_22040632_DIV_i len", false,-1, 6,0);
    tracep->declQuad(c+33,"ysyx_22040632_top ysyx_22040632_DIV_i rmd_tr", false,-1, 63,0);
    tracep->declQuad(c+35,"ysyx_22040632_top ysyx_22040632_DIV_i qt_tr", false,-1, 63,0);
    tracep->declBus(c+37,"ysyx_22040632_top ysyx_22040632_DIV_i cs", false,-1, 1,0);
    tracep->declBus(c+111,"ysyx_22040632_top ysyx_22040632_DIV_i ns", false,-1, 1,0);
    tracep->declBit(c+38,"ysyx_22040632_top ysyx_22040632_DIV_i ready", false,-1);
    tracep->declBit(c+124,"ysyx_22040632_top ysyx_22040632_IFU_i clk", false,-1);
    tracep->declBit(c+125,"ysyx_22040632_top ysyx_22040632_IFU_i rst_n", false,-1);
    tracep->declBit(c+1,"ysyx_22040632_top ysyx_22040632_IFU_i pcchg", false,-1);
    tracep->declQuad(c+10,"ysyx_22040632_top ysyx_22040632_IFU_i pc_op", false,-1, 63,0);
    tracep->declBit(c+12,"ysyx_22040632_top ysyx_22040632_IFU_i alu_busy", false,-1);
    tracep->declQuad(c+126,"ysyx_22040632_top ysyx_22040632_IFU_i pc", false,-1, 63,0);
    tracep->declBus(c+128,"ysyx_22040632_top ysyx_22040632_IFU_i inst", false,-1, 31,0);
    tracep->declQuad(c+39,"ysyx_22040632_top ysyx_22040632_IFU_i pci", false,-1, 63,0);
    tracep->declQuad(c+41,"ysyx_22040632_top ysyx_22040632_IFU_i inst_t", false,-1, 63,0);
    tracep->declBit(c+129,"ysyx_22040632_top ysyx_22040632_IFU_i rrst_n", false,-1);
    tracep->declBit(c+124,"ysyx_22040632_top ysyx_22040632_IDU_i clk", false,-1);
    tracep->declBit(c+125,"ysyx_22040632_top ysyx_22040632_IDU_i rst_n", false,-1);
    tracep->declBus(c+128,"ysyx_22040632_top ysyx_22040632_IDU_i inst", false,-1, 31,0);
    tracep->declQuad(c+114,"ysyx_22040632_top ysyx_22040632_IDU_i data_in", false,-1, 63,0);
    tracep->declBit(c+2,"ysyx_22040632_top ysyx_22040632_IDU_i rdy", false,-1);
    tracep->declQuad(c+126,"ysyx_22040632_top ysyx_22040632_IDU_i pc", false,-1, 63,0);
    tracep->declQuad(c+3,"ysyx_22040632_top ysyx_22040632_IDU_i src1", false,-1, 63,0);
    tracep->declQuad(c+5,"ysyx_22040632_top ysyx_22040632_IDU_i src2", false,-1, 63,0);
    tracep->declBus(c+9,"ysyx_22040632_top ysyx_22040632_IDU_i operation", false,-1, 5,0);
    tracep->declQuad(c+7,"ysyx_22040632_top ysyx_22040632_IDU_i dest", false,-1, 63,0);
    tracep->declBit(c+13,"ysyx_22040632_top ysyx_22040632_IDU_i op_div", false,-1);
    {int i; for (i=0; i<32; i++) {
            tracep->declQuad(c+43+i*2,"ysyx_22040632_top ysyx_22040632_IDU_i gpr", true,(i+0), 63,0);}}
    tracep->declBus(c+9,"ysyx_22040632_top ysyx_22040632_IDU_i fun", false,-1, 5,0);
    tracep->declBus(c+107,"ysyx_22040632_top ysyx_22040632_IDU_i type_t", false,-1, 3,0);
    tracep->declBus(c+131,"ysyx_22040632_top ysyx_22040632_IDU_i rd", false,-1, 4,0);
    tracep->declBus(c+132,"ysyx_22040632_top ysyx_22040632_IDU_i rs1", false,-1, 4,0);
    tracep->declBus(c+133,"ysyx_22040632_top ysyx_22040632_IDU_i rs2", false,-1, 4,0);
    tracep->declBit(c+129,"ysyx_22040632_top ysyx_22040632_IDU_i rrst_n", false,-1);
    tracep->declBus(c+108,"ysyx_22040632_top ysyx_22040632_IDU_i unnamedblk2 i", false,-1, 31,0);
    tracep->declBus(c+109,"ysyx_22040632_top ysyx_22040632_IDU_i unnamedblk1 i", false,-1, 31,0);
    Vysyx_22040632_top___024root__trace_init_sub_1(vlSelf, tracep, VLT_TRACE_SCOPE_INTERFACE, "ysyx_22040632_top dif");
    Vysyx_22040632_top___024root__trace_init_sub_1(vlSelf, tracep, VLT_TRACE_SCOPE_INTERFACE, "ysyx_22040632_top ysyx_22040632_EXU_i dif");
    Vysyx_22040632_top___024root__trace_init_sub_1(vlSelf, tracep, VLT_TRACE_SCOPE_INTERFACE, "ysyx_22040632_top ysyx_22040632_DIV_i dif");
    Vysyx_22040632_top___024root__trace_init_sub_1(vlSelf, tracep, VLT_TRACE_SCOPE_INTERFACE, "ysyx_22040632_top ysyx_22040632_IDU_i dif");
}

VL_ATTR_COLD void Vysyx_22040632_top___024root__trace_init_sub_1(Vysyx_22040632_top___024root* vlSelf, VerilatedVcd* tracep, int scopet, const char* scopep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root__trace_init_sub_1\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    tracep->declBus(c+137,Verilated::catName(scopep,"XLEN",(int)scopet," "), false,-1, 31,0);
    tracep->declQuad(c+14,Verilated::catName(scopep,"dividend",(int)scopet," "), false,-1, 63,0);
    tracep->declQuad(c+16,Verilated::catName(scopep,"divisor",(int)scopet," "), false,-1, 63,0);
    tracep->declBit(c+112,Verilated::catName(scopep,"div_valid",(int)scopet," "), false,-1);
    tracep->declBit(c+110,Verilated::catName(scopep,"divw",(int)scopet," "), false,-1);
    tracep->declBit(c+113,Verilated::catName(scopep,"div_signed",(int)scopet," "), false,-1);
    tracep->declBit(c+139,Verilated::catName(scopep,"flush",(int)scopet," "), false,-1);
    tracep->declBit(c+38,Verilated::catName(scopep,"div_ready",(int)scopet," "), false,-1);
    tracep->declBit(c+31,Verilated::catName(scopep,"out_valid",(int)scopet," "), false,-1);
    tracep->declQuad(c+120,Verilated::catName(scopep,"quotient",(int)scopet," "), false,-1, 63,0);
    tracep->declQuad(c+122,Verilated::catName(scopep,"remainder",(int)scopet," "), false,-1, 63,0);
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
    tracep->fullQData(oldp+10,(vlSelf->ysyx_22040632_top__DOT__pc_op),64);
    tracep->fullBit(oldp+12,(((IData)(vlSelf->ysyx_22040632_top__DOT__op_div) 
                              & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__valid_out)))));
    tracep->fullBit(oldp+13,(vlSelf->ysyx_22040632_top__DOT__op_div));
    tracep->fullQData(oldp+14,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op),64);
    tracep->fullQData(oldp+16,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op),64);
    tracep->fullBit(oldp+18,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__div_doing));
    tracep->fullWData(oldp+19,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd),128);
    tracep->fullQData(oldp+23,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__dvs),64);
    tracep->fullCData(oldp+25,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt),7);
    tracep->fullQData(oldp+26,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__result),64);
    tracep->fullBit(oldp+28,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn_rmd));
    tracep->fullBit(oldp+29,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn_qt));
    tracep->fullBit(oldp+30,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_flag));
    tracep->fullBit(oldp+31,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__valid_out));
    tracep->fullCData(oldp+32,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__len),7);
    tracep->fullQData(oldp+33,((1ULL + (~ (((QData)((IData)(
                                                            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[0U])))))),64);
    tracep->fullQData(oldp+35,((1ULL + (~ (((QData)((IData)(
                                                            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[2U])))))),64);
    tracep->fullCData(oldp+37,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__cs),2);
    tracep->fullBit(oldp+38,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__ready));
    tracep->fullQData(oldp+39,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__pci),64);
    tracep->fullQData(oldp+41,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__inst_t),64);
    tracep->fullQData(oldp+43,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0]),64);
    tracep->fullQData(oldp+45,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[1]),64);
    tracep->fullQData(oldp+47,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[2]),64);
    tracep->fullQData(oldp+49,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[3]),64);
    tracep->fullQData(oldp+51,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[4]),64);
    tracep->fullQData(oldp+53,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[5]),64);
    tracep->fullQData(oldp+55,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[6]),64);
    tracep->fullQData(oldp+57,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[7]),64);
    tracep->fullQData(oldp+59,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[8]),64);
    tracep->fullQData(oldp+61,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[9]),64);
    tracep->fullQData(oldp+63,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[10]),64);
    tracep->fullQData(oldp+65,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[11]),64);
    tracep->fullQData(oldp+67,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[12]),64);
    tracep->fullQData(oldp+69,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[13]),64);
    tracep->fullQData(oldp+71,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[14]),64);
    tracep->fullQData(oldp+73,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[15]),64);
    tracep->fullQData(oldp+75,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[16]),64);
    tracep->fullQData(oldp+77,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[17]),64);
    tracep->fullQData(oldp+79,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[18]),64);
    tracep->fullQData(oldp+81,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[19]),64);
    tracep->fullQData(oldp+83,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[20]),64);
    tracep->fullQData(oldp+85,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[21]),64);
    tracep->fullQData(oldp+87,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[22]),64);
    tracep->fullQData(oldp+89,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[23]),64);
    tracep->fullQData(oldp+91,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[24]),64);
    tracep->fullQData(oldp+93,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[25]),64);
    tracep->fullQData(oldp+95,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[26]),64);
    tracep->fullQData(oldp+97,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[27]),64);
    tracep->fullQData(oldp+99,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[28]),64);
    tracep->fullQData(oldp+101,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[29]),64);
    tracep->fullQData(oldp+103,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[30]),64);
    tracep->fullQData(oldp+105,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[31]),64);
    tracep->fullCData(oldp+107,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t),4);
    tracep->fullIData(oldp+108,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__unnamedblk2__DOT__i),32);
    tracep->fullIData(oldp+109,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__unnamedblk1__DOT__i),32);
    tracep->fullBit(oldp+110,(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.divw));
    tracep->fullCData(oldp+111,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__ns),2);
    tracep->fullBit(oldp+112,(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_valid));
    tracep->fullBit(oldp+113,(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_signed));
    tracep->fullQData(oldp+114,(vlSelf->ysyx_22040632_top__DOT__data),64);
    tracep->fullQData(oldp+116,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op),64);
    tracep->fullQData(oldp+118,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr),64);
    tracep->fullQData(oldp+120,(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.quotient),64);
    tracep->fullQData(oldp+122,(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.remainder),64);
    tracep->fullBit(oldp+124,(vlSelf->clk));
    tracep->fullBit(oldp+125,(vlSelf->rst_n));
    tracep->fullQData(oldp+126,(vlSelf->pc),64);
    tracep->fullIData(oldp+128,(vlSelf->inst),32);
    tracep->fullBit(oldp+129,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__rrst_n));
    tracep->fullBit(oldp+130,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn));
    tracep->fullCData(oldp+131,((0x1fU & (vlSelf->inst 
                                          >> 7U))),5);
    tracep->fullCData(oldp+132,((0x1fU & (vlSelf->inst 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+133,((0x1fU & (vlSelf->inst 
                                          >> 0x14U))),5);
    tracep->fullBit(oldp+134,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__div_valid_o));
    tracep->fullBit(oldp+135,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__signed_o));
    tracep->fullBit(oldp+136,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__divw_o));
    tracep->fullIData(oldp+137,(0x40U),32);
    tracep->fullBit(oldp+138,(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__idle_flag));
    tracep->fullBit(oldp+139,(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.flush));
}
