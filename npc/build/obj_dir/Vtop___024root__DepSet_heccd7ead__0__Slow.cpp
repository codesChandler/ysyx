// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__1\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h2984ac70__0;
    // Body
    __Vtemp_h2984ac70__0[0U] = 0x2e686578U;
    __Vtemp_h2984ac70__0[1U] = 0x74757265U;
    __Vtemp_h2984ac70__0[2U] = 0x2f706963U;
    __Vtemp_h2984ac70__0[3U] = 0x75726365U;
    __Vtemp_h2984ac70__0[4U] = 0x7265736fU;
    VL_READMEM_N(true, 24, 524288, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_h2984ac70__0)
                 ,  &(vlSelf->top__DOT__my_vmem__DOT__vga_mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
    // Init
    IData/*23:0*/ top__DOT__vga_data;
    CData/*0:0*/ top__DOT__my_vga_ctrl__DOT__h_valid;
    CData/*0:0*/ top__DOT__my_vga_ctrl__DOT__v_valid;
    // Body
    vlSelf->VGA_CLK = vlSelf->clk;
    vlSelf->VGA_HSYNC = (0x60U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt));
    vlSelf->VGA_VSYNC = (2U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt));
    top__DOT__my_vga_ctrl__DOT__h_valid = ((0x90U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)) 
                                           & (0x310U 
                                              >= (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    top__DOT__my_vga_ctrl__DOT__v_valid = ((0x23U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)) 
                                           & (0x203U 
                                              >= (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    vlSelf->VGA_BLANK_N = ((IData)(top__DOT__my_vga_ctrl__DOT__h_valid) 
                           & (IData)(top__DOT__my_vga_ctrl__DOT__v_valid));
    top__DOT__vga_data = vlSelf->top__DOT__my_vmem__DOT__vga_mem
        [((((IData)(top__DOT__my_vga_ctrl__DOT__h_valid)
             ? (0x3ffU & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                          - (IData)(0x91U))) : 0U) 
           << 9U) | ((IData)(top__DOT__my_vga_ctrl__DOT__v_valid)
                      ? (0x1ffU & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                                   - (IData)(0x24U)))
                      : 0U))];
    vlSelf->VGA_R = (0xffU & (top__DOT__vga_data >> 0x10U));
    vlSelf->VGA_G = (0xffU & (top__DOT__vga_data >> 8U));
    vlSelf->VGA_B = (0xffU & top__DOT__vga_data);
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__3(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->ledr = 0;
    vlSelf->VGA_CLK = 0;
    vlSelf->VGA_HSYNC = 0;
    vlSelf->VGA_VSYNC = 0;
    vlSelf->VGA_BLANK_N = 0;
    vlSelf->VGA_R = 0;
    vlSelf->VGA_G = 0;
    vlSelf->VGA_B = 0;
    vlSelf->top__DOT__led1__DOT__count = 0;
    vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt = 0;
    vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt = 0;
    for (int __Vi0=0; __Vi0<524288; ++__Vi0) {
        vlSelf->top__DOT__my_vmem__DOT__vga_mem[__Vi0] = 0;
    }
}
