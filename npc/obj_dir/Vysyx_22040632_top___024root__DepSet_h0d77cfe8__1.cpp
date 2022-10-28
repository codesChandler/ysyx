// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040632_top__Syms.h"
#include "Vysyx_22040632_top___024root.h"

void Vysyx_22040632_top___024unit____Vdpiimwrap_npcexit_TOP____024unit(IData/*31:0*/ code);
extern const VlUnpacked<CData/*2:0*/, 64> Vysyx_22040632_top__ConstPool__TABLE_hc2bb8779_0;
void Vysyx_22040632_top___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &a);
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_22040632_top__ConstPool__TABLE_haf736440_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_22040632_top__ConstPool__TABLE_hb3b3546f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_22040632_top__ConstPool__TABLE_h32bb5fb4_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vysyx_22040632_top__ConstPool__TABLE_h55e6c896_0;

VL_INLINE_OPT void Vysyx_22040632_top___024root___sequent__TOP__9(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___sequent__TOP__9\n"); );
    // Init
    CData/*5:0*/ __Vtableidx4;
    CData/*6:0*/ __Vtableidx5;
    CData/*6:0*/ __Vtableidx6;
    CData/*6:0*/ __Vtableidx7;
    CData/*5:0*/ __Vtableidx8;
    VlWide<3>/*95:0*/ __Vtemp_hd4f4a406__0;
    VlWide<4>/*127:0*/ __Vtemp_h5eda473d__0;
    VlWide<4>/*127:0*/ __Vtemp_h9f0d29df__0;
    VlWide<4>/*127:0*/ __Vtemp_hb0972842__0;
    VlWide<4>/*127:0*/ __Vtemp_h00d1cec9__0;
    VlWide<4>/*127:0*/ __Vtemp_h00d1cec9__1;
    VlWide<3>/*95:0*/ __Vtemp_hd4f4a406__1;
    VlWide<3>/*95:0*/ __Vtemp_h36f0700e__0;
    VlWide<3>/*95:0*/ __Vtemp_h4ea01370__0;
    VlWide<3>/*95:0*/ __Vtemp_he9a47b61__0;
    VlWide<4>/*127:0*/ __Vtemp_hbc25a145__0;
    VlWide<4>/*127:0*/ __Vtemp_hbc25a145__1;
    VlWide<4>/*127:0*/ __Vtemp_hfdeb0d79__0;
    VlWide<4>/*127:0*/ __Vtemp_hfde57b47__0;
    VlWide<4>/*127:0*/ __Vtemp_hfdeb0d79__1;
    VlWide<4>/*127:0*/ __Vtemp_hfde57b47__1;
    VlWide<4>/*127:0*/ __Vtemp_h7b7bda69__0;
    VlWide<4>/*127:0*/ __Vtemp_h7b7e4728__0;
    VlWide<4>/*127:0*/ __Vtemp_h7b7bda69__1;
    VlWide<4>/*127:0*/ __Vtemp_h7b7e4728__1;
    VlWide<4>/*127:0*/ __Vtemp_hea20e68b__0;
    VlWide<4>/*127:0*/ __Vtemp_hea233f69__0;
    VlWide<4>/*127:0*/ __Vtemp_hea20e68b__1;
    VlWide<4>/*127:0*/ __Vtemp_hea233f69__1;
    VlWide<4>/*127:0*/ __Vtemp_h5d548316__0;
    VlWide<4>/*127:0*/ __Vtemp_h5d531b03__0;
    VlWide<4>/*127:0*/ __Vtemp_h5d548316__1;
    VlWide<4>/*127:0*/ __Vtemp_h5d531b03__1;
    VlWide<4>/*127:0*/ __Vtemp_h44cf02d3__0;
    VlWide<4>/*127:0*/ __Vtemp_h44cd67f1__0;
    VlWide<4>/*127:0*/ __Vtemp_h44cf02d3__1;
    VlWide<4>/*127:0*/ __Vtemp_h44cd67f1__1;
    VlWide<4>/*127:0*/ __Vtemp_h169200ea__0;
    VlWide<4>/*127:0*/ __Vtemp_h169ea30d__0;
    VlWide<4>/*127:0*/ __Vtemp_h169200ea__1;
    VlWide<4>/*127:0*/ __Vtemp_h169ea30d__1;
    VlWide<4>/*127:0*/ __Vtemp_hd4e068ef__0;
    VlWide<4>/*127:0*/ __Vtemp_hd4e201bd__0;
    VlWide<4>/*127:0*/ __Vtemp_hd4e068ef__1;
    VlWide<4>/*127:0*/ __Vtemp_hd4e201bd__1;
    VlWide<4>/*127:0*/ __Vtemp_h12c638dd__0;
    VlWide<4>/*127:0*/ __Vtemp_h12bacce4__0;
    VlWide<4>/*127:0*/ __Vtemp_h12c638dd__1;
    VlWide<4>/*127:0*/ __Vtemp_h12bacce4__1;
    VlWide<4>/*127:0*/ __Vtemp_h3b7b6874__0;
    VlWide<4>/*127:0*/ __Vtemp_h3b77cf46__0;
    VlWide<4>/*127:0*/ __Vtemp_h3b7b6874__1;
    VlWide<4>/*127:0*/ __Vtemp_h3b77cf46__1;
    VlWide<4>/*127:0*/ __Vtemp_h7f42a3b4__0;
    VlWide<4>/*127:0*/ __Vtemp_h7f40c541__0;
    VlWide<4>/*127:0*/ __Vtemp_h7f42a3b4__1;
    VlWide<4>/*127:0*/ __Vtemp_h7f40c541__1;
    VlWide<4>/*127:0*/ __Vtemp_hdd35c357__0;
    VlWide<4>/*127:0*/ __Vtemp_hdd3400bd__0;
    VlWide<4>/*127:0*/ __Vtemp_hdd35c357__1;
    VlWide<4>/*127:0*/ __Vtemp_hdd3400bd__1;
    VlWide<4>/*127:0*/ __Vtemp_h2efbf801__0;
    VlWide<4>/*127:0*/ __Vtemp_h2efe19ec__0;
    VlWide<4>/*127:0*/ __Vtemp_h2efbf801__1;
    VlWide<4>/*127:0*/ __Vtemp_h2efe19ec__1;
    VlWide<4>/*127:0*/ __Vtemp_h841ddb83__0;
    VlWide<4>/*127:0*/ __Vtemp_h841d1e99__0;
    VlWide<4>/*127:0*/ __Vtemp_h841ddb83__1;
    VlWide<4>/*127:0*/ __Vtemp_h841d1e99__1;
    VlWide<4>/*127:0*/ __Vtemp_h8c253122__0;
    VlWide<4>/*127:0*/ __Vtemp_h8c276c2b__0;
    VlWide<4>/*127:0*/ __Vtemp_h8c253122__1;
    VlWide<4>/*127:0*/ __Vtemp_h8c276c2b__1;
    VlWide<4>/*127:0*/ __Vtemp_ha712321d__0;
    VlWide<4>/*127:0*/ __Vtemp_ha713a6c7__0;
    VlWide<4>/*127:0*/ __Vtemp_ha712321d__1;
    VlWide<4>/*127:0*/ __Vtemp_ha713a6c7__1;
    VlWide<4>/*127:0*/ __Vtemp_h8a601923__0;
    VlWide<4>/*127:0*/ __Vtemp_h8a601923__1;
    VlWide<4>/*127:0*/ __Vtemp_hef6487da__0;
    VlWide<4>/*127:0*/ __Vtemp_hef6635a4__0;
    VlWide<4>/*127:0*/ __Vtemp_hef6487da__1;
    VlWide<4>/*127:0*/ __Vtemp_hef6635a4__1;
    VlWide<4>/*127:0*/ __Vtemp_h8d2bdd7a__0;
    VlWide<4>/*127:0*/ __Vtemp_h8d2d8ee9__0;
    VlWide<4>/*127:0*/ __Vtemp_h8d2bdd7a__1;
    VlWide<4>/*127:0*/ __Vtemp_h8d2d8ee9__1;
    VlWide<4>/*127:0*/ __Vtemp_hc4545f0a__0;
    VlWide<4>/*127:0*/ __Vtemp_hc456042c__0;
    VlWide<4>/*127:0*/ __Vtemp_hc4545f0a__1;
    VlWide<4>/*127:0*/ __Vtemp_hc456042c__1;
    VlWide<4>/*127:0*/ __Vtemp_h52a4bc93__0;
    VlWide<4>/*127:0*/ __Vtemp_h52aaa3da__0;
    VlWide<4>/*127:0*/ __Vtemp_h52a4bc93__1;
    VlWide<4>/*127:0*/ __Vtemp_h52aaa3da__1;
    VlWide<4>/*127:0*/ __Vtemp_h15c2f08a__0;
    VlWide<4>/*127:0*/ __Vtemp_h15bc19b0__0;
    VlWide<4>/*127:0*/ __Vtemp_h15c2f08a__1;
    VlWide<4>/*127:0*/ __Vtemp_h15bc19b0__1;
    VlWide<4>/*127:0*/ __Vtemp_hb38857c1__0;
    VlWide<4>/*127:0*/ __Vtemp_hb38de9dc__0;
    VlWide<4>/*127:0*/ __Vtemp_hb38857c1__1;
    VlWide<4>/*127:0*/ __Vtemp_hb38de9dc__1;
    VlWide<4>/*127:0*/ __Vtemp_h764155c7__0;
    VlWide<4>/*127:0*/ __Vtemp_h764f3935__0;
    VlWide<4>/*127:0*/ __Vtemp_h764155c7__1;
    VlWide<4>/*127:0*/ __Vtemp_h764f3935__1;
    VlWide<4>/*127:0*/ __Vtemp_h399b780a__0;
    VlWide<4>/*127:0*/ __Vtemp_h39991403__0;
    VlWide<4>/*127:0*/ __Vtemp_h399b780a__1;
    VlWide<4>/*127:0*/ __Vtemp_h39991403__1;
    VlWide<4>/*127:0*/ __Vtemp_hb1c2b9e2__0;
    VlWide<4>/*127:0*/ __Vtemp_hb1cd60f4__0;
    VlWide<4>/*127:0*/ __Vtemp_hb1c2b9e2__1;
    VlWide<4>/*127:0*/ __Vtemp_hb1cd60f4__1;
    VlWide<4>/*127:0*/ __Vtemp_h643f4555__0;
    VlWide<4>/*127:0*/ __Vtemp_h6450df46__0;
    VlWide<4>/*127:0*/ __Vtemp_h643f4555__1;
    VlWide<4>/*127:0*/ __Vtemp_h6450df46__1;
    VlWide<4>/*127:0*/ __Vtemp_h5a66834d__0;
    VlWide<4>/*127:0*/ __Vtemp_h5a5a312b__0;
    VlWide<4>/*127:0*/ __Vtemp_h5a66834d__1;
    VlWide<4>/*127:0*/ __Vtemp_h5a5a312b__1;
    VlWide<4>/*127:0*/ __Vtemp_hb2a4ee7f__0;
    VlWide<4>/*127:0*/ __Vtemp_hb2a6ab26__0;
    VlWide<4>/*127:0*/ __Vtemp_hb2a4ee7f__1;
    VlWide<4>/*127:0*/ __Vtemp_hb2a6ab26__1;
    VlWide<4>/*127:0*/ __Vtemp_h737729ed__0;
    VlWide<4>/*127:0*/ __Vtemp_h737144e7__0;
    VlWide<4>/*127:0*/ __Vtemp_h737729ed__1;
    VlWide<4>/*127:0*/ __Vtemp_h737144e7__1;
    VlWide<4>/*127:0*/ __Vtemp_h8c87702b__0;
    VlWide<4>/*127:0*/ __Vtemp_h8c813720__0;
    VlWide<4>/*127:0*/ __Vtemp_h8c87702b__1;
    VlWide<4>/*127:0*/ __Vtemp_h8c813720__1;
    VlWide<4>/*127:0*/ __Vtemp_hab3b318d__0;
    VlWide<4>/*127:0*/ __Vtemp_hab38a683__0;
    VlWide<4>/*127:0*/ __Vtemp_hab3b318d__1;
    VlWide<4>/*127:0*/ __Vtemp_hab38a683__1;
    // Body
    if ((1U & ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2)) 
               | (3U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cs_f))))) {
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[4U] 
            = (0xffff7fffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[4U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[5U] 
            = (0xffffff7fU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[5U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[5U] 
            = (0x7fffffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[5U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[6U] 
            = (0xff7fffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[6U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[7U] 
            = (0xffff7fffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[7U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[8U] 
            = (0xffffff7fU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[8U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[8U] 
            = (0x7fffffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[8U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[9U] 
            = (0xff7fffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[9U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xaU] 
            = (0xffff7fffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xaU]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xbU] 
            = (0xffffff7fU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xbU]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xbU] 
            = (0x7fffffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xbU]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xcU] 
            = (0xff7fffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xcU]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xdU] 
            = (0xffff7fffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xdU]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xeU] 
            = (0xffffff7fU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xeU]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xeU] 
            = (0x7fffffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xeU]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xfU] 
            = (0xff7fffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xfU]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x10U] 
            = (0xffff7fffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x10U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x11U] 
            = (0xffffff7fU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x11U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x11U] 
            = (0x7fffffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x11U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x12U] 
            = (0xff7fffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x12U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x13U] 
            = (0xffff7fffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x13U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x14U] 
            = (0xffffff7fU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x14U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x14U] 
            = (0x7fffffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x14U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x15U] 
            = (0xff7fffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x15U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x16U] 
            = (0xffff7fffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x16U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x17U] 
            = (0xffffff7fU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x17U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x17U] 
            = (0x7fffffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x17U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0U] 
            = (0xff800000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0U] 
            = (0xffffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[1U] 
            = (0xffff8000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[1U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[1U] 
            = (0xffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[1U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[2U] 
            = (0xffffff80U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[2U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[2U] 
            = (0x800000ffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[2U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[3U] 
            = (0xff800000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[3U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[3U] 
            = (0xffffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[3U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[4U] 
            = (0xffff8000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[4U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[4U] 
            = (0xffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[4U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[5U] 
            = (0xffffff80U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[5U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[5U] 
            = (0x800000ffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[5U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[6U] 
            = (0xff800000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[6U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[6U] 
            = (0xffffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[6U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[7U] 
            = (0xffff8000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[7U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[7U] 
            = (0xffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[7U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[8U] 
            = (0xffffff80U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[8U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[8U] 
            = (0x800000ffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[8U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[9U] 
            = (0xff800000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[9U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[9U] 
            = (0xffffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[9U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xaU] 
            = (0xffff8000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xaU]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xaU] 
            = (0xffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xaU]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xbU] 
            = (0xffffff80U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xbU]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xbU] 
            = (0x800000ffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xbU]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xcU] 
            = (0xff800000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xcU]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xcU] 
            = (0xffffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xcU]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xdU] 
            = (0xffff8000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xdU]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xdU] 
            = (0xffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xdU]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xeU] 
            = (0xffffff80U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xeU]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xeU] 
            = (0x800000ffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xeU]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xfU] 
            = (0xff800000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xfU]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xfU] 
            = (0xffffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xfU]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x10U] 
            = (0xffff8000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x10U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x10U] 
            = (0xffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x10U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x11U] 
            = (0xffffff80U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x11U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x11U] 
            = (0x800000ffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x11U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x12U] 
            = (0xff800000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x12U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x12U] 
            = (0xffffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x12U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x13U] 
            = (0xffff8000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x13U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x13U] 
            = (0xffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x13U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x14U] 
            = (0xffffff80U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x14U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x14U] 
            = (0x800000ffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x14U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x15U] 
            = (0xff800000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x15U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x15U] 
            = (0xffffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x15U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x16U] 
            = (0xffff8000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x16U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x16U] 
            = (0xffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x16U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x17U] 
            = (0xffffff80U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x17U]);
        vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x17U] 
            = (0x800000ffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x17U]);
    } else {
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
             & (5U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__10 = 1U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__10) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd) 
                    & (5U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__11 = 0U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__11) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[4U] 
                = ((0xffff7fffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[4U]) 
                   | (0x8000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[4U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
             & (6U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__12 = 1U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__12) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd) 
                    & (6U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__13 = 0U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__13) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[5U] 
                = ((0xffffff7fU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[5U]) 
                   | (0x80U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[5U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
             & (7U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__14 = 1U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__14) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd) 
                    & (7U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__15 = 0U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__15) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[5U] 
                = ((0x7fffffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[5U]) 
                   | (0x80000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[5U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
             & (8U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__16 = 1U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__16) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd) 
                    & (8U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__17 = 0U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__17) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[6U] 
                = ((0xff7fffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[6U]) 
                   | (0x800000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[6U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
             & (9U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__18 = 1U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__18) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd) 
                    & (9U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__19 = 0U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__19) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[7U] 
                = ((0xffff7fffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[7U]) 
                   | (0x8000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[7U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
             & (0xaU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__20 = 1U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__20) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd) 
                    & (0xaU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__21 = 0U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__21) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[8U] 
                = ((0xffffff7fU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[8U]) 
                   | (0x80U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[8U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
             & (0xbU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__22 = 1U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__22) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd) 
                    & (0xbU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__23 = 0U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__23) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[8U] 
                = ((0x7fffffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[8U]) 
                   | (0x80000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[8U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
             & (0xcU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__24 = 1U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__24) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd) 
                    & (0xcU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__25 = 0U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__25) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[9U] 
                = ((0xff7fffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[9U]) 
                   | (0x800000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[9U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
             & (0xdU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__26 = 1U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__26) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd) 
                    & (0xdU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__27 = 0U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__27) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xaU] 
                = ((0xffff7fffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xaU]) 
                   | (0x8000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xaU]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
             & (0xeU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__28 = 1U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__28) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd) 
                    & (0xeU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__29 = 0U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__29) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xbU] 
                = ((0xffffff7fU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xbU]) 
                   | (0x80U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xbU]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
             & (0xfU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__30 = 1U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__30) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd) 
                    & (0xfU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__31 = 0U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__31) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xbU] 
                = ((0x7fffffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xbU]) 
                   | (0x80000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xbU]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
             & (0x10U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__32 = 1U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__32) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd) 
                    & (0x10U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__33 = 0U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__33) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xcU] 
                = ((0xff7fffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xcU]) 
                   | (0x800000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xcU]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
             & (0x11U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__34 = 1U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__34) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd) 
                    & (0x11U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__35 = 0U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__35) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xdU] 
                = ((0xffff7fffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xdU]) 
                   | (0x8000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xdU]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
             & (0x12U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__36 = 1U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__36) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd) 
                    & (0x12U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__37 = 0U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__37) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xeU] 
                = ((0xffffff7fU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xeU]) 
                   | (0x80U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xeU]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
             & (0x13U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__38 = 1U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__38) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd) 
                    & (0x13U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__39 = 0U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__39) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xeU] 
                = ((0x7fffffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xeU]) 
                   | (0x80000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xeU]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
             & (0x14U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__40 = 1U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__40) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd) 
                    & (0x14U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__41 = 0U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__41) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xfU] 
                = ((0xff7fffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xfU]) 
                   | (0x800000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xfU]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
             & (0x15U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__42 = 1U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__42) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd) 
                    & (0x15U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__43 = 0U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__43) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x10U] 
                = ((0xffff7fffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x10U]) 
                   | (0x8000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x10U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
             & (0x16U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__44 = 1U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__44) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd) 
                    & (0x16U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__45 = 0U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__45) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x11U] 
                = ((0xffffff7fU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x11U]) 
                   | (0x80U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x11U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
             & (0x17U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__46 = 1U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__46) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd) 
                    & (0x17U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__47 = 0U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__47) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x11U] 
                = ((0x7fffffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x11U]) 
                   | (0x80000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x11U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
             & (0x18U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__48 = 1U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__48) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd) 
                    & (0x18U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__49 = 0U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__49) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x12U] 
                = ((0xff7fffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x12U]) 
                   | (0x800000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x12U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
             & (0x19U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__50 = 1U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__50) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd) 
                    & (0x19U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__51 = 0U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__51) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x13U] 
                = ((0xffff7fffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x13U]) 
                   | (0x8000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x13U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
             & (0x1aU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__52 = 1U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__52) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd) 
                    & (0x1aU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__53 = 0U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__53) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x14U] 
                = ((0xffffff7fU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x14U]) 
                   | (0x80U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x14U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
             & (0x1bU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__54 = 1U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__54) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd) 
                    & (0x1bU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__55 = 0U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__55) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x14U] 
                = ((0x7fffffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x14U]) 
                   | (0x80000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x14U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
             & (0x1cU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__56 = 1U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__56) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd) 
                    & (0x1cU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__57 = 0U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__57) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x15U] 
                = ((0xff7fffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x15U]) 
                   | (0x800000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x15U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
             & (0x1dU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__58 = 1U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__58) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd) 
                    & (0x1dU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__59 = 0U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__59) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x16U] 
                = ((0xffff7fffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x16U]) 
                   | (0x8000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x16U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
             & (0x1eU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__60 = 1U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__60) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd) 
                    & (0x1eU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__61 = 0U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__61) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x17U] 
                = ((0xffffff7fU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x17U]) 
                   | (0x80U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x17U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
             & (0x1fU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__62 = 1U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__62) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd) 
                    & (0x1fU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__63 = 0U;
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x17U) 
                                                + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))) {
                vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[(0x1fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                ((IData)(0x18U) 
                                                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x17U) 
                                             + ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                        & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                        (0x1fU & (((IData)(0x17U) + 
                                   ((IData)(0x18U) 
                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                                  >> 5U))]) | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_hd5d3716f__63) 
                                               << (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x17U] 
                = ((0x7fffffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x17U]) 
                   | (0x80000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x17U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (0U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__0 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__0);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0U] 
                = ((0xff800000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0U]) 
                   | (0x7fffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (1U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__1 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__1);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0U] 
                = ((0xffffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0U]) 
                   | (0xff000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0U]));
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[1U] 
                = ((0xffff8000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[1U]) 
                   | (0x7fffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[1U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (2U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__2 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__2);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[1U] 
                = ((0xffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[1U]) 
                   | (0xffff0000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[1U]));
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[2U] 
                = ((0xffffff80U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[2U]) 
                   | (0x7fU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[2U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (3U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__3 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__3);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[2U] 
                = ((0x800000ffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[2U]) 
                   | (0x7fffff00U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[2U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (4U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__4 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__4);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[3U] 
                = ((0xff800000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[3U]) 
                   | (0x7fffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[3U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (5U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__5 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__5);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[3U] 
                = ((0xffffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[3U]) 
                   | (0xff000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[3U]));
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[4U] 
                = ((0xffff8000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[4U]) 
                   | (0x7fffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[4U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (6U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__6 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__6);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[4U] 
                = ((0xffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[4U]) 
                   | (0xffff0000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[4U]));
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[5U] 
                = ((0xffffff80U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[5U]) 
                   | (0x7fU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[5U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (7U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__7 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__7);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[5U] 
                = ((0x800000ffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[5U]) 
                   | (0x7fffff00U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[5U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (8U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__8 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__8);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[6U] 
                = ((0xff800000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[6U]) 
                   | (0x7fffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[6U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (9U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__9 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__9);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[6U] 
                = ((0xffffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[6U]) 
                   | (0xff000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[6U]));
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[7U] 
                = ((0xffff8000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[7U]) 
                   | (0x7fffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[7U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (0xaU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__10 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__10);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[7U] 
                = ((0xffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[7U]) 
                   | (0xffff0000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[7U]));
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[8U] 
                = ((0xffffff80U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[8U]) 
                   | (0x7fU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[8U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (0xbU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__11 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__11);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[8U] 
                = ((0x800000ffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[8U]) 
                   | (0x7fffff00U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[8U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (0xcU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__12 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__12);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[9U] 
                = ((0xff800000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[9U]) 
                   | (0x7fffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[9U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (0xdU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__13 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__13);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[9U] 
                = ((0xffffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[9U]) 
                   | (0xff000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[9U]));
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xaU] 
                = ((0xffff8000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xaU]) 
                   | (0x7fffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xaU]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (0xeU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__14 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__14);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xaU] 
                = ((0xffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xaU]) 
                   | (0xffff0000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xaU]));
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xbU] 
                = ((0xffffff80U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xbU]) 
                   | (0x7fU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xbU]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (0xfU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__15 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__15);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xbU] 
                = ((0x800000ffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xbU]) 
                   | (0x7fffff00U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xbU]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (0x10U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__16 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__16);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xcU] 
                = ((0xff800000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xcU]) 
                   | (0x7fffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xcU]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (0x11U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__17 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__17);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xcU] 
                = ((0xffffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xcU]) 
                   | (0xff000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xcU]));
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xdU] 
                = ((0xffff8000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xdU]) 
                   | (0x7fffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xdU]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (0x12U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__18 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__18);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xdU] 
                = ((0xffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xdU]) 
                   | (0xffff0000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xdU]));
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xeU] 
                = ((0xffffff80U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xeU]) 
                   | (0x7fU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xeU]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (0x13U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__19 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__19);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xeU] 
                = ((0x800000ffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xeU]) 
                   | (0x7fffff00U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xeU]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (0x14U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__20 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__20);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xfU] 
                = ((0xff800000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xfU]) 
                   | (0x7fffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xfU]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (0x15U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__21 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__21);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xfU] 
                = ((0xffffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xfU]) 
                   | (0xff000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xfU]));
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x10U] 
                = ((0xffff8000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x10U]) 
                   | (0x7fffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x10U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (0x16U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__22 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__22);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x10U] 
                = ((0xffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x10U]) 
                   | (0xffff0000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x10U]));
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x11U] 
                = ((0xffffff80U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x11U]) 
                   | (0x7fU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x11U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (0x17U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__23 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__23);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x11U] 
                = ((0x800000ffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x11U]) 
                   | (0x7fffff00U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x11U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (0x18U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__24 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__24);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x12U] 
                = ((0xff800000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x12U]) 
                   | (0x7fffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x12U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (0x19U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__25 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__25);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x12U] 
                = ((0xffffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x12U]) 
                   | (0xff000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x12U]));
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x13U] 
                = ((0xffff8000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x13U]) 
                   | (0x7fffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x13U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (0x1aU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__26 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__26);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x13U] 
                = ((0xffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x13U]) 
                   | (0xffff0000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x13U]));
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x14U] 
                = ((0xffffff80U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x14U]) 
                   | (0x7fU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x14U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (0x1bU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__27 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__27);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x14U] 
                = ((0x800000ffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x14U]) 
                   | (0x7fffff00U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x14U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (0x1cU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__28 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__28);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x15U] 
                = ((0xff800000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x15U]) 
                   | (0x7fffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x15U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (0x1dU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__29 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__29);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x15U] 
                = ((0xffffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x15U]) 
                   | (0xff000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x15U]));
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x16U] 
                = ((0xffff8000U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x16U]) 
                   | (0x7fffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x16U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (0x1eU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__30 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__30);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x16U] 
                = ((0xffffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x16U]) 
                   | (0xffff0000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x16U]));
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x17U] 
                = ((0xffffff80U & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x17U]) 
                   | (0x7fU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x17U]));
        }
        if (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st) 
             & (0x1fU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__31 
                = (0x200000U | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write) 
                                 << 0x16U) | (0x1fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                         >> 0xbU)))));
            if (VL_LIKELY((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) {
                VL_ASSIGNSEL_WIII(768,23,(0x3ffU & 
                                          ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))), vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT____Vlvbound_h360aa47b__31);
            }
        } else {
            vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x17U] 
                = ((0x800000ffU & vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x17U]) 
                   | (0x7fffff00U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x17U]));
        }
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__cnt_vld 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__cnt_vld;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pcen_btb2id 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pcen_btb2id;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_idata_array_i__DOT__w_cnt 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_idata_array_i__DOT__w_cnt;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_cnt 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_cnt;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__dvs 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__dvs;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__len 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__len;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__dvd_qt 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__dvd_qt;
    vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.pc2id 
        = vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.__Vdly__pc2id;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__cnt 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__cnt;
    if (vlSelf->__Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB__v0) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB[0U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB[1U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB[2U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB[3U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB[4U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB[5U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB[6U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB[7U] = 0ULL;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB__v8) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB[vlSelf->__Vdlyvdim0__ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB__v8] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB__v8;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB__v9) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB[7U] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB__v9;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB[6U] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB__v10;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB[5U] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB__v11;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB[4U] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB__v12;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB[3U] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB__v13;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB[2U] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB__v14;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB[1U] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB__v15;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB[0U] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB__v16;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB__v17) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB[0U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB[1U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB[2U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB[3U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB[4U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB[5U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB[6U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB[7U] = 0ULL;
    }
    vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.rd 
        = vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.__Vdly__rd;
    vlSelf->ysyx_22040632_top__DOT__mem_busy = vlSelf->__Vdly__ysyx_22040632_top__DOT__mem_busy;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[0U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[0U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[1U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[1U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[2U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[2U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[3U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[3U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[4U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[4U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[5U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[5U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[6U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[6U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[7U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[7U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[8U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[8U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[9U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[9U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[0xaU] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[0xaU];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[0xbU] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[0xbU];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[0xcU] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[0xcU];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[0xdU] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[0xdU];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[0xeU] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[0xeU];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[0xfU] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[0xfU];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[0x10U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[0x10U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[0x11U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[0x11U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[0x12U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[0x12U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[0x13U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[0x13U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[0x14U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[0x14U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[0x15U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[0x15U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[0x16U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[0x16U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[0U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[0U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[1U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[1U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[2U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[2U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[3U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[3U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[4U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[4U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[5U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[5U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[6U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[6U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[7U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[7U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[8U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[8U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[9U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[9U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[0xaU] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[0xaU];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[0xbU] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[0xbU];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[0xcU] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[0xcU];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[0xdU] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[0xdU];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[0xeU] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[0xeU];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[0xfU] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[0xfU];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[0x10U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[0x10U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[0x11U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[0x11U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[0x12U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[0x12U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[0x13U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[0x13U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[0x14U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[0x14U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[0x15U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[0x15U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[0x16U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[0x16U];
    vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data_ext2mem 
        = vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.__Vdly__data_ext2mem;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_clint_i__DOT__clint[0U] 
        = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_clint_i__DOT__clint__v0;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_clint_i__DOT__clint[1U] 
        = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_clint_i__DOT__clint__v1;
    if (vlSelf->__Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v0) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[vlSelf->__Vdlyvdim0__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v0] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v0;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v1) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0U] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v1;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v2) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[1U] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v2;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[2U] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v3;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[3U] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v4;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[4U] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v5;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[5U] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v6;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[6U] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v7;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[7U] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v8;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[8U] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v9;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[9U] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v10;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0xaU] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v11;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0xbU] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v12;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0xcU] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v13;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0xdU] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v14;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0xeU] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v15;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0xfU] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v16;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x10U] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v17;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x11U] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v18;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x12U] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v19;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x13U] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v20;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x14U] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v21;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x15U] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v22;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x16U] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v23;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x17U] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v24;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x18U] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v25;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x19U] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v26;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x1aU] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v27;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x1bU] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v28;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x1cU] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v29;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x1dU] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v30;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x1eU] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v31;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x1fU] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v32;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v33) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[1U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[2U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[3U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[4U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[5U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[6U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[7U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[8U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[9U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0xaU] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0xbU] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0xcU] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0xdU] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0xeU] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0xfU] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x10U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x11U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x12U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x13U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x14U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x15U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x16U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x17U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x18U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x19U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x1aU] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x1bU] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x1cU] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x1dU] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x1eU] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x1fU] = 0ULL;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[1U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[1U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[2U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[2U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[3U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[3U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[4U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[4U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[5U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[5U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[6U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[6U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[7U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[7U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[8U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[8U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[9U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[9U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0xaU] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0xaU];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0xbU] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0xbU];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0xcU] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0xcU];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0xdU] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0xdU];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0xeU] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0xeU];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0xfU] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0xfU];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0x10U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0x10U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0x11U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0x11U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0x12U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0x12U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0x13U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0x13U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0x14U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0x14U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0x15U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0x15U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0x16U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0x16U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0x17U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0x17U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[1U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[1U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[2U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[2U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[3U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[3U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[4U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[4U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[5U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[5U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[6U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[6U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[7U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[7U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[8U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[8U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[9U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[9U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xaU] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xaU];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xbU] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xbU];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xcU] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xcU];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xdU] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xdU];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xeU] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xeU];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xfU] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xfU];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x10U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x10U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x11U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x11U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x12U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x12U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x13U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x13U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x14U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x14U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x15U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x15U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x16U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x16U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x17U] 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x17U];
    vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
        = vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.__Vdly__data2mem;
    vlSelf->inst = vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.inst2wb;
    vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.not_submit2mem 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2) 
           & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__intrrupt_timing));
    vlSelf->axi_r_ready_o = (2U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_state));
    vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.uart_en2mem 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2) 
           & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.uart_en2ex));
    vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.quit2mem 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2) 
           & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.quit2ex));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__ready 
        = (1U & ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2)) 
                 | ((0U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__ns)) 
                    | (2U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__ns)))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__valid_out 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2) 
           & (2U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__ns)));
    vlSelf->axi_w_valid_o = (2U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_state));
    vlSelf->axi_b_ready_o = (3U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_state));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__b_hs 
        = ((3U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_state)) 
           & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__axi.axi_b_valid));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_hs 
        = ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__axi.axi_w_ready) 
           & (2U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_state)));
    if ((1U & (((~ (IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2)) 
                | (7U != (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__w_cnt))) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__uncacheable)))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__wen_tag_array = 1U;
    } else if ((7U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__w_cnt))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__wen_tag_array = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__wen0_vld 
        = (1U & ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2)) 
                 | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__wen)));
    if ((1U & ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2)) 
               | (8U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__w_cnt))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__axi_write_start = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__axi_write_start = 0U;
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__axi_write_en) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__axi_write_start = 1U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__axi_write_start = 1U;
    }
    if ((1U & ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2)) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable)))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__wen = 1U;
    } else if (((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__idle_flg)) 
                & ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg) 
                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.r_last)))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__wen = 1U;
    } else if (((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__idle_flg)) 
                & ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg) 
                   & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_hs)))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__wen = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cs 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2)
            ? (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ns)
            : 0U);
    VL_EXTEND_WQ(65,64, __Vtemp_hd4f4a406__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__rmd);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__result_w 
        = (0x1ffffffffULL & ((QData)((IData)(__Vtemp_hd4f4a406__0[0U])) 
                             - (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__dvs))));
    if ((0x40U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__len))) {
        vlSymsp->TOP__ysyx_22040632_top__DOT__dif.remainder 
            = (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn) 
                & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_rmd))
                ? ((0ULL == (0x7fffffffffffffffULL 
                             & (1ULL + (~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__rmd))))
                    ? 0ULL : (((QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_rmd)) 
                               << 0x3fU) | (0x7fffffffffffffffULL 
                                            & (1ULL 
                                               + (~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__rmd)))))
                : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__rmd);
    } else if ((0x20U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__len))) {
        vlSymsp->TOP__ysyx_22040632_top__DOT__dif.remainder 
            = (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn) 
                & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_rmd))
                ? ((0U == (0x7fffffffU & ((IData)(1U) 
                                          + (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__rmd)))))
                    ? 0ULL : (((- (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_rmd))) 
                               << 0x1fU) | (QData)((IData)(
                                                           (0x7fffffffU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__rmd))))))))
                : (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__rmd 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__rmd))));
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_flag 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2) 
           & (1U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__ns)));
    if ((0x40U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__len))) {
        vlSymsp->TOP__ysyx_22040632_top__DOT__dif.quotient 
            = (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn) 
                & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_qt))
                ? ((0ULL == (0x7fffffffffffffffULL 
                             & (1ULL + (~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__dvd_qt))))
                    ? 0ULL : (((QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_qt)) 
                               << 0x3fU) | (0x7fffffffffffffffULL 
                                            & (1ULL 
                                               + (~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__dvd_qt)))))
                : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__dvd_qt);
    } else if ((0x20U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__len))) {
        vlSymsp->TOP__ysyx_22040632_top__DOT__dif.quotient 
            = (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn) 
                & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_qt))
                ? ((0U == (0x7fffffffU & ((IData)(1U) 
                                          + (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__dvd_qt)))))
                    ? 0ULL : (((- (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_qt))) 
                               << 0x1fU) | (QData)((IData)(
                                                           (0x7fffffffU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__dvd_qt))))))))
                : (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__dvd_qt 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__dvd_qt))));
    }
    vlSelf->skip = vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.fence_ien2wb;
    vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.fence_ien2mem 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2) 
           & ((IData)(vlSelf->ysyx_22040632_top__DOT__fence_sig) 
              & (~ (IData)((0U != vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_reg)))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc_en 
        = (1U & ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2)) 
                 | (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2if.pc_en2if)));
    if (vlSelf->ysyx_22040632_top__DOT__rst_s2) {
        if (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2if.pc_en2if) 
             & (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__miss_in_inst_pb) 
                 & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__uncacheable))) 
                | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__uncacheable) 
                   & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__fetched_uncacheable)))))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc_nxt_miss_pre_fail 
                = vlSymsp->TOP__ysyx_22040632_top__DOT__ex2if.pc2if;
        }
        if ((1U & (((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__miss_in_inst_pb)) 
                    & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__uncacheable))) 
                   | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__uncacheable) 
                      & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__fetched_uncacheable))))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pcen_nxt_miss_pre_fail = 0U;
        } else if (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2if.pc_en2if) 
                    & (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__miss_in_inst_pb) 
                        & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__uncacheable))) 
                       | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__uncacheable) 
                          & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__fetched_uncacheable)))))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pcen_nxt_miss_pre_fail = 1U;
        }
        if (vlSelf->ysyx_22040632_top__DOT__fence_sig) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__inst_pb[0U] = 0U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__inst_pb[1U] = 0U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__inst_pb[2U] = 0U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__inst_pb[3U] = 0U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__inst_pb[4U] = 0U;
        } else if ((((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__rw_sh) 
                     | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__inst_pb_sh)) 
                    & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__uncacheable)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__inst_pb[0U] 
                = vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.inst[0U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__inst_pb[1U] 
                = vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.inst[1U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__inst_pb[2U] 
                = vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.inst[2U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__inst_pb[3U] 
                = vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.inst[3U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__inst_pb[4U] 
                = (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                   >> 4U);
        }
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc_nxt_miss_pre_fail = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pcen_nxt_miss_pre_fail = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__inst_pb[0U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__inst_pb[1U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__inst_pb[2U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__inst_pb[3U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__inst_pb[4U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__r_trans 
        = ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2dc.valid) 
           & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__rw_req));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_trans 
        = ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2dc.valid) 
           & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__rw_req)));
    vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.sd_en2mem 
        = ((~ (((~ (IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2)) 
                | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__intrrupt_timing)) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__flushinex))) 
           & ((((9U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation)) 
                | (0x15U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
               | (0x1dU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
              | (0x2aU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))));
    vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg 
        = ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.ld_en2wb)
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.data_ld2wb
            : vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.data2wb);
    vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.ld_en2mem 
        = ((~ (((~ (IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2)) 
                | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__intrrupt_timing)) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__flushinex))) 
           & (((((((5U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation)) 
                   | (0x38U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
                  | (0xeU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
                 | (0x12U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
                | (0x37U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
               | (0x28U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
              | (0x29U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))));
    if (vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.quit2wb) {
        Vysyx_22040632_top___024unit____Vdpiimwrap_npcexit_TOP____024unit((IData)(
                                                                                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                                                                                [0xaU]));
    }
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[0U] 
        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
        [0U];
    vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb 
        = ((~ ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2)) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__wt))) 
           & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.rd_w_ena));
    if ((1U & ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2)) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__wt)))) {
        vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb = 0U;
        vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.pc2wb = 0U;
    } else {
        vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb 
            = vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.rd2mem;
        vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.pc2wb 
            = vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.pc2mem;
    }
    if (vlSelf->ysyx_22040632_top__DOT__rst_s2) {
        vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.NO2wb 
            = vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.NO2mem;
        vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_ecall2wb 
            = vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.wen_ecall2mem;
        vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_addr_write2wb 
            = vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.csr_addr_write2mem;
        vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_mstatus_mret2wb 
            = vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.wen_mstatus_mret2mem;
        vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_mstatus_ecall2wb 
            = vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.wen_mstatus_ecall2mem;
        vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_data_write2wb 
            = vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.csr_data_write2mem;
        vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_csr2wb 
            = vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.wen_csr2mem;
    } else {
        vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.NO2wb = 0ULL;
        vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_ecall2wb = 0U;
        vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_addr_write2wb = 0U;
        vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_mstatus_mret2wb = 0U;
        vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_mstatus_ecall2wb = 0U;
        vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_data_write2wb = 0ULL;
        vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_csr2wb = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xfffffff8U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | ((4U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[2U] 
                     >> 4U)) | ((2U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[1U] 
                                       >> 0xdU)) | 
                                (1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0U] 
                                       >> 0x16U)))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xffffffc7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | ((0x20U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[4U] 
                        >> 9U)) | ((0x10U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[3U] 
                                             >> 0x12U)) 
                                   | (8U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[2U] 
                                            >> 0x1bU)))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xfffffe3fU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | ((0x100U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[6U] 
                         >> 0xeU)) | ((0x80U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[5U] 
                                                >> 0x17U)) 
                                      | (0x40U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[5U]))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xfffff1ffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | ((0x800U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[8U] 
                         >> 0x13U)) | ((0x400U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[8U] 
                                                  << 4U)) 
                                       | (0x200U & 
                                          (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[7U] 
                                           >> 5U)))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xffff8fffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | ((0x4000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0xbU] 
                          << 8U)) | ((0x2000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0xaU] 
                                                 >> 1U)) 
                                     | (0x1000U & (
                                                   vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[9U] 
                                                   >> 0xaU)))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xfffc7fffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | ((0x20000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0xdU] 
                           << 3U)) | ((0x10000U & (
                                                   vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0xcU] 
                                                   >> 6U)) 
                                      | (0x8000U & 
                                         (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0xbU] 
                                          >> 0xfU)))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xffe3ffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | ((0x100000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0xfU] 
                            >> 2U)) | ((0x80000U & 
                                        (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0xeU] 
                                         >> 0xbU)) 
                                       | (0x40000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0xeU] 
                                             << 0xcU)))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xff1fffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | ((0x800000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0x11U] 
                            >> 7U)) | ((0x400000U & 
                                        (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0x11U] 
                                         << 0x10U)) 
                                       | (0x200000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0x10U] 
                                             << 7U)))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xf8ffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | ((0x4000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0x14U] 
                             << 0x14U)) | ((0x2000000U 
                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0x13U] 
                                               << 0xbU)) 
                                           | (0x1000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0x12U] 
                                                 << 2U)))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xc7ffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | ((0x20000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0x16U] 
                              << 0xfU)) | ((0x10000000U 
                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0x15U] 
                                               << 6U)) 
                                           | (0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0x14U] 
                                                 >> 3U)))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0x3fffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0x17U] 
                              << 1U)) | (0x40000000U 
                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[0x17U] 
                                            << 0x18U))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cs_f 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2)
            ? (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ns_f)
            : 0U);
    if ((1U & ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2)) 
               | (7U != (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ns))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write = 0U;
    } else if ((7U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ns))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_write = 1U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xfffffff8U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | ((4U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[2U] 
                     >> 4U)) | ((2U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[1U] 
                                       >> 0xdU)) | 
                                (1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0U] 
                                       >> 0x16U)))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xffffffc7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | ((0x20U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[4U] 
                        >> 9U)) | ((0x10U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[3U] 
                                             >> 0x12U)) 
                                   | (8U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[2U] 
                                            >> 0x1bU)))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xfffffe3fU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | ((0x100U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[6U] 
                         >> 0xeU)) | ((0x80U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[5U] 
                                                >> 0x17U)) 
                                      | (0x40U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[5U]))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xfffff1ffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | ((0x800U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[8U] 
                         >> 0x13U)) | ((0x400U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[8U] 
                                                  << 4U)) 
                                       | (0x200U & 
                                          (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[7U] 
                                           >> 5U)))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xffff8fffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | ((0x4000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xbU] 
                          << 8U)) | ((0x2000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xaU] 
                                                 >> 1U)) 
                                     | (0x1000U & (
                                                   vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[9U] 
                                                   >> 0xaU)))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xfffc7fffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | ((0x20000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xdU] 
                           << 3U)) | ((0x10000U & (
                                                   vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xcU] 
                                                   >> 6U)) 
                                      | (0x8000U & 
                                         (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xbU] 
                                          >> 0xfU)))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xffe3ffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | ((0x100000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xfU] 
                            >> 2U)) | ((0x80000U & 
                                        (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xeU] 
                                         >> 0xbU)) 
                                       | (0x40000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0xeU] 
                                             << 0xcU)))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xff1fffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | ((0x800000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x11U] 
                            >> 7U)) | ((0x400000U & 
                                        (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x11U] 
                                         << 0x10U)) 
                                       | (0x200000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x10U] 
                                             << 7U)))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xf8ffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | ((0x4000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x14U] 
                             << 0x14U)) | ((0x2000000U 
                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x13U] 
                                               << 0xbU)) 
                                           | (0x1000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x12U] 
                                                 << 2U)))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xc7ffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | ((0x20000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x16U] 
                              << 0xfU)) | ((0x10000000U 
                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x15U] 
                                               << 6U)) 
                                           | (0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x14U] 
                                                 >> 3U)))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0x3fffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x17U] 
                              << 1U)) | (0x40000000U 
                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[0x17U] 
                                            << 0x18U))));
    if ((2U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.sd_ty))) {
        if ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.sd_ty))) {
            if ((0ULL == (7ULL & vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask_uncacheble = 3U;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask = 0xffffULL;
            } else if ((2ULL == (7ULL & vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask_uncacheble = 0xcU;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask = 0xffff0000ULL;
            } else if ((4ULL == (7ULL & vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask_uncacheble = 0x30U;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask = 0xffff00000000ULL;
            } else if ((6ULL == (7ULL & vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask_uncacheble = 0xc0U;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask = 0xffff000000000000ULL;
            }
        } else if ((0ULL == (7ULL & vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask_uncacheble = 0xfU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask = 0xffffffffULL;
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask_uncacheble = 0xf0U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask = 0xffffffff00000000ULL;
        }
    } else if ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.sd_ty))) {
        if (((((((((0ULL == (7ULL & vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)) 
                   | (1ULL == (7ULL & vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem))) 
                  | (2ULL == (7ULL & vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem))) 
                 | (3ULL == (7ULL & vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem))) 
                | (4ULL == (7ULL & vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem))) 
               | (5ULL == (7ULL & vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem))) 
              | (6ULL == (7ULL & vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem))) 
             | (7ULL == (7ULL & vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)))) {
            if ((0ULL == (7ULL & vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask_uncacheble = 1U;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask = 0xffULL;
            } else if ((1ULL == (7ULL & vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask_uncacheble = 2U;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask = 0xff00ULL;
            } else if ((2ULL == (7ULL & vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask_uncacheble = 4U;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask = 0xff0000ULL;
            } else if ((3ULL == (7ULL & vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask_uncacheble = 8U;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask = 0xff000000ULL;
            } else if ((4ULL == (7ULL & vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask_uncacheble = 0x10U;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask = 0xff00000000ULL;
            } else if ((5ULL == (7ULL & vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask_uncacheble = 0x20U;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask = 0xff0000000000ULL;
            } else if ((6ULL == (7ULL & vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask_uncacheble = 0x40U;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask = 0xff000000000000ULL;
            } else {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask_uncacheble = 0x80U;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask = 0xff00000000000000ULL;
            }
        }
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask_uncacheble = 0xffU;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask = 0xffffffffffffffffULL;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__data2sd 
        = VL_SHIFTL_QQQ(64,64,64, vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data_ext2mem, 
                        (0x38ULL & (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                    << 3U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__en_clint 
        = ((0x2004000U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)) 
           | (0x200bff8U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__w_cnt 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__w_cnt;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__w_cnt 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__w_cnt;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable 
        = (((((((((0x40000000U <= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)) 
                  & (0x7fffffffU >= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem))) 
                 | ((0x30000000U <= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)) 
                    & (0x3fffffffU >= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)))) 
                | ((0x10001000U <= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)) 
                   & (0x10001fffU >= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)))) 
               | ((0xa0000000U <= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)) 
                  & (0xafffffffU >= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)))) 
              | ((0x10002000U <= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)) 
                 & (0x10002fffU >= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)))) 
             | ((0x10003000U <= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)) 
                & (0x10003fffU >= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)))) 
            | ((0x10004000U <= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)) 
               & (0x10004fffU >= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)))) 
           | (0xfc000000U <= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc;
    vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.rd_w_ena 
        = vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.__Vdly__rd_w_ena;
    vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.rd2mem 
        = vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.__Vdly__rd2mem;
    vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.pc2mem 
        = vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.__Vdly__pc2mem;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__ld_wr 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__en_clint)
            ? ((0x2004000U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem))
                ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_clint_i__DOT__clint
               [0U] : ((0x200bff8U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem))
                        ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_clint_i__DOT__clint
                       [1U] : 0ULL)) : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__ld_wr0);
    vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.uart_en2ex 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2) 
           & (1U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)));
    vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.quit2ex 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2) 
           & (0x39U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)));
    if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__w_cnt))) {
        if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__w_cnt))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__mask[0U] = 0xffffffffU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__mask[1U] = 0xffffffffU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__mask[2U] = 0U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__mask[3U] = 0U;
        }
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__mask[0U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__mask[1U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__mask[2U] = 0xffffffffU;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__mask[3U] = 0xffffffffU;
    }
    if ((1U & ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2)) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__uncacheable)))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__wen = 1U;
    } else if (((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__idle_flg)) 
                & ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg)) 
                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.r_last)))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__wen = 1U;
    } else if (vlSymsp->TOP__ysyx_22040632_top__DOT__imif.r_hs) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__wen = 0U;
    }
    if ((6U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cs))) {
        VL_EXTEND_WQ(128,64, __Vtemp_h5eda473d__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__mask[0U] 
            = (~ ((1U & (IData)((vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                 >> 3U))) ? 0U : __Vtemp_h5eda473d__0[0U]));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__mask[1U] 
            = (~ ((1U & (IData)((vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                 >> 3U))) ? 0U : __Vtemp_h5eda473d__0[1U]));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__mask[2U] 
            = (~ ((1U & (IData)((vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                 >> 3U))) ? (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask)
                   : __Vtemp_h5eda473d__0[2U]));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__mask[3U] 
            = (~ ((1U & (IData)((vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                 >> 3U))) ? (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask 
                                                     >> 0x20U))
                   : __Vtemp_h5eda473d__0[3U]));
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_cnt) {
        if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_cnt) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__mask[0U] = 0xffffffffU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__mask[1U] = 0xffffffffU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__mask[2U] = 0U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__mask[3U] = 0U;
        }
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__mask[0U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__mask[1U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__mask[2U] = 0xffffffffU;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__mask[3U] = 0xffffffffU;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index 
        = (0x1fU & ((8U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cs))
                     ? (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cnt_f)
                     : (IData)((vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                >> 6U))));
    if (vlSelf->ysyx_22040632_top__DOT__rst_s2) {
        vlSymsp->TOP__ysyx_22040632_top__DOT__ex2if.pc2if 
            = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__intrrupt_timing)
                ? (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                          [1U]) : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__jen4)
                                    ? vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.pc_mret_ecall2ex
                                    : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__pcchg)
                                        ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__pc_op
                                        : ((IData)(4U) 
                                           + vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.pc2ex))));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__fetched_uncacheable 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__rw_sh;
        vlSymsp->TOP__ysyx_22040632_top__DOT__ex2if.pc_en2if 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__jen0;
    } else {
        vlSymsp->TOP__ysyx_22040632_top__DOT__ex2if.pc2if = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__fetched_uncacheable = 0U;
        vlSymsp->TOP__ysyx_22040632_top__DOT__ex2if.pc_en2if = 0U;
    }
    if (((((((((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                == (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB
                            [0U] >> 0x20U))) | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                == (IData)(
                                                           (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB
                                                            [1U] 
                                                            >> 0x20U)))) 
              | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                 == (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB
                             [2U] >> 0x20U)))) | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                  == (IData)(
                                                             (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB
                                                              [3U] 
                                                              >> 0x20U)))) 
            | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
               == (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB
                           [4U] >> 0x20U)))) | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                == (IData)(
                                                           (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB
                                                            [5U] 
                                                            >> 0x20U)))) 
          | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
             == (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB
                         [6U] >> 0x20U)))) | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                              == (IData)(
                                                         (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB
                                                          [7U] 
                                                          >> 0x20U))))) {
        if ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
             == (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB
                         [0U] >> 0x20U)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__index_btb = 0U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pcen_btb = 1U;
        } else if ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                    == (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB
                                [1U] >> 0x20U)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__index_btb = 1U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pcen_btb = 1U;
        } else if ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                    == (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB
                                [2U] >> 0x20U)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__index_btb = 2U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pcen_btb = 1U;
        } else if ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                    == (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB
                                [3U] >> 0x20U)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__index_btb = 3U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pcen_btb = 1U;
        } else if ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                    == (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB
                                [4U] >> 0x20U)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__index_btb = 4U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pcen_btb = 1U;
        } else if ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                    == (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB
                                [5U] >> 0x20U)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__index_btb = 5U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pcen_btb = 1U;
        } else if ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                    == (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB
                                [6U] >> 0x20U)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__index_btb = 6U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pcen_btb = 1U;
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__index_btb = 7U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pcen_btb = 1U;
        }
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__index_btb = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pcen_btb = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__hit_1st 
        = (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
             >> 0xbU) == ((0x2dfU >= (0x3ffU & ((IData)(0x17U) 
                                                * (0x1fU 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                      >> 6U)))))
                           ? (0x1fffffU & (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x17U) 
                                                 * 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                     >> 6U)))))
                                             ? 0U : 
                                            (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[
                                             (((IData)(0x14U) 
                                               + (0x3ffU 
                                                  & ((IData)(0x17U) 
                                                     * 
                                                     (0x1fU 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                         >> 6U))))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     * 
                                                     (0x1fU 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                         >> 6U))))))) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[
                                              (0x1fU 
                                               & (((IData)(0x17U) 
                                                   * 
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                       >> 6U))) 
                                                  >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     * 
                                                     (0x1fU 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                         >> 6U)))))))
                           : 0U)) & ((0x2dfU >= (0x3ffU 
                                                 & ((IData)(0x15U) 
                                                    + 
                                                    ((IData)(0x17U) 
                                                     * 
                                                     (0x1fU 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                         >> 6U)))))) 
                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[
                                        (0x1fU & (((IData)(0x15U) 
                                                   + 
                                                   ((IData)(0x17U) 
                                                    * 
                                                    (0x1fU 
                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                        >> 6U)))) 
                                                  >> 5U))] 
                                        >> (0x1fU & 
                                            ((IData)(0x15U) 
                                             + ((IData)(0x17U) 
                                                * (0x1fU 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                      >> 6U))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__hit_2nd 
        = (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
             >> 0xbU) == ((0x2dfU >= (0x3ffU & ((IData)(0x17U) 
                                                * (0x1fU 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                      >> 6U)))))
                           ? (0x1fffffU & (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x17U) 
                                                 * 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                     >> 6U)))))
                                             ? 0U : 
                                            (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[
                                             (((IData)(0x14U) 
                                               + (0x3ffU 
                                                  & ((IData)(0x17U) 
                                                     * 
                                                     (0x1fU 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                         >> 6U))))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     * 
                                                     (0x1fU 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                         >> 6U))))))) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[
                                              (0x1fU 
                                               & (((IData)(0x17U) 
                                                   * 
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                       >> 6U))) 
                                                  >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     * 
                                                     (0x1fU 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                         >> 6U)))))))
                           : 0U)) & ((0x2dfU >= (0x3ffU 
                                                 & ((IData)(0x15U) 
                                                    + 
                                                    ((IData)(0x17U) 
                                                     * 
                                                     (0x1fU 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                         >> 6U)))))) 
                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[
                                        (0x1fU & (((IData)(0x15U) 
                                                   + 
                                                   ((IData)(0x17U) 
                                                    * 
                                                    (0x1fU 
                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                        >> 6U)))) 
                                                  >> 5U))] 
                                        >> (0x1fU & 
                                            ((IData)(0x15U) 
                                             + ((IData)(0x17U) 
                                                * (0x1fU 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                      >> 6U))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__miss_in_inst_pb 
        = ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
            >> 4U) != (0xfffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__inst_pb[4U]));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__age_1st 
        = ((0x2dfU >= (0x3ffU & ((IData)(0x16U) + ((IData)(0x17U) 
                                                   * 
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                       >> 6U)))))) 
           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_1stway[
              (0x1fU & (((IData)(0x16U) + ((IData)(0x17U) 
                                           * (0x1fU 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                 >> 6U)))) 
                        >> 5U))] >> (0x1fU & ((IData)(0x16U) 
                                              + ((IData)(0x17U) 
                                                 * 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                     >> 6U)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__age_2nd 
        = ((0x2dfU >= (0x3ffU & ((IData)(0x16U) + ((IData)(0x17U) 
                                                   * 
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                       >> 6U)))))) 
           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__tag_array_2ndway[
              (0x1fU & (((IData)(0x16U) + ((IData)(0x17U) 
                                           * (0x1fU 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                 >> 6U)))) 
                        >> 5U))] >> (0x1fU & ((IData)(0x16U) 
                                              + ((IData)(0x17U) 
                                                 * 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                     >> 6U)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__inst_pb_sh 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2) 
           & ((~ ((IData)(vlSelf->ysyx_22040632_top__DOT__fence_sig) 
                  | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__uncacheable))) 
              & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__rw_sh)));
    __Vtableidx8 = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.ld_ty) 
                     << 3U) | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.sd_ty) 
                                << 1U) | (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.sd_en2mem)));
    vlSymsp->TOP__ysyx_22040632_top__DOT__mem2dc.size 
        = Vysyx_22040632_top__ConstPool__TABLE_hc2bb8779_0
        [__Vtableidx8];
    vlSymsp->TOP__ysyx_22040632_top__DOT__mem2clint.wen_clint 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__en_clint) 
           & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.sd_en2mem) 
              | (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.ld_en2mem)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__wt 
        = ((((IData)(vlSelf->ysyx_22040632_top__DOT__mem_busy) 
             | (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.ld_en2mem)) 
            | (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.sd_en2mem)) 
           & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__en_clint)));
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[1U] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (1U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [1U]);
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[2U] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (2U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [2U]);
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[3U] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (3U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [3U]);
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[4U] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (4U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [4U]);
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[5U] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (5U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [5U]);
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[6U] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (6U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [6U]);
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[7U] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (7U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [7U]);
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[8U] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (8U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [8U]);
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[9U] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (9U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [9U]);
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[0xaU] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (0xaU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [0xaU]);
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[0xbU] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (0xbU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [0xbU]);
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[0xcU] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (0xcU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [0xcU]);
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[0xdU] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (0xdU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [0xdU]);
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[0xeU] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (0xeU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [0xeU]);
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[0xfU] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (0xfU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [0xfU]);
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[0x10U] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (0x10U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [0x10U]);
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[0x11U] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (0x11U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [0x11U]);
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[0x12U] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (0x12U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [0x12U]);
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[0x13U] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (0x13U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [0x13U]);
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[0x14U] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (0x14U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [0x14U]);
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[0x15U] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (0x15U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [0x15U]);
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[0x16U] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (0x16U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [0x16U]);
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[0x17U] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (0x17U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [0x17U]);
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[0x18U] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (0x18U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [0x18U]);
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[0x19U] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (0x19U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [0x19U]);
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[0x1aU] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (0x1aU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [0x1aU]);
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[0x1bU] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (0x1bU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [0x1bU]);
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[0x1cU] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (0x1cU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [0x1cU]);
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[0x1dU] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (0x1dU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [0x1dU]);
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[0x1eU] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (0x1eU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [0x1eU]);
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[0x1fU] 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (0x1fU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)))
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
           [0x1fU]);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ex_hazard_ext 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.rd_w_ena) 
            & (0U != (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.rd2mem))) 
           & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.src_from_gpr2ex) 
               >> 2U) & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.rs2_2ex) 
                         == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.rd2mem))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_hazard_ext_1cy 
        = (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__ld_en2wb) 
            & (0U != (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.rd2mem))) 
           & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.src_from_gpr2ex) 
               >> 2U) & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.rs2_2ex) 
                         == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.rd2mem))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ex_hazard2 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.rd_w_ena) 
            & (0U != (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.rd2mem))) 
           & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.src_from_gpr2ex) 
               >> 1U) & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.rs2_2ex) 
                         == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.rd2mem))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_hazard2_1cy 
        = (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__ld_en2wb) 
            & (0U != (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.rd2mem))) 
           & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.src_from_gpr2ex) 
               >> 1U) & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.rs2_2ex) 
                         == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.rd2mem))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__btb_en 
        = ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2if.btb_add2if) 
           & (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.pc2mem 
              != (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB
                          [(7U & ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__cnt) 
                                  - (IData)(1U)))] 
                          >> 0x20U))));
    vlSelf->pc = vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.pc2wb;
    if (vlSelf->ysyx_22040632_top__DOT__rst_s2) {
        vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.NO2mem 
            = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__intrrupt_timing)
                ? 0x8000000000000007ULL : ((0x3aU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                            ? 0xbULL
                                            : 0ULL));
        vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.wen_ecall2mem 
            = ((0x3aU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation)) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__intrrupt_timing));
        vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.csr_addr_write2mem 
            = vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.csr_addr_write2ex;
    } else {
        vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.NO2mem = 0ULL;
        vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.wen_ecall2mem = 0U;
        vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.csr_addr_write2mem = 0U;
    }
    vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.wen_mstatus_mret2mem 
        = ((~ ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2)) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__intrrupt_timing))) 
           & (0x3bU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation)));
    if (vlSelf->ysyx_22040632_top__DOT__rst_s2) {
        vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.wen_mstatus_ecall2mem 
            = ((0x3aU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation)) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__intrrupt_timing));
        vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.csr_data_write2mem 
            = ((0x40U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                ? ((0x20U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                    ? 0ULL : ((0x10U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                               ? 0ULL : ((8U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                          ? 0ULL : 
                                         ((4U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                             ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op
                                             : ((~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op) 
                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)))))))
                : ((0x20U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                    ? ((0x10U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                        ? ((8U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                            ? ((4U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                ? ((2U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                    ? ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                        ? ((~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op) 
                                           & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)
                                        : (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                                           | vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op))
                                    : ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                        ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op
                                        : (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                                           | vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)))
                                : 0ULL) : 0ULL) : 0ULL)
                    : 0ULL));
    } else {
        vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.wen_mstatus_ecall2mem = 0U;
        vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.csr_data_write2mem = 0ULL;
    }
    vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.wen_csr2mem 
        = ((~ (((~ (IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2)) 
                | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__intrrupt_timing)) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__flushinex))) 
           & ((((0x3dU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation)) 
                | (0x41U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
               | (((0x3cU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation)) 
                   | (0x3fU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
                  & (0U != (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.rs1_2ex)))) 
              | (((0x3eU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation)) 
                  | (0x40U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
                 & (0ULL != vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__data_ld 
        = ((4U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.ld_ty))
            ? ((2U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.ld_ty))
                ? ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.ld_ty))
                    ? 0ULL : (QData)((IData)((0xffffU 
                                              & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__ld_wr)))))
                : ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.ld_ty))
                    ? (((- (QData)((IData)((1U & (IData)(
                                                         (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__ld_wr 
                                                          >> 0xfU)))))) 
                        << 0x10U) | (QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__ld_wr)))))
                    : (((- (QData)((IData)((1U & (IData)(
                                                         (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__ld_wr 
                                                          >> 7U)))))) 
                        << 8U) | (QData)((IData)((0xffU 
                                                  & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__ld_wr)))))))
            : ((2U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.ld_ty))
                ? ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.ld_ty))
                    ? (QData)((IData)((0xffU & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__ld_wr))))
                    : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__ld_wr)
                : ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.ld_ty))
                    ? (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__ld_wr))
                    : (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__ld_wr 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__ld_wr))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_1st 
        = ((0x2ffU >= (0x3ffU & ((IData)(0x16U) + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))) 
           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
              (0x1fU & (((IData)(0x16U) + ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                        >> 5U))] >> (0x1fU & ((IData)(0x16U) 
                                              + ((IData)(0x18U) 
                                                 * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_2nd 
        = ((0x2ffU >= (0x3ffU & ((IData)(0x16U) + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))) 
           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[
              (0x1fU & (((IData)(0x16U) + ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                        >> 5U))] >> (0x1fU & ((IData)(0x16U) 
                                              + ((IData)(0x18U) 
                                                 * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st 
        = (((0x1fffffU & (IData)((vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                  >> 0xbU))) == ((0x2ffU 
                                                  >= 
                                                  (0x3ffU 
                                                   & ((IData)(0x18U) 
                                                      * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))
                                                  ? 
                                                 (0x1fffffU 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x18U) 
                                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                                                       (((IData)(0x14U) 
                                                         + 
                                                         (0x3ffU 
                                                          & ((IData)(0x18U) 
                                                             * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x18U) 
                                                            * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                                                     | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                                                        (0x1fU 
                                                         & (((IData)(0x18U) 
                                                             * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x18U) 
                                                            * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))
                                                  : 0U)) 
           & ((0x2ffU >= (0x3ffU & ((IData)(0x15U) 
                                    + ((IData)(0x18U) 
                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))) 
              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                 (0x1fU & (((IData)(0x15U) + ((IData)(0x18U) 
                                              * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                           >> 5U))] >> (0x1fU & ((IData)(0x15U) 
                                                 + 
                                                 ((IData)(0x18U) 
                                                  * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd 
        = (((0x1fffffU & (IData)((vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                  >> 0xbU))) == ((0x2ffU 
                                                  >= 
                                                  (0x3ffU 
                                                   & ((IData)(0x18U) 
                                                      * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))
                                                  ? 
                                                 (0x1fffffU 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x18U) 
                                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[
                                                       (((IData)(0x14U) 
                                                         + 
                                                         (0x3ffU 
                                                          & ((IData)(0x18U) 
                                                             * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x18U) 
                                                            * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                                                     | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[
                                                        (0x1fU 
                                                         & (((IData)(0x18U) 
                                                             * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x18U) 
                                                            * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))))
                                                  : 0U)) 
           & ((0x2ffU >= (0x3ffU & ((IData)(0x15U) 
                                    + ((IData)(0x18U) 
                                       * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))) 
              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[
                 (0x1fU & (((IData)(0x15U) + ((IData)(0x18U) 
                                              * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                           >> 5U))] >> (0x1fU & ((IData)(0x15U) 
                                                 + 
                                                 ((IData)(0x18U) 
                                                  * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__age_1st 
        = ((0x2ffU >= (0x3ffU & ((IData)(0x17U) + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))) 
           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
              (0x1fU & (((IData)(0x17U) + ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                        >> 5U))] >> (0x1fU & ((IData)(0x17U) 
                                              + ((IData)(0x18U) 
                                                 * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__age_2nd 
        = ((0x2ffU >= (0x3ffU & ((IData)(0x17U) + ((IData)(0x18U) 
                                                   * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))) 
           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[
              (0x1fU & (((IData)(0x17U) + ((IData)(0x18U) 
                                           * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))) 
                        >> 5U))] >> (0x1fU & ((IData)(0x17U) 
                                              + ((IData)(0x18U) 
                                                 * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))));
    if (vlSelf->__Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v0) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v0;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v1) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v1))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v1)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v1)));
    }
    if (vlSelf->__Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v2) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v2))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v2)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v2)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v3))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v3)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v3)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = ((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v4))) 
               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
               [0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v5))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v5)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v5)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v6))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v6)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v6)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v7))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v7)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v7)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v8))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v8)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v8)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v9))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v9)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v9)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v10))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v10)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v10)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v11))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v11)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v11)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
               [0U] | ((QData)((IData)(1U)) << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v12)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
               [0U] | ((QData)((IData)(1U)) << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v13)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v14))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v14)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v14)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v15))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v15)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v15)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v16))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v16)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v16)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v17))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v17)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v17)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v18))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v18)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v18)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v19))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v19)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v19)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v20))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v20)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v20)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v21))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v21)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v21)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v22))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v22)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v22)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v23))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v23)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v23)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v24))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v24)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v24)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v25))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v25)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v25)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v26))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v26)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v26)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v27))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v27)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v27)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v28))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v28)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v28)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v29))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v29)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v29)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v30))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v30)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v30)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v31))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v31)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v31)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v32))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v32)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v32)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v33))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v33)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v33)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v34))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v34)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v34)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v35))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v35)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v35)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v36))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v36)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v36)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v37))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v37)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v37)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v38))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v38)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v38)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v39))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v39)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v39)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v40))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v40)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v40)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v41))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v41)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v41)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v42))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v42)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v42)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v43))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v43)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v43)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v44))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v44)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v44)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v45))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v45)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v45)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v46))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v46)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v46)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v47))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v47)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v47)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v48))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v48)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v48)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v49))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v49)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v49)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v50))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v50)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v50)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v51))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v51)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v51)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v52))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v52)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v52)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v53))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v53)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v53)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v54))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v54)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v54)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v55))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v55)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v55)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v56))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v56)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v56)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v57))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v57)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v57)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v58))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v58)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v58)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v59))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v59)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v59)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v60))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v60)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v60)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v61))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v61)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v61)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v62))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v62)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v62)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v63))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v63)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v63)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v64))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v64)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v64)));
    }
    if (vlSelf->__Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v65) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v65))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v65)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v65)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v66))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v66)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v66)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v67))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v67)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v67)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v68))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v68)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v68)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v69))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v69)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v69)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v70))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v70)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v70)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v71))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v71)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v71)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
               [0U] | ((QData)((IData)(1U)) << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v72)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v73))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v73)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v73)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v74))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v74)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v74)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v75))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v75)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v75)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = ((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v76))) 
               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
               [0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = ((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v77))) 
               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
               [0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v78))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v78)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v78)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v79))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v79)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v79)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v80))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v80)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v80)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v81))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v81)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v81)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v82))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v82)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v82)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v83))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v83)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v83)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v84))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v84)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v84)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v85))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v85)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v85)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v86))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v86)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v86)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v87))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v87)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v87)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v88))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v88)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v88)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v89))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v89)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v89)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v90))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v90)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v90)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v91))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v91)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v91)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v92))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v92)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v92)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v93))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v93)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v93)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v94))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v94)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v94)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v95))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v95)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v95)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v96))) 
                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                [0U]) | ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v96)) 
                         << (IData)(vlSelf->__Vdlyvlsb__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v96)));
    }
    if (vlSelf->__Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v97) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] 
            = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v97;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v98) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[0U] = 0xa00000000ULL;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[1U] 
        = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v99;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[2U] 
        = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v100;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[3U] 
        = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v101;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[4U] 
        = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v102;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[5U] 
        = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v103;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[6U] 
        = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v104;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[7U] 
        = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v105;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr[8U] 
        = vlSelf->__Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr__v106;
    vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.pc2ex 
        = vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.__Vdly__pc2ex;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__w_way 
        = ((0U != (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__age_1st) 
                    << 1U) | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__age_2nd))) 
           & ((2U == (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__age_1st) 
                       << 1U) | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__age_2nd))) 
              | (1U != (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__age_1st) 
                         << 1U) | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__age_2nd)))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__uncacheable 
        = (((((((((0x40000000U <= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc) 
                  & (0x7fffffffU >= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc)) 
                 | ((0x30000000U <= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc) 
                    & (0x3fffffffU >= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc))) 
                | ((0x10001000U <= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc) 
                   & (0x10001fffU >= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc))) 
               | ((0xa0000000U <= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc) 
                  & (0xafffffffU >= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc))) 
              | ((0x10002000U <= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc) 
                 & (0x10002fffU >= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc))) 
             | ((0x10003000U <= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc) 
                & (0x10003fffU >= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc))) 
            | ((0x10004000U <= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc) 
               & (0x10004fffU >= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc))) 
           | (0xfc000000U <= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc));
    Vysyx_22040632_top___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o);
    vlSelf->ysyx_22040632_top__DOT__regs_o[0x1fU] = 
        vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [0U];
    vlSelf->ysyx_22040632_top__DOT__regs_o[0x1eU] = 
        vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [1U];
    vlSelf->ysyx_22040632_top__DOT__regs_o[0x1dU] = 
        vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [2U];
    vlSelf->ysyx_22040632_top__DOT__regs_o[0x1cU] = 
        vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [3U];
    vlSelf->ysyx_22040632_top__DOT__regs_o[0x1bU] = 
        vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [4U];
    vlSelf->ysyx_22040632_top__DOT__regs_o[0x1aU] = 
        vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [5U];
    vlSelf->ysyx_22040632_top__DOT__regs_o[0x19U] = 
        vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [6U];
    vlSelf->ysyx_22040632_top__DOT__regs_o[0x18U] = 
        vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [7U];
    vlSelf->ysyx_22040632_top__DOT__regs_o[0x17U] = 
        vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [8U];
    vlSelf->ysyx_22040632_top__DOT__regs_o[0x16U] = 
        vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [9U];
    vlSelf->ysyx_22040632_top__DOT__regs_o[0x15U] = 
        vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [0xaU];
    vlSelf->ysyx_22040632_top__DOT__regs_o[0x14U] = 
        vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [0xbU];
    vlSelf->ysyx_22040632_top__DOT__regs_o[0x13U] = 
        vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [0xcU];
    vlSelf->ysyx_22040632_top__DOT__regs_o[0x12U] = 
        vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [0xdU];
    vlSelf->ysyx_22040632_top__DOT__regs_o[0x11U] = 
        vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [0xeU];
    vlSelf->ysyx_22040632_top__DOT__regs_o[0x10U] = 
        vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [0xfU];
    vlSelf->ysyx_22040632_top__DOT__regs_o[0xfU] = 
        vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [0x10U];
    vlSelf->ysyx_22040632_top__DOT__regs_o[0xeU] = 
        vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [0x11U];
    vlSelf->ysyx_22040632_top__DOT__regs_o[0xdU] = 
        vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [0x12U];
    vlSelf->ysyx_22040632_top__DOT__regs_o[0xcU] = 
        vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [0x13U];
    vlSelf->ysyx_22040632_top__DOT__regs_o[0xbU] = 
        vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [0x14U];
    vlSelf->ysyx_22040632_top__DOT__regs_o[0xaU] = 
        vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [0x15U];
    vlSelf->ysyx_22040632_top__DOT__regs_o[9U] = vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [0x16U];
    vlSelf->ysyx_22040632_top__DOT__regs_o[8U] = vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [0x17U];
    vlSelf->ysyx_22040632_top__DOT__regs_o[7U] = vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [0x18U];
    vlSelf->ysyx_22040632_top__DOT__regs_o[6U] = vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [0x19U];
    vlSelf->ysyx_22040632_top__DOT__regs_o[5U] = vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [0x1aU];
    vlSelf->ysyx_22040632_top__DOT__regs_o[4U] = vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [0x1bU];
    vlSelf->ysyx_22040632_top__DOT__regs_o[3U] = vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [0x1cU];
    vlSelf->ysyx_22040632_top__DOT__regs_o[2U] = vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [0x1dU];
    vlSelf->ysyx_22040632_top__DOT__regs_o[1U] = vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [0x1eU];
    vlSelf->ysyx_22040632_top__DOT__regs_o[0U] = vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o
        [0x1fU];
    vlSelf->submit = ((((0U != vlSelf->inst) & ((0x80000000U 
                                                 <= vlSelf->pc) 
                                                & (0x88000000U 
                                                   >= vlSelf->pc))) 
                       & (~ (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.not_submit2wb))) 
                      | (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.fence_ien2wb));
    vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.rs1_2ex 
        = vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.__Vdly__rs1_2ex;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_ext 
        = ((((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.ld_en2wb) 
             & (0U != (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb))) 
            & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.src_from_gpr2ex) 
                >> 2U) & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.rs2_2ex) 
                          == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb))))
            ? ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_hazard_ext_1cy)
                ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__data_ld
                : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ex_hazard_ext)
                    ? vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem
                    : vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.data_ld2wb))
            : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_hazard_ext_1cy)
                ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__data_ld
                : ((((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
                     & (0U != (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb))) 
                    & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.src_from_gpr2ex) 
                        >> 2U) & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.rs2_2ex) 
                                  == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb))))
                    ? ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ex_hazard_ext)
                        ? vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem
                        : vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.data2wb)
                    : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ex_hazard_ext)
                        ? vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem
                        : vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.data_ext))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2 
        = ((((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.ld_en2wb) 
             & (0U != (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb))) 
            & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.src_from_gpr2ex) 
                >> 1U) & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.rs2_2ex) 
                          == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb))))
            ? ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_hazard2_1cy)
                ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__data_ld
                : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ex_hazard2)
                    ? vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem
                    : vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.data_ld2wb))
            : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_hazard2_1cy)
                ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__data_ld
                : ((((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
                     & (0U != (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb))) 
                    & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.src_from_gpr2ex) 
                        >> 1U) & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.rs2_2ex) 
                                  == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb))))
                    ? ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ex_hazard2)
                        ? vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem
                        : vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.data2wb)
                    : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ex_hazard2)
                        ? vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem
                        : vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.src2))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_idata_array_i__DOT__index 
        = (0x7fU & ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__wen)
                     ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                        >> 4U) : ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_idata_array_i__DOT__w_cnt))
                                   ? ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_idata_array_i__DOT__w_cnt))
                                       ? (3U | (0x7cU 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                   >> 4U)))
                                       : (2U | (0x7cU 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                   >> 4U))))
                                   : ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_idata_array_i__DOT__w_cnt))
                                       ? (1U | (0x7cU 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                   >> 4U)))
                                       : (0x7cU & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc 
                                                   >> 4U))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__idle_flg 
        = (1U & ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2)) 
                 | (0U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__ns))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2) 
           & (2U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__ns)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
           | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_way 
        = (1U & ((8U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cs))
                  ? ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cnt_f) 
                     >> 5U) : ((0U != (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__age_1st) 
                                        << 1U) | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__age_2nd))) 
                               & ((2U == (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__age_1st) 
                                           << 1U) | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__age_2nd))) 
                                  | (1U != (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__age_1st) 
                                             << 1U) 
                                            | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__age_2nd)))))));
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_csr_i__csr_o[2U] 
        = (IData)((((0x305U == vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_addr_write2wb) 
                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_csr2wb))
                    ? vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_data_write2wb
                    : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                   [1U]));
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_csr_i__csr_o[3U] 
        = (IData)(((((0x305U == vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_addr_write2wb) 
                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_csr2wb))
                     ? vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_data_write2wb
                     : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                    [1U]) >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_csr_i__csr_o[8U] 
        = (IData)((((0xb00U == vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_addr_write2wb) 
                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_csr2wb))
                    ? vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_data_write2wb
                    : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                   [4U]));
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_csr_i__csr_o[9U] 
        = (IData)(((((0xb00U == vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_addr_write2wb) 
                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_csr2wb))
                     ? vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_data_write2wb
                     : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                    [4U]) >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_csr_i__csr_o[0xaU] 
        = (IData)((((0x304U == vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_addr_write2wb) 
                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_csr2wb))
                    ? vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_data_write2wb
                    : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                   [5U]));
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_csr_i__csr_o[0xbU] 
        = (IData)(((((0x304U == vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_addr_write2wb) 
                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_csr2wb))
                     ? vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_data_write2wb
                     : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                    [5U]) >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_csr_i__csr_o[0xcU] 
        = (IData)((((0x344U == vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_addr_write2wb) 
                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_csr2wb))
                    ? vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_data_write2wb
                    : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                   [6U]));
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_csr_i__csr_o[0xdU] 
        = (IData)(((((0x344U == vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_addr_write2wb) 
                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_csr2wb))
                     ? vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_data_write2wb
                     : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                    [6U]) >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_csr_i__csr_o[0x10U] 
        = (IData)((((0x340U == vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_addr_write2wb) 
                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_csr2wb))
                    ? vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_data_write2wb
                    : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                   [8U]));
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_csr_i__csr_o[0x11U] 
        = (IData)(((((0x340U == vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_addr_write2wb) 
                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_csr2wb))
                     ? vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_data_write2wb
                     : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                    [8U]) >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_csr_i__csr_o[0U] 
        = (IData)((((0x300U == vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_addr_write2wb) 
                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_csr2wb))
                    ? ((3U == (3U & (IData)((vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_data_write2wb 
                                             >> 0xdU))))
                        ? (0x8000000000000000ULL | 
                           (0x7fffffffffffffffULL & vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_data_write2wb))
                        : vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_data_write2wb)
                    : ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_mstatus_ecall2wb)
                        ? ((0xffffffffffffe000ULL & 
                            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                            [0U]) | (QData)((IData)(
                                                    (0x1800U 
                                                     | ((0x700U 
                                                         & ((IData)(
                                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                                                                     [0U] 
                                                                     >> 8U)) 
                                                            << 8U)) 
                                                        | ((0x80U 
                                                            & ((IData)(
                                                                       (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                                                                        [0U] 
                                                                        >> 3U)) 
                                                               << 7U)) 
                                                           | ((0x70U 
                                                               & ((IData)(
                                                                          (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                                                                           [0U] 
                                                                           >> 4U)) 
                                                                  << 4U)) 
                                                              | (7U 
                                                                 & (IData)(
                                                                           vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                                                                           [0U])))))))))
                        : ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_mstatus_mret2wb)
                            ? ((0xffffffffffffe000ULL 
                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                                [0U]) | (QData)((IData)(
                                                        (0x80U 
                                                         | ((0x700U 
                                                             & ((IData)(
                                                                        (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                                                                         [0U] 
                                                                         >> 8U)) 
                                                                << 8U)) 
                                                            | ((0x70U 
                                                                & ((IData)(
                                                                           (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                                                                            [0U] 
                                                                            >> 4U)) 
                                                                   << 4U)) 
                                                               | ((8U 
                                                                   & ((IData)(
                                                                              (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                                                                               [0U] 
                                                                               >> 7U)) 
                                                                      << 3U)) 
                                                                  | (7U 
                                                                     & (IData)(
                                                                               vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                                                                               [0U])))))))))
                            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                           [0U]))));
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_csr_i__csr_o[1U] 
        = (IData)(((((0x300U == vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_addr_write2wb) 
                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_csr2wb))
                     ? ((3U == (3U & (IData)((vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_data_write2wb 
                                              >> 0xdU))))
                         ? (0x8000000000000000ULL | 
                            (0x7fffffffffffffffULL 
                             & vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_data_write2wb))
                         : vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_data_write2wb)
                     : ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_mstatus_ecall2wb)
                         ? ((0xffffffffffffe000ULL 
                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                             [0U]) | (QData)((IData)(
                                                     (0x1800U 
                                                      | ((0x700U 
                                                          & ((IData)(
                                                                     (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                                                                      [0U] 
                                                                      >> 8U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                                                                         [0U] 
                                                                         >> 3U)) 
                                                                << 7U)) 
                                                            | ((0x70U 
                                                                & ((IData)(
                                                                           (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                                                                            [0U] 
                                                                            >> 4U)) 
                                                                   << 4U)) 
                                                               | (7U 
                                                                  & (IData)(
                                                                            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                                                                            [0U])))))))))
                         : ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_mstatus_mret2wb)
                             ? ((0xffffffffffffe000ULL 
                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                                 [0U]) | (QData)((IData)(
                                                         (0x80U 
                                                          | ((0x700U 
                                                              & ((IData)(
                                                                         (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                                                                          [0U] 
                                                                          >> 8U)) 
                                                                 << 8U)) 
                                                             | ((0x70U 
                                                                 & ((IData)(
                                                                            (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                                                                             [0U] 
                                                                             >> 4U)) 
                                                                    << 4U)) 
                                                                | ((8U 
                                                                    & ((IData)(
                                                                               (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                                                                                [0U] 
                                                                                >> 7U)) 
                                                                       << 3U)) 
                                                                   | (7U 
                                                                      & (IData)(
                                                                                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                                                                                [0U])))))))))
                             : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                            [0U]))) >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_csr_i__csr_o[4U] 
        = (IData)((((0x341U == vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_addr_write2wb) 
                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_csr2wb))
                    ? vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_data_write2wb
                    : ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_ecall2wb)
                        ? (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.pc2wb))
                        : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                       [2U])));
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_csr_i__csr_o[5U] 
        = (IData)(((((0x341U == vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_addr_write2wb) 
                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_csr2wb))
                     ? vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_data_write2wb
                     : ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_ecall2wb)
                         ? (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.pc2wb))
                         : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                        [2U])) >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_csr_i__csr_o[6U] 
        = (IData)((((0x342U == vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_addr_write2wb) 
                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_csr2wb))
                    ? vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_data_write2wb
                    : ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_ecall2wb)
                        ? vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.NO2wb
                        : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                       [3U])));
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_csr_i__csr_o[7U] 
        = (IData)(((((0x342U == vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_addr_write2wb) 
                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_csr2wb))
                     ? vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.csr_data_write2wb
                     : ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.wen_ecall2wb)
                         ? vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.NO2wb
                         : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                        [3U])) >> 0x20U));
    vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.pc_mret_ecall2ex 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2)
            ? (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr_read)
            : 0U);
    vlSelf->npc = ((1U == (1U & (0U != vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.pc2mem)))
                    ? vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.pc2mem
                    : ((2U == (3U & (((0U != vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.pc2ex) 
                                      << 1U) | (0U 
                                                != vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.pc2mem))))
                        ? vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.pc2ex
                        : ((4U == (((0U != vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.pc2id) 
                                    << 2U) | (((0U 
                                                != vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.pc2ex) 
                                               << 1U) 
                                              | (0U 
                                                 != vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.pc2mem))))
                            ? vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.pc2id
                            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__intrrupt_timing 
        = (((IData)(vlSelf->ysyx_22040632_top__DOT__intrrupt_timing2ex) 
            & (0U != vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.pc2ex)) 
           & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__mem_busy)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__wen_1st 
        = (1U & ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__wen_tag_array)) 
                 & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__w_way))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_itag_array_i__DOT__wen_2nd 
        = ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__wen_tag_array)) 
           & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__w_way));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_idata_array_i__DOT__wen_1st 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__wen) 
           | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__w_way));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_idata_array_i__DOT__wen_2nd 
        = (1U & ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__wen) 
                 | (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__w_way))));
    vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.valid 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__miss_in_inst_pb) 
           | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__uncacheable));
    if ((1U & ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2)) 
               | (~ (IData)((0U != vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_reg)))))) {
        vlSelf->ysyx_22040632_top__DOT__fence_sig = 0U;
    } else if ((0x44U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
        vlSelf->ysyx_22040632_top__DOT__fence_sig = 1U;
    }
    vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.csr_addr_write2ex 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__rst_s2)
            ? (((- (IData)((vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                            >> 0x1fU))) << 0xcU) | 
               (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                >> 0x14U)) : 0U);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ex_hazard1 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.rd_w_ena) 
            & (0U != (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.rd2mem))) 
           & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.src_from_gpr2ex) 
              & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.rs1_2ex) 
                 == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.rd2mem))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__mem_hazard1 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (0U != (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb))) 
           & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.src_from_gpr2ex) 
              & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.rs1_2ex) 
                 == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_hazard1_1cy 
        = (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__ld_en2wb) 
            & (0U != (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.rd2mem))) 
           & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.src_from_gpr2ex) 
              & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.rs1_2ex) 
                 == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.rd2mem))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_hazard1_2cy 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.ld_en2wb) 
            & (0U != (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb))) 
           & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.src_from_gpr2ex) 
              & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.rs1_2ex) 
                 == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_1st 
        = (1U & (((((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__wen_tag_array)) 
                    & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_way))) 
                   & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st))) 
                  & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd))) 
                 | (((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__wen_tag_array)) 
                     & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st)) 
                    & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd)))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__wen_2nd 
        = (((((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__wen_tag_array)) 
              & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_way)) 
             & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st))) 
            & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd))) 
           | (((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__wen_tag_array)) 
               & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd)) 
              & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__wen_1st 
        = (1U & (~ ((((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__wen)) 
                      & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_way))) 
                     | ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__wen_sd)) 
                        & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st))) 
                    | ((((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__wen_sd)) 
                         & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_way))) 
                        & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd))) 
                       & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__wen_2nd 
        = (1U & (~ ((((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__wen)) 
                      & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_way)) 
                     | ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__wen_sd)) 
                        & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd))) 
                    | ((((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__wen_sd)) 
                         & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_way)) 
                        & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd))) 
                       & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__tag_read 
        = (0x1fffffU & ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_way)
                         ? ((0x2ffU >= (0x3ffU & ((IData)(0x18U) 
                                                  * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))
                             ? (((0U == (0x1fU & ((IData)(0x18U) 
                                                  * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))
                                  ? 0U : (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[
                                          (((IData)(0x14U) 
                                            + (0x3ffU 
                                               & ((IData)(0x18U) 
                                                  * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(0x18U) 
                                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                                | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_2ndway[
                                   (0x1fU & (((IData)(0x18U) 
                                              * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)) 
                                             >> 5U))] 
                                   >> (0x1fU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))
                             : 0U) : ((0x2ffU >= (0x3ffU 
                                                  & ((IData)(0x18U) 
                                                     * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))
                                       ? (((0U == (0x1fU 
                                                   & ((IData)(0x18U) 
                                                      * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index))))
                                            ? 0U : 
                                           (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                                            (((IData)(0x14U) 
                                              + (0x3ffU 
                                                 & ((IData)(0x18U) 
                                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x18U) 
                                                      * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))) 
                                          | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__dtag_array_1stway[
                                             (0x1fU 
                                              & (((IData)(0x18U) 
                                                  * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x18U) 
                                                    * (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index)))))
                                       : 0U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty 
        = (((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_way)) 
            & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_1st)) 
           | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_way) 
              & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_2nd)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_reg 
        = vlSelf->__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_reg;
    vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation 
        = vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.__Vdly__operation;
    vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
        = vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.__Vdly__inst2id;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_hazard1_2cy)
            ? ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_hazard1_1cy)
                ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__data_ld
                : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ex_hazard1)
                    ? vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem
                    : vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.data_ld2wb))
            : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_hazard1_1cy)
                ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__data_ld
                : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__mem_hazard1)
                    ? ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ex_hazard1)
                        ? vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem
                        : vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.data2wb)
                    : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ex_hazard1)
                        ? vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem
                        : vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.src1))));
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg) {
        if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable) {
            vlSelf->axi_w_strb_o = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask_uncacheble;
            vlSymsp->TOP__ysyx_22040632_top__DOT__immem.data_read 
                = vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.data_read;
            vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_len 
                = (0xffU & 0U);
            vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_size 
                = vlSymsp->TOP__ysyx_22040632_top__DOT__mem2dc.size;
        } else {
            vlSelf->axi_w_strb_o = 0xffU;
            vlSymsp->TOP__ysyx_22040632_top__DOT__immem.data_read 
                = vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.data_read;
            vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_len 
                = (0xffU & 7U);
            vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_size = 3U;
        }
        vlSymsp->TOP__ysyx_22040632_top__DOT__imif.data_read = 0ULL;
    } else {
        vlSelf->axi_w_strb_o = 0U;
        vlSymsp->TOP__ysyx_22040632_top__DOT__immem.data_read = 0ULL;
        if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__uncacheable) {
            vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_len 
                = (0xffU & 0U);
            vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_size = 2U;
        } else {
            vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_len 
                = (0xffU & 7U);
            vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_size = 3U;
        }
        vlSymsp->TOP__ysyx_22040632_top__DOT__imif.data_read 
            = vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.data_read;
    }
    vlSymsp->TOP__ysyx_22040632_top__DOT__immem.w_hs 
        = ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__idle_flg)) 
           & ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg) 
              & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_hs)));
    vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_req 
        = (1U & ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg)) 
                 | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__rw_req)));
    vlSymsp->TOP__ysyx_22040632_top__DOT__imif.rw_ready 
        = ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__idle_flg)) 
           & ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg)) 
              & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__rw_ready)));
    vlSymsp->TOP__ysyx_22040632_top__DOT__immem.rw_ready 
        = ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__idle_flg)) 
           & ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg) 
              & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__rw_ready)));
    __Vtableidx6 = vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation;
    vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_signed 
        = Vysyx_22040632_top__ConstPool__TABLE_haf736440_0
        [__Vtableidx6];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__block_ld 
        = (((((((((((5U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation)) 
                    | (0x38U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
                   | (0xeU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
                  | (0x12U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
                 | (0x37U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
                | (0x28U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
               | (0x29U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
              | (9U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
             | (0x15U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
            | (0x1dU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
           | (0x2aU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation)));
    __Vtableidx7 = vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation;
    vlSymsp->TOP__ysyx_22040632_top__DOT__dif.divw 
        = Vysyx_22040632_top__ConstPool__TABLE_hb3b3546f_0
        [__Vtableidx7];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__jen4 
        = ((0x3bU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation)) 
           | (0x3aU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation)));
    __Vtableidx5 = vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__op_div2ex 
        = Vysyx_22040632_top__ConstPool__TABLE_h32bb5fb4_0
        [__Vtableidx5];
    vlSymsp->TOP__ysyx_22040632_top__DOT__mif.mul_signed 
        = ((((0x1eU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation)) 
             | (0x2dU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
            | (0x47U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation)))
            ? 3U : 0U);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__wb_hazard1 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (0U != (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb))) 
           & ((0x1fU & (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                        >> 0xfU)) == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__wb_hazard2 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd_w_ena2wb) 
            & (0U != (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb))) 
           & ((0x1fU & (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                        >> 0x14U)) == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.rd2wb)));
    if (((((((((0x13U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
               | (0x67U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
              | (0x2003U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
             | (0x6003U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
            | (0x1003U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
           | (0x5003U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
          | (0x3003U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
         | (0x4003U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)))) {
        if ((0x13U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 3U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x67U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 8U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x2003U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 5U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x6003U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x38U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x1003U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x28U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x5003U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x29U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x3003U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0xeU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x12U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        }
    } else if (((((((((3U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                      | (0x73U == vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                     | (0x2073U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                    | (0x1073U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                   | (0x5073U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                  | (0x6073U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                 | (0x3073U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                | (0x7073U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)))) {
        if ((3U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x37U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x73U == vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x3aU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x2073U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x3cU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x1073U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x3dU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x5073U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x41U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x6073U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x3eU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x3073U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x3fU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x40U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        }
    } else if (((((((((0x3013U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                      | (0x2013U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                     | (0x1bU == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                    | (0x40005013U == (0xfc00707fU 
                                       & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                   | (0x7013U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                  | (0x4013U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                 | (0x6013U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                | (0x1013U == (0xfc00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)))) {
        if ((0x3013U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 2U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x2013U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x35U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x1bU == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x10U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x40005013U == (0xfc00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x11U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x7013U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x13U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x4013U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x18U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x6013U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x31U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x1aU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        }
    } else if (((((((((0x101bU == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                      | (0x5013U == (0xfc00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                     | (0x4000501bU == (0xfe00707fU 
                                        & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                    | (0x501bU == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                   | (0x17U == (0x7fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                  | (0x37U == (0x7fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                 | (0x6fU == (0x7fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                | (0x3023U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)))) {
        if ((0x101bU == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x2bU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x5013U == (0xfc00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x1bU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x4000501bU == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x2cU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x501bU == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x2eU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x17U == (0x7fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 4U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 1U;
        } else if ((0x37U == (0x7fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 6U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 1U;
        } else if ((0x6fU == (0x7fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 7U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 2U;
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 9U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 3U;
        }
    } else if (((((((((0x23U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                      | (0x2023U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                     | (0x1023U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                    | (0x3bU == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                   | (0x4000003bU == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                  | (0x40000033U == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                 | (0x33U == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                | (0x6033U == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)))) {
        if ((0x23U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x15U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 3U;
        } else if ((0x2023U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x1dU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 3U;
        } else if ((0x1023U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x2aU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 3U;
        } else if ((0x3bU == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0xaU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x4000003bU == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x22U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x40000033U == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0xdU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x33U == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0xfU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x19U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        }
    } else if (((((((((0x4033U == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                      | (0x3033U == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                     | (0x2033U == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                    | (0x7033U == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                   | (0x103bU == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                  | (0x1033U == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                 | (0x5033U == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                | (0x200003bU == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)))) {
        if ((0x4033U == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x34U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x3033U == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x17U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x2033U == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x27U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x7033U == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x14U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x103bU == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x16U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x1033U == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x33U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x5033U == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x36U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x1eU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        }
    } else if (((((((((0x2004033U == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                      | (0x2005033U == (0xfe00707fU 
                                        & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                     | (0x200403bU == (0xfe00707fU 
                                       & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                    | (0x200503bU == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                   | (0x2006033U == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                  | (0x2007033U == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                 | (0x200603bU == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                | (0x200703bU == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)))) {
        if ((0x2004033U == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x42U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x2005033U == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x45U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x200403bU == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x1fU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x200503bU == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x25U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x2006033U == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x43U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x2007033U == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x46U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x200603bU == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x20U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x24U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        }
    } else if (((((((((0x2000033U == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                      | (0x2003033U == (0xfe00707fU 
                                        & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                     | (0x4000503bU == (0xfe00707fU 
                                        & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                    | (0x40005033U == (0xfe00707fU 
                                       & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                   | (0x503bU == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                  | (0x100fU == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                 | (0x30200073U == vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                | (0x63U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)))) {
        if ((0x2000033U == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x2dU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x2003033U == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x47U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x4000503bU == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x2fU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x40005033U == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x32U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x503bU == (0xfe00707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x30U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x100fU == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x44U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x30200073U == vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x3bU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0xbU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 5U;
        }
    } else if (((((((((0x1063U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                      | (0x5063U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                     | (0x7063U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                    | (0x4063U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                   | (0x6063U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                  | (0x100073U == vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                 | (0x7bU == vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                | (0U == vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
        if ((0x1063U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0xcU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 5U;
        } else if ((0x5063U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x1cU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 5U;
        } else if ((0x7063U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x23U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 5U;
        } else if ((0x4063U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x26U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 5U;
        } else if ((0x6063U == (0x707fU & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x21U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 5U;
        } else if ((0x100073U == vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x39U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x7bU == vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 1U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        }
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__pc_op 
        = ((0x40U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
            ? 0U : ((0x20U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                     ? ((0x10U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                         ? 0U : ((8U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                  ? 0U : ((4U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                           ? ((2U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                               ? ((1U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                                   ? 0U
                                                   : 
                                                  (vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.pc2ex 
                                                   + (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_ext)))
                                               : 0U)
                                           : ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                               ? (vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.pc2ex 
                                                  + (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_ext))
                                               : 0U))))
                     : ((0x10U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                         ? ((8U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                             ? ((4U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                 ? ((2U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                     ? 0U : ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                              ? 0U : 
                                             (vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.pc2ex 
                                              + (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_ext))))
                                 : 0U) : 0U) : ((8U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                                    ? 0U
                                                    : 
                                                   (vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.pc2ex 
                                                    + (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_ext))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                                    ? 
                                                   (vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.pc2ex 
                                                    + (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_ext))
                                                    : 0U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1) 
                                                    + (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2)))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                                    ? 
                                                   ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1) 
                                                    + vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.pc2ex)
                                                    : 0U)
                                                   : 0U)
                                                  : 0U)))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__pcchg 
        = (1U & ((~ ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation) 
                     >> 6U)) & ((0x20U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                 ? (IData)(((0U == 
                                             (0x18U 
                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
                                            & ((4U 
                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                                ? (IData)(
                                                          ((2U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
                                                           & VL_LTS_IQQ(64, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2)))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation) 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1 
                                                       >= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation) 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1 
                                                       < vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2))))))
                                 : ((0x10U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                     ? (IData)(((0xcU 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
                                                & VL_GTES_IQQ(64, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2)))
                                     : ((8U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                         ? ((4U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                             ? (IData)(
                                                       ((0U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1 
                                                           != vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2)))
                                             : ((2U 
                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                                                 ? 
                                                ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation) 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1 
                                                    == vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2))
                                                 : 
                                                (~ (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))))
                                         : (IData)(
                                                   (7U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation)))))))));
    if ((0x40U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
        if ((0x20U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op = 0ULL;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op = 0ULL;
        } else if ((0x10U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op = 0ULL;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op = 0ULL;
        } else if ((8U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op = 0ULL;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op = 0ULL;
        } else if ((4U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
            if ((2U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                if ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
                } else {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
                }
            } else if ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
            } else {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op = 0ULL;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op = 0ULL;
            }
        } else if ((2U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
        }
    } else if ((0x20U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
        if ((0x10U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
            if ((8U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                if ((4U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
                } else if ((2U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op = 0ULL;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op = 0ULL;
                } else if ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op = 0ULL;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op = 0ULL;
                } else {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
                }
            } else if ((4U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                if ((2U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                    if ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
                    } else {
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
                    }
                } else if ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
                } else {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
                }
            } else {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
            }
        } else if ((8U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
            if ((4U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                if ((2U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
                } else if ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
                } else {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
                }
            } else if ((2U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                if ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
                } else {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
                }
            } else {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
            }
        } else if ((4U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
            if ((2U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                if ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
                } else {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
                }
            } else {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
            }
        } else if ((2U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
            if ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
            } else {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
            }
        } else if ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
        }
    } else if ((0x10U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
        if ((8U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
            if ((4U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                if ((2U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
                } else if ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
                } else {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
                }
            } else if ((2U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
            } else if ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
            } else {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
            }
        } else if ((4U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
            if ((2U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
            } else if ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
            } else {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
            }
        } else if ((2U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
            if ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
            } else {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
            }
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
        }
    } else if ((8U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
        if ((4U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
            if ((2U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                if ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
                } else {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
                }
            } else if ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
            } else {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
            }
        } else if ((2U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
            if ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
            } else {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
            }
        } else if ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op = 4ULL;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                = (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.pc2ex));
        }
    } else if ((4U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
        if ((2U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
            if ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op = 4ULL;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.pc2ex));
            } else {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
            }
        } else if ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                = (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.pc2ex));
        }
    } else if ((2U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2;
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op = 0ULL;
    }
    VL_EXTEND_WQ(128,64, __Vtemp_h9f0d29df__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__data2sd);
    VL_EXTEND_WQ(128,64, __Vtemp_hb0972842__0, vlSymsp->TOP__ysyx_22040632_top__DOT__immem.data_read);
    if ((6U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cs))) {
        if ((1U & (IData)((vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                           >> 3U)))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_write[0U] = 0U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_write[1U] = 0U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_write[2U] 
                = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__data2sd);
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_write[3U] 
                = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__data2sd 
                           >> 0x20U));
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_write[0U] 
                = __Vtemp_h9f0d29df__0[0U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_write[1U] 
                = __Vtemp_h9f0d29df__0[1U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_write[2U] 
                = __Vtemp_h9f0d29df__0[2U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_write[3U] 
                = __Vtemp_h9f0d29df__0[3U];
        }
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_cnt) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_write[0U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_write[1U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_write[2U] 
            = (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__immem.data_read);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_write[3U] 
            = (IData)((vlSymsp->TOP__ysyx_22040632_top__DOT__immem.data_read 
                       >> 0x20U));
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_write[0U] 
            = __Vtemp_hb0972842__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_write[1U] 
            = __Vtemp_hb0972842__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_write[2U] 
            = __Vtemp_hb0972842__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_write[3U] 
            = __Vtemp_hb0972842__0[3U];
    }
    vlSelf->axi_aw_len_o = vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_len;
    vlSelf->axi_ar_len_o = vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_len;
    vlSelf->axi_aw_size_o = vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_size;
    vlSelf->axi_ar_size_o = vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_size;
    VL_EXTEND_WQ(128,64, __Vtemp_h00d1cec9__0, vlSymsp->TOP__ysyx_22040632_top__DOT__imif.data_read);
    if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__w_cnt))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__data_write[0U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__data_write[1U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__data_write[2U] 
            = (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imif.data_read);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__data_write[3U] 
            = (IData)((vlSymsp->TOP__ysyx_22040632_top__DOT__imif.data_read 
                       >> 0x20U));
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__data_write[0U] 
            = __Vtemp_h00d1cec9__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__data_write[1U] 
            = __Vtemp_h00d1cec9__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__data_write[2U] 
            = __Vtemp_h00d1cec9__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__data_write[3U] 
            = __Vtemp_h00d1cec9__0[3U];
    }
    VL_EXTEND_WQ(128,64, __Vtemp_h00d1cec9__1, vlSymsp->TOP__ysyx_22040632_top__DOT__imif.data_read);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__uncacheable) {
        vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.inst[0U] 
            = __Vtemp_h00d1cec9__1[0U];
        vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.inst[1U] 
            = __Vtemp_h00d1cec9__1[1U];
        vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.inst[2U] 
            = __Vtemp_h00d1cec9__1[2U];
        vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.inst[3U] 
            = __Vtemp_h00d1cec9__1[3U];
    } else if ((1U == (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__hit_2nd) 
                        << 1U) | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__hit_1st)))) {
        if ((0x40U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_idata_array_i__DOT__index))) {
            vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.inst[0U] 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_idata_array_i__DOT__Q_01[0U];
            vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.inst[1U] 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_idata_array_i__DOT__Q_01[1U];
            vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.inst[2U] 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_idata_array_i__DOT__Q_01[2U];
            vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.inst[3U] 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_idata_array_i__DOT__Q_01[3U];
        } else {
            vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.inst[0U] 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_idata_array_i__DOT__Q_00[0U];
            vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.inst[1U] 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_idata_array_i__DOT__Q_00[1U];
            vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.inst[2U] 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_idata_array_i__DOT__Q_00[2U];
            vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.inst[3U] 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_idata_array_i__DOT__Q_00[3U];
        }
    } else if ((2U == (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__hit_2nd) 
                        << 1U) | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__hit_1st)))) {
        if ((0x40U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_idata_array_i__DOT__index))) {
            vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.inst[0U] 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_idata_array_i__DOT__Q_11[0U];
            vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.inst[1U] 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_idata_array_i__DOT__Q_11[1U];
            vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.inst[2U] 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_idata_array_i__DOT__Q_11[2U];
            vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.inst[3U] 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_idata_array_i__DOT__Q_11[3U];
        } else {
            vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.inst[0U] 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_idata_array_i__DOT__Q_10[0U];
            vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.inst[1U] 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_idata_array_i__DOT__Q_10[1U];
            vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.inst[2U] 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_idata_array_i__DOT__Q_10[2U];
            vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.inst[3U] 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__ysyx_22040632_idata_array_i__DOT__Q_10[3U];
        }
    } else {
        vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.inst[0U] = 0U;
        vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.inst[1U] = 0U;
        vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.inst[2U] = 0U;
        vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.inst[3U] = 0U;
    }
    vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.w_last 
        = ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__idle_flg)) 
           & ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg)
               ? ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable)
                   ? (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__immem.w_hs)
                   : (8U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__w_cnt)))
               : (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imif.w_last)));
    vlSymsp->TOP__ysyx_22040632_top__DOT__imif.rw_valid 
        = (1U & ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__uncacheable)
                  ? (~ (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imif.rw_ready))
                  : (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__rw_valid)));
    __Vtableidx4 = (((IData)(vlSelf->ysyx_22040632_top__DOT__fence_sig) 
                     << 5U) | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__immem.rw_ready) 
                                << 4U) | ((8U & ((~ (IData)(
                                                            (0U 
                                                             != vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_reg))) 
                                                 << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_reg) 
                                               << 2U)) 
                                             | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cs_f)))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ns_f 
        = Vysyx_22040632_top__ConstPool__TABLE_h55e6c896_0
        [__Vtableidx4];
    vlSymsp->TOP__ysyx_22040632_top__DOT__mem2dc.ready 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable)
            ? (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__immem.rw_ready)
            : ((((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
                 | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd)) 
                & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__rw_req)) 
               | ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__rw_req)) 
                  & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__sd_ready_en))));
    if ((1U & ((~ (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.divw)) 
               | (0x40U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__len))))) {
        VL_EXTEND_WQ(65,64, __Vtemp_hd4f4a406__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__rmd);
        VL_EXTEND_WQ(65,64, __Vtemp_h36f0700e__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__dvs);
        VL_SUB_W(3, __Vtemp_h4ea01370__0, __Vtemp_hd4f4a406__1, __Vtemp_h36f0700e__0);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__result[0U] 
            = __Vtemp_h4ea01370__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__result[1U] 
            = __Vtemp_h4ea01370__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__result[2U] 
            = (1U & __Vtemp_h4ea01370__0[2U]);
    } else if ((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.divw)) 
                         | (0x40U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__len)))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__result[0U] 
            = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__result_w);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__result[1U] 
            = (((- (IData)((1U & (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__result_w 
                                          >> 0x20U))))) 
                << 1U) | (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__result_w 
                                  >> 0x20U)));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__result[2U] 
            = ((- (IData)((1U & (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__result_w 
                                         >> 0x20U))))) 
               >> 0x1fU);
    }
    vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_valid 
        = (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__op_div2ex) 
            & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__div_doing))) 
           & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__valid_out)));
    vlSelf->ysyx_22040632_top__DOT__alu_busy = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__op_div2ex) 
                                                & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__valid_out)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__src_from_gpr 
        = ((3U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__src_from_gpr)) 
           | ((3U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t)) 
              << 2U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr_read 
        = (((((((((0x300U == ((IData)(((0U == (0xf80U 
                                               & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                                       & ((0x3dU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)) 
                                          | (0x41U 
                                             == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)))))
                               ? 0U : ((0x40U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                        ? ((0x20U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                            ? 0U : 
                                           ((0x10U 
                                             & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                             ? 0U : 
                                            ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                              ? 0U : 
                                             ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                               ? 0U
                                               : ((2U 
                                                   & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                   ? 0U
                                                   : 
                                                  (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                   >> 0x14U))))))
                                        : ((0x20U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                            ? ((0x10U 
                                                & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                ? (
                                                   (8U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                     ? 
                                                    (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                     >> 0x14U)
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                       ? 0x341U
                                                       : 0x305U)
                                                      : 0U))
                                                    : 0U)
                                                : 0U)
                                            : 0U)))) 
                  | (0x305U == ((IData)(((0U == (0xf80U 
                                                 & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                                         & ((0x3dU 
                                             == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)) 
                                            | (0x41U 
                                               == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)))))
                                 ? 0U : ((0x40U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                          ? ((0x20U 
                                              & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                              ? 0U : 
                                             ((0x10U 
                                               & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                               ? 0U
                                               : ((8U 
                                                   & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                     ? 0U
                                                     : 
                                                    (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                     >> 0x14U))))))
                                          : ((0x20U 
                                              & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                              ? ((0x10U 
                                                  & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                    ? 
                                                   (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                    >> 0x14U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                      ? 0x341U
                                                      : 0x305U)
                                                     : 0U))
                                                   : 0U)
                                                  : 0U)
                                              : 0U))))) 
                 | (0x341U == ((IData)(((0U == (0xf80U 
                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                                        & ((0x3dU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)) 
                                           | (0x41U 
                                              == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)))))
                                ? 0U : ((0x40U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                         ? ((0x20U 
                                             & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                             ? 0U : 
                                            ((0x10U 
                                              & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                              ? 0U : 
                                             ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                               ? 0U
                                               : ((4U 
                                                   & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                    ? 0U
                                                    : 
                                                   (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                    >> 0x14U))))))
                                         : ((0x20U 
                                             & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                             ? ((0x10U 
                                                 & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                 ? 
                                                ((8U 
                                                  & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                   ? 
                                                  (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                   >> 0x14U)
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                     ? 0x341U
                                                     : 0x305U)
                                                    : 0U))
                                                  : 0U)
                                                 : 0U)
                                             : 0U))))) 
                | (0x342U == ((IData)(((0U == (0xf80U 
                                               & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                                       & ((0x3dU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)) 
                                          | (0x41U 
                                             == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)))))
                               ? 0U : ((0x40U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                        ? ((0x20U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                            ? 0U : 
                                           ((0x10U 
                                             & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                             ? 0U : 
                                            ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                              ? 0U : 
                                             ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                               ? 0U
                                               : ((2U 
                                                   & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                   ? 0U
                                                   : 
                                                  (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                   >> 0x14U))))))
                                        : ((0x20U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                            ? ((0x10U 
                                                & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                ? (
                                                   (8U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                     ? 
                                                    (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                     >> 0x14U)
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                       ? 0x341U
                                                       : 0x305U)
                                                      : 0U))
                                                    : 0U)
                                                : 0U)
                                            : 0U))))) 
               | (0xb00U == ((IData)(((0U == (0xf80U 
                                              & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                                      & ((0x3dU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)) 
                                         | (0x41U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)))))
                              ? 0U : ((0x40U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                       ? ((0x20U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                           ? 0U : (
                                                   (0x10U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                       ? 0U
                                                       : 
                                                      (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                       >> 0x14U))))))
                                       : ((0x20U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                           ? ((0x10U 
                                               & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                               ? ((8U 
                                                   & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                    ? 
                                                   (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                    >> 0x14U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                      ? 0x341U
                                                      : 0x305U)
                                                     : 0U))
                                                   : 0U)
                                               : 0U)
                                           : 0U))))) 
              | (0x304U == ((IData)(((0U == (0xf80U 
                                             & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                                     & ((0x3dU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)) 
                                        | (0x41U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)))))
                             ? 0U : ((0x40U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                      ? ((0x20U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                          ? 0U : ((0x10U 
                                                   & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                      ? 0U
                                                      : 
                                                     (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                      >> 0x14U))))))
                                      : ((0x20U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                          ? ((0x10U 
                                              & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                              ? ((8U 
                                                  & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                   ? 
                                                  (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                   >> 0x14U)
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                     ? 0x341U
                                                     : 0x305U)
                                                    : 0U))
                                                  : 0U)
                                              : 0U)
                                          : 0U))))) 
             | (0x344U == ((IData)(((0U == (0xf80U 
                                            & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                                    & ((0x3dU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)) 
                                       | (0x41U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)))))
                            ? 0U : ((0x40U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                     ? ((0x20U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                         ? 0U : ((0x10U 
                                                  & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                     ? 0U
                                                     : 
                                                    (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                     >> 0x14U))))))
                                     : ((0x20U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                         ? ((0x10U 
                                             & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                             ? ((8U 
                                                 & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                  ? 
                                                 (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                  >> 0x14U)
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                    ? 0x341U
                                                    : 0x305U)
                                                   : 0U))
                                                 : 0U)
                                             : 0U) : 0U))))) 
            | (0xf14U == ((IData)(((0U == (0xf80U & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                                   & ((0x3dU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)) 
                                      | (0x41U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)))))
                           ? 0U : ((0x40U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                    ? ((0x20U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                        ? 0U : ((0x10U 
                                                 & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                 ? 0U
                                                 : 
                                                ((8U 
                                                  & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                    ? 0U
                                                    : 
                                                   (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                    >> 0x14U))))))
                                    : ((0x20U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                        ? ((0x10U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                            ? ((8U 
                                                & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                    ? 
                                                   (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                    >> 0x14U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                      ? 0x341U
                                                      : 0x305U)
                                                     : 0U))
                                                : 0U)
                                            : 0U) : 0U)))))
            ? ((0x300U == ((IData)(((0U == (0xf80U 
                                            & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                                    & ((0x3dU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)) 
                                       | (0x41U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)))))
                            ? 0U : ((0x40U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                     ? ((0x20U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                         ? 0U : ((0x10U 
                                                  & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                     ? 0U
                                                     : 
                                                    (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                     >> 0x14U))))))
                                     : ((0x20U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                         ? ((0x10U 
                                             & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                             ? ((8U 
                                                 & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                  ? 
                                                 (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                  >> 0x14U)
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                    ? 0x341U
                                                    : 0x305U)
                                                   : 0U))
                                                 : 0U)
                                             : 0U) : 0U))))
                ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
               [0U] : ((0x305U == ((IData)(((0U == 
                                             (0xf80U 
                                              & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                                            & ((0x3dU 
                                                == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)) 
                                               | (0x41U 
                                                  == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)))))
                                    ? 0U : ((0x40U 
                                             & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                             ? ((0x20U 
                                                 & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                 ? 0U
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                     ? 0U
                                                     : 
                                                    (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                     >> 0x14U))))))
                                             : ((0x20U 
                                                 & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                    ? 
                                                   (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                    >> 0x14U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                      ? 0x341U
                                                      : 0x305U)
                                                     : 0U))
                                                   : 0U)
                                                  : 0U)
                                                 : 0U))))
                        ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                       [1U] : ((0x341U == ((IData)(
                                                   ((0U 
                                                     == 
                                                     (0xf80U 
                                                      & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                                                    & ((0x3dU 
                                                        == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)) 
                                                       | (0x41U 
                                                          == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)))))
                                            ? 0U : 
                                           ((0x40U 
                                             & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                             ? ((0x20U 
                                                 & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                 ? 0U
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                     ? 0U
                                                     : 
                                                    (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                     >> 0x14U))))))
                                             : ((0x20U 
                                                 & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                    ? 
                                                   (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                    >> 0x14U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                      ? 0x341U
                                                      : 0x305U)
                                                     : 0U))
                                                   : 0U)
                                                  : 0U)
                                                 : 0U))))
                                ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                               [2U] : ((0x342U == ((IData)(
                                                           ((0U 
                                                             == 
                                                             (0xf80U 
                                                              & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                                                            & ((0x3dU 
                                                                == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)) 
                                                               | (0x41U 
                                                                  == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)))))
                                                    ? 0U
                                                    : 
                                                   ((0x40U 
                                                     & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                     ? 
                                                    ((0x20U 
                                                      & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                      ? 0U
                                                      : 
                                                     ((0x10U 
                                                       & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                       ? 0U
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                          ? 0U
                                                          : 
                                                         (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                          >> 0x14U))))))
                                                     : 
                                                    ((0x20U 
                                                      & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                      ? 
                                                     ((0x10U 
                                                       & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                       ? 
                                                      ((8U 
                                                        & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                        ? 
                                                       ((4U 
                                                         & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                         ? 
                                                        (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                         >> 0x14U)
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                           ? 0x341U
                                                           : 0x305U)
                                                          : 0U))
                                                        : 0U)
                                                       : 0U)
                                                      : 0U))))
                                        ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                                       [3U] : ((0xb00U 
                                                == 
                                                ((IData)(
                                                         ((0U 
                                                           == 
                                                           (0xf80U 
                                                            & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                                                          & ((0x3dU 
                                                              == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)) 
                                                             | (0x41U 
                                                                == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)))))
                                                  ? 0U
                                                  : 
                                                 ((0x40U 
                                                   & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                   ? 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                        ? 0U
                                                        : 
                                                       (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                        >> 0x14U))))))
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                       ? 
                                                      (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                       >> 0x14U)
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                         ? 0x341U
                                                         : 0x305U)
                                                        : 0U))
                                                      : 0U)
                                                     : 0U)
                                                    : 0U))))
                                                ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                                               [4U]
                                                : (
                                                   (0x304U 
                                                    == 
                                                    ((IData)(
                                                             ((0U 
                                                               == 
                                                               (0xf80U 
                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                                                              & ((0x3dU 
                                                                  == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)) 
                                                                 | (0x41U 
                                                                    == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)))))
                                                      ? 0U
                                                      : 
                                                     ((0x40U 
                                                       & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                       ? 
                                                      ((0x20U 
                                                        & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                        ? 0U
                                                        : 
                                                       ((0x10U 
                                                         & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                         ? 0U
                                                         : 
                                                        ((8U 
                                                          & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                          ? 0U
                                                          : 
                                                         ((4U 
                                                           & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                           ? 0U
                                                           : 
                                                          ((2U 
                                                            & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                            ? 0U
                                                            : 
                                                           (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                            >> 0x14U))))))
                                                       : 
                                                      ((0x20U 
                                                        & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                        ? 
                                                       ((0x10U 
                                                         & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                         ? 
                                                        ((8U 
                                                          & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                          ? 
                                                         ((4U 
                                                           & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                           ? 
                                                          (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                           >> 0x14U)
                                                           : 
                                                          ((2U 
                                                            & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                            ? 
                                                           ((1U 
                                                             & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                             ? 0x341U
                                                             : 0x305U)
                                                            : 0U))
                                                          : 0U)
                                                         : 0U)
                                                        : 0U))))
                                                    ? 
                                                   vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                                                   [5U]
                                                    : 
                                                   ((0x344U 
                                                     == 
                                                     ((IData)(
                                                              ((0U 
                                                                == 
                                                                (0xf80U 
                                                                 & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                                                               & ((0x3dU 
                                                                   == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)) 
                                                                  | (0x41U 
                                                                     == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)))))
                                                       ? 0U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                        ? 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                         ? 0U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                             ? 0U
                                                             : 
                                                            (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                             >> 0x14U))))))
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                         ? 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                          ? 
                                                         ((8U 
                                                           & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                           ? 
                                                          ((4U 
                                                            & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                            ? 
                                                           (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                            >> 0x14U)
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                              ? 0x341U
                                                              : 0x305U)
                                                             : 0U))
                                                           : 0U)
                                                          : 0U)
                                                         : 0U))))
                                                     ? 
                                                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                                                    [6U]
                                                     : 
                                                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
                                                    [7U])))))))
            : ((0x340U == ((IData)(((0U == (0xf80U 
                                            & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                                    & ((0x3dU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)) 
                                       | (0x41U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)))))
                            ? 0U : ((0x40U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                     ? ((0x20U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                         ? 0U : ((0x10U 
                                                  & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                     ? 0U
                                                     : 
                                                    (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                     >> 0x14U))))))
                                     : ((0x20U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                         ? ((0x10U 
                                             & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                             ? ((8U 
                                                 & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                  ? 
                                                 (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                  >> 0x14U)
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                    ? 0x341U
                                                    : 0x305U)
                                                   : 0U))
                                                 : 0U)
                                             : 0U) : 0U))))
                ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr
               [8U] : 0ULL));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__csr_src1_imm 
        = (((0x3eU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)) 
            | (0x40U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) 
           | (0x41U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__jen2 
        = ((((((((((7U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation)) 
                   | (8U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
                  | (0xbU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
                 | (0xcU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
                | (0x1cU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
               | (0x21U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
              | (0x23U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
             | (0x26U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
            & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__pcchg)) 
           & (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.pc2id 
              != vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__pc_op));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
        = ((0x1eU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
            ? ((2U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mif.mul_signed))
                ? (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op)))
                : (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op)))
            : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op);
    __Vtemp_he9a47b61__0[1U] = ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mif.mul_signed))
                                 ? (((IData)((((QData)((IData)(
                                                               (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)))) 
                                     >> 0x1fU) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                                                                                >> 0x1fU))))))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op))) 
                                                           >> 0x20U)) 
                                                  << 1U))
                                 : (((IData)((QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op))) 
                                     >> 0x1fU) | ((IData)(
                                                          ((QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)) 
                                                           >> 0x20U)) 
                                                  << 1U)));
    if ((0x1eU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
        if ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mif.mul_signed))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                = ((IData)((((QData)((IData)((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                                                                    >> 0x1fU))))))) 
                             << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)))) 
                   << 1U);
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                = __Vtemp_he9a47b61__0[1U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[2U] 
                = ((IData)(((((QData)((IData)((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                                                                     >> 0x1fU))))))) 
                              << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op))) 
                            >> 0x20U)) >> 0x1fU);
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                = ((IData)((QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op))) 
                   << 1U);
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                = __Vtemp_he9a47b61__0[1U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[2U] 
                = ((IData)(((QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)) 
                            >> 0x20U)) >> 0x1fU);
        }
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
            = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op) 
               << 1U);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
            = (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op) 
                >> 0x1fU) | ((IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                                      >> 0x20U)) << 1U));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[2U] 
            = ((IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        >> 0x20U)) >> 0x1fU);
    }
    vlSelf->axi_w_last_o = vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.w_last;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__if_sh 
        = ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imif.rw_valid) 
           & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imif.rw_ready));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__ls_sh 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2dc.valid) 
            & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2dc.ready)) 
           | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__en_clint));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ns 
        = ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cs))
            ? ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cs))
                ? 0U : ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cs))
                         ? 0U : ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cs))
                                  ? ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2dc.ready)
                                      ? 0U : 9U) : 
                                 ((0U != vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_reg)
                                   ? 8U : 0U)))) : 
           ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cs))
             ? ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cs))
                 ? ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cs))
                     ? 0U : 7U) : ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cs))
                                    ? ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__immem.rw_ready)
                                        ? 6U : 5U) : 
                                   ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__immem.rw_ready)
                                     ? 5U : 4U))) : 
            ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cs))
              ? ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cs))
                  ? 0U : ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__immem.rw_ready)
                           ? 3U : 2U)) : ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cs))
                                           ? ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__immem.rw_ready)
                                               ? 2U
                                               : 1U)
                                           : ((((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__r_trans) 
                                                & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit)) 
                                               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__sd_cnt))
                                               ? 0U
                                               : ((
                                                   ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__r_trans) 
                                                    | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_trans)) 
                                                   & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable))
                                                   ? 9U
                                                   : 
                                                  ((((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__r_trans) 
                                                     & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit))) 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty))
                                                    ? 1U
                                                    : 
                                                   ((((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__r_trans) 
                                                      & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit))) 
                                                     & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty)))
                                                     ? 2U
                                                     : 
                                                    (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_trans) 
                                                      & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit))
                                                      ? 6U
                                                      : 
                                                     ((((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_trans) 
                                                        & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit))) 
                                                       & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty))
                                                       ? 4U
                                                       : 
                                                      ((((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_trans) 
                                                         & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit))) 
                                                        & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty)))
                                                        ? 5U
                                                        : 
                                                       ((IData)(vlSelf->ysyx_22040632_top__DOT__fence_sig)
                                                         ? 8U
                                                         : 0U))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__ns 
        = ((0U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__cs))
            ? ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_valid)
                ? 1U : 0U) : ((1U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__cs))
                               ? (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt) 
                                   == (0x7fU & ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__len) 
                                                - (IData)(1U))))
                                   ? 2U : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__intrrupt_timing)
                                            ? 0U : 1U))
                               : ((2U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__cs))
                                   ? ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_valid)
                                       ? 1U : 0U) : 0U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__flushinex 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__alu_busy) 
           | ((0x44U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation)) 
              | (IData)(vlSelf->ysyx_22040632_top__DOT__fence_sig)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__src_from_gpr 
        = ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__src_from_gpr)) 
           | ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t))
               ? 0U : ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t))
                        ? ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t))
                            ? 0U : 3U) : ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t))
                                           ? ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t))
                                               ? ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__csr_src1_imm)
                                                   ? 0U
                                                   : 1U)
                                               : 0U)
                                           : ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t))
                                               ? 0U
                                               : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__csr_src1_imm)
                                                   ? 0U
                                                   : 1U))))));
    if ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__src1_t = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__src2_t = 0ULL;
    } else if ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t))) {
        if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__src1_t = 0ULL;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__src2_t = 0ULL;
        } else if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__src1_t 
                = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__wb_hazard1)
                    ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
                    : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                   [(0x1fU & (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                              >> 0xfU))]);
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__src2_t 
                = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__wb_hazard2)
                    ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
                    : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                   [(0x1fU & (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                              >> 0x14U))]);
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__src1_t 
                = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__wb_hazard1)
                    ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
                    : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                   [(0x1fU & (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                              >> 0xfU))]);
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__src2_t 
                = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__wb_hazard2)
                    ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
                    : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                   [(0x1fU & (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                              >> 0x14U))]);
        }
    } else if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t))) {
        if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__src1_t 
                = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__wb_hazard1)
                    ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
                    : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                   [(0x1fU & (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                              >> 0xfU))]);
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__src2_t 
                = (((- (QData)((IData)((vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)(((0xfe0U 
                                                 & (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                      >> 7U))))));
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__src1_t 
                = (((- (QData)((IData)((vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                        >> 0x1fU)))) 
                    << 0x15U) | (QData)((IData)(((0x100000U 
                                                  & (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id) 
                                                    | ((0x800U 
                                                        & (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                             >> 0x14U))))))));
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__src2_t = 0ULL;
        }
    } else if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__src1_t 
            = (((QData)((IData)((- (IData)((vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)((0xfffff000U 
                                             & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__src2_t = 0ULL;
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__src1_t 
            = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__csr_src1_imm)
                ? (QData)((IData)((0x1fU & (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                            >> 0xfU))))
                : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__wb_hazard1)
                    ? vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg
                    : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                   [(0x1fU & (vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                              >> 0xfU))]));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__src2_t 
            = (((((((0x3cU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)) 
                    | (0x3dU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) 
                   | (0x3fU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) 
                  | (0x3eU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) 
                 | (0x40U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) 
                | (0x41U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)))
                ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_csr_i__DOT__csr_read
                : (((- (QData)((IData)((vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id 
                                                >> 0x14U)))));
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__jen0 
        = ((((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__jen2) 
             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.pcen_btb2id) 
                 & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__pcchg))) 
                & ((((((((7U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation)) 
                         | (8U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
                        | (0xbU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
                       | (0xcU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
                      | (0x1cU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
                     | (0x21U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
                    | (0x23U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
                   | (0x26U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))))) 
            | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__jen4)) 
           | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__intrrupt_timing));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__ysyx_22040632_boothu_i31__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__ysyx_22040632_boothu_i31__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__ysyx_22040632_boothu_i31__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__ysyx_22040632_boothu_i31__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__ysyx_22040632_boothu_i15__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__ysyx_22040632_boothu_i15__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__ysyx_22040632_boothu_i15__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__ysyx_22040632_boothu_i15__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__8__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__8__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__8__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__8__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__9__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__9__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__9__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__9__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__10__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__10__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__10__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__10__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__11__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__11__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__11__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__11__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__12__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__12__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__12__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__12__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__13__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__13__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__13__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__13__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__14__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__14__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__14__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__14__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__15__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__15__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__15__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__15__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__16__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__16__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__16__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__16__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__17__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__17__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__17__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__17__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__18__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__18__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__18__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__18__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__19__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__19__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__19__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__19__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__20__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__20__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__20__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__20__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__21__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__21__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__21__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__21__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__22__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__22__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__22__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__22__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__23__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__23__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__23__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__23__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__24__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__24__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__24__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__24__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__25__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__25__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__25__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__25__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__26__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__26__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__26__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__26__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__27__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__27__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__27__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__27__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__28__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__28__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__28__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__28__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__29__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__29__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__29__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__29__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__30__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__30__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__30__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__30__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__31__KET____DOT__ysyx_22040632_booth_i__in_x[0U] 
        = (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__31__KET____DOT__ysyx_22040632_booth_i__in_x[1U] 
        = (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__31__KET____DOT__ysyx_22040632_booth_i__in_x[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                    >> 0x3fU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__31__KET____DOT__ysyx_22040632_booth_i__in_x[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__ysyx_22040632_boothu_i31__DOT__sel_double 
        = (IData)((0xc0000000U == (0xc0000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__ysyx_22040632_boothu_i15__DOT__sel_double 
        = (IData)((0xc0000000U == (0xc0000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__0__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                  >> 2U) & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                              >> 1U) & (~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])) 
                            | (IData)((1U == (3U & 
                                              vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__0__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (IData)(((4U == (6U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])) 
                   & (~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__1__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                  >> 4U) & ((IData)((8U == (0xcU & 
                                            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                            | (IData)((4U == (0xcU 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__1__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (IData)((0x10U == (0x1cU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__2__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                  >> 6U) & ((IData)((0x20U == (0x30U 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                            | (IData)((0x10U == (0x30U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__2__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (IData)((0x40U == (0x70U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__3__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                  >> 8U) & ((IData)((0x80U == (0xc0U 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                            | (IData)((0x40U == (0xc0U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__3__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (IData)((0x100U == (0x1c0U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__4__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                  >> 0xaU) & ((IData)((0x200U == (0x300U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                              | (IData)((0x100U == 
                                         (0x300U & 
                                          vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__4__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (IData)((0x400U == (0x700U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__5__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                  >> 0xcU) & ((IData)((0x800U == (0xc00U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                              | (IData)((0x400U == 
                                         (0xc00U & 
                                          vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__5__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (IData)((0x1000U == (0x1c00U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__6__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                  >> 0xeU) & ((IData)((0x2000U == (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                              | (IData)((0x1000U == 
                                         (0x3000U & 
                                          vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__6__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (IData)((0x4000U == (0x7000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__7__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                  >> 0x10U) & ((IData)((0x8000U == 
                                        (0xc000U & 
                                         vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                               | (IData)((0x4000U == 
                                          (0xc000U 
                                           & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__7__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (IData)((0x10000U == (0x1c000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__8__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                  >> 0x12U) & ((IData)((0x20000U == 
                                        (0x30000U & 
                                         vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                               | (IData)((0x10000U 
                                          == (0x30000U 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__8__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (IData)((0x40000U == (0x70000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__9__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                  >> 0x14U) & ((IData)((0x80000U == 
                                        (0xc0000U & 
                                         vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                               | (IData)((0x40000U 
                                          == (0xc0000U 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__9__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (IData)((0x100000U == (0x1c0000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__10__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                  >> 0x16U) & ((IData)((0x200000U == 
                                        (0x300000U 
                                         & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                               | (IData)((0x100000U 
                                          == (0x300000U 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__10__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (IData)((0x400000U == (0x700000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__11__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                  >> 0x18U) & ((IData)((0x800000U == 
                                        (0xc00000U 
                                         & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                               | (IData)((0x400000U 
                                          == (0xc00000U 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__11__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (IData)((0x1000000U == (0x1c00000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__12__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                  >> 0x1aU) & ((IData)((0x2000000U 
                                        == (0x3000000U 
                                            & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                               | (IData)((0x1000000U 
                                          == (0x3000000U 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__12__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (IData)((0x4000000U == (0x7000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__13__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                  >> 0x1cU) & ((IData)((0x8000000U 
                                        == (0xc000000U 
                                            & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                               | (IData)((0x4000000U 
                                          == (0xc000000U 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__13__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (IData)((0x10000000U == (0x1c000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__14__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                  >> 0x1eU) & ((IData)((0x20000000U 
                                        == (0x30000000U 
                                            & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                               | (IData)((0x10000000U 
                                          == (0x30000000U 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__14__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (IData)((0x40000000U == (0x70000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__15__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                 & ((IData)((0x80000000U == (0xc0000000U 
                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                    | (IData)((0x40000000U == (0xc0000000U 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__15__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (1U & (IData)(((0U == (0xc0000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])) 
                         & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__16__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                  >> 2U) & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                              >> 1U) & (~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])) 
                            | (IData)((1U == (3U & 
                                              vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__16__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (IData)(((4U == (6U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])) 
                   & (~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__17__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                  >> 4U) & ((IData)((8U == (0xcU & 
                                            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                            | (IData)((4U == (0xcU 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__17__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (IData)((0x10U == (0x1cU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__18__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                  >> 6U) & ((IData)((0x20U == (0x30U 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                            | (IData)((0x10U == (0x30U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__18__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (IData)((0x40U == (0x70U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__19__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                  >> 8U) & ((IData)((0x80U == (0xc0U 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                            | (IData)((0x40U == (0xc0U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__19__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (IData)((0x100U == (0x1c0U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__20__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                  >> 0xaU) & ((IData)((0x200U == (0x300U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                              | (IData)((0x100U == 
                                         (0x300U & 
                                          vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__20__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (IData)((0x400U == (0x700U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__21__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                  >> 0xcU) & ((IData)((0x800U == (0xc00U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                              | (IData)((0x400U == 
                                         (0xc00U & 
                                          vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__21__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (IData)((0x1000U == (0x1c00U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__22__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                  >> 0xeU) & ((IData)((0x2000U == (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                              | (IData)((0x1000U == 
                                         (0x3000U & 
                                          vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__22__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (IData)((0x4000U == (0x7000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__23__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                  >> 0x10U) & ((IData)((0x8000U == 
                                        (0xc000U & 
                                         vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                               | (IData)((0x4000U == 
                                          (0xc000U 
                                           & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__23__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (IData)((0x10000U == (0x1c000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__24__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                  >> 0x12U) & ((IData)((0x20000U == 
                                        (0x30000U & 
                                         vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                               | (IData)((0x10000U 
                                          == (0x30000U 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__24__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (IData)((0x40000U == (0x70000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__25__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                  >> 0x14U) & ((IData)((0x80000U == 
                                        (0xc0000U & 
                                         vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                               | (IData)((0x40000U 
                                          == (0xc0000U 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__25__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (IData)((0x100000U == (0x1c0000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__26__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                  >> 0x16U) & ((IData)((0x200000U == 
                                        (0x300000U 
                                         & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                               | (IData)((0x100000U 
                                          == (0x300000U 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__26__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (IData)((0x400000U == (0x700000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__27__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                  >> 0x18U) & ((IData)((0x800000U == 
                                        (0xc00000U 
                                         & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                               | (IData)((0x400000U 
                                          == (0xc00000U 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__27__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (IData)((0x1000000U == (0x1c00000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__28__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                  >> 0x1aU) & ((IData)((0x2000000U 
                                        == (0x3000000U 
                                            & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                               | (IData)((0x1000000U 
                                          == (0x3000000U 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__28__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (IData)((0x4000000U == (0x7000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__29__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                  >> 0x1cU) & ((IData)((0x8000000U 
                                        == (0xc000000U 
                                            & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                               | (IData)((0x4000000U 
                                          == (0xc000000U 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__29__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (IData)((0x10000000U == (0x1c000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__30__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                  >> 0x1eU) & ((IData)((0x20000000U 
                                        == (0x30000000U 
                                            & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                               | (IData)((0x10000000U 
                                          == (0x30000000U 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__30__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (IData)((0x40000000U == (0x70000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__31__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative 
        = (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[2U] 
           & ((IData)((0x80000000U == (0xc0000000U 
                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
              | (IData)((0x40000000U == (0xc0000000U 
                                         & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__31__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative 
        = (1U & (IData)(((0U == (0xc0000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])) 
                         & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[2U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__block 
        = ((((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.ld_en2mem) 
             & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__ls_sh))) 
            | (IData)(vlSelf->ysyx_22040632_top__DOT__alu_busy)) 
           | (IData)(vlSelf->ysyx_22040632_top__DOT__fence_sig));
    vlSymsp->TOP__ysyx_22040632_top__DOT__id2if.block_id2if 
        = ((((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__block_ld2if) 
             | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__block_ld)) 
            & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__ls_sh))) 
           & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__fence_sig)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__axi_read_state 
        = (((2U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ns)) 
            | (5U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ns))) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable) 
               & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__r_trans)) 
              & (~ (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__immem.rw_ready))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__axi_write_state 
        = ((((1U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ns)) 
             | (4U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ns))) 
            | ((8U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cs)) 
               & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_reg))) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable) 
               & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_trans)) 
              & (~ (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__immem.rw_ready))));
    vlSelf->ysyx_22040632_top__DOT__flush = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__jen0) 
                                             | (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2if.pc_en2if));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xfffffffeU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__0__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
              | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__0__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hbc25a145__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__ysyx_22040632_booth_i__in_x, 1U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hbc25a145__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__ysyx_22040632_booth_i__in_x, 1U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__0__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0U] 
            = (~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__ysyx_22040632_booth_i__in_x[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[1U] 
            = (~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__ysyx_22040632_booth_i__in_x[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[2U] 
            = (~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__ysyx_22040632_booth_i__in_x[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[3U] 
            = (~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__ysyx_22040632_booth_i__in_x[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__0__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0U] 
            = (~ __Vtemp_hbc25a145__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[1U] 
            = (~ __Vtemp_hbc25a145__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[2U] 
            = (~ __Vtemp_hbc25a145__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[3U] 
            = (~ __Vtemp_hbc25a145__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                          >> 2U)) & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                                       >> 1U) & (~ 
                                                 vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])) 
                                     | (IData)((1U 
                                                == 
                                                (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__ysyx_22040632_booth_i__in_x[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[1U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__ysyx_22040632_booth_i__in_x[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[2U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__ysyx_22040632_booth_i__in_x[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[3U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__ysyx_22040632_booth_i__in_x[3U];
    } else if ((IData)((3U == (7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0U] 
            = __Vtemp_hbc25a145__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[1U] 
            = __Vtemp_hbc25a145__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[2U] 
            = __Vtemp_hbc25a145__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[3U] 
            = __Vtemp_hbc25a145__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[1U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[2U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[3U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xfffffffdU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__1__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__1__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 1U));
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hfdeb0d79__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__ysyx_22040632_booth_i__in_x, 2U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hfde57b47__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__ysyx_22040632_booth_i__in_x, 3U);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hfdeb0d79__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__ysyx_22040632_booth_i__in_x, 2U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hfde57b47__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__ysyx_22040632_booth_i__in_x, 3U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__1__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[4U] 
            = (~ __Vtemp_hfdeb0d79__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[5U] 
            = (~ __Vtemp_hfdeb0d79__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[6U] 
            = (~ __Vtemp_hfdeb0d79__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[7U] 
            = (~ __Vtemp_hfdeb0d79__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__1__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[4U] 
            = (~ __Vtemp_hfde57b47__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[5U] 
            = (~ __Vtemp_hfde57b47__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[6U] 
            = (~ __Vtemp_hfde57b47__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[7U] 
            = (~ __Vtemp_hfde57b47__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                          >> 4U)) & ((IData)((8U == 
                                              (0xcU 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                                     | (IData)((4U 
                                                == 
                                                (0xcU 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[4U] 
            = __Vtemp_hfdeb0d79__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[5U] 
            = __Vtemp_hfdeb0d79__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[6U] 
            = __Vtemp_hfdeb0d79__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[7U] 
            = __Vtemp_hfdeb0d79__1[3U];
    } else if ((IData)((0xcU == (0x1cU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[4U] 
            = __Vtemp_hfde57b47__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[5U] 
            = __Vtemp_hfde57b47__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[6U] 
            = __Vtemp_hfde57b47__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[7U] 
            = __Vtemp_hfde57b47__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[4U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[5U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[6U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[7U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xfffffffbU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__2__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__2__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 2U));
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h7b7bda69__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__ysyx_22040632_booth_i__in_x, 4U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h7b7e4728__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__ysyx_22040632_booth_i__in_x, 5U);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h7b7bda69__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__ysyx_22040632_booth_i__in_x, 4U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h7b7e4728__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__ysyx_22040632_booth_i__in_x, 5U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__2__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[8U] 
            = (~ __Vtemp_h7b7bda69__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[9U] 
            = (~ __Vtemp_h7b7bda69__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xaU] 
            = (~ __Vtemp_h7b7bda69__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xbU] 
            = (~ __Vtemp_h7b7bda69__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__2__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[8U] 
            = (~ __Vtemp_h7b7e4728__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[9U] 
            = (~ __Vtemp_h7b7e4728__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xaU] 
            = (~ __Vtemp_h7b7e4728__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xbU] 
            = (~ __Vtemp_h7b7e4728__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                          >> 6U)) & ((IData)((0x20U 
                                              == (0x30U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                                     | (IData)((0x10U 
                                                == 
                                                (0x30U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[8U] 
            = __Vtemp_h7b7bda69__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[9U] 
            = __Vtemp_h7b7bda69__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xaU] 
            = __Vtemp_h7b7bda69__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xbU] 
            = __Vtemp_h7b7bda69__1[3U];
    } else if ((IData)((0x30U == (0x70U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[8U] 
            = __Vtemp_h7b7e4728__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[9U] 
            = __Vtemp_h7b7e4728__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xaU] 
            = __Vtemp_h7b7e4728__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xbU] 
            = __Vtemp_h7b7e4728__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[8U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[9U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xaU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xbU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xfffffff7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__3__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__3__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 3U));
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hea20e68b__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__ysyx_22040632_booth_i__in_x, 6U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hea233f69__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__ysyx_22040632_booth_i__in_x, 7U);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hea20e68b__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__ysyx_22040632_booth_i__in_x, 6U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hea233f69__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__ysyx_22040632_booth_i__in_x, 7U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__3__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xcU] 
            = (~ __Vtemp_hea20e68b__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xdU] 
            = (~ __Vtemp_hea20e68b__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xeU] 
            = (~ __Vtemp_hea20e68b__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xfU] 
            = (~ __Vtemp_hea20e68b__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__3__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xcU] 
            = (~ __Vtemp_hea233f69__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xdU] 
            = (~ __Vtemp_hea233f69__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xeU] 
            = (~ __Vtemp_hea233f69__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xfU] 
            = (~ __Vtemp_hea233f69__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                          >> 8U)) & ((IData)((0x80U 
                                              == (0xc0U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                                     | (IData)((0x40U 
                                                == 
                                                (0xc0U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xcU] 
            = __Vtemp_hea20e68b__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xdU] 
            = __Vtemp_hea20e68b__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xeU] 
            = __Vtemp_hea20e68b__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xfU] 
            = __Vtemp_hea20e68b__1[3U];
    } else if ((IData)((0xc0U == (0x1c0U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xcU] 
            = __Vtemp_hea233f69__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xdU] 
            = __Vtemp_hea233f69__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xeU] 
            = __Vtemp_hea233f69__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xfU] 
            = __Vtemp_hea233f69__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xcU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xdU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xeU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xfU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xffffffefU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__4__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__4__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 4U));
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h5d548316__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__ysyx_22040632_booth_i__in_x, 8U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h5d531b03__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__ysyx_22040632_booth_i__in_x, 9U);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h5d548316__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__ysyx_22040632_booth_i__in_x, 8U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h5d531b03__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__ysyx_22040632_booth_i__in_x, 9U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__4__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x10U] 
            = (~ __Vtemp_h5d548316__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x11U] 
            = (~ __Vtemp_h5d548316__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x12U] 
            = (~ __Vtemp_h5d548316__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x13U] 
            = (~ __Vtemp_h5d548316__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__4__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x10U] 
            = (~ __Vtemp_h5d531b03__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x11U] 
            = (~ __Vtemp_h5d531b03__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x12U] 
            = (~ __Vtemp_h5d531b03__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x13U] 
            = (~ __Vtemp_h5d531b03__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                          >> 0xaU)) & ((IData)((0x200U 
                                                == 
                                                (0x300U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                                       | (IData)((0x100U 
                                                  == 
                                                  (0x300U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x10U] 
            = __Vtemp_h5d548316__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x11U] 
            = __Vtemp_h5d548316__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x12U] 
            = __Vtemp_h5d548316__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x13U] 
            = __Vtemp_h5d548316__1[3U];
    } else if ((IData)((0x300U == (0x700U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x10U] 
            = __Vtemp_h5d531b03__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x11U] 
            = __Vtemp_h5d531b03__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x12U] 
            = __Vtemp_h5d531b03__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x13U] 
            = __Vtemp_h5d531b03__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x10U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x11U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x12U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x13U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xffffffdfU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__5__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__5__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 5U));
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h44cf02d3__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__ysyx_22040632_booth_i__in_x, 0xaU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h44cd67f1__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__ysyx_22040632_booth_i__in_x, 0xbU);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h44cf02d3__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__ysyx_22040632_booth_i__in_x, 0xaU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h44cd67f1__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__ysyx_22040632_booth_i__in_x, 0xbU);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__5__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x14U] 
            = (~ __Vtemp_h44cf02d3__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x15U] 
            = (~ __Vtemp_h44cf02d3__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x16U] 
            = (~ __Vtemp_h44cf02d3__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x17U] 
            = (~ __Vtemp_h44cf02d3__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__5__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x14U] 
            = (~ __Vtemp_h44cd67f1__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x15U] 
            = (~ __Vtemp_h44cd67f1__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x16U] 
            = (~ __Vtemp_h44cd67f1__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x17U] 
            = (~ __Vtemp_h44cd67f1__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                          >> 0xcU)) & ((IData)((0x800U 
                                                == 
                                                (0xc00U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                                       | (IData)((0x400U 
                                                  == 
                                                  (0xc00U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x14U] 
            = __Vtemp_h44cf02d3__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x15U] 
            = __Vtemp_h44cf02d3__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x16U] 
            = __Vtemp_h44cf02d3__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x17U] 
            = __Vtemp_h44cf02d3__1[3U];
    } else if ((IData)((0xc00U == (0x1c00U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x14U] 
            = __Vtemp_h44cd67f1__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x15U] 
            = __Vtemp_h44cd67f1__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x16U] 
            = __Vtemp_h44cd67f1__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x17U] 
            = __Vtemp_h44cd67f1__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x14U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x15U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x16U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x17U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xffffffbfU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__6__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__6__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 6U));
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h169200ea__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__ysyx_22040632_booth_i__in_x, 0xcU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h169ea30d__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__ysyx_22040632_booth_i__in_x, 0xdU);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h169200ea__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__ysyx_22040632_booth_i__in_x, 0xcU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h169ea30d__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__ysyx_22040632_booth_i__in_x, 0xdU);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__6__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x18U] 
            = (~ __Vtemp_h169200ea__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x19U] 
            = (~ __Vtemp_h169200ea__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1aU] 
            = (~ __Vtemp_h169200ea__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1bU] 
            = (~ __Vtemp_h169200ea__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__6__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x18U] 
            = (~ __Vtemp_h169ea30d__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x19U] 
            = (~ __Vtemp_h169ea30d__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1aU] 
            = (~ __Vtemp_h169ea30d__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1bU] 
            = (~ __Vtemp_h169ea30d__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                          >> 0xeU)) & ((IData)((0x2000U 
                                                == 
                                                (0x3000U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                                       | (IData)((0x1000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x18U] 
            = __Vtemp_h169200ea__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x19U] 
            = __Vtemp_h169200ea__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1aU] 
            = __Vtemp_h169200ea__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1bU] 
            = __Vtemp_h169200ea__1[3U];
    } else if ((IData)((0x3000U == (0x7000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x18U] 
            = __Vtemp_h169ea30d__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x19U] 
            = __Vtemp_h169ea30d__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1aU] 
            = __Vtemp_h169ea30d__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1bU] 
            = __Vtemp_h169ea30d__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x18U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x19U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1aU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1bU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xffffff7fU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__7__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__7__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 7U));
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hd4e068ef__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__ysyx_22040632_booth_i__in_x, 0xeU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hd4e201bd__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__ysyx_22040632_booth_i__in_x, 0xfU);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hd4e068ef__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__ysyx_22040632_booth_i__in_x, 0xeU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hd4e201bd__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__ysyx_22040632_booth_i__in_x, 0xfU);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__7__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1cU] 
            = (~ __Vtemp_hd4e068ef__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1dU] 
            = (~ __Vtemp_hd4e068ef__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1eU] 
            = (~ __Vtemp_hd4e068ef__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1fU] 
            = (~ __Vtemp_hd4e068ef__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__7__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1cU] 
            = (~ __Vtemp_hd4e201bd__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1dU] 
            = (~ __Vtemp_hd4e201bd__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1eU] 
            = (~ __Vtemp_hd4e201bd__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1fU] 
            = (~ __Vtemp_hd4e201bd__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                          >> 0x10U)) & ((IData)((0x8000U 
                                                 == 
                                                 (0xc000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                                        | (IData)((0x4000U 
                                                   == 
                                                   (0xc000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1cU] 
            = __Vtemp_hd4e068ef__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1dU] 
            = __Vtemp_hd4e068ef__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1eU] 
            = __Vtemp_hd4e068ef__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1fU] 
            = __Vtemp_hd4e068ef__1[3U];
    } else if ((IData)((0xc000U == (0x1c000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1cU] 
            = __Vtemp_hd4e201bd__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1dU] 
            = __Vtemp_hd4e201bd__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1eU] 
            = __Vtemp_hd4e201bd__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1fU] 
            = __Vtemp_hd4e201bd__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1cU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1dU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1eU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1fU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xfffffeffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__8__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__8__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 8U));
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h12c638dd__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__8__KET____DOT__ysyx_22040632_booth_i__in_x, 0x10U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h12bacce4__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__8__KET____DOT__ysyx_22040632_booth_i__in_x, 0x11U);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h12c638dd__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__8__KET____DOT__ysyx_22040632_booth_i__in_x, 0x10U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h12bacce4__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__8__KET____DOT__ysyx_22040632_booth_i__in_x, 0x11U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__8__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x20U] 
            = (~ __Vtemp_h12c638dd__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x21U] 
            = (~ __Vtemp_h12c638dd__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x22U] 
            = (~ __Vtemp_h12c638dd__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x23U] 
            = (~ __Vtemp_h12c638dd__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__8__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x20U] 
            = (~ __Vtemp_h12bacce4__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x21U] 
            = (~ __Vtemp_h12bacce4__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x22U] 
            = (~ __Vtemp_h12bacce4__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x23U] 
            = (~ __Vtemp_h12bacce4__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                          >> 0x12U)) & ((IData)((0x20000U 
                                                 == 
                                                 (0x30000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                                        | (IData)((0x10000U 
                                                   == 
                                                   (0x30000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x20U] 
            = __Vtemp_h12c638dd__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x21U] 
            = __Vtemp_h12c638dd__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x22U] 
            = __Vtemp_h12c638dd__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x23U] 
            = __Vtemp_h12c638dd__1[3U];
    } else if ((IData)((0x30000U == (0x70000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x20U] 
            = __Vtemp_h12bacce4__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x21U] 
            = __Vtemp_h12bacce4__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x22U] 
            = __Vtemp_h12bacce4__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x23U] 
            = __Vtemp_h12bacce4__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x20U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x21U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x22U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x23U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xfffffdffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__9__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__9__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 9U));
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h3b7b6874__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__9__KET____DOT__ysyx_22040632_booth_i__in_x, 0x12U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h3b77cf46__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__9__KET____DOT__ysyx_22040632_booth_i__in_x, 0x13U);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h3b7b6874__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__9__KET____DOT__ysyx_22040632_booth_i__in_x, 0x12U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h3b77cf46__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__9__KET____DOT__ysyx_22040632_booth_i__in_x, 0x13U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__9__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x24U] 
            = (~ __Vtemp_h3b7b6874__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x25U] 
            = (~ __Vtemp_h3b7b6874__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x26U] 
            = (~ __Vtemp_h3b7b6874__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x27U] 
            = (~ __Vtemp_h3b7b6874__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__9__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x24U] 
            = (~ __Vtemp_h3b77cf46__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x25U] 
            = (~ __Vtemp_h3b77cf46__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x26U] 
            = (~ __Vtemp_h3b77cf46__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x27U] 
            = (~ __Vtemp_h3b77cf46__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                          >> 0x14U)) & ((IData)((0x80000U 
                                                 == 
                                                 (0xc0000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                                        | (IData)((0x40000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x24U] 
            = __Vtemp_h3b7b6874__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x25U] 
            = __Vtemp_h3b7b6874__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x26U] 
            = __Vtemp_h3b7b6874__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x27U] 
            = __Vtemp_h3b7b6874__1[3U];
    } else if ((IData)((0xc0000U == (0x1c0000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x24U] 
            = __Vtemp_h3b77cf46__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x25U] 
            = __Vtemp_h3b77cf46__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x26U] 
            = __Vtemp_h3b77cf46__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x27U] 
            = __Vtemp_h3b77cf46__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x24U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x25U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x26U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x27U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xfffffbffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__10__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__10__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0xaU));
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h7f42a3b4__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__10__KET____DOT__ysyx_22040632_booth_i__in_x, 0x14U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h7f40c541__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__10__KET____DOT__ysyx_22040632_booth_i__in_x, 0x15U);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h7f42a3b4__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__10__KET____DOT__ysyx_22040632_booth_i__in_x, 0x14U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h7f40c541__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__10__KET____DOT__ysyx_22040632_booth_i__in_x, 0x15U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__10__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x28U] 
            = (~ __Vtemp_h7f42a3b4__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x29U] 
            = (~ __Vtemp_h7f42a3b4__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2aU] 
            = (~ __Vtemp_h7f42a3b4__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2bU] 
            = (~ __Vtemp_h7f42a3b4__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__10__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x28U] 
            = (~ __Vtemp_h7f40c541__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x29U] 
            = (~ __Vtemp_h7f40c541__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2aU] 
            = (~ __Vtemp_h7f40c541__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2bU] 
            = (~ __Vtemp_h7f40c541__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                          >> 0x16U)) & ((IData)((0x200000U 
                                                 == 
                                                 (0x300000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                                        | (IData)((0x100000U 
                                                   == 
                                                   (0x300000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x28U] 
            = __Vtemp_h7f42a3b4__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x29U] 
            = __Vtemp_h7f42a3b4__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2aU] 
            = __Vtemp_h7f42a3b4__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2bU] 
            = __Vtemp_h7f42a3b4__1[3U];
    } else if ((IData)((0x300000U == (0x700000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x28U] 
            = __Vtemp_h7f40c541__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x29U] 
            = __Vtemp_h7f40c541__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2aU] 
            = __Vtemp_h7f40c541__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2bU] 
            = __Vtemp_h7f40c541__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x28U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x29U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2aU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2bU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xfffff7ffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__11__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__11__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0xbU));
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hdd35c357__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__11__KET____DOT__ysyx_22040632_booth_i__in_x, 0x16U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hdd3400bd__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__11__KET____DOT__ysyx_22040632_booth_i__in_x, 0x17U);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hdd35c357__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__11__KET____DOT__ysyx_22040632_booth_i__in_x, 0x16U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hdd3400bd__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__11__KET____DOT__ysyx_22040632_booth_i__in_x, 0x17U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__11__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2cU] 
            = (~ __Vtemp_hdd35c357__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2dU] 
            = (~ __Vtemp_hdd35c357__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2eU] 
            = (~ __Vtemp_hdd35c357__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2fU] 
            = (~ __Vtemp_hdd35c357__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__11__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2cU] 
            = (~ __Vtemp_hdd3400bd__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2dU] 
            = (~ __Vtemp_hdd3400bd__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2eU] 
            = (~ __Vtemp_hdd3400bd__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2fU] 
            = (~ __Vtemp_hdd3400bd__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                          >> 0x18U)) & ((IData)((0x800000U 
                                                 == 
                                                 (0xc00000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                                        | (IData)((0x400000U 
                                                   == 
                                                   (0xc00000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2cU] 
            = __Vtemp_hdd35c357__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2dU] 
            = __Vtemp_hdd35c357__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2eU] 
            = __Vtemp_hdd35c357__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2fU] 
            = __Vtemp_hdd35c357__1[3U];
    } else if ((IData)((0xc00000U == (0x1c00000U & 
                                      vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2cU] 
            = __Vtemp_hdd3400bd__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2dU] 
            = __Vtemp_hdd3400bd__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2eU] 
            = __Vtemp_hdd3400bd__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2fU] 
            = __Vtemp_hdd3400bd__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2cU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2dU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2eU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2fU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xffffefffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__12__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__12__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0xcU));
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h2efbf801__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__12__KET____DOT__ysyx_22040632_booth_i__in_x, 0x18U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h2efe19ec__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__12__KET____DOT__ysyx_22040632_booth_i__in_x, 0x19U);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h2efbf801__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__12__KET____DOT__ysyx_22040632_booth_i__in_x, 0x18U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h2efe19ec__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__12__KET____DOT__ysyx_22040632_booth_i__in_x, 0x19U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__12__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x30U] 
            = (~ __Vtemp_h2efbf801__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x31U] 
            = (~ __Vtemp_h2efbf801__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x32U] 
            = (~ __Vtemp_h2efbf801__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x33U] 
            = (~ __Vtemp_h2efbf801__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__12__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x30U] 
            = (~ __Vtemp_h2efe19ec__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x31U] 
            = (~ __Vtemp_h2efe19ec__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x32U] 
            = (~ __Vtemp_h2efe19ec__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x33U] 
            = (~ __Vtemp_h2efe19ec__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                          >> 0x1aU)) & ((IData)((0x2000000U 
                                                 == 
                                                 (0x3000000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                                        | (IData)((0x1000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x30U] 
            = __Vtemp_h2efbf801__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x31U] 
            = __Vtemp_h2efbf801__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x32U] 
            = __Vtemp_h2efbf801__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x33U] 
            = __Vtemp_h2efbf801__1[3U];
    } else if ((IData)((0x3000000U == (0x7000000U & 
                                       vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x30U] 
            = __Vtemp_h2efe19ec__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x31U] 
            = __Vtemp_h2efe19ec__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x32U] 
            = __Vtemp_h2efe19ec__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x33U] 
            = __Vtemp_h2efe19ec__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x30U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x31U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x32U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x33U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xffffdfffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__13__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__13__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0xdU));
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h841ddb83__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__13__KET____DOT__ysyx_22040632_booth_i__in_x, 0x1aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h841d1e99__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__13__KET____DOT__ysyx_22040632_booth_i__in_x, 0x1bU);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h841ddb83__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__13__KET____DOT__ysyx_22040632_booth_i__in_x, 0x1aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h841d1e99__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__13__KET____DOT__ysyx_22040632_booth_i__in_x, 0x1bU);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__13__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x34U] 
            = (~ __Vtemp_h841ddb83__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x35U] 
            = (~ __Vtemp_h841ddb83__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x36U] 
            = (~ __Vtemp_h841ddb83__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x37U] 
            = (~ __Vtemp_h841ddb83__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__13__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x34U] 
            = (~ __Vtemp_h841d1e99__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x35U] 
            = (~ __Vtemp_h841d1e99__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x36U] 
            = (~ __Vtemp_h841d1e99__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x37U] 
            = (~ __Vtemp_h841d1e99__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                          >> 0x1cU)) & ((IData)((0x8000000U 
                                                 == 
                                                 (0xc000000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                                        | (IData)((0x4000000U 
                                                   == 
                                                   (0xc000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x34U] 
            = __Vtemp_h841ddb83__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x35U] 
            = __Vtemp_h841ddb83__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x36U] 
            = __Vtemp_h841ddb83__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x37U] 
            = __Vtemp_h841ddb83__1[3U];
    } else if ((IData)((0xc000000U == (0x1c000000U 
                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x34U] 
            = __Vtemp_h841d1e99__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x35U] 
            = __Vtemp_h841d1e99__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x36U] 
            = __Vtemp_h841d1e99__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x37U] 
            = __Vtemp_h841d1e99__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x34U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x35U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x36U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x37U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xffffbfffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__14__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__14__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0xeU));
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h8c253122__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__14__KET____DOT__ysyx_22040632_booth_i__in_x, 0x1cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h8c276c2b__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__14__KET____DOT__ysyx_22040632_booth_i__in_x, 0x1dU);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h8c253122__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__14__KET____DOT__ysyx_22040632_booth_i__in_x, 0x1cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h8c276c2b__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__14__KET____DOT__ysyx_22040632_booth_i__in_x, 0x1dU);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__14__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x38U] 
            = (~ __Vtemp_h8c253122__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x39U] 
            = (~ __Vtemp_h8c253122__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3aU] 
            = (~ __Vtemp_h8c253122__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3bU] 
            = (~ __Vtemp_h8c253122__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__14__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x38U] 
            = (~ __Vtemp_h8c276c2b__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x39U] 
            = (~ __Vtemp_h8c276c2b__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3aU] 
            = (~ __Vtemp_h8c276c2b__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3bU] 
            = (~ __Vtemp_h8c276c2b__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                          >> 0x1eU)) & ((IData)((0x20000000U 
                                                 == 
                                                 (0x30000000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                                        | (IData)((0x10000000U 
                                                   == 
                                                   (0x30000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x38U] 
            = __Vtemp_h8c253122__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x39U] 
            = __Vtemp_h8c253122__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3aU] 
            = __Vtemp_h8c253122__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3bU] 
            = __Vtemp_h8c253122__1[3U];
    } else if ((IData)((0x30000000U == (0x70000000U 
                                        & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x38U] 
            = __Vtemp_h8c276c2b__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x39U] 
            = __Vtemp_h8c276c2b__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3aU] 
            = __Vtemp_h8c276c2b__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3bU] 
            = __Vtemp_h8c276c2b__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x38U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x39U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3aU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3bU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xffff7fffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__15__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__15__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0xfU));
    VL_SHIFTL_WWI(128,128,5, __Vtemp_ha712321d__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__15__KET____DOT__ysyx_22040632_booth_i__in_x, 0x1eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_ha713a6c7__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__15__KET____DOT__ysyx_22040632_booth_i__in_x, 0x1fU);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_ha712321d__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__15__KET____DOT__ysyx_22040632_booth_i__in_x, 0x1eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_ha713a6c7__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__15__KET____DOT__ysyx_22040632_booth_i__in_x, 0x1fU);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__15__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3cU] 
            = (~ __Vtemp_ha712321d__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3dU] 
            = (~ __Vtemp_ha712321d__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3eU] 
            = (~ __Vtemp_ha712321d__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3fU] 
            = (~ __Vtemp_ha712321d__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__15__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3cU] 
            = (~ __Vtemp_ha713a6c7__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3dU] 
            = (~ __Vtemp_ha713a6c7__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3eU] 
            = (~ __Vtemp_ha713a6c7__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3fU] 
            = (~ __Vtemp_ha713a6c7__0[3U]);
    } else if ((1U & ((~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]) 
                      & ((IData)((0x80000000U == (0xc0000000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                         | (IData)((0x40000000U == 
                                    (0xc0000000U & 
                                     vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3cU] 
            = __Vtemp_ha712321d__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3dU] 
            = __Vtemp_ha712321d__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3eU] 
            = __Vtemp_ha712321d__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3fU] 
            = __Vtemp_ha712321d__1[3U];
    } else if ((1U & (IData)(((0xc0000000U == (0xc0000000U 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])) 
                              & (~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3cU] 
            = __Vtemp_ha713a6c7__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3dU] 
            = __Vtemp_ha713a6c7__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3eU] 
            = __Vtemp_ha713a6c7__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3fU] 
            = __Vtemp_ha713a6c7__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3cU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3dU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3eU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3fU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xfffeffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__16__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__16__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x10U));
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h8a601923__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__16__KET____DOT__ysyx_22040632_booth_i__in_x, 1U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h8a601923__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__16__KET____DOT__ysyx_22040632_booth_i__in_x, 1U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__16__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x40U] 
            = (~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__16__KET____DOT__ysyx_22040632_booth_i__in_x[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x41U] 
            = (~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__16__KET____DOT__ysyx_22040632_booth_i__in_x[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x42U] 
            = (~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__16__KET____DOT__ysyx_22040632_booth_i__in_x[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x43U] 
            = (~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__16__KET____DOT__ysyx_22040632_booth_i__in_x[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__16__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x40U] 
            = (~ __Vtemp_h8a601923__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x41U] 
            = (~ __Vtemp_h8a601923__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x42U] 
            = (~ __Vtemp_h8a601923__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x43U] 
            = (~ __Vtemp_h8a601923__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                          >> 2U)) & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                                       >> 1U) & (~ 
                                                 vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])) 
                                     | (IData)((1U 
                                                == 
                                                (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x40U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__16__KET____DOT__ysyx_22040632_booth_i__in_x[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x41U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__16__KET____DOT__ysyx_22040632_booth_i__in_x[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x42U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__16__KET____DOT__ysyx_22040632_booth_i__in_x[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x43U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__16__KET____DOT__ysyx_22040632_booth_i__in_x[3U];
    } else if ((IData)((3U == (7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x40U] 
            = __Vtemp_h8a601923__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x41U] 
            = __Vtemp_h8a601923__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x42U] 
            = __Vtemp_h8a601923__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x43U] 
            = __Vtemp_h8a601923__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x40U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x41U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x42U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x43U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xfffdffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__17__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__17__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x11U));
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hef6487da__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__17__KET____DOT__ysyx_22040632_booth_i__in_x, 2U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hef6635a4__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__17__KET____DOT__ysyx_22040632_booth_i__in_x, 3U);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hef6487da__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__17__KET____DOT__ysyx_22040632_booth_i__in_x, 2U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hef6635a4__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__17__KET____DOT__ysyx_22040632_booth_i__in_x, 3U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__17__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x44U] 
            = (~ __Vtemp_hef6487da__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x45U] 
            = (~ __Vtemp_hef6487da__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x46U] 
            = (~ __Vtemp_hef6487da__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x47U] 
            = (~ __Vtemp_hef6487da__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__17__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x44U] 
            = (~ __Vtemp_hef6635a4__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x45U] 
            = (~ __Vtemp_hef6635a4__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x46U] 
            = (~ __Vtemp_hef6635a4__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x47U] 
            = (~ __Vtemp_hef6635a4__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                          >> 4U)) & ((IData)((8U == 
                                              (0xcU 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                                     | (IData)((4U 
                                                == 
                                                (0xcU 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x44U] 
            = __Vtemp_hef6487da__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x45U] 
            = __Vtemp_hef6487da__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x46U] 
            = __Vtemp_hef6487da__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x47U] 
            = __Vtemp_hef6487da__1[3U];
    } else if ((IData)((0xcU == (0x1cU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x44U] 
            = __Vtemp_hef6635a4__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x45U] 
            = __Vtemp_hef6635a4__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x46U] 
            = __Vtemp_hef6635a4__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x47U] 
            = __Vtemp_hef6635a4__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x44U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x45U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x46U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x47U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xfffbffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__18__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__18__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x12U));
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h8d2bdd7a__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__18__KET____DOT__ysyx_22040632_booth_i__in_x, 4U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h8d2d8ee9__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__18__KET____DOT__ysyx_22040632_booth_i__in_x, 5U);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h8d2bdd7a__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__18__KET____DOT__ysyx_22040632_booth_i__in_x, 4U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h8d2d8ee9__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__18__KET____DOT__ysyx_22040632_booth_i__in_x, 5U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__18__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x48U] 
            = (~ __Vtemp_h8d2bdd7a__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x49U] 
            = (~ __Vtemp_h8d2bdd7a__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4aU] 
            = (~ __Vtemp_h8d2bdd7a__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4bU] 
            = (~ __Vtemp_h8d2bdd7a__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__18__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x48U] 
            = (~ __Vtemp_h8d2d8ee9__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x49U] 
            = (~ __Vtemp_h8d2d8ee9__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4aU] 
            = (~ __Vtemp_h8d2d8ee9__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4bU] 
            = (~ __Vtemp_h8d2d8ee9__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                          >> 6U)) & ((IData)((0x20U 
                                              == (0x30U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                                     | (IData)((0x10U 
                                                == 
                                                (0x30U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x48U] 
            = __Vtemp_h8d2bdd7a__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x49U] 
            = __Vtemp_h8d2bdd7a__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4aU] 
            = __Vtemp_h8d2bdd7a__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4bU] 
            = __Vtemp_h8d2bdd7a__1[3U];
    } else if ((IData)((0x30U == (0x70U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x48U] 
            = __Vtemp_h8d2d8ee9__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x49U] 
            = __Vtemp_h8d2d8ee9__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4aU] 
            = __Vtemp_h8d2d8ee9__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4bU] 
            = __Vtemp_h8d2d8ee9__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x48U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x49U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4aU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4bU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xfff7ffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__19__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__19__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x13U));
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hc4545f0a__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__19__KET____DOT__ysyx_22040632_booth_i__in_x, 6U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hc456042c__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__19__KET____DOT__ysyx_22040632_booth_i__in_x, 7U);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hc4545f0a__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__19__KET____DOT__ysyx_22040632_booth_i__in_x, 6U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hc456042c__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__19__KET____DOT__ysyx_22040632_booth_i__in_x, 7U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__19__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4cU] 
            = (~ __Vtemp_hc4545f0a__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4dU] 
            = (~ __Vtemp_hc4545f0a__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4eU] 
            = (~ __Vtemp_hc4545f0a__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4fU] 
            = (~ __Vtemp_hc4545f0a__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__19__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4cU] 
            = (~ __Vtemp_hc456042c__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4dU] 
            = (~ __Vtemp_hc456042c__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4eU] 
            = (~ __Vtemp_hc456042c__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4fU] 
            = (~ __Vtemp_hc456042c__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                          >> 8U)) & ((IData)((0x80U 
                                              == (0xc0U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                                     | (IData)((0x40U 
                                                == 
                                                (0xc0U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4cU] 
            = __Vtemp_hc4545f0a__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4dU] 
            = __Vtemp_hc4545f0a__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4eU] 
            = __Vtemp_hc4545f0a__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4fU] 
            = __Vtemp_hc4545f0a__1[3U];
    } else if ((IData)((0xc0U == (0x1c0U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4cU] 
            = __Vtemp_hc456042c__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4dU] 
            = __Vtemp_hc456042c__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4eU] 
            = __Vtemp_hc456042c__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4fU] 
            = __Vtemp_hc456042c__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4cU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4dU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4eU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4fU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xffefffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__20__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__20__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x14U));
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h52a4bc93__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__20__KET____DOT__ysyx_22040632_booth_i__in_x, 8U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h52aaa3da__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__20__KET____DOT__ysyx_22040632_booth_i__in_x, 9U);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h52a4bc93__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__20__KET____DOT__ysyx_22040632_booth_i__in_x, 8U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h52aaa3da__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__20__KET____DOT__ysyx_22040632_booth_i__in_x, 9U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__20__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x50U] 
            = (~ __Vtemp_h52a4bc93__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x51U] 
            = (~ __Vtemp_h52a4bc93__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x52U] 
            = (~ __Vtemp_h52a4bc93__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x53U] 
            = (~ __Vtemp_h52a4bc93__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__20__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x50U] 
            = (~ __Vtemp_h52aaa3da__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x51U] 
            = (~ __Vtemp_h52aaa3da__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x52U] 
            = (~ __Vtemp_h52aaa3da__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x53U] 
            = (~ __Vtemp_h52aaa3da__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                          >> 0xaU)) & ((IData)((0x200U 
                                                == 
                                                (0x300U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                                       | (IData)((0x100U 
                                                  == 
                                                  (0x300U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x50U] 
            = __Vtemp_h52a4bc93__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x51U] 
            = __Vtemp_h52a4bc93__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x52U] 
            = __Vtemp_h52a4bc93__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x53U] 
            = __Vtemp_h52a4bc93__1[3U];
    } else if ((IData)((0x300U == (0x700U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x50U] 
            = __Vtemp_h52aaa3da__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x51U] 
            = __Vtemp_h52aaa3da__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x52U] 
            = __Vtemp_h52aaa3da__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x53U] 
            = __Vtemp_h52aaa3da__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x50U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x51U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x52U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x53U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xffdfffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__21__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__21__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x15U));
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h15c2f08a__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__21__KET____DOT__ysyx_22040632_booth_i__in_x, 0xaU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h15bc19b0__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__21__KET____DOT__ysyx_22040632_booth_i__in_x, 0xbU);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h15c2f08a__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__21__KET____DOT__ysyx_22040632_booth_i__in_x, 0xaU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h15bc19b0__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__21__KET____DOT__ysyx_22040632_booth_i__in_x, 0xbU);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__21__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x54U] 
            = (~ __Vtemp_h15c2f08a__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x55U] 
            = (~ __Vtemp_h15c2f08a__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x56U] 
            = (~ __Vtemp_h15c2f08a__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x57U] 
            = (~ __Vtemp_h15c2f08a__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__21__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x54U] 
            = (~ __Vtemp_h15bc19b0__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x55U] 
            = (~ __Vtemp_h15bc19b0__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x56U] 
            = (~ __Vtemp_h15bc19b0__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x57U] 
            = (~ __Vtemp_h15bc19b0__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                          >> 0xcU)) & ((IData)((0x800U 
                                                == 
                                                (0xc00U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                                       | (IData)((0x400U 
                                                  == 
                                                  (0xc00U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x54U] 
            = __Vtemp_h15c2f08a__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x55U] 
            = __Vtemp_h15c2f08a__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x56U] 
            = __Vtemp_h15c2f08a__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x57U] 
            = __Vtemp_h15c2f08a__1[3U];
    } else if ((IData)((0xc00U == (0x1c00U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x54U] 
            = __Vtemp_h15bc19b0__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x55U] 
            = __Vtemp_h15bc19b0__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x56U] 
            = __Vtemp_h15bc19b0__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x57U] 
            = __Vtemp_h15bc19b0__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x54U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x55U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x56U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x57U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xffbfffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__22__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__22__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x16U));
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hb38857c1__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__22__KET____DOT__ysyx_22040632_booth_i__in_x, 0xcU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hb38de9dc__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__22__KET____DOT__ysyx_22040632_booth_i__in_x, 0xdU);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hb38857c1__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__22__KET____DOT__ysyx_22040632_booth_i__in_x, 0xcU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hb38de9dc__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__22__KET____DOT__ysyx_22040632_booth_i__in_x, 0xdU);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__22__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x58U] 
            = (~ __Vtemp_hb38857c1__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x59U] 
            = (~ __Vtemp_hb38857c1__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5aU] 
            = (~ __Vtemp_hb38857c1__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5bU] 
            = (~ __Vtemp_hb38857c1__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__22__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x58U] 
            = (~ __Vtemp_hb38de9dc__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x59U] 
            = (~ __Vtemp_hb38de9dc__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5aU] 
            = (~ __Vtemp_hb38de9dc__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5bU] 
            = (~ __Vtemp_hb38de9dc__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                          >> 0xeU)) & ((IData)((0x2000U 
                                                == 
                                                (0x3000U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                                       | (IData)((0x1000U 
                                                  == 
                                                  (0x3000U 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x58U] 
            = __Vtemp_hb38857c1__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x59U] 
            = __Vtemp_hb38857c1__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5aU] 
            = __Vtemp_hb38857c1__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5bU] 
            = __Vtemp_hb38857c1__1[3U];
    } else if ((IData)((0x3000U == (0x7000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x58U] 
            = __Vtemp_hb38de9dc__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x59U] 
            = __Vtemp_hb38de9dc__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5aU] 
            = __Vtemp_hb38de9dc__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5bU] 
            = __Vtemp_hb38de9dc__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x58U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x59U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5aU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5bU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xff7fffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__23__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__23__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x17U));
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h764155c7__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__23__KET____DOT__ysyx_22040632_booth_i__in_x, 0xeU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h764f3935__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__23__KET____DOT__ysyx_22040632_booth_i__in_x, 0xfU);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h764155c7__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__23__KET____DOT__ysyx_22040632_booth_i__in_x, 0xeU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h764f3935__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__23__KET____DOT__ysyx_22040632_booth_i__in_x, 0xfU);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__23__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5cU] 
            = (~ __Vtemp_h764155c7__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5dU] 
            = (~ __Vtemp_h764155c7__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5eU] 
            = (~ __Vtemp_h764155c7__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5fU] 
            = (~ __Vtemp_h764155c7__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__23__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5cU] 
            = (~ __Vtemp_h764f3935__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5dU] 
            = (~ __Vtemp_h764f3935__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5eU] 
            = (~ __Vtemp_h764f3935__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5fU] 
            = (~ __Vtemp_h764f3935__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                          >> 0x10U)) & ((IData)((0x8000U 
                                                 == 
                                                 (0xc000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                                        | (IData)((0x4000U 
                                                   == 
                                                   (0xc000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5cU] 
            = __Vtemp_h764155c7__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5dU] 
            = __Vtemp_h764155c7__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5eU] 
            = __Vtemp_h764155c7__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5fU] 
            = __Vtemp_h764155c7__1[3U];
    } else if ((IData)((0xc000U == (0x1c000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5cU] 
            = __Vtemp_h764f3935__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5dU] 
            = __Vtemp_h764f3935__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5eU] 
            = __Vtemp_h764f3935__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5fU] 
            = __Vtemp_h764f3935__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5cU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5dU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5eU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5fU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xfeffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__24__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__24__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x18U));
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h399b780a__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__24__KET____DOT__ysyx_22040632_booth_i__in_x, 0x10U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h39991403__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__24__KET____DOT__ysyx_22040632_booth_i__in_x, 0x11U);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h399b780a__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__24__KET____DOT__ysyx_22040632_booth_i__in_x, 0x10U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h39991403__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__24__KET____DOT__ysyx_22040632_booth_i__in_x, 0x11U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__24__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x60U] 
            = (~ __Vtemp_h399b780a__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x61U] 
            = (~ __Vtemp_h399b780a__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x62U] 
            = (~ __Vtemp_h399b780a__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x63U] 
            = (~ __Vtemp_h399b780a__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__24__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x60U] 
            = (~ __Vtemp_h39991403__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x61U] 
            = (~ __Vtemp_h39991403__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x62U] 
            = (~ __Vtemp_h39991403__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x63U] 
            = (~ __Vtemp_h39991403__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                          >> 0x12U)) & ((IData)((0x20000U 
                                                 == 
                                                 (0x30000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                                        | (IData)((0x10000U 
                                                   == 
                                                   (0x30000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x60U] 
            = __Vtemp_h399b780a__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x61U] 
            = __Vtemp_h399b780a__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x62U] 
            = __Vtemp_h399b780a__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x63U] 
            = __Vtemp_h399b780a__1[3U];
    } else if ((IData)((0x30000U == (0x70000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x60U] 
            = __Vtemp_h39991403__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x61U] 
            = __Vtemp_h39991403__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x62U] 
            = __Vtemp_h39991403__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x63U] 
            = __Vtemp_h39991403__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x60U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x61U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x62U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x63U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xfdffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__25__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__25__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x19U));
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hb1c2b9e2__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__25__KET____DOT__ysyx_22040632_booth_i__in_x, 0x12U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hb1cd60f4__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__25__KET____DOT__ysyx_22040632_booth_i__in_x, 0x13U);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hb1c2b9e2__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__25__KET____DOT__ysyx_22040632_booth_i__in_x, 0x12U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hb1cd60f4__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__25__KET____DOT__ysyx_22040632_booth_i__in_x, 0x13U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__25__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x64U] 
            = (~ __Vtemp_hb1c2b9e2__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x65U] 
            = (~ __Vtemp_hb1c2b9e2__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x66U] 
            = (~ __Vtemp_hb1c2b9e2__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x67U] 
            = (~ __Vtemp_hb1c2b9e2__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__25__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x64U] 
            = (~ __Vtemp_hb1cd60f4__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x65U] 
            = (~ __Vtemp_hb1cd60f4__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x66U] 
            = (~ __Vtemp_hb1cd60f4__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x67U] 
            = (~ __Vtemp_hb1cd60f4__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                          >> 0x14U)) & ((IData)((0x80000U 
                                                 == 
                                                 (0xc0000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                                        | (IData)((0x40000U 
                                                   == 
                                                   (0xc0000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x64U] 
            = __Vtemp_hb1c2b9e2__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x65U] 
            = __Vtemp_hb1c2b9e2__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x66U] 
            = __Vtemp_hb1c2b9e2__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x67U] 
            = __Vtemp_hb1c2b9e2__1[3U];
    } else if ((IData)((0xc0000U == (0x1c0000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x64U] 
            = __Vtemp_hb1cd60f4__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x65U] 
            = __Vtemp_hb1cd60f4__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x66U] 
            = __Vtemp_hb1cd60f4__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x67U] 
            = __Vtemp_hb1cd60f4__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x64U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x65U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x66U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x67U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xfbffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__26__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__26__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x1aU));
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h643f4555__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__26__KET____DOT__ysyx_22040632_booth_i__in_x, 0x14U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h6450df46__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__26__KET____DOT__ysyx_22040632_booth_i__in_x, 0x15U);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h643f4555__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__26__KET____DOT__ysyx_22040632_booth_i__in_x, 0x14U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h6450df46__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__26__KET____DOT__ysyx_22040632_booth_i__in_x, 0x15U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__26__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x68U] 
            = (~ __Vtemp_h643f4555__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x69U] 
            = (~ __Vtemp_h643f4555__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6aU] 
            = (~ __Vtemp_h643f4555__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6bU] 
            = (~ __Vtemp_h643f4555__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__26__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x68U] 
            = (~ __Vtemp_h6450df46__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x69U] 
            = (~ __Vtemp_h6450df46__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6aU] 
            = (~ __Vtemp_h6450df46__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6bU] 
            = (~ __Vtemp_h6450df46__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                          >> 0x16U)) & ((IData)((0x200000U 
                                                 == 
                                                 (0x300000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                                        | (IData)((0x100000U 
                                                   == 
                                                   (0x300000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x68U] 
            = __Vtemp_h643f4555__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x69U] 
            = __Vtemp_h643f4555__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6aU] 
            = __Vtemp_h643f4555__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6bU] 
            = __Vtemp_h643f4555__1[3U];
    } else if ((IData)((0x300000U == (0x700000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x68U] 
            = __Vtemp_h6450df46__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x69U] 
            = __Vtemp_h6450df46__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6aU] 
            = __Vtemp_h6450df46__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6bU] 
            = __Vtemp_h6450df46__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x68U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x69U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6aU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6bU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xf7ffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__27__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__27__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x1bU));
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h5a66834d__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__27__KET____DOT__ysyx_22040632_booth_i__in_x, 0x16U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h5a5a312b__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__27__KET____DOT__ysyx_22040632_booth_i__in_x, 0x17U);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h5a66834d__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__27__KET____DOT__ysyx_22040632_booth_i__in_x, 0x16U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h5a5a312b__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__27__KET____DOT__ysyx_22040632_booth_i__in_x, 0x17U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__27__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6cU] 
            = (~ __Vtemp_h5a66834d__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6dU] 
            = (~ __Vtemp_h5a66834d__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6eU] 
            = (~ __Vtemp_h5a66834d__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6fU] 
            = (~ __Vtemp_h5a66834d__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__27__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6cU] 
            = (~ __Vtemp_h5a5a312b__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6dU] 
            = (~ __Vtemp_h5a5a312b__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6eU] 
            = (~ __Vtemp_h5a5a312b__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6fU] 
            = (~ __Vtemp_h5a5a312b__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                          >> 0x18U)) & ((IData)((0x800000U 
                                                 == 
                                                 (0xc00000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                                        | (IData)((0x400000U 
                                                   == 
                                                   (0xc00000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6cU] 
            = __Vtemp_h5a66834d__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6dU] 
            = __Vtemp_h5a66834d__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6eU] 
            = __Vtemp_h5a66834d__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6fU] 
            = __Vtemp_h5a66834d__1[3U];
    } else if ((IData)((0xc00000U == (0x1c00000U & 
                                      vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6cU] 
            = __Vtemp_h5a5a312b__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6dU] 
            = __Vtemp_h5a5a312b__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6eU] 
            = __Vtemp_h5a5a312b__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6fU] 
            = __Vtemp_h5a5a312b__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6cU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6dU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6eU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6fU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xefffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__28__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__28__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x1cU));
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hb2a4ee7f__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__28__KET____DOT__ysyx_22040632_booth_i__in_x, 0x18U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hb2a6ab26__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__28__KET____DOT__ysyx_22040632_booth_i__in_x, 0x19U);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hb2a4ee7f__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__28__KET____DOT__ysyx_22040632_booth_i__in_x, 0x18U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hb2a6ab26__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__28__KET____DOT__ysyx_22040632_booth_i__in_x, 0x19U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__28__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x70U] 
            = (~ __Vtemp_hb2a4ee7f__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x71U] 
            = (~ __Vtemp_hb2a4ee7f__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x72U] 
            = (~ __Vtemp_hb2a4ee7f__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x73U] 
            = (~ __Vtemp_hb2a4ee7f__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__28__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x70U] 
            = (~ __Vtemp_hb2a6ab26__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x71U] 
            = (~ __Vtemp_hb2a6ab26__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x72U] 
            = (~ __Vtemp_hb2a6ab26__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x73U] 
            = (~ __Vtemp_hb2a6ab26__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                          >> 0x1aU)) & ((IData)((0x2000000U 
                                                 == 
                                                 (0x3000000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                                        | (IData)((0x1000000U 
                                                   == 
                                                   (0x3000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x70U] 
            = __Vtemp_hb2a4ee7f__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x71U] 
            = __Vtemp_hb2a4ee7f__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x72U] 
            = __Vtemp_hb2a4ee7f__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x73U] 
            = __Vtemp_hb2a4ee7f__1[3U];
    } else if ((IData)((0x3000000U == (0x7000000U & 
                                       vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x70U] 
            = __Vtemp_hb2a6ab26__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x71U] 
            = __Vtemp_hb2a6ab26__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x72U] 
            = __Vtemp_hb2a6ab26__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x73U] 
            = __Vtemp_hb2a6ab26__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x70U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x71U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x72U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x73U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xdfffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__29__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__29__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x1dU));
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h737729ed__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__29__KET____DOT__ysyx_22040632_booth_i__in_x, 0x1aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h737144e7__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__29__KET____DOT__ysyx_22040632_booth_i__in_x, 0x1bU);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h737729ed__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__29__KET____DOT__ysyx_22040632_booth_i__in_x, 0x1aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h737144e7__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__29__KET____DOT__ysyx_22040632_booth_i__in_x, 0x1bU);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__29__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x74U] 
            = (~ __Vtemp_h737729ed__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x75U] 
            = (~ __Vtemp_h737729ed__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x76U] 
            = (~ __Vtemp_h737729ed__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x77U] 
            = (~ __Vtemp_h737729ed__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__29__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x74U] 
            = (~ __Vtemp_h737144e7__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x75U] 
            = (~ __Vtemp_h737144e7__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x76U] 
            = (~ __Vtemp_h737144e7__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x77U] 
            = (~ __Vtemp_h737144e7__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                          >> 0x1cU)) & ((IData)((0x8000000U 
                                                 == 
                                                 (0xc000000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                                        | (IData)((0x4000000U 
                                                   == 
                                                   (0xc000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x74U] 
            = __Vtemp_h737729ed__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x75U] 
            = __Vtemp_h737729ed__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x76U] 
            = __Vtemp_h737729ed__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x77U] 
            = __Vtemp_h737729ed__1[3U];
    } else if ((IData)((0xc000000U == (0x1c000000U 
                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x74U] 
            = __Vtemp_h737144e7__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x75U] 
            = __Vtemp_h737144e7__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x76U] 
            = __Vtemp_h737144e7__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x77U] 
            = __Vtemp_h737144e7__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x74U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x75U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x76U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x77U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xbfffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__30__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__30__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x1eU));
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h8c87702b__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__30__KET____DOT__ysyx_22040632_booth_i__in_x, 0x1cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h8c813720__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__30__KET____DOT__ysyx_22040632_booth_i__in_x, 0x1dU);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h8c87702b__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__30__KET____DOT__ysyx_22040632_booth_i__in_x, 0x1cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h8c813720__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__30__KET____DOT__ysyx_22040632_booth_i__in_x, 0x1dU);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__30__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x78U] 
            = (~ __Vtemp_h8c87702b__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x79U] 
            = (~ __Vtemp_h8c87702b__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7aU] 
            = (~ __Vtemp_h8c87702b__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7bU] 
            = (~ __Vtemp_h8c87702b__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__30__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x78U] 
            = (~ __Vtemp_h8c813720__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x79U] 
            = (~ __Vtemp_h8c813720__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7aU] 
            = (~ __Vtemp_h8c813720__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7bU] 
            = (~ __Vtemp_h8c813720__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                          >> 0x1eU)) & ((IData)((0x20000000U 
                                                 == 
                                                 (0x30000000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                                        | (IData)((0x10000000U 
                                                   == 
                                                   (0x30000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x78U] 
            = __Vtemp_h8c87702b__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x79U] 
            = __Vtemp_h8c87702b__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7aU] 
            = __Vtemp_h8c87702b__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7bU] 
            = __Vtemp_h8c87702b__1[3U];
    } else if ((IData)((0x30000000U == (0x70000000U 
                                        & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x78U] 
            = __Vtemp_h8c813720__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x79U] 
            = __Vtemp_h8c813720__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7aU] 
            = __Vtemp_h8c813720__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7bU] 
            = __Vtemp_h8c813720__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x78U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x79U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7aU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7bU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0x7fffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__31__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__31__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x1fU));
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hab3b318d__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__31__KET____DOT__ysyx_22040632_booth_i__in_x, 0x1eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hab38a683__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__31__KET____DOT__ysyx_22040632_booth_i__in_x, 0x1fU);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hab3b318d__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__31__KET____DOT__ysyx_22040632_booth_i__in_x, 0x1eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hab38a683__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__genblk2__BRA__31__KET____DOT__ysyx_22040632_booth_i__in_x, 0x1fU);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__31__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7cU] 
            = (~ __Vtemp_hab3b318d__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7dU] 
            = (~ __Vtemp_hab3b318d__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7eU] 
            = (~ __Vtemp_hab3b318d__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7fU] 
            = (~ __Vtemp_hab3b318d__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__31__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7cU] 
            = (~ __Vtemp_hab38a683__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7dU] 
            = (~ __Vtemp_hab38a683__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7eU] 
            = (~ __Vtemp_hab38a683__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7fU] 
            = (~ __Vtemp_hab38a683__0[3U]);
    } else if ((1U & ((~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[2U]) 
                      & ((IData)((0x80000000U == (0xc0000000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                         | (IData)((0x40000000U == 
                                    (0xc0000000U & 
                                     vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7cU] 
            = __Vtemp_hab3b318d__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7dU] 
            = __Vtemp_hab3b318d__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7eU] 
            = __Vtemp_hab3b318d__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7fU] 
            = __Vtemp_hab3b318d__1[3U];
    } else if ((1U & (IData)(((0xc0000000U == (0xc0000000U 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])) 
                              & (~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[2U]))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7cU] 
            = __Vtemp_hab38a683__1[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7dU] 
            = __Vtemp_hab38a683__1[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7eU] 
            = __Vtemp_hab38a683__1[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7fU] 
            = __Vtemp_hab38a683__1[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7cU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7dU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7eU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7fU] = 0U;
    }
    vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_addr 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg)
            ? ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable)
                ? (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)
                : ((8U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cs))
                    ? ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__tag_read 
                        << 0xbU) | (0x7c0U & ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cnt_f) 
                                              << 6U)))
                    : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__axi_write_state)
                        ? ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__tag_read 
                            << 0xbU) | (0x7c0U & ((IData)(
                                                          (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                           >> 6U)) 
                                                  << 6U)))
                        : ((IData)((vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                    >> 6U)) << 6U))))
            : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__uncacheable)
                ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc
                : (0xffffffc0U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc)));
    vlSymsp->TOP__ysyx_22040632_top__DOT__immem.rw_valid 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable)
            ? ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__rw_valid) 
               & (~ (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__immem.rw_ready)))
            : (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__rw_valid) 
                & (~ (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__immem.rw_ready))) 
               & ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__axi_read_state) 
                  | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__axi_write_state))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__flush_if 
        = (((IData)(vlSelf->ysyx_22040632_top__DOT__flush) 
            | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc_en)) 
           | (IData)(vlSelf->ysyx_22040632_top__DOT__fence_sig));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c 
        = ((0xffff8000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c) 
           | (0x7fffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c 
        = ((0xfff8ffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c) 
           | (0x70000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta));
}
