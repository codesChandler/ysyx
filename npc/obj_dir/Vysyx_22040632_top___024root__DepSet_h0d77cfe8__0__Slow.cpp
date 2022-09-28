// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"

#include "Vysyx_22040632_top__Syms.h"
#include "Vysyx_22040632_top___024root.h"

extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_22040632_top__ConstPool__TABLE_haf736440_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_22040632_top__ConstPool__TABLE_hb3b3546f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_22040632_top__ConstPool__TABLE_h32bb5fb4_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vysyx_22040632_top__ConstPool__TABLE_h84f215d2_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vysyx_22040632_top__ConstPool__TABLE_hed7008f7_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vysyx_22040632_top__ConstPool__TABLE_h4836bee5_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vysyx_22040632_top__ConstPool__TABLE_ha150fa3d_0;

VL_ATTR_COLD void Vysyx_22040632_top___024root___settle__TOP__1(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___settle__TOP__1\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    CData/*4:0*/ __Vtableidx2;
    CData/*7:0*/ __Vtableidx3;
    CData/*5:0*/ __Vtableidx4;
    CData/*6:0*/ __Vtableidx5;
    CData/*6:0*/ __Vtableidx6;
    CData/*6:0*/ __Vtableidx7;
    VlWide<4>/*127:0*/ __Vtemp_h5eda473d__0;
    VlWide<4>/*127:0*/ __Vtemp_h9f0d29df__0;
    VlWide<4>/*127:0*/ __Vtemp_hb0972842__0;
    VlWide<4>/*127:0*/ __Vtemp_h00d1cec9__0;
    VlWide<4>/*127:0*/ __Vtemp_h00d1cec9__1;
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
    VlWide<4>/*127:0*/ __Vtemp_ha1dc8315__0;
    VlWide<4>/*127:0*/ __Vtemp_ha1e05bdf__0;
    VlWide<4>/*127:0*/ __Vtemp_h6899326b__0;
    VlWide<4>/*127:0*/ __Vtemp_ha1dc8315__1;
    VlWide<4>/*127:0*/ __Vtemp_ha1e05fa0__0;
    VlWide<4>/*127:0*/ __Vtemp_ha1e05bdf__1;
    VlWide<4>/*127:0*/ __Vtemp_ha1e05bdf__2;
    VlWide<4>/*127:0*/ __Vtemp_hf2bed55a__0;
    VlWide<4>/*127:0*/ __Vtemp_hf2ba6884__0;
    VlWide<4>/*127:0*/ __Vtemp_h535b723d__0;
    VlWide<4>/*127:0*/ __Vtemp_hf2bed55a__1;
    VlWide<4>/*127:0*/ __Vtemp_hf2ba68c3__0;
    VlWide<4>/*127:0*/ __Vtemp_hf2ba6884__1;
    VlWide<4>/*127:0*/ __Vtemp_hf2ba6884__2;
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->axi_aw_id_o = 0U;
    vlSelf->axi_aw_burst_o = 1U;
    vlSelf->axi_ar_id_o = 0U;
    vlSelf->axi_ar_burst_o = 1U;
    vlSelf->axi_w_valid_o = (2U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_state));
    vlSelf->axi_b_ready_o = (3U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_state));
    vlSelf->axi_r_ready_o = (2U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_state));
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
    if ((0x40U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__len))) {
        vlSymsp->TOP__ysyx_22040632_top__DOT__dif.quotient 
            = (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn) 
                & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_qt))
                ? (((QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_qt)) 
                    << 0x3fU) | (0x7fffffffffffffffULL 
                                 & (1ULL + (~ (((QData)((IData)(
                                                                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[3U])) 
                                                << 0x3fU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[3U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[2U])) 
                                                     >> 1U)))))))
                : (((QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[2U]))));
        vlSymsp->TOP__ysyx_22040632_top__DOT__dif.remainder 
            = (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn) 
                & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_rmd))
                ? (((QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_rmd)) 
                    << 0x3fU) | (0x7fffffffffffffffULL 
                                 & (1ULL + (~ (((QData)((IData)(
                                                                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[0U])))))))
                : (((QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[0U]))));
    } else if ((0x20U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__len))) {
        vlSymsp->TOP__ysyx_22040632_top__DOT__dif.quotient 
            = (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn) 
                & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_qt))
                ? (((- (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_qt))) 
                    << 0x1fU) | (QData)((IData)((0x7fffffffU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[2U] 
                                                       << 0x1fU) 
                                                      | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[2U] 
                                                         >> 1U))))))))
                : (((QData)((IData)((- (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[1U] 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[1U]))));
        vlSymsp->TOP__ysyx_22040632_top__DOT__dif.remainder 
            = (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn) 
                & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_rmd))
                ? (((- (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_rmd))) 
                    << 0x1fU) | (QData)((IData)((0x7fffffffU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[0U]))))))
                : (((QData)((IData)((- (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[0U] 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[0U]))));
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__data2sd 
        = VL_SHIFTL_QQQ(64,64,64, vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data_ext2mem, 
                        (0x38ULL & (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                    << 3U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__b_hs 
        = ((3U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_state)) 
           & (IData)(vlSelf->axi_b_valid_i));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xfffffffeU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                    [0U] >> 0x16U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xfffffffeU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                    [0U] >> 0x16U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xfffffffdU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (2U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                    [1U] >> 0x15U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xfffffffdU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (2U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                    [1U] >> 0x15U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xfffffffbU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (4U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                    [2U] >> 0x14U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xfffffffbU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (4U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                    [2U] >> 0x14U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xfffffff7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (8U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                    [3U] >> 0x13U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xfffffff7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (8U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                    [3U] >> 0x13U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xffffffefU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (0x10U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                       [4U] >> 0x12U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xffffffefU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (0x10U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                       [4U] >> 0x12U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xffffffdfU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (0x20U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                       [5U] >> 0x11U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xffffffdfU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (0x20U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                       [5U] >> 0x11U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xffffffbfU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (0x40U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                       [6U] >> 0x10U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xffffffbfU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (0x40U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                       [6U] >> 0x10U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xffffff7fU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (0x80U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                       [7U] >> 0xfU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xffffff7fU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (0x80U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                       [7U] >> 0xfU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xfffffeffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (0x100U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                        [8U] >> 0xeU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xfffffeffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (0x100U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                        [8U] >> 0xeU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xfffffdffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (0x200U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                        [9U] >> 0xdU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xfffffdffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (0x200U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                        [9U] >> 0xdU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xfffffbffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (0x400U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                        [0xaU] >> 0xcU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xfffffbffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (0x400U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                        [0xaU] >> 0xcU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xfffff7ffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (0x800U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                        [0xbU] >> 0xbU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xfffff7ffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (0x800U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                        [0xbU] >> 0xbU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xffffefffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (0x1000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                         [0xcU] >> 0xaU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xffffefffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (0x1000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                         [0xcU] >> 0xaU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xffffdfffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (0x2000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                         [0xdU] >> 9U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xffffdfffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (0x2000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                         [0xdU] >> 9U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xffffbfffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (0x4000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                         [0xeU] >> 8U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xffffbfffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (0x4000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                         [0xeU] >> 8U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xffff7fffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (0x8000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                         [0xfU] >> 7U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xffff7fffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (0x8000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                         [0xfU] >> 7U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xfffeffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (0x10000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                          [0x10U] >> 6U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xfffeffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (0x10000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                          [0x10U] >> 6U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xfffdffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (0x20000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                          [0x11U] >> 5U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xfffdffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (0x20000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                          [0x11U] >> 5U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xfffbffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (0x40000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                          [0x12U] >> 4U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xfffbffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (0x40000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                          [0x12U] >> 4U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xfff7ffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (0x80000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                          [0x13U] >> 3U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xfff7ffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (0x80000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                          [0x13U] >> 3U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xffefffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (0x100000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                           [0x14U] >> 2U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xffefffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (0x100000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                           [0x14U] >> 2U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xffdfffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (0x200000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                           [0x15U] >> 1U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xffdfffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (0x200000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                           [0x15U] >> 1U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xffbfffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (0x400000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
              [0x16U]));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xffbfffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (0x400000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
              [0x16U]));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xff7fffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (0x800000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                           [0x17U] << 1U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xff7fffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (0x800000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                           [0x17U] << 1U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xfeffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (0x1000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                            [0x18U] << 2U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xfeffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (0x1000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                            [0x18U] << 2U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xfdffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (0x2000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                            [0x19U] << 3U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xfdffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (0x2000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                            [0x19U] << 3U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xfbffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (0x4000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                            [0x1aU] << 4U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xfbffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (0x4000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                            [0x1aU] << 4U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xf7ffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (0x8000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                            [0x1bU] << 5U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xf7ffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (0x8000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                            [0x1bU] << 5U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xefffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (0x10000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                             [0x1cU] << 6U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xefffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (0x10000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                             [0x1cU] << 6U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xdfffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (0x20000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                             [0x1dU] << 7U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xdfffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (0x20000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                             [0x1dU] << 7U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0xbfffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (0x40000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                             [0x1eU] << 8U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0xbfffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (0x40000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                             [0x1eU] << 8U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st 
        = ((0x7fffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_1st) 
           | (0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                             [0x1fU] << 9U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd 
        = ((0x7fffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_array_2nd) 
           | (0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                             [0x1fU] << 9U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uart 
        = ((0x10000000U <= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)) 
           & (0x10000fffU >= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__r_trans 
        = ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2dc.valid) 
           & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__rw_req));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_trans 
        = ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2dc.valid) 
           & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__rw_req)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_hs 
        = ((IData)(vlSelf->axi_w_ready_i) & (2U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_state)));
    vlSelf->ysyx_22040632_top__DOT____Vcellout__ysyx_22040632_idu_i__regs_o[0U] 
        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
        [0U];
    vlSymsp->TOP__ysyx_22040632_top__DOT__wb2id.data2reg 
        = ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.ld_en2wb)
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.data_ld2wb
            : vlSymsp->TOP__ysyx_22040632_top__DOT__mem2wb.data2wb);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__en_clint 
        = ((0x2004000U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)) 
           | (0x200bff8U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_hs 
        = ((2U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_state)) 
           & (IData)(vlSelf->axi_r_valid_i));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable 
        = (((((((((0x40000000U <= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)) 
                  & (0x7fffffffU >= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem))) 
                 | ((0x30000000U <= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)) 
                    & (0x3fffffffU >= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)))) 
                | ((0x10001000U <= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)) 
                   & (0x10001fffU >= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)))) 
               | ((0x10000000U <= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)) 
                  & (0x10000fffU >= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)))) 
              | ((0x10002000U <= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)) 
                 & (0x10002fffU >= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)))) 
             | ((0x10003000U <= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)) 
                & (0x10003fffU >= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)))) 
            | ((0x10004000U <= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)) 
               & (0x10004fffU >= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)))) 
           | (0xfc000000U <= (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__btb_en 
        = ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2if.btb_add2if) 
           & (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.pc2mem 
              != (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__BTB
                          [(7U & ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__cnt) 
                                  - (IData)(1U)))] 
                          >> 0x20U))));
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
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index 
        = (0x1fU & ((8U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cs))
                     ? (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cnt_f)
                     : (IData)((vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                >> 6U))));
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
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__uncacheable 
        = (((((((((0x40000000U <= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc) 
                  & (0x7fffffffU >= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc)) 
                 | ((0x30000000U <= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc) 
                    & (0x3fffffffU >= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc))) 
                | ((0x10001000U <= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc) 
                   & (0x10001fffU >= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc))) 
               | ((0x10000000U <= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc) 
                  & (0x10000fffU >= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc))) 
              | ((0x10002000U <= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc) 
                 & (0x10002fffU >= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc))) 
             | ((0x10003000U <= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc) 
                & (0x10003fffU >= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc))) 
            | ((0x10004000U <= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc) 
               & (0x10004fffU >= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc))) 
           | (0xfc000000U <= vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc));
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
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__intrrupt_timing 
        = (((IData)(vlSelf->ysyx_22040632_top__DOT__intrrupt_timing2ex) 
            & (0U != vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.pc2ex)) 
           & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__mem_busy)));
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
    vlSymsp->TOP__ysyx_22040632_top__DOT__immem.data_read 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg)
            ? vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.data_read
            : 0ULL);
    __Vtableidx7 = vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation;
    vlSymsp->TOP__ysyx_22040632_top__DOT__dif.divw 
        = Vysyx_22040632_top__ConstPool__TABLE_hb3b3546f_0
        [__Vtableidx7];
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
    vlSymsp->TOP__ysyx_22040632_top__DOT__imif.data_read 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg)
            ? 0ULL : vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.data_read);
    __Vtableidx5 = vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__op_div2ex 
        = Vysyx_22040632_top__ConstPool__TABLE_h32bb5fb4_0
        [__Vtableidx5];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__jen4 
        = ((0x3bU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation)) 
           | (0x3aU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation)));
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
    } else if (VL_LIKELY(((((((((0x1063U == (0x707fU 
                                             & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                                | (0x5063U == (0x707fU 
                                               & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                               | (0x7063U == (0x707fU 
                                              & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                              | (0x4063U == (0x707fU 
                                             & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                             | (0x6063U == (0x707fU 
                                            & vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id))) 
                            | (0x6bU == vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                           | (0x7bU == vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) 
                          | (0U == vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)))) {
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
        } else if ((0x6bU == vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id)) {
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
        VL_WRITEF("@pc:%x instruction:%x not implemented\n",
                  32,vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.pc2id,
                  32,vlSymsp->TOP__ysyx_22040632_top__DOT__if2id.inst2id);
    }
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
    vlSymsp->TOP__ysyx_22040632_top__DOT__mif.mul_signed 
        = ((((0x1eU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation)) 
             | (0x2dU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) 
            | (0x47U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation)))
            ? 3U : 0U);
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
    vlSymsp->TOP__ysyx_22040632_top__DOT__immem.w_hs 
        = ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__idle_flg)) 
           & ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg) 
              & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_hs)));
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
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__en_clint) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__ld_wr 
            = ((0x2004000U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem))
                ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_clint_i__DOT__clint
               [0U] : ((0x200bff8U == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem))
                        ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_clint_i__DOT__clint
                       [1U] : 0ULL));
        vlSymsp->TOP__ysyx_22040632_top__DOT__mem2clint.wen_clint 
            = ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.sd_en2mem) 
               | (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.ld_en2mem));
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__ld_wr 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__ld_wr0;
        vlSymsp->TOP__ysyx_22040632_top__DOT__mem2clint.wen_clint = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__wt 
        = ((((IData)(vlSelf->ysyx_22040632_top__DOT__mem_busy) 
             | (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.ld_en2mem)) 
            | (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.sd_en2mem)) 
           & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__en_clint)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_done 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_hs) 
           & (IData)(vlSelf->axi_r_last_i));
    vlSymsp->TOP__ysyx_22040632_top__DOT__imif.r_hs 
        = ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__idle_flg)) 
           & ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg)) 
              & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_hs)));
    vlSelf->axi_w_strb_o = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg)
                             ? ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable)
                                 ? (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__wmask_uncacheble)
                                 : 0xffU) : 0U);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__w_way 
        = ((0U != (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__age_1st) 
                    << 1U) | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__age_2nd))) 
           & ((2U == (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__age_1st) 
                       << 1U) | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__age_2nd))) 
              | (1U != (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__age_1st) 
                         << 1U) | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__age_2nd)))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_1st 
        = (1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                 [vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index] 
                 >> 0x16U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_2nd 
        = (1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                 [vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index] 
                 >> 0x16U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st 
        = (((0x1fffffU & (IData)((vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                  >> 0xbU))) == (0x1fffffU 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                                                 [vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index])) 
           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
              [vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index] 
              >> 0x15U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd 
        = (((0x1fffffU & (IData)((vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                  >> 0xbU))) == (0x1fffffU 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                                                 [vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index])) 
           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
              [vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index] 
              >> 0x15U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__age_1st 
        = (1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                 [vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index] 
                 >> 0x17U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__age_2nd 
        = (1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                 [vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index] 
                 >> 0x17U));
    vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.valid 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__miss_in_inst_pb) 
           | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__uncacheable));
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg) {
        vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_len 
            = (0xffU & ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable)
                         ? 0U : 7U));
        vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_size 
            = (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable) 
                & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uart))
                ? 0U : (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable) 
                         & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uart)))
                         ? 2U : 3U));
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__uncacheable) {
        vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_len 
            = (0xffU & 0U);
        vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_size = 2U;
    } else {
        vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_len 
            = (0xffU & 7U);
        vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_size = 3U;
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
    if ((1U & ((~ (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.divw)) 
               | (0x40U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__len))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__result 
            = ((((QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[
                                 (((IData)(0x3fU) + 
                                   (0x7fU & (((IData)(0x7eU) 
                                              - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                             - (IData)(0x3fU)))) 
                                  >> 5U)])) << ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (((IData)(0x7eU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                                     - (IData)(0x3fU))))
                                                 ? 0x20U
                                                 : 
                                                ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & (((IData)(0x7eU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                                     - (IData)(0x3fU)))))) 
                | (((0U == (0x1fU & (((IData)(0x7eU) 
                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                     - (IData)(0x3fU))))
                     ? 0ULL : ((QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[
                                               (((IData)(0x1fU) 
                                                 + 
                                                 (0x7fU 
                                                  & (((IData)(0x7eU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                                     - (IData)(0x3fU)))) 
                                                >> 5U)])) 
                               << ((IData)(0x20U) - 
                                   (0x1fU & (((IData)(0x7eU) 
                                              - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                             - (IData)(0x3fU)))))) 
                   | ((QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[
                                      (3U & ((((IData)(0x7eU) 
                                               - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                              - (IData)(0x3fU)) 
                                             >> 5U))])) 
                      >> (0x1fU & (((IData)(0x7eU) 
                                    - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                   - (IData)(0x3fU)))))) 
               - vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__dvs);
    } else if ((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.divw)) 
                         | (0x40U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__len)))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__result 
            = (QData)((IData)(((((0U == (0x1fU & (((IData)(0x3eU) 
                                                   - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                                  - (IData)(0x1fU))))
                                  ? 0U : (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[
                                          (((IData)(0x1fU) 
                                            + (0x7fU 
                                               & (((IData)(0x3eU) 
                                                   - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                                  - (IData)(0x1fU)))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & (((IData)(0x3eU) 
                                                     - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                                    - (IData)(0x1fU)))))) 
                                | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[
                                   (3U & ((((IData)(0x3eU) 
                                            - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                           - (IData)(0x1fU)) 
                                          >> 5U))] 
                                   >> (0x1fU & (((IData)(0x3eU) 
                                                 - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                                - (IData)(0x1fU))))) 
                               - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__dvs))));
    }
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
        = Vysyx_22040632_top__ConstPool__TABLE_h84f215d2_0
        [__Vtableidx4];
    vlSymsp->TOP__ysyx_22040632_top__DOT__immem.rw_valid 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable)
            ? ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__rw_valid) 
               & (~ (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__immem.rw_ready)))
            : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__rw_valid) 
               & (~ (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__immem.rw_ready))));
    vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.w_last 
        = ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__idle_flg)) 
           & ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg)
               ? ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable)
                   ? (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__immem.w_hs)
                   : (8U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__w_cnt)))
               : (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imif.w_last)));
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
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__trans_done 
        = ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_req)
            ? (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_done)
            : (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__b_hs));
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
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
           | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd));
    vlSymsp->TOP__ysyx_22040632_top__DOT__mem2dc.ready 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable)
            ? (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__immem.rw_ready)
            : ((((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_1st) 
                 | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__hit_2nd)) 
                & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__rw_req)) 
               | ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__rw_req)) 
                  & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__sd_ready_en))));
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
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__rw_sh 
        = (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__uncacheable)
             ? (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imif.r_hs)
             : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__hit_1st) 
                | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__hit_2nd))) 
           & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.valid));
    vlSelf->axi_aw_len_o = vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_len;
    vlSelf->axi_ar_len_o = vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_len;
    vlSelf->axi_aw_size_o = vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_size;
    vlSelf->axi_ar_size_o = vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_size;
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
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__if_sh 
        = ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imif.rw_valid) 
           & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imif.rw_ready));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_sh 
        = ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__immem.rw_valid) 
           & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__immem.rw_ready));
    vlSelf->axi_w_last_o = vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.w_last;
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
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__rw_ready_en 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__trans_done) 
           | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__rw_ready));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__ls_sh 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2dc.valid) 
            & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mem2dc.ready)) 
           | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__en_clint));
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
                         ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_2ndway
                        [vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index]
                         : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_dtag_array_d__DOT__tag_array_1stway
                        [vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index]));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty 
        = (((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_way)) 
            & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_1st)) 
           | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_way) 
              & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__dirty_2nd)));
    __Vtableidx3 = (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__if_sh) 
                     << 7U) | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__cnt_vld) 
                                << 5U) | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_sh) 
                                           << 4U) | 
                                          (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imif.rw_valid) 
                                            << 3U) 
                                           | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__immem.rw_valid) 
                                               << 2U) 
                                              | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__cs))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__ns 
        = Vysyx_22040632_top__ConstPool__TABLE_hed7008f7_0
        [__Vtableidx3];
    vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_valid 
        = ((~ (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__idle_flg) 
                | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__if_sh)) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_sh))) 
           & ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg)
               ? (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__immem.rw_valid)
               : (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imif.rw_valid)));
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
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__block 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.ld_en2mem) 
            & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__ls_sh))) 
           | (IData)(vlSelf->ysyx_22040632_top__DOT__alu_busy));
    vlSymsp->TOP__ysyx_22040632_top__DOT__id2if.block_id2if 
        = (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__block_ld2if) 
            | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__block_ld)) 
           & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__ls_sh)));
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
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_valid 
        = ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_valid) 
           & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_req));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_valid 
        = ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_valid) 
           & (~ (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_req)));
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
    vlSymsp->TOP__ysyx_22040632_top__DOT__axi.axi_ar_valid 
        = ((1U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_state)) 
           & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_valid));
    vlSymsp->TOP__ysyx_22040632_top__DOT__axi.axi_aw_valid 
        = ((1U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_state)) 
           & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_valid));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__axi_write_en 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__immem.w_hs) 
            | ((1U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_state)) 
               & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_valid))) 
           & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable)));
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
    vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_addr 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg)
            ? (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable) 
                & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uart))
                ? (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)
                : (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable) 
                    & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uart)))
                    ? ((IData)((vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                >> 2U)) << 2U) : ((8U 
                                                   == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cs))
                                                   ? 
                                                  ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__tag_read 
                                                    << 0xbU) 
                                                   | (0x7c0U 
                                                      & ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cnt_f) 
                                                         << 6U)))
                                                   : 
                                                  ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__axi_write_state)
                                                    ? 
                                                   ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__tag_read 
                                                     << 0xbU) 
                                                    | (0x7c0U 
                                                       & ((IData)(
                                                                  (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                                   >> 6U)) 
                                                          << 6U)))
                                                    : 
                                                   ((IData)(
                                                            (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                             >> 6U)) 
                                                    << 6U)))))
            : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__uncacheable)
                ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc
                : (0xffffffc0U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc)));
    vlSelf->axi_ar_valid_o = vlSymsp->TOP__ysyx_22040632_top__DOT__axi.axi_ar_valid;
    __Vtableidx2 = (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_done) 
                     << 4U) | ((((IData)(vlSelf->axi_ar_ready_i) 
                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__axi.axi_ar_valid)) 
                                << 3U) | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_valid) 
                                           << 2U) | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_state))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_state_nxt 
        = Vysyx_22040632_top__ConstPool__TABLE_h4836bee5_0
        [__Vtableidx2];
    vlSelf->axi_aw_valid_o = vlSymsp->TOP__ysyx_22040632_top__DOT__axi.axi_aw_valid;
    __Vtableidx1 = (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_valid) 
                     << 5U) | ((((IData)(vlSelf->axi_aw_ready_i) 
                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__axi.axi_aw_valid)) 
                                << 4U) | ((((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_hs) 
                                            & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.w_last)) 
                                           << 3U) | 
                                          (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__b_hs) 
                                            << 2U) 
                                           | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_state)))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_state_nxt 
        = Vysyx_22040632_top__ConstPool__TABLE_ha150fa3d_0
        [__Vtableidx1];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__index 
        = ((1U & (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__wen) 
                   | (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__wen_sd))) 
                  & ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__axi_write_start)) 
                     & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__axi_write_en)))))
            ? (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index) 
                << 2U) | (3U & (IData)((vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                        >> 4U)))) : 
           ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__w_cnt))
             ? (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index) 
                 << 2U) | (3U & (IData)((vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                         >> 4U)))) : 
            ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__w_cnt))
              ? ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__w_cnt))
                  ? (3U | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index) 
                           << 2U)) : (2U | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index) 
                                            << 2U)))
              : ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__w_cnt))
                  ? (1U | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index) 
                           << 2U)) : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index) 
                                      << 2U)))));
    vlSelf->ysyx_22040632_top__DOT__flush = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__jen0) 
                                             | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__jen1));
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
    vlSelf->axi_aw_addr_o = vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_addr;
    vlSelf->axi_ar_addr_o = vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_addr;
    if ((0x40U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__index))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[0U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_01[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[1U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_01[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[2U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_01[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[3U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_01[3U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[0U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_11[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[1U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_11[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[2U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_11[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[3U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_11[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[0U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_00[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[1U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_00[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[2U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_00[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[3U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_00[3U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[0U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_10[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[1U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_10[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[2U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_10[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[3U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_10[3U];
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__flush_in_id 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__flush) 
           | (IData)(vlSelf->ysyx_22040632_top__DOT__fence_sig));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__flush_if 
        = (((IData)(vlSelf->ysyx_22040632_top__DOT__flush) 
            | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc_en)) 
           | (IData)(vlSelf->ysyx_22040632_top__DOT__fence_sig));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c 
        = ((0xffff8000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c) 
           | (0x7fffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c 
        = ((0xffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c) 
           | ((0x80000000U & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mif.mul_signed) 
                               << 0x1fU) & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta)) 
              | (0x7fff0000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c 
        = ((0xffff7fffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c) 
           | (0x8000U & (((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mif.mul_signed))
                           ? ((0x1eU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))
                               ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
                                  >> 0xfU) : (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
                                              >> 0xfU))
                           : ((0x1eU != (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation)) 
                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
                                 >> 0xfU))) << 0xfU)));
    __Vilp = 0U;
    while ((__Vilp <= 0x3bU)) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[__Vilp] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vilp = 0x40U;
    while ((__Vilp <= 0x7bU)) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[__Vilp] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    VL_SHIFTL_WWI(128,128,5, __Vtemp_ha1dc8315__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__ysyx_22040632_boothu_i31__in_x, 0x1eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_ha1e05bdf__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__ysyx_22040632_boothu_i31__in_x, 0x1fU);
    VL_ADD_W(4, __Vtemp_h6899326b__0, __Vtemp_ha1dc8315__0, __Vtemp_ha1e05bdf__0);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_ha1dc8315__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__ysyx_22040632_boothu_i31__in_x, 0x1eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_ha1e05fa0__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__ysyx_22040632_boothu_i31__in_x, 0x20U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_ha1e05bdf__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__ysyx_22040632_boothu_i31__in_x, 0x1fU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_ha1e05bdf__2, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__ysyx_22040632_boothu_i31__in_x, 0x1fU);
    if ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mif.mul_signed))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7cU];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7dU];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7eU];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7fU];
    } else if ((1U & ((IData)((0x80000000U == (0xc0000000U 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                      | (IData)((0x40000000U == (0xc0000000U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))))) {
        if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__ysyx_22040632_boothu_i31__DOT__sel_double) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] = 0U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] = 0U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] = 0U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] = 0U;
        } else if ((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[2U])) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                = __Vtemp_h6899326b__0[0U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                = __Vtemp_h6899326b__0[1U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                = __Vtemp_h6899326b__0[2U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                = __Vtemp_h6899326b__0[3U];
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                = __Vtemp_ha1dc8315__1[0U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                = __Vtemp_ha1dc8315__1[1U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                = __Vtemp_ha1dc8315__1[2U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                = __Vtemp_ha1dc8315__1[3U];
        }
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__ysyx_22040632_boothu_i31__DOT__sel_double) {
        if ((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[2U])) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                = __Vtemp_ha1e05fa0__0[0U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                = __Vtemp_ha1e05fa0__0[1U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                = __Vtemp_ha1e05fa0__0[2U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                = __Vtemp_ha1e05fa0__0[3U];
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                = __Vtemp_ha1e05bdf__1[0U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                = __Vtemp_ha1e05bdf__1[1U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                = __Vtemp_ha1e05bdf__1[2U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                = __Vtemp_ha1e05bdf__1[3U];
        }
    } else if ((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[2U])) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
            = __Vtemp_ha1e05bdf__2[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
            = __Vtemp_ha1e05bdf__2[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
            = __Vtemp_ha1e05bdf__2[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
            = __Vtemp_ha1e05bdf__2[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] = 0U;
    }
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hf2bed55a__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__ysyx_22040632_boothu_i15__in_x, 0x1eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hf2ba6884__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__ysyx_22040632_boothu_i15__in_x, 0x1fU);
    VL_ADD_W(4, __Vtemp_h535b723d__0, __Vtemp_hf2bed55a__0, __Vtemp_hf2ba6884__0);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hf2bed55a__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__ysyx_22040632_boothu_i15__in_x, 0x1eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hf2ba68c3__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__ysyx_22040632_boothu_i15__in_x, 0x20U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hf2ba6884__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__ysyx_22040632_boothu_i15__in_x, 0x1fU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hf2ba6884__2, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT____Vcellinp__ysyx_22040632_boothu_i15__in_x, 0x1fU);
    if ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mif.mul_signed))) {
        if ((0x1eU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3cU];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3dU];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3eU];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3fU];
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3cU];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3dU];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3eU];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3fU];
        }
    } else if ((0x1eU == (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__id2ex.operation))) {
        if ((1U & ((IData)((0x80000000U == (0xc0000000U 
                                            & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                   | (IData)((0x40000000U == (0xc0000000U 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))))) {
            if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__ysyx_22040632_boothu_i15__DOT__sel_double) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] = 0U;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] = 0U;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] = 0U;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] = 0U;
            } else if ((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                    = __Vtemp_h535b723d__0[0U];
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                    = __Vtemp_h535b723d__0[1U];
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                    = __Vtemp_h535b723d__0[2U];
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                    = __Vtemp_h535b723d__0[3U];
            } else {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                    = __Vtemp_hf2bed55a__1[0U];
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                    = __Vtemp_hf2bed55a__1[1U];
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                    = __Vtemp_hf2bed55a__1[2U];
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                    = __Vtemp_hf2bed55a__1[3U];
            }
        } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__ysyx_22040632_boothu_i15__DOT__sel_double) {
            if ((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                    = __Vtemp_hf2ba68c3__0[0U];
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                    = __Vtemp_hf2ba68c3__0[1U];
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                    = __Vtemp_hf2ba68c3__0[2U];
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                    = __Vtemp_hf2ba68c3__0[3U];
            } else {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                    = __Vtemp_hf2ba6884__1[0U];
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                    = __Vtemp_hf2ba6884__1[1U];
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                    = __Vtemp_hf2ba6884__1[2U];
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                    = __Vtemp_hf2ba6884__1[3U];
            }
        } else if ((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                = __Vtemp_hf2ba6884__2[0U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                = __Vtemp_hf2ba6884__2[1U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                = __Vtemp_hf2ba6884__2[2U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                = __Vtemp_hf2ba6884__2[3U];
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] = 0U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] = 0U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] = 0U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] = 0U;
        }
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3cU];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3dU];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3eU];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3fU];
    }
    vlSelf->axi_w_data_o = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg)
                             ? ((8U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cs))
                                 ? ((0x20U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cnt_f))
                                     ? ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_cnt)
                                         ? (((QData)((IData)(
                                                             vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[0U])))
                                         : (((QData)((IData)(
                                                             vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[2U]))))
                                     : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_cnt)
                                         ? (((QData)((IData)(
                                                             vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[0U])))
                                         : (((QData)((IData)(
                                                             vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[2U])))))
                                 : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable)
                                     ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__data2sd
                                     : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_way)
                                         ? ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_cnt)
                                             ? (((QData)((IData)(
                                                                 vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[0U])))
                                             : (((QData)((IData)(
                                                                 vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[2U]))))
                                         : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_cnt)
                                             ? (((QData)((IData)(
                                                                 vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[0U])))
                                             : (((QData)((IData)(
                                                                 vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[2U])))))))
                             : vlSymsp->TOP__ysyx_22040632_top__DOT__imif.rw_w_data);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[0U] 
        = ((0xfffffffeU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[0U]) 
           | (1U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c 
                    >> 0x1eU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U] 
        = ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
            << 0x1fU) | ((0x40000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                                         << 0x1eU)) 
                         | ((0x20000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                            << 0x1dU)) 
                            | ((0x10000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                               << 0x1cU)) 
                               | ((0x8000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                 << 0x1bU)) 
                                  | ((0x4000000U & 
                                      (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                       << 0x1aU)) | 
                                     ((0x2000000U & 
                                       (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                        << 0x19U)) 
                                      | ((0x1000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                             << 0x18U)) 
                                         | ((0x800000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                << 0x17U)) 
                                            | ((0x400000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                   << 0x16U)) 
                                               | ((0x200000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                      << 0x15U)) 
                                                  | ((0x100000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                         << 0x14U)) 
                                                     | ((0x80000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                            << 0x13U)) 
                                                        | ((0x40000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                               << 0x12U)) 
                                                           | ((0x20000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                  << 0x11U)) 
                                                              | ((0x10000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                     << 0x10U)) 
                                                                 | ((0x8000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                        << 0xfU)) 
                                                                    | ((0x4000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                           << 0xeU)) 
                                                                       | ((0x2000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                              << 0xdU)) 
                                                                          | ((0x1000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                << 0xcU)) 
                                                                             | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U]))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                           << 0x1eU)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                                             << 0x1dU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                                << 0x1cU)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                                   << 0x1bU)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                      << 0x1aU)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                                         << 0x19U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                                            << 0x18U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                                               << 0x17U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                                  << 0x16U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                                     << 0x15U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                                        << 0x14U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                                           << 0x13U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                                              << 0x12U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                                                << 0x11U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                                << 0xeU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                                << 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                << 0xbU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                << 7U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                << 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                << 3U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U]) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                           << 0x1dU)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                                             << 0x1cU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                                << 0x1bU)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                                   << 0x1aU)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                      << 0x19U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                                         << 0x18U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                                            << 0x17U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                                               << 0x16U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                                  << 0x15U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                                     << 0x14U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                                        << 0x13U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                                           << 0x12U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                                              << 0x11U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                                                << 0x10U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                                << 0xfU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                                << 0xeU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                                << 0xdU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                                << 0xbU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                << 0xaU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                << 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                << 8U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                << 5U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                << 4U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                << 3U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                << 1U)) 
                                                                                | ((4U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U]) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                >> 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 2U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                           << 0x1cU)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                                             << 0x1bU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                                << 0x1aU)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                                   << 0x19U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                      << 0x18U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                                         << 0x17U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                                            << 0x16U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                                               << 0x15U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                                  << 0x14U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                                     << 0x13U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                                        << 0x12U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                                           << 0x11U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                                              << 0x10U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                                                << 0xfU)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                                << 0xeU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                                << 0xbU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                << 9U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                << 8U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                << 7U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                << 6U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                << 5U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                << 4U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                << 2U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU]) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                >> 2U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 3U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                           << 0x1bU)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                                             << 0x1aU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                                << 0x19U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                                   << 0x18U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                      << 0x17U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                                         << 0x16U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                                            << 0x15U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                                               << 0x14U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                                  << 0x13U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                                     << 0x12U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                                        << 0x11U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                                           << 0x10U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                                              << 0xfU)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                                                << 0xeU)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                                << 0xcU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                                << 0xbU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                                << 0xaU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                                << 9U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                << 8U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                << 7U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                << 6U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                << 5U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                << 4U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                << 3U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                << 2U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U]) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                >> 1U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                >> 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                >> 3U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 4U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                           << 0x1aU)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                                             << 0x19U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                                << 0x18U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                                   << 0x17U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                      << 0x16U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                                         << 0x15U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                                            << 0x14U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                                               << 0x13U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                                  << 0x12U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                                     << 0x11U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                                        << 0x10U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                                           << 0xfU)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                                              << 0xeU)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                                                << 0xdU)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                                << 0xbU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                                << 0xaU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                                << 9U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                                << 8U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                << 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                << 6U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                << 5U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                << 4U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                << 3U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                << 2U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U]) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                >> 2U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                >> 3U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 5U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                           << 0x19U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                                             << 0x18U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                                << 0x17U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                                   << 0x16U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                      << 0x15U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                                         << 0x14U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                                            << 0x13U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                                               << 0x12U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                                  << 0x11U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                                     << 0x10U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                                        << 0xfU)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                                           << 0xeU)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                                              << 0xdU)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                                                << 0xcU)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                                << 0xbU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                                << 0xaU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                                << 9U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                                << 8U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                                << 7U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                << 6U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                << 5U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                << 4U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                << 3U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                << 2U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                << 1U)) 
                                                                                | ((0x40U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U]) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                >> 2U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                >> 4U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                >> 5U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 6U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                           << 0x18U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                                             << 0x17U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                                << 0x16U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                                   << 0x15U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                      << 0x14U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                                         << 0x13U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                                            << 0x12U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                                               << 0x11U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                                  << 0x10U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                                     << 0xfU)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                                        << 0xeU)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                                           << 0xdU)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                                              << 0xcU)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                                                << 0xbU)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                                << 0xaU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                                << 9U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                                << 8U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                                << 7U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                                << 6U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                << 5U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                << 4U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                << 2U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                << 1U)) 
                                                                                | ((0x80U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU]) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                >> 2U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                >> 3U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                >> 5U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                >> 6U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 7U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                           << 0x17U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                                             << 0x16U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                                << 0x15U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                                   << 0x14U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                      << 0x13U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                                         << 0x12U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                                            << 0x11U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                                               << 0x10U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                                  << 0xfU)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                                     << 0xeU)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                                        << 0xdU)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                                           << 0xcU)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                                              << 0xbU)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                                                << 0xaU)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                                << 9U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                                << 8U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                                << 7U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                                << 6U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                                << 5U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                << 4U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                << 3U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                << 2U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                << 1U)) 
                                                                                | ((0x100U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U]) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                >> 1U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                >> 2U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                >> 3U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                >> 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                >> 5U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                >> 6U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                >> 7U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 8U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                           << 0x16U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                                             << 0x15U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                                << 0x14U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                                   << 0x13U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                      << 0x12U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                                         << 0x11U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                                            << 0x10U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                                               << 0xfU)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                                  << 0xeU)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                                     << 0xdU)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                                        << 0xcU)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                                           << 0xbU)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                                              << 0xaU)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                                                << 9U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                                << 8U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                                << 7U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                                << 6U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                                << 5U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                                << 4U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                << 3U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                << 2U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                << 1U)) 
                                                                                | ((0x200U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U]) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                >> 1U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                >> 2U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                >> 3U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                >> 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                >> 5U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                >> 6U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                >> 7U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                >> 8U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 9U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                           << 0x15U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                                             << 0x14U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                                << 0x13U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                                   << 0x12U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                      << 0x11U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                                         << 0x10U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                                            << 0xfU)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                                               << 0xeU)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                                  << 0xdU)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                                     << 0xcU)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                                        << 0xbU)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                                           << 0xaU)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                                              << 9U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                                                << 8U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                                << 7U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                                << 6U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                                << 5U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                                << 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                                << 3U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                << 2U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                << 1U)) 
                                                                                | ((0x400U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U]) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                >> 1U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                >> 2U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                >> 3U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                >> 4U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                >> 5U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                >> 6U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                >> 7U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                >> 8U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                >> 9U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 0xaU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                           << 0x14U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                                             << 0x13U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                                << 0x12U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                                   << 0x11U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                      << 0x10U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                                         << 0xfU)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                                            << 0xeU)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                                               << 0xdU)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                                  << 0xcU)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                                     << 0xbU)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                                        << 0xaU)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                                           << 9U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                                              << 8U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                                                << 7U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                                << 6U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                                << 5U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                                << 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                                << 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                                << 2U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                << 1U)) 
                                                                                | ((0x800U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU]) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                >> 1U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                >> 2U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                >> 3U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                >> 4U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                >> 5U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                >> 6U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                >> 7U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                >> 8U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                >> 9U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                >> 0xaU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 0xbU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                           << 0x13U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                                             << 0x12U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                                << 0x11U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                                   << 0x10U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                      << 0xfU)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                                         << 0xeU)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                                            << 0xdU)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                                               << 0xcU)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                                  << 0xbU)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                                     << 0xaU)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                                        << 9U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                                           << 8U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                                              << 7U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                                                << 6U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                                << 5U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                                << 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                                << 3U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                                << 2U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                                << 1U)) 
                                                                                | ((0x1000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U]) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                >> 1U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                >> 2U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                >> 3U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                >> 4U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                >> 5U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                >> 6U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                >> 7U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                >> 8U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                >> 9U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                >> 0xaU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                >> 0xbU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 0xcU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                           << 0x12U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                                             << 0x11U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                                << 0x10U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                                   << 0xfU)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                      << 0xeU)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                                         << 0xdU)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                                            << 0xcU)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                                               << 0xbU)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                                  << 0xaU)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                                     << 9U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                                        << 8U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                                           << 7U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                                              << 6U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                                                << 5U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                                << 4U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                                << 3U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                                << 2U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                                << 1U)) 
                                                                                | ((0x2000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U]) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                >> 1U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                >> 2U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                >> 3U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                >> 4U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                >> 5U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                >> 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                >> 7U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                >> 8U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                >> 9U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                >> 0xaU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                >> 0xbU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                >> 0xcU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 0xdU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                           << 0x11U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                                             << 0x10U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                                << 0xfU)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                                   << 0xeU)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                      << 0xdU)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                                         << 0xcU)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                                            << 0xbU)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                                               << 0xaU)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                                  << 9U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                                     << 8U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                                        << 7U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                                           << 6U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                                              << 5U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                                                << 4U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                                << 3U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                                << 2U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                                << 1U)) 
                                                                                | ((0x4000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U]) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                                >> 1U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                >> 2U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                >> 3U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                >> 4U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                >> 5U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                >> 6U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                >> 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                >> 8U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                >> 9U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                >> 0xaU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                >> 0xbU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                >> 0xcU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                >> 0xdU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 0xeU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                           << 0x10U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                                             << 0xfU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                                << 0xeU)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                                   << 0xdU)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                      << 0xcU)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                                         << 0xbU)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                                            << 0xaU)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                                               << 9U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                                  << 8U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                                     << 7U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                                        << 6U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                                           << 5U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                                              << 4U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                                                << 3U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                                << 2U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                                << 1U)) 
                                                                                | ((0x8000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU]) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                                >> 1U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                                >> 2U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                >> 3U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                >> 4U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                >> 5U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                >> 6U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                >> 7U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                >> 9U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                >> 0xbU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                >> 0xcU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                >> 0xdU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                >> 0xeU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 0xfU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                           << 0xfU)) | ((0x40000000U 
                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                                            << 0xeU)) 
                                        | ((0x20000000U 
                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                               << 0xdU)) 
                                           | ((0x10000000U 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                                  << 0xcU)) 
                                              | ((0x8000000U 
                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                     << 0xbU)) 
                                                 | ((0x4000000U 
                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                                        << 0xaU)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                                           << 9U)) 
                                                       | ((0x1000000U 
                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                                              << 8U)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                                 << 7U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                                    << 6U)) 
                                                                | ((0x200000U 
                                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                                       << 5U)) 
                                                                   | ((0x100000U 
                                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                                          << 4U)) 
                                                                      | ((0x80000U 
                                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                                             << 3U)) 
                                                                         | ((0x40000U 
                                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                                                << 2U)) 
                                                                            | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                                << 1U)) 
                                                                               | ((0x10000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U]) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                                >> 2U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                                >> 3U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                >> 4U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                >> 5U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                >> 6U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                >> 7U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                >> 8U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                >> 9U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                >> 0xcU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                >> 0xdU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                >> 0xeU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                >> 0xfU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 0x10U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                           << 0xeU)) | ((0x40000000U 
                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                                            << 0xdU)) 
                                        | ((0x20000000U 
                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                               << 0xcU)) 
                                           | ((0x10000000U 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                                  << 0xbU)) 
                                              | ((0x8000000U 
                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                     << 0xaU)) 
                                                 | ((0x4000000U 
                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                                        << 9U)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                                           << 8U)) 
                                                       | ((0x1000000U 
                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                                              << 7U)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                                 << 6U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                                    << 5U)) 
                                                                | ((0x200000U 
                                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                                       << 4U)) 
                                                                   | ((0x100000U 
                                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                                          << 3U)) 
                                                                      | ((0x80000U 
                                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                                             << 2U)) 
                                                                         | ((0x40000U 
                                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                                                << 1U)) 
                                                                            | ((0x20000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U]) 
                                                                               | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                                >> 1U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                                >> 2U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                                >> 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                                >> 4U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                >> 5U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                >> 6U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                >> 7U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                >> 8U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                >> 9U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                >> 0xaU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                >> 0xdU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                >> 0xeU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                >> 0xfU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                >> 0x10U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 0x11U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                           << 0xdU)) | ((0x40000000U 
                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                                            << 0xcU)) 
                                        | ((0x20000000U 
                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                               << 0xbU)) 
                                           | ((0x10000000U 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                                  << 0xaU)) 
                                              | ((0x8000000U 
                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                     << 9U)) 
                                                 | ((0x4000000U 
                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                                        << 8U)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                                           << 7U)) 
                                                       | ((0x1000000U 
                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                                              << 6U)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                                 << 5U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                                    << 4U)) 
                                                                | ((0x200000U 
                                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                                       << 3U)) 
                                                                   | ((0x100000U 
                                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                                          << 2U)) 
                                                                      | ((0x80000U 
                                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                                             << 1U)) 
                                                                         | ((0x40000U 
                                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U]) 
                                                                            | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                                >> 1U)) 
                                                                               | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                                >> 2U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                                >> 3U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                                >> 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                                >> 5U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                >> 6U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                >> 7U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                >> 8U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                >> 9U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                >> 0xbU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                >> 0xeU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                >> 0xfU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                >> 0x10U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                >> 0x11U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 0x12U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                           << 0xcU)) | ((0x40000000U 
                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                                            << 0xbU)) 
                                        | ((0x20000000U 
                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                               << 0xaU)) 
                                           | ((0x10000000U 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                                  << 9U)) 
                                              | ((0x8000000U 
                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                     << 8U)) 
                                                 | ((0x4000000U 
                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                                        << 7U)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                                           << 6U)) 
                                                       | ((0x1000000U 
                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                                              << 5U)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                                 << 4U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                                    << 3U)) 
                                                                | ((0x200000U 
                                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                                       << 2U)) 
                                                                   | ((0x100000U 
                                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                                          << 1U)) 
                                                                      | ((0x80000U 
                                                                          & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU]) 
                                                                         | ((0x40000U 
                                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                                                >> 1U)) 
                                                                            | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                                >> 2U)) 
                                                                               | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                                >> 3U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                                >> 5U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                                >> 6U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                >> 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                >> 8U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                >> 9U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                >> 0xcU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                >> 0xfU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                >> 0x10U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                >> 0x11U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                >> 0x12U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 0x13U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                           << 0xbU)) | ((0x40000000U 
                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                                            << 0xaU)) 
                                        | ((0x20000000U 
                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                               << 9U)) 
                                           | ((0x10000000U 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                                  << 8U)) 
                                              | ((0x8000000U 
                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                     << 7U)) 
                                                 | ((0x4000000U 
                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                                        << 6U)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                                           << 5U)) 
                                                       | ((0x1000000U 
                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                                              << 4U)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                                 << 3U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                                    << 2U)) 
                                                                | ((0x200000U 
                                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                                       << 1U)) 
                                                                   | ((0x100000U 
                                                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U]) 
                                                                      | ((0x80000U 
                                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                                             >> 1U)) 
                                                                         | ((0x40000U 
                                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                                                >> 2U)) 
                                                                            | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                                >> 3U)) 
                                                                               | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                                >> 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                                >> 5U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                                >> 6U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                                >> 7U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                >> 8U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                >> 0xdU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                >> 0x10U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                >> 0x11U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                >> 0x12U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                >> 0x13U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 0x14U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                           << 0xaU)) | ((0x40000000U 
                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                                            << 9U)) 
                                        | ((0x20000000U 
                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                               << 8U)) 
                                           | ((0x10000000U 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                                  << 7U)) 
                                              | ((0x8000000U 
                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                     << 6U)) 
                                                 | ((0x4000000U 
                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                                        << 5U)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                                           << 4U)) 
                                                       | ((0x1000000U 
                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                                              << 3U)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                                 << 2U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                                    << 1U)) 
                                                                | ((0x200000U 
                                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U]) 
                                                                   | ((0x100000U 
                                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                                          >> 1U)) 
                                                                      | ((0x80000U 
                                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                                             >> 2U)) 
                                                                         | ((0x40000U 
                                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                                                >> 3U)) 
                                                                            | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                                >> 4U)) 
                                                                               | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                                >> 5U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                                >> 6U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                                >> 7U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                                >> 8U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                >> 9U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                >> 0xaU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                >> 0xeU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                >> 0x11U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                >> 0x12U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                >> 0x13U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                >> 0x14U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 0x15U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                           << 9U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                                          << 8U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                           << 7U)) 
                                       | ((0x10000000U 
                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                              << 6U)) 
                                          | ((0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                 << 5U)) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                                    << 4U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                                       << 3U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                                          << 2U)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                             << 1U)) 
                                                         | ((0x400000U 
                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U]) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                                   >> 1U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                                      >> 2U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                                         >> 3U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                                            >> 4U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                               >> 5U)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                                >> 6U)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                                >> 7U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                                >> 8U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                                >> 9U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                >> 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                >> 0xfU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                >> 0x12U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                >> 0x13U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                >> 0x14U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                >> 0x15U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 0x16U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                           << 8U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                                          << 7U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                           << 6U)) 
                                       | ((0x10000000U 
                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                              << 5U)) 
                                          | ((0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                 << 4U)) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                                    << 3U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                                       << 2U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                                          << 1U)) 
                                                      | ((0x800000U 
                                                          & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU]) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                                >> 1U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                                   >> 2U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                                      >> 3U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                                         >> 4U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                                            >> 5U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                               >> 6U)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                                >> 7U)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                                >> 8U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                                >> 9U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                >> 0xcU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                >> 0x10U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                >> 0x13U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                >> 0x14U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                >> 0x15U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                >> 0x16U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 0x17U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                           << 7U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                                          << 6U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                           << 5U)) 
                                       | ((0x10000000U 
                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                              << 4U)) 
                                          | ((0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                 << 3U)) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                                    << 2U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                                       << 1U)) 
                                                   | ((0x1000000U 
                                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U]) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                             >> 1U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                                >> 2U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                                   >> 3U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                                      >> 4U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                                         >> 5U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                                            >> 6U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                               >> 7U)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                                >> 8U)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                                >> 9U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                >> 0xdU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                >> 0x14U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                >> 0x15U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                >> 0x16U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                >> 0x17U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 0x18U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                           << 6U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                                          << 5U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                           << 4U)) 
                                       | ((0x10000000U 
                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                              << 3U)) 
                                          | ((0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                 << 2U)) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                                    << 1U)) 
                                                | ((0x2000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U]) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                                          >> 1U)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                             >> 2U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                                >> 3U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                                   >> 4U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                                      >> 5U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                                         >> 6U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                                            >> 7U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                               >> 8U)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                                >> 9U)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                                >> 0xaU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                >> 0xeU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                >> 0x12U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                >> 0x15U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                >> 0x16U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                >> 0x17U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                >> 0x18U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 0x19U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                           << 5U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                                          << 4U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                           << 3U)) 
                                       | ((0x10000000U 
                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                              << 2U)) 
                                          | ((0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                 << 1U)) 
                                             | ((0x4000000U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U]) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                                       >> 1U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                                          >> 2U)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                             >> 3U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                                >> 4U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                                   >> 5U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                                      >> 6U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                                         >> 7U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                                            >> 8U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                               >> 9U)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                                >> 0xaU)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                                >> 0xbU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                >> 0xfU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                >> 0x13U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                >> 0x16U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                >> 0x17U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                >> 0x18U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                >> 0x19U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 0x1aU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                           << 4U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                                          << 3U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                           << 2U)) 
                                       | ((0x10000000U 
                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                              << 1U)) 
                                          | ((0x8000000U 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU]) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                                    >> 1U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                                       >> 2U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                                          >> 3U)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                             >> 4U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                                >> 5U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                                   >> 6U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                                      >> 7U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                                         >> 8U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                                            >> 9U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                               >> 0xaU)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                                >> 0xbU)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                                >> 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                >> 0x10U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                >> 0x14U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                >> 0x18U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                >> 0x19U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                >> 0x1aU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 0x1bU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                           << 3U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                                          << 2U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                           << 1U)) 
                                       | ((0x10000000U 
                                           & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U]) 
                                          | ((0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                 >> 1U)) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                                    >> 2U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                                       >> 3U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                                          >> 4U)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                             >> 5U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                                >> 6U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                                   >> 7U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                                      >> 8U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                                         >> 9U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                                            >> 0xaU)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                               >> 0xbU)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                                >> 0xcU)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                                >> 0xdU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                >> 0x11U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                >> 0x15U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                >> 0x17U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                >> 0x18U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                >> 0x1aU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                >> 0x1bU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 0x1cU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                           << 2U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                                          << 1U)) | 
                                      ((0x20000000U 
                                        & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U]) 
                                       | ((0x10000000U 
                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                              >> 1U)) 
                                          | ((0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                 >> 2U)) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                                    >> 3U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                                       >> 4U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                                          >> 5U)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                             >> 6U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                                >> 7U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                                   >> 8U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                                      >> 9U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                                         >> 0xaU)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                                            >> 0xbU)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                               >> 0xcU)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                                >> 0xdU)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                                >> 0xeU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                >> 0x12U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                >> 0x16U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                >> 0x17U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                >> 0x18U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                >> 0x19U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                >> 0x1aU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                >> 0x1cU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 0x1dU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                           << 1U)) | ((0x40000000U 
                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U]) 
                                      | ((0x20000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                             >> 1U)) 
                                         | ((0x10000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                                >> 2U)) 
                                            | ((0x8000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                   >> 3U)) 
                                               | ((0x4000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                                      >> 4U)) 
                                                  | ((0x2000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                                         >> 5U)) 
                                                     | ((0x1000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                                            >> 6U)) 
                                                        | ((0x800000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                               >> 7U)) 
                                                           | ((0x400000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                                  >> 8U)) 
                                                              | ((0x200000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                                     >> 9U)) 
                                                                 | ((0x100000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                                        >> 0xaU)) 
                                                                    | ((0x80000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                                           >> 0xbU)) 
                                                                       | ((0x40000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                                              >> 0xcU)) 
                                                                          | ((0x20000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                                >> 0xdU)) 
                                                                             | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                                >> 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                >> 0x13U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                >> 0x17U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                >> 0x18U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                >> 0x19U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                >> 0x1bU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                >> 0x1cU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                >> 0x1dU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 0x1eU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
        = ((0x80000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU]) 
           | ((0x40000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x78U] 
                              >> 1U)) | ((0x20000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x74U] 
                                             >> 2U)) 
                                         | ((0x10000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x70U] 
                                                >> 3U)) 
                                            | ((0x8000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6cU] 
                                                   >> 4U)) 
                                               | ((0x4000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x68U] 
                                                      >> 5U)) 
                                                  | ((0x2000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x64U] 
                                                         >> 6U)) 
                                                     | ((0x1000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x60U] 
                                                            >> 7U)) 
                                                        | ((0x800000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5cU] 
                                                               >> 8U)) 
                                                           | ((0x400000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x58U] 
                                                                  >> 9U)) 
                                                              | ((0x200000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x54U] 
                                                                     >> 0xaU)) 
                                                                 | ((0x100000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x50U] 
                                                                        >> 0xbU)) 
                                                                    | ((0x80000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4cU] 
                                                                           >> 0xcU)) 
                                                                       | ((0x40000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x48U] 
                                                                              >> 0xdU)) 
                                                                          | ((0x20000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x44U] 
                                                                                >> 0xeU)) 
                                                                             | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x40U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                                                                                >> 0x10U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x38U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x34U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x30U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2cU] 
                                                                                >> 0x14U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x28U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x24U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x20U] 
                                                                                >> 0x17U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1cU] 
                                                                                >> 0x18U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x18U] 
                                                                                >> 0x19U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x14U] 
                                                                                >> 0x1aU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x10U] 
                                                                                >> 0x1bU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xcU] 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[8U] 
                                                                                >> 0x1dU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[4U] 
                                                                                >> 0x1eU)) 
                                                                                | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0U] 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x20U] 
        = ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
            << 0x1fU) | ((0x40000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                         << 0x1eU)) 
                         | ((0x20000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                            << 0x1dU)) 
                            | ((0x10000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                               << 0x1cU)) 
                               | ((0x8000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                 << 0x1bU)) 
                                  | ((0x4000000U & 
                                      (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                       << 0x1aU)) | 
                                     ((0x2000000U & 
                                       (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                        << 0x19U)) 
                                      | ((0x1000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                             << 0x18U)) 
                                         | ((0x800000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                << 0x17U)) 
                                            | ((0x400000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                   << 0x16U)) 
                                               | ((0x200000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                      << 0x15U)) 
                                                  | ((0x100000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                         << 0x14U)) 
                                                     | ((0x80000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                            << 0x13U)) 
                                                        | ((0x40000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                               << 0x12U)) 
                                                           | ((0x20000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                  << 0x11U)) 
                                                              | ((0x10000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                     << 0x10U)) 
                                                                 | ((0x8000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                        << 0xfU)) 
                                                                    | ((0x4000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                           << 0xeU)) 
                                                                       | ((0x2000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                              << 0xdU)) 
                                                                          | ((0x1000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                << 0xcU)) 
                                                                             | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U]))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x21U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 0x1eU)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                             << 0x1dU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                                << 0x1cU)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                                   << 0x1bU)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                      << 0x1aU)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                         << 0x19U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                            << 0x18U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                               << 0x17U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                                  << 0x16U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                     << 0x15U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                        << 0x14U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                           << 0x13U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                              << 0x12U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                                << 0x11U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                << 0xeU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                << 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                << 0xbU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                << 7U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                << 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                << 3U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U]) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x22U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 0x1dU)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                             << 0x1cU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                                << 0x1bU)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                                   << 0x1aU)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                      << 0x19U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                         << 0x18U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                            << 0x17U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                               << 0x16U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                                  << 0x15U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                     << 0x14U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                        << 0x13U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                           << 0x12U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                              << 0x11U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                                << 0x10U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                                << 0xfU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                << 0xeU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                << 0xdU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                << 0xbU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                << 0xaU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                << 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                << 8U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                << 5U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                << 4U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                << 3U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                << 1U)) 
                                                                                | ((4U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U]) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 2U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x23U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 0x1cU)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                             << 0x1bU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                                << 0x1aU)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                                   << 0x19U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                      << 0x18U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                         << 0x17U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                            << 0x16U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                               << 0x15U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                                  << 0x14U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                     << 0x13U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                        << 0x12U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                           << 0x11U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                              << 0x10U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                                << 0xfU)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                                << 0xeU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                << 0xbU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                << 9U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                << 8U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                << 7U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                << 6U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                << 5U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                << 4U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                << 2U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU]) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 2U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 3U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x24U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 0x1bU)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                             << 0x1aU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                                << 0x19U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                                   << 0x18U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                      << 0x17U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                         << 0x16U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                            << 0x15U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                               << 0x14U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                                  << 0x13U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                     << 0x12U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                        << 0x11U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                           << 0x10U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                              << 0xfU)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                                << 0xeU)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                << 0xcU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                << 0xbU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                << 0xaU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                << 9U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                << 8U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                << 7U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                << 6U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                << 5U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                << 4U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                << 3U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                << 2U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U]) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 1U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 3U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 4U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x25U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 0x1aU)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                             << 0x19U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                                << 0x18U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                                   << 0x17U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                      << 0x16U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                         << 0x15U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                            << 0x14U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                               << 0x13U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                                  << 0x12U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                     << 0x11U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                        << 0x10U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                           << 0xfU)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                              << 0xeU)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                                << 0xdU)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                << 0xbU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                << 0xaU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                << 9U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                << 8U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                << 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                << 6U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                << 5U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                << 4U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                << 3U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                << 2U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U]) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 2U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 3U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 5U)))))))))))))))))))))))))))))))));
}
