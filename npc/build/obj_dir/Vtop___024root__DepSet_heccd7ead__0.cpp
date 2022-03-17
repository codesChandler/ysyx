// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___combo__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->VGA_CLK = vlSelf->clk;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__4\n"); );
    // Init
    IData/*23:0*/ top__DOT__vga_data;
    CData/*0:0*/ top__DOT__my_vga_ctrl__DOT__h_valid;
    CData/*0:0*/ top__DOT__my_vga_ctrl__DOT__v_valid;
    SData/*15:0*/ __Vdly__ledr;
    IData/*31:0*/ __Vdly__top__DOT__led1__DOT__count;
    SData/*9:0*/ __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt;
    SData/*9:0*/ __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt;
    // Body
    __Vdly__top__DOT__led1__DOT__count = vlSelf->top__DOT__led1__DOT__count;
    __Vdly__ledr = vlSelf->ledr;
    __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt = vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt;
    __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt = vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt;
    if (vlSelf->rst) {
        __Vdly__ledr = 1U;
        __Vdly__top__DOT__led1__DOT__count = 0U;
        __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt = 1U;
        __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt = 1U;
    } else {
        if ((0U == vlSelf->top__DOT__led1__DOT__count)) {
            __Vdly__ledr = ((0xfffeU & ((IData)(vlSelf->ledr) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->ledr) 
                                                      >> 0xfU)));
        }
        __Vdly__top__DOT__led1__DOT__count = ((0xc350U 
                                               <= vlSelf->top__DOT__led1__DOT__count)
                                               ? 0U
                                               : ((IData)(1U) 
                                                  + vlSelf->top__DOT__led1__DOT__count));
        if ((0x320U == (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt))) {
            __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt 
                = ((0x20dU == (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt))
                    ? 1U : (0x3ffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt))));
            __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt = 1U;
        } else {
            __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
        }
    }
    vlSelf->ledr = __Vdly__ledr;
    vlSelf->top__DOT__led1__DOT__count = __Vdly__top__DOT__led1__DOT__count;
    vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt = __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt;
    vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt = __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt;
    vlSelf->VGA_HSYNC = (0x60U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt));
    top__DOT__my_vga_ctrl__DOT__h_valid = ((0x90U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)) 
                                           & (0x310U 
                                              >= (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    vlSelf->VGA_VSYNC = (2U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt));
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

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__2(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__4(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
