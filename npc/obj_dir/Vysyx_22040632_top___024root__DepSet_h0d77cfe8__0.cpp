// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040632_top__Syms.h"
#include "Vysyx_22040632_top___024root.h"

void Vysyx_22040632_top___024unit____Vdpiimwrap_paddr_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vysyx_22040632_top___024unit____Vdpiimwrap_npcexit_TOP____024unit(IData/*31:0*/ code);
extern const VlUnpacked<CData/*0:0*/, 64> Vysyx_22040632_top__ConstPool__TABLE_h8aea5909_0;

VL_INLINE_OPT void Vysyx_22040632_top___024root___sequent__TOP__2(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___sequent__TOP__2\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    CData/*5:0*/ __Vtableidx2;
    CData/*6:0*/ __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__len;
    VlWide<4>/*127:0*/ __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd;
    QData/*63:0*/ __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__dvs;
    CData/*6:0*/ __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt;
    CData/*4:0*/ __Vdlyvdim0__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v0;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v0;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v1;
    CData/*0:0*/ __Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v1;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v2;
    CData/*0:0*/ __Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v2;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v3;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v4;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v5;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v6;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v7;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v8;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v9;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v10;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v11;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v12;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v13;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v14;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v15;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v16;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v17;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v18;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v19;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v20;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v21;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v22;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v23;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v24;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v25;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v26;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v27;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v28;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v29;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v30;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v31;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v32;
    CData/*0:0*/ __Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v33;
    VlWide<4>/*127:0*/ __Vtemp_hba47adb2__0;
    VlWide<4>/*127:0*/ __Vtemp_h62e038f1__0;
    VlWide<4>/*127:0*/ __Vtemp_he1499c76__0;
    VlWide<4>/*127:0*/ __Vtemp_h1f996e7a__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__1;
    VlWide<4>/*127:0*/ __Vtemp_h26d9ddfa__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__2;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__3;
    VlWide<4>/*127:0*/ __Vtemp_hb664cb99__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__4;
    VlWide<4>/*127:0*/ __Vtemp_hb31cf733__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__5;
    VlWide<4>/*127:0*/ __Vtemp_he6f4f183__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__6;
    VlWide<4>/*127:0*/ __Vtemp_h81116a99__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__7;
    VlWide<4>/*127:0*/ __Vtemp_hff0525ad__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__8;
    VlWide<4>/*127:0*/ __Vtemp_hcec71c77__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__9;
    VlWide<4>/*127:0*/ __Vtemp_h84147280__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__10;
    VlWide<4>/*127:0*/ __Vtemp_h241520d7__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__11;
    VlWide<4>/*127:0*/ __Vtemp_hdbea4b15__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__12;
    VlWide<4>/*127:0*/ __Vtemp_h560bdec1__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__13;
    VlWide<4>/*127:0*/ __Vtemp_h50820909__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__14;
    VlWide<4>/*127:0*/ __Vtemp_hec716d74__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__15;
    VlWide<4>/*127:0*/ __Vtemp_h83baf804__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__16;
    VlWide<4>/*127:0*/ __Vtemp_hfd215a1d__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__17;
    VlWide<4>/*127:0*/ __Vtemp_h6b12fc44__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__18;
    VlWide<4>/*127:0*/ __Vtemp_h9f13f4a2__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__19;
    VlWide<4>/*127:0*/ __Vtemp_h7d7490d9__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__20;
    VlWide<4>/*127:0*/ __Vtemp_h20375fa5__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__21;
    VlWide<4>/*127:0*/ __Vtemp_hb3202d8f__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__22;
    VlWide<4>/*127:0*/ __Vtemp_h4a8dd3b9__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__23;
    VlWide<4>/*127:0*/ __Vtemp_he4c681a4__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__24;
    VlWide<4>/*127:0*/ __Vtemp_h70c7bb94__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__25;
    VlWide<4>/*127:0*/ __Vtemp_h547a22d1__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__26;
    VlWide<4>/*127:0*/ __Vtemp_h7b9e1510__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__27;
    VlWide<4>/*127:0*/ __Vtemp_hb8d874c9__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__28;
    VlWide<4>/*127:0*/ __Vtemp_h030c6d76__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__29;
    VlWide<4>/*127:0*/ __Vtemp_h2391c84f__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__30;
    VlWide<4>/*127:0*/ __Vtemp_h550a600a__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__31;
    VlWide<4>/*127:0*/ __Vtemp_hcca3752c__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__32;
    VlWide<4>/*127:0*/ __Vtemp_h72ec1bd8__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__33;
    VlWide<4>/*127:0*/ __Vtemp_h3bfc8245__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__34;
    VlWide<4>/*127:0*/ __Vtemp_hfda4ee93__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__35;
    VlWide<4>/*127:0*/ __Vtemp_h289dc6ba__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__36;
    VlWide<4>/*127:0*/ __Vtemp_h53acf226__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__37;
    VlWide<4>/*127:0*/ __Vtemp_h4b9ea226__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__38;
    VlWide<4>/*127:0*/ __Vtemp_h5ed08074__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__39;
    VlWide<4>/*127:0*/ __Vtemp_hc655189f__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__40;
    VlWide<4>/*127:0*/ __Vtemp_hf6d1fe4e__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__41;
    VlWide<4>/*127:0*/ __Vtemp_heceb2615__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__42;
    VlWide<4>/*127:0*/ __Vtemp_he54e7a9b__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__43;
    VlWide<4>/*127:0*/ __Vtemp_h6626edb3__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__44;
    VlWide<4>/*127:0*/ __Vtemp_hcd554158__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__45;
    VlWide<4>/*127:0*/ __Vtemp_hcd279931__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__46;
    VlWide<4>/*127:0*/ __Vtemp_h4026c491__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__47;
    VlWide<4>/*127:0*/ __Vtemp_hd0072a8c__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__48;
    VlWide<4>/*127:0*/ __Vtemp_he4d0efc8__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__49;
    VlWide<4>/*127:0*/ __Vtemp_h1b5d79d1__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__50;
    VlWide<4>/*127:0*/ __Vtemp_h088aa92c__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__51;
    VlWide<4>/*127:0*/ __Vtemp_h13d8aed8__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__52;
    VlWide<4>/*127:0*/ __Vtemp_h5c7d0a1c__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__53;
    VlWide<4>/*127:0*/ __Vtemp_hc08be16e__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__54;
    VlWide<4>/*127:0*/ __Vtemp_hd36dbabc__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__55;
    VlWide<4>/*127:0*/ __Vtemp_h467a05e4__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__56;
    VlWide<4>/*127:0*/ __Vtemp_h8cbd474f__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__57;
    VlWide<4>/*127:0*/ __Vtemp_h3a987d1f__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__58;
    VlWide<4>/*127:0*/ __Vtemp_h6ad552fe__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__59;
    VlWide<4>/*127:0*/ __Vtemp_h729643f9__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__60;
    VlWide<4>/*127:0*/ __Vtemp_h060a2388__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__61;
    VlWide<4>/*127:0*/ __Vtemp_h86ab078f__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__62;
    VlWide<4>/*127:0*/ __Vtemp_h275775c6__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__63;
    VlWide<4>/*127:0*/ __Vtemp_hecaff918__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__64;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__65;
    VlWide<4>/*127:0*/ __Vtemp_he2c41732__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__66;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__67;
    VlWide<4>/*127:0*/ __Vtemp_h21cd491d__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__68;
    VlWide<4>/*127:0*/ __Vtemp_heb5e9636__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__69;
    VlWide<4>/*127:0*/ __Vtemp_ha3d25c14__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__70;
    VlWide<4>/*127:0*/ __Vtemp_h2b3f50e6__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__71;
    VlWide<4>/*127:0*/ __Vtemp_h429b3cd6__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__72;
    VlWide<4>/*127:0*/ __Vtemp_hd2a46b52__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__73;
    VlWide<4>/*127:0*/ __Vtemp_h3f0a5ca9__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__74;
    VlWide<4>/*127:0*/ __Vtemp_h4aa44f23__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__75;
    VlWide<4>/*127:0*/ __Vtemp_he41e187a__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__76;
    VlWide<4>/*127:0*/ __Vtemp_h1d4ab441__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__77;
    VlWide<4>/*127:0*/ __Vtemp_h7cfa5a1d__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__78;
    VlWide<4>/*127:0*/ __Vtemp_h5a2c5901__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__79;
    VlWide<4>/*127:0*/ __Vtemp_hf50ff077__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__80;
    VlWide<4>/*127:0*/ __Vtemp_h46381b1c__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__81;
    VlWide<4>/*127:0*/ __Vtemp_h6043537d__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__82;
    VlWide<4>/*127:0*/ __Vtemp_h407c64ff__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__83;
    VlWide<4>/*127:0*/ __Vtemp_h3ff2f06c__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__84;
    VlWide<4>/*127:0*/ __Vtemp_hc3fe4aad__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__85;
    VlWide<4>/*127:0*/ __Vtemp_hc7af9e2b__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__86;
    VlWide<4>/*127:0*/ __Vtemp_hf4c68999__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__87;
    VlWide<4>/*127:0*/ __Vtemp_h68c5c48f__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__88;
    VlWide<4>/*127:0*/ __Vtemp_hf61ac915__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__89;
    VlWide<4>/*127:0*/ __Vtemp_h9c0afb4f__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__90;
    VlWide<4>/*127:0*/ __Vtemp_h87601147__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__91;
    VlWide<4>/*127:0*/ __Vtemp_h9ab13c41__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__92;
    VlWide<4>/*127:0*/ __Vtemp_h896cc9f8__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__93;
    VlWide<4>/*127:0*/ __Vtemp_hf0ba1d6e__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__94;
    VlWide<4>/*127:0*/ __Vtemp_h72ef1673__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__95;
    VlWide<4>/*127:0*/ __Vtemp_hd7dce8b4__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__96;
    VlWide<4>/*127:0*/ __Vtemp_h7d1b5138__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__97;
    VlWide<4>/*127:0*/ __Vtemp_hc79f9d67__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__98;
    VlWide<4>/*127:0*/ __Vtemp_hca817cba__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__99;
    VlWide<4>/*127:0*/ __Vtemp_h2edfb1af__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__100;
    VlWide<4>/*127:0*/ __Vtemp_h1850ead9__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__101;
    VlWide<4>/*127:0*/ __Vtemp_h5ffba774__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__102;
    VlWide<4>/*127:0*/ __Vtemp_h2f4f4555__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__103;
    VlWide<4>/*127:0*/ __Vtemp_h32ceb948__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__104;
    VlWide<4>/*127:0*/ __Vtemp_h100fb6e9__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__105;
    VlWide<4>/*127:0*/ __Vtemp_h4d2e2c9a__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__106;
    VlWide<4>/*127:0*/ __Vtemp_h40ff23e9__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__107;
    VlWide<4>/*127:0*/ __Vtemp_h92e8011b__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__108;
    VlWide<4>/*127:0*/ __Vtemp_h28af11f4__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__109;
    VlWide<4>/*127:0*/ __Vtemp_h65585b2b__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__110;
    VlWide<4>/*127:0*/ __Vtemp_h8b2c512f__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__111;
    VlWide<4>/*127:0*/ __Vtemp_hdd42b959__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__112;
    VlWide<4>/*127:0*/ __Vtemp_h6f43dc52__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__113;
    VlWide<4>/*127:0*/ __Vtemp_ha7629acd__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__114;
    VlWide<4>/*127:0*/ __Vtemp_h4968b496__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__115;
    VlWide<4>/*127:0*/ __Vtemp_hc4a9e346__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__116;
    VlWide<4>/*127:0*/ __Vtemp_hb35fd85b__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__117;
    VlWide<4>/*127:0*/ __Vtemp_hca5d5346__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__118;
    VlWide<4>/*127:0*/ __Vtemp_hf6e10f44__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__119;
    VlWide<4>/*127:0*/ __Vtemp_h3ee3bac3__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__120;
    VlWide<4>/*127:0*/ __Vtemp_h67176857__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__121;
    VlWide<4>/*127:0*/ __Vtemp_he940d510__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__122;
    VlWide<4>/*127:0*/ __Vtemp_h3349bb55__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__123;
    VlWide<4>/*127:0*/ __Vtemp_h8826ec64__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__124;
    VlWide<4>/*127:0*/ __Vtemp_h5fa4bdd1__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__125;
    VlWide<4>/*127:0*/ __Vtemp_h33b9fd00__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__126;
    VlWide<4>/*127:0*/ __Vtemp_h361bf5e2__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__127;
    VlWide<4>/*127:0*/ __Vtemp_h9e42edcc__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__128;
    VlWide<4>/*127:0*/ __Vtemp_h5c581ce3__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__129;
    VlWide<4>/*127:0*/ __Vtemp_hbe4629c6__0;
    VlWide<4>/*127:0*/ __Vtemp_he9ae66b8__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__130;
    VlWide<4>/*127:0*/ __Vtemp_h1eca7809__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__131;
    VlWide<4>/*127:0*/ __Vtemp_h9a884877__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__132;
    VlWide<4>/*127:0*/ __Vtemp_h43b5af70__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__133;
    VlWide<4>/*127:0*/ __Vtemp_h1f6a69b0__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__134;
    VlWide<4>/*127:0*/ __Vtemp_h1827b4b9__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__135;
    VlWide<4>/*127:0*/ __Vtemp_h61d1a9ff__0;
    VlWide<4>/*127:0*/ __Vtemp_h9f7f3185__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__136;
    VlWide<4>/*127:0*/ __Vtemp_he875ffff__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__137;
    VlWide<4>/*127:0*/ __Vtemp_h72869f92__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__138;
    VlWide<4>/*127:0*/ __Vtemp_hf8968c4e__0;
    VlWide<4>/*127:0*/ __Vtemp_ha7f5e15a__139;
    VlWide<4>/*127:0*/ __Vtemp_hc9f93bfe__0;
    IData/*31:0*/ __Vilp;
    // Body
    __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt 
        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt;
    __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__len 
        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__len;
    __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__dvs 
        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__dvs;
    __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[0U] 
        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[0U];
    __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[1U] 
        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[1U];
    __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[2U] 
        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[2U];
    __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[3U] 
        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[3U];
    __Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v0 = 0U;
    __Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v1 = 0U;
    __Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v2 = 0U;
    __Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v33 = 0U;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__cs 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__rrst_n)
            ? (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__ns)
            : 0U);
    if ((1U & ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__rrst_n)) 
               | (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_flag))))) {
        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt = 0U;
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_flag) {
        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)));
    }
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__rrst_n) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__div_doing 
            = ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__valid_out)) 
               & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_valid) 
                   & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__ready)) 
                  | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__div_doing)));
        if (vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_valid) {
            if (vlSymsp->TOP__ysyx_22040632_top__DOT__dif.divw) {
                __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__len = 0x20U;
                __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__dvs 
                    = ((0xffffffff00000000ULL & __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__dvs) 
                       | (IData)((IData)(((1U & ((~ (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_signed)) 
                                                 | (~ (IData)(
                                                              (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                                                               >> 0x1fU)))))
                                           ? (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)
                                           : ((IData)(1U) 
                                              + (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)))))));
                VL_EXTEND_WI(128,32, __Vtemp_hba47adb2__0, (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op));
                VL_EXTEND_WI(128,32, __Vtemp_h62e038f1__0, 
                             ((IData)(1U) + (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op))));
                if ((1U & ((~ (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_signed)) 
                           | (~ (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                                         >> 0x1fU)))))) {
                    __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[0U] 
                        = __Vtemp_hba47adb2__0[0U];
                    __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[1U] 
                        = __Vtemp_hba47adb2__0[1U];
                    __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[2U] 
                        = __Vtemp_hba47adb2__0[2U];
                    __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[3U] 
                        = __Vtemp_hba47adb2__0[3U];
                } else {
                    __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[0U] 
                        = __Vtemp_h62e038f1__0[0U];
                    __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[1U] 
                        = __Vtemp_h62e038f1__0[1U];
                    __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[2U] 
                        = __Vtemp_h62e038f1__0[2U];
                    __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[3U] 
                        = __Vtemp_h62e038f1__0[3U];
                }
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_qt 
                    = (1U & ((IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                                      >> 0x1fU)) ^ (IData)(
                                                           (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                                                            >> 0x1fU))));
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_rmd 
                    = (1U & (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                                     >> 0x1fU)));
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.divw)))) {
                    __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__len = 0x40U;
                    __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__dvs 
                        = ((1U & ((~ (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_signed)) 
                                  | (~ (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                                                >> 0x3fU)))))
                            ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op
                            : (1ULL + (~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)));
                    VL_EXTEND_WQ(128,64, __Vtemp_he1499c76__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op);
                    VL_EXTEND_WQ(128,64, __Vtemp_h1f996e7a__0, 
                                 (1ULL + (~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op)));
                    if ((1U & ((~ (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_signed)) 
                               | (~ (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                                             >> 0x3fU)))))) {
                        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[0U] 
                            = __Vtemp_he1499c76__0[0U];
                        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[1U] 
                            = __Vtemp_he1499c76__0[1U];
                        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[2U] 
                            = __Vtemp_he1499c76__0[2U];
                        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[3U] 
                            = __Vtemp_he1499c76__0[3U];
                    } else {
                        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[0U] 
                            = __Vtemp_h1f996e7a__0[0U];
                        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[1U] 
                            = __Vtemp_h1f996e7a__0[1U];
                        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[2U] 
                            = __Vtemp_h1f996e7a__0[2U];
                        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[3U] 
                            = __Vtemp_h1f996e7a__0[3U];
                    }
                }
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_qt 
                    = (1U & ((IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                                      >> 0x3fU)) ^ (IData)(
                                                           (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                                                            >> 0x3fU))));
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_rmd 
                    = (1U & (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                                     >> 0x3fU)));
            }
        } else {
            __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__len 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__len;
            __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__dvs 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__dvs;
            if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_flag) {
                if ((0x40U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__len))) {
                    if ((1U & (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__result 
                                       >> 0x3fU)))) {
                        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[(3U 
                                                                                & (((IData)(0x7fU) 
                                                                                - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                                                                >> 5U))] 
                            = ((~ ((IData)(1U) << (0x1fU 
                                                   & ((IData)(0x7fU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt))))) 
                               & __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[
                               (3U & (((IData)(0x7fU) 
                                       - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                      >> 5U))]);
                        VL_ASSIGNSEL_WIIQ(128,64,(0x7fU 
                                                  & (((IData)(0x7eU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                                     - (IData)(0x3fU))), __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd, 
                                          (((QData)((IData)(
                                                            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[
                                                            (((IData)(0x3fU) 
                                                              + 
                                                              (0x7fU 
                                                               & (((IData)(0x7eU) 
                                                                   - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                                                  - (IData)(0x3fU)))) 
                                                             >> 5U)])) 
                                            << ((0U 
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
                                           | (((0U 
                                                == 
                                                (0x1fU 
                                                 & (((IData)(0x7eU) 
                                                     - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                                    - (IData)(0x3fU))))
                                                ? 0ULL
                                                : ((QData)((IData)(
                                                                   vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[
                                                                   (((IData)(0x1fU) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & (((IData)(0x7eU) 
                                                                          - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                                                         - (IData)(0x3fU)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & (((IData)(0x7eU) 
                                                         - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                                        - (IData)(0x3fU)))))) 
                                              | ((QData)((IData)(
                                                                 vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[
                                                                 (3U 
                                                                  & ((((IData)(0x7eU) 
                                                                       - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                                                      - (IData)(0x3fU)) 
                                                                     >> 5U))])) 
                                                 >> 
                                                 (0x1fU 
                                                  & (((IData)(0x7eU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                                     - (IData)(0x3fU)))))));
                    } else {
                        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[(3U 
                                                                                & (((IData)(0x7fU) 
                                                                                - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                                                                >> 5U))] 
                            = (__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[
                               (3U & (((IData)(0x7fU) 
                                       - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                      >> 5U))] | ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x7fU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)))));
                        VL_ASSIGNSEL_WIIQ(128,64,(0x7fU 
                                                  & (((IData)(0x7eU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                                     - (IData)(0x3fU))), __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__result);
                    }
                } else if ((0x20U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__len))) {
                    if ((1U & (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__result 
                                       >> 0x1fU)))) {
                        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[(3U 
                                                                                & (((IData)(0x3fU) 
                                                                                - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                                                                >> 5U))] 
                            = ((~ ((IData)(1U) << (0x1fU 
                                                   & ((IData)(0x3fU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt))))) 
                               & __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[
                               (3U & (((IData)(0x3fU) 
                                       - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                      >> 5U))]);
                        VL_ASSIGNSEL_WIII(128,32,(0x7fU 
                                                  & (((IData)(0x3eU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                                     - (IData)(0x1fU))), __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd, 
                                          (((0U == 
                                             (0x1fU 
                                              & (((IData)(0x3eU) 
                                                  - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                                 - (IData)(0x1fU))))
                                             ? 0U : 
                                            (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[
                                             (((IData)(0x1fU) 
                                               + (0x7fU 
                                                  & (((IData)(0x3eU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                                     - (IData)(0x1fU)))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & (((IData)(0x3eU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                                     - (IData)(0x1fU)))))) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[
                                              (3U & 
                                               ((((IData)(0x3eU) 
                                                  - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                                 - (IData)(0x1fU)) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & (((IData)(0x3eU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                                     - (IData)(0x1fU))))));
                    } else {
                        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[(3U 
                                                                                & (((IData)(0x3fU) 
                                                                                - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                                                                >> 5U))] 
                            = (__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[
                               (3U & (((IData)(0x3fU) 
                                       - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                      >> 5U))] | ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x3fU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)))));
                        VL_ASSIGNSEL_WIII(128,32,(0x7fU 
                                                  & (((IData)(0x3eU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt)) 
                                                     - (IData)(0x1fU))), __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd, (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__result));
                    }
                }
            } else {
                __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[0U] 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[0U];
                __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[1U] 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[1U];
                __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[2U] 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[2U];
                __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[3U] 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[3U];
            }
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_qt 
                = (1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_qt));
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_rmd 
                = (1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_rmd));
        }
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pci 
            = ((IData)(vlSelf->ysyx_22040632_top__DOT__pcchg)
                ? vlSelf->ysyx_22040632_top__DOT__pc_op
                : (((IData)(vlSelf->ysyx_22040632_top__DOT__op_div) 
                    & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__valid_out)))
                    ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pci
                    : (4ULL + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pci)));
        if ((((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg) 
              & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__op_div))) 
             | ((IData)(vlSelf->ysyx_22040632_top__DOT__op_div) 
                & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__valid_out)))) {
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v0 
                = ((0U != (0x1fU & (vlSelf->inst >> 7U)))
                    ? vlSelf->ysyx_22040632_top__DOT__data
                    : 0ULL);
            __Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v0 = 1U;
            __Vdlyvdim0__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v0 
                = (0x1fU & (vlSelf->inst >> 7U));
        } else {
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v1 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [0U];
            __Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v1 = 1U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__unnamedblk2__DOT__i = 0x20U;
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v2 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [1U];
            __Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v2 = 1U;
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v3 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [2U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v4 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [3U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v5 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [4U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v6 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [5U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v7 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [6U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v8 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [7U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v9 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [8U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v10 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [9U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v11 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [0xaU];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v12 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [0xbU];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v13 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [0xcU];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v14 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [0xdU];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v15 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [0xeU];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v16 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [0xfU];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v17 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [0x10U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v18 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [0x11U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v19 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [0x12U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v20 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [0x13U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v21 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [0x14U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v22 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [0x15U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v23 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [0x16U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v24 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [0x17U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v25 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [0x18U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v26 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [0x19U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v27 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [0x1aU];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v28 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [0x1bU];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v29 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [0x1cU];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v30 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [0x1dU];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v31 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [0x1eU];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v32 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [0x1fU];
        }
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__div_doing = 0U;
        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__len = 0x40U;
        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__dvs = 0ULL;
        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[0U] = 0U;
        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[1U] = 0U;
        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[2U] = 0U;
        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[3U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_qt = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_rmd = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pci = 0x80000000ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__unnamedblk1__DOT__i = 0x20U;
        __Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v33 = 1U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__dvs 
        = __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__dvs;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt 
        = __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[0U] 
        = __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[0U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[1U] 
        = __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[1U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[2U] 
        = __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[2U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[3U] 
        = __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[3U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__len 
        = __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__len;
    if (__Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v0) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[__Vdlyvdim0__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v0] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v0;
    }
    if (__Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v1) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v1;
    }
    if (__Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v2) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[1U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v2;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[2U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v3;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[3U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v4;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[4U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v5;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[5U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v6;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[6U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v7;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[7U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v8;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[8U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v9;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[9U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v10;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0xaU] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v11;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0xbU] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v12;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0xcU] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v13;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0xdU] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v14;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0xeU] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v15;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0xfU] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v16;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x10U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v17;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x11U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v18;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x12U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v19;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x13U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v20;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x14U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v21;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x15U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v22;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x16U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v23;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x17U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v24;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x18U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v25;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x19U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v26;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x1aU] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v27;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x1bU] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v28;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x1cU] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v29;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x1dU] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v30;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x1eU] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v31;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr[0x1fU] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v32;
    }
    if (__Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr__v33) {
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
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__ready 
        = (1U & ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__rrst_n)) 
                 | ((0U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__ns)) 
                    | (2U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__ns)))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_flag 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__rrst_n) 
           & (1U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__ns)));
    vlSelf->pc = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pci;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__valid_out 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__rrst_n) 
           & (2U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__ns)));
    Vysyx_22040632_top___024unit____Vdpiimwrap_paddr_read_TOP____024unit(vlSelf->pc, vlSelf->__Vtask_paddr_read__10__rdata);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__inst_t 
        = vlSelf->__Vtask_paddr_read__10__rdata;
    vlSelf->inst = ((4ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pci))
                     ? (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__inst_t 
                                >> 0x20U)) : (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__inst_t));
    if (((((((((0x13U == (0x707fU & vlSelf->inst)) 
               | (0x67U == (0x707fU & vlSelf->inst))) 
              | (0x2003U == (0x707fU & vlSelf->inst))) 
             | (0x1003U == (0x707fU & vlSelf->inst))) 
            | (0x5003U == (0x707fU & vlSelf->inst))) 
           | (0x3003U == (0x707fU & vlSelf->inst))) 
          | (0x4003U == (0x707fU & vlSelf->inst))) 
         | (0x3013U == (0x707fU & vlSelf->inst)))) {
        if ((0x13U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 1U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x67U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 6U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x2003U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 3U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x1003U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x26U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x5003U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x27U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x3003U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0xcU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x4003U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x10U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        }
    } else if (((((((((0x1bU == (0x707fU & vlSelf->inst)) 
                      | (0x40005013U == (0xfe00707fU 
                                         & vlSelf->inst))) 
                     | (0x7013U == (0x707fU & vlSelf->inst))) 
                    | (0x4013U == (0x707fU & vlSelf->inst))) 
                   | (0x1013U == (0xfc00707fU & vlSelf->inst))) 
                  | (0x101bU == (0xfe00707fU & vlSelf->inst))) 
                 | (0x5013U == (0xfc00707fU & vlSelf->inst))) 
                | (0x4000501bU == (0xfe00707fU & vlSelf->inst)))) {
        if ((0x1bU == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0xeU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x40005013U == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0xfU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x7013U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x11U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x4013U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x16U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x1013U == (0xfc00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x18U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x101bU == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x29U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x5013U == (0xfc00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x19U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x2aU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        }
    } else if (((((((((0x501bU == (0xfe00707fU & vlSelf->inst)) 
                      | (0x17U == (0x7fU & vlSelf->inst))) 
                     | (0x37U == (0x7fU & vlSelf->inst))) 
                    | (0x6fU == (0x7fU & vlSelf->inst))) 
                   | (0x3023U == (0x707fU & vlSelf->inst))) 
                  | (0x23U == (0x707fU & vlSelf->inst))) 
                 | (0x2023U == (0x707fU & vlSelf->inst))) 
                | (0x1023U == (0x707fU & vlSelf->inst)))) {
        if ((0x501bU == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x2cU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 0U;
        } else if ((0x17U == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 2U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 1U;
        } else if ((0x37U == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 4U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 1U;
        } else if ((0x6fU == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 5U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 2U;
        } else if ((0x3023U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 7U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 3U;
        } else if ((0x23U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x13U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 3U;
        } else if ((0x2023U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x1bU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 3U;
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x28U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 3U;
        }
    } else if (((((((((0x3bU == (0xfe00707fU & vlSelf->inst)) 
                      | (0x4000003bU == (0xfe00707fU 
                                         & vlSelf->inst))) 
                     | (0x40000033U == (0xfe00707fU 
                                        & vlSelf->inst))) 
                    | (0x33U == (0xfe00707fU & vlSelf->inst))) 
                   | (0x6033U == (0xfe00707fU & vlSelf->inst))) 
                  | (0x3033U == (0xfe00707fU & vlSelf->inst))) 
                 | (0x2033U == (0xfe00707fU & vlSelf->inst))) 
                | (0x7033U == (0xfe00707fU & vlSelf->inst)))) {
        if ((0x3bU == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 8U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x4000003bU == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x20U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x40000033U == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0xbU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x33U == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0xdU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x6033U == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x17U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x3033U == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x15U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x2033U == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x25U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x12U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        }
    } else if (((((((((0x103bU == (0xfe00707fU & vlSelf->inst)) 
                      | (0x200003bU == (0xfe00707fU 
                                        & vlSelf->inst))) 
                     | (0x200403bU == (0xfe00707fU 
                                       & vlSelf->inst))) 
                    | (0x200503bU == (0xfe00707fU & vlSelf->inst))) 
                   | (0x200603bU == (0xfe00707fU & vlSelf->inst))) 
                  | (0x200703bU == (0xfe00707fU & vlSelf->inst))) 
                 | (0x2000033U == (0xfe00707fU & vlSelf->inst))) 
                | (0x4000503bU == (0xfe00707fU & vlSelf->inst)))) {
        if ((0x103bU == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x14U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x200003bU == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x1cU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x200403bU == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x1dU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x200503bU == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x23U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x200603bU == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x1eU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x200703bU == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x22U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x2000033U == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x2bU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x2dU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        }
    } else if (((((((((0x503bU == (0xfe00707fU & vlSelf->inst)) 
                      | (0x63U == (0x707fU & vlSelf->inst))) 
                     | (0x1063U == (0x707fU & vlSelf->inst))) 
                    | (0x5063U == (0x707fU & vlSelf->inst))) 
                   | (0x7063U == (0x707fU & vlSelf->inst))) 
                  | (0x4063U == (0x707fU & vlSelf->inst))) 
                 | (0x6063U == (0x707fU & vlSelf->inst))) 
                | (0x100073U == vlSelf->inst))) {
        if ((0x503bU == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x2eU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 4U;
        } else if ((0x63U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 9U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 5U;
        } else if ((0x1063U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0xaU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 5U;
        } else if ((0x5063U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x1aU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 5U;
        } else if ((0x7063U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x21U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 5U;
        } else if ((0x4063U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x24U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 5U;
        } else if ((0x6063U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun = 0x1fU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t = 5U;
        } else {
            Vysyx_22040632_top___024unit____Vdpiimwrap_npcexit_TOP____024unit((IData)(
                                                                                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                                                                                [0xaU]));
        }
    } else if (VL_UNLIKELY((0U != vlSelf->inst))) {
        VL_WRITEF("@pc:%x instruction:%x not implemented\n",
                  64,vlSelf->pc,32,vlSelf->inst);
        Vysyx_22040632_top___024unit____Vdpiimwrap_npcexit_TOP____024unit(1U);
    }
    __Vtableidx1 = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun;
    vlSymsp->TOP__ysyx_22040632_top__DOT__dif.divw 
        = Vysyx_22040632_top__ConstPool__TABLE_h8aea5909_0
        [__Vtableidx1];
    __Vtableidx2 = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun;
    vlSelf->ysyx_22040632_top__DOT__op_div = Vysyx_22040632_top__ConstPool__TABLE_h8aea5909_0
        [__Vtableidx2];
    vlSymsp->TOP__ysyx_22040632_top__DOT__mif.mul_signed 
        = (((0x1cU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)) 
            | (0x2bU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)))
            ? 3U : 0U);
    if ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t))) {
        vlSelf->ysyx_22040632_top__DOT__src1 = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__src2 = 0ULL;
    } else if ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t))) {
        if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t))) {
            vlSelf->ysyx_22040632_top__DOT__src1 = 0ULL;
            vlSelf->ysyx_22040632_top__DOT__src2 = 0ULL;
        } else if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t))) {
            vlSelf->ysyx_22040632_top__DOT__src1 = 
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [(0x1fU & (vlSelf->inst >> 0xfU))];
            vlSelf->ysyx_22040632_top__DOT__src2 = 
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [(0x1fU & (vlSelf->inst >> 0x14U))];
        } else {
            vlSelf->ysyx_22040632_top__DOT__src1 = 
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [(0x1fU & (vlSelf->inst >> 0xfU))];
            vlSelf->ysyx_22040632_top__DOT__src2 = 
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [(0x1fU & (vlSelf->inst >> 0x14U))];
        }
    } else if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t))) {
        if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t))) {
            vlSelf->ysyx_22040632_top__DOT__src1 = 
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                [(0x1fU & (vlSelf->inst >> 0xfU))];
            vlSelf->ysyx_22040632_top__DOT__src2 = 
                (((- (QData)((IData)((vlSelf->inst 
                                      >> 0x1fU)))) 
                  << 0xcU) | (QData)((IData)(((0xfe0U 
                                               & (vlSelf->inst 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 7U))))));
        } else {
            vlSelf->ysyx_22040632_top__DOT__src1 = 
                (((- (QData)((IData)((vlSelf->inst 
                                      >> 0x1fU)))) 
                  << 0x15U) | (QData)((IData)(((0x100000U 
                                                & (vlSelf->inst 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSelf->inst) 
                                                  | ((0x800U 
                                                      & (vlSelf->inst 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->inst 
                                                           >> 0x14U))))))));
            vlSelf->ysyx_22040632_top__DOT__src2 = 0ULL;
        }
    } else if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t))) {
        vlSelf->ysyx_22040632_top__DOT__src1 = (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSelf->inst 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->inst))));
        vlSelf->ysyx_22040632_top__DOT__src2 = 0ULL;
    } else {
        vlSelf->ysyx_22040632_top__DOT__src1 = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
            [(0x1fU & (vlSelf->inst >> 0xfU))];
        vlSelf->ysyx_22040632_top__DOT__src2 = (((- (QData)((IData)(
                                                                    (vlSelf->inst 
                                                                     >> 0x1fU)))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (vlSelf->inst 
                                                                   >> 0x14U))));
    }
    vlSelf->ysyx_22040632_top__DOT__dest = ((3U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t))
                                             ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__gpr
                                            [(0x1fU 
                                              & (vlSelf->inst 
                                                 >> 0x14U))]
                                             : ((5U 
                                                 == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__type_t))
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x1fU)))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   ((0x800U 
                                                                     & (vlSelf->inst 
                                                                        << 4U)) 
                                                                    | ((0x7e0U 
                                                                        & (vlSelf->inst 
                                                                           >> 0x14U)) 
                                                                       | (0x1eU 
                                                                          & (vlSelf->inst 
                                                                             >> 7U)))))))
                                                 : 0ULL));
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
    if ((0x20U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
        vlSelf->ysyx_22040632_top__DOT__pcchg = (1U 
                                                 & (IData)(
                                                           ((0U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) 
                                                            & ((4U 
                                                                & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                                ? (IData)(
                                                                          ((0U 
                                                                            == 
                                                                            (3U 
                                                                             & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) 
                                                                           & VL_LTS_IQQ(64, vlSelf->ysyx_22040632_top__DOT__src1, vlSelf->ysyx_22040632_top__DOT__src2)))
                                                                : (IData)(
                                                                          ((1U 
                                                                            == 
                                                                            (3U 
                                                                             & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__src1 
                                                                              >= vlSelf->ysyx_22040632_top__DOT__src2)))))));
        if ((0x10U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op = 4ULL;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op = 0x64ULL;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
        } else if ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
            if ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                    if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op = 4ULL;
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op = 0x64ULL;
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
                    } else {
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                            = vlSelf->ysyx_22040632_top__DOT__src1;
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                            = vlSelf->ysyx_22040632_top__DOT__src2;
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
                    }
                } else {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__src2;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
                }
            } else if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__src2;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
                } else {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__src2;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
                }
            } else if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__src2;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
            } else {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__src2;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 0U;
            }
        } else if ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
            if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__src2;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
            } else if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__src2;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
            } else {
                vlSelf->ysyx_22040632_top__DOT__pc_op 
                    = (vlSelf->pc + vlSelf->ysyx_22040632_top__DOT__dest);
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__dest;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->pc;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 0U;
            }
        } else if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                = vlSelf->ysyx_22040632_top__DOT__src1;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                = vlSelf->ysyx_22040632_top__DOT__src2;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
        } else if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__pc_op = 
                (vlSelf->pc + vlSelf->ysyx_22040632_top__DOT__dest);
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                = vlSelf->ysyx_22040632_top__DOT__dest;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                = vlSelf->pc;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 0U;
        } else {
            vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                = vlSelf->ysyx_22040632_top__DOT__src1;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                = vlSelf->ysyx_22040632_top__DOT__src2;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
        }
    } else if ((0x10U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
        vlSelf->ysyx_22040632_top__DOT__pcchg = (1U 
                                                 & (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun) 
                                                     >> 3U) 
                                                    & ((4U 
                                                        & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                        ? 
                                                       (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun) 
                                                         >> 1U) 
                                                        & ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun) 
                                                           & (vlSelf->ysyx_22040632_top__DOT__src1 
                                                              < vlSelf->ysyx_22040632_top__DOT__src2)))
                                                        : (IData)(
                                                                  ((2U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) 
                                                                   & VL_GTES_IQQ(64, vlSelf->ysyx_22040632_top__DOT__src1, vlSelf->ysyx_22040632_top__DOT__src2))))));
        if ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
            if ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                    if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                        vlSelf->ysyx_22040632_top__DOT__pc_op 
                            = (vlSelf->pc + vlSelf->ysyx_22040632_top__DOT__dest);
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                            = vlSelf->ysyx_22040632_top__DOT__dest;
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                            = vlSelf->pc;
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 0U;
                    } else {
                        vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                            = vlSelf->ysyx_22040632_top__DOT__src1;
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                            = vlSelf->ysyx_22040632_top__DOT__src2;
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
                    }
                } else {
                    vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__src2;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
                }
            } else if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                    vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__src2;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 0U;
                } else {
                    vlSelf->ysyx_22040632_top__DOT__pc_op 
                        = (vlSelf->pc + vlSelf->ysyx_22040632_top__DOT__dest);
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__dest;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->pc;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 0U;
                }
            } else {
                vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__src2;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
            }
        } else {
            vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
            if ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                    if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                            = vlSelf->ysyx_22040632_top__DOT__src1;
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                            = vlSelf->ysyx_22040632_top__DOT__src2;
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
                    } else {
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                            = vlSelf->ysyx_22040632_top__DOT__src1;
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                            = vlSelf->ysyx_22040632_top__DOT__src2;
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
                    }
                } else {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__src2;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
                }
            } else if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__src2;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 0U;
                } else {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__src2;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
                }
            } else if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__src2;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
            } else {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__src2;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
            }
        }
    } else if ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
        vlSelf->ysyx_22040632_top__DOT__pcchg = (1U 
                                                 & ((~ 
                                                     ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun) 
                                                      >> 2U)) 
                                                    & ((2U 
                                                        & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                        ? 
                                                       ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)) 
                                                        & (vlSelf->ysyx_22040632_top__DOT__src1 
                                                           != vlSelf->ysyx_22040632_top__DOT__src2))
                                                        : 
                                                       ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun) 
                                                        & (vlSelf->ysyx_22040632_top__DOT__src1 
                                                           == vlSelf->ysyx_22040632_top__DOT__src2)))));
        if ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
            if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__src2;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
            } else if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__src2;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
            } else {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__src2;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
            }
        } else if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
            if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__src2;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
            } else {
                vlSelf->ysyx_22040632_top__DOT__pc_op 
                    = (vlSelf->pc + vlSelf->ysyx_22040632_top__DOT__dest);
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__dest;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->pc;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 0U;
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__pc_op = 
                (vlSelf->pc + vlSelf->ysyx_22040632_top__DOT__dest);
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                = vlSelf->ysyx_22040632_top__DOT__dest;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                = vlSelf->pc;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 0U;
        } else {
            vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                = vlSelf->ysyx_22040632_top__DOT__src1;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                = vlSelf->ysyx_22040632_top__DOT__src2;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
        }
    } else {
        vlSelf->ysyx_22040632_top__DOT__pcchg = (1U 
                                                 & (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun) 
                                                     >> 2U) 
                                                    & ((2U 
                                                        & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                        ? 
                                                       (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                        : (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))));
        if ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
            if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                    vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__src2;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 0U;
                } else {
                    vlSelf->ysyx_22040632_top__DOT__pc_op 
                        = (vlSelf->ysyx_22040632_top__DOT__src1 
                           + vlSelf->ysyx_22040632_top__DOT__src2);
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op = 4ULL;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->pc;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
                }
            } else if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                vlSelf->ysyx_22040632_top__DOT__pc_op 
                    = (vlSelf->ysyx_22040632_top__DOT__src1 
                       + vlSelf->pc);
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op = 4ULL;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->pc;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
            } else {
                vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__src2;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
            }
        } else {
            vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
            if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__src2;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
                } else {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                        = vlSelf->pc;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
                }
            } else {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__src2;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__gprchg = 1U;
            }
        }
    }
    if ((0x1cU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
            = (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
            = ((IData)((QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op))) 
               << 1U);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
            = (((IData)((QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op))) 
                >> 0x1fU) | ((IData)(((QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)) 
                                      >> 0x20U)) << 1U));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[2U] 
            = ((IData)(((QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op;
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
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__ysyx_22040632_boothu_i15__DOT__sel_double 
        = (IData)((0xc0000000U == (0xc0000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__ysyx_22040632_boothu_i31__DOT__sel_double 
        = (IData)((0xc0000000U == (0xc0000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])));
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
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__1, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h26d9ddfa__0, __Vtemp_ha7f5e15a__1, 1U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__2, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__3, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hb664cb99__0, __Vtemp_ha7f5e15a__3, 1U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__0__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0U] 
            = (~ __Vtemp_ha7f5e15a__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[1U] 
            = (~ __Vtemp_ha7f5e15a__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[2U] 
            = (~ __Vtemp_ha7f5e15a__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[3U] 
            = (~ __Vtemp_ha7f5e15a__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__0__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0U] 
            = (~ __Vtemp_h26d9ddfa__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[1U] 
            = (~ __Vtemp_h26d9ddfa__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[2U] 
            = (~ __Vtemp_h26d9ddfa__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[3U] 
            = (~ __Vtemp_h26d9ddfa__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                          >> 2U)) & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                                       >> 1U) & (~ 
                                                 vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])) 
                                     | (IData)((1U 
                                                == 
                                                (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0U] 
            = __Vtemp_ha7f5e15a__2[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[1U] 
            = __Vtemp_ha7f5e15a__2[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[2U] 
            = __Vtemp_ha7f5e15a__2[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[3U] 
            = __Vtemp_ha7f5e15a__2[3U];
    } else if ((IData)((3U == (7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0U] 
            = __Vtemp_hb664cb99__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[1U] 
            = __Vtemp_hb664cb99__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[2U] 
            = __Vtemp_hb664cb99__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[3U] 
            = __Vtemp_hb664cb99__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[1U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[2U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[3U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xfffffffeU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__0__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
              | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__0__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__4, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hb31cf733__0, __Vtemp_ha7f5e15a__4, 2U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__5, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_he6f4f183__0, __Vtemp_ha7f5e15a__5, 3U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__6, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h81116a99__0, __Vtemp_ha7f5e15a__6, 2U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__7, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hff0525ad__0, __Vtemp_ha7f5e15a__7, 3U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__1__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[4U] 
            = (~ __Vtemp_hb31cf733__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[5U] 
            = (~ __Vtemp_hb31cf733__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[6U] 
            = (~ __Vtemp_hb31cf733__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[7U] 
            = (~ __Vtemp_hb31cf733__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__1__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[4U] 
            = (~ __Vtemp_he6f4f183__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[5U] 
            = (~ __Vtemp_he6f4f183__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[6U] 
            = (~ __Vtemp_he6f4f183__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[7U] 
            = (~ __Vtemp_he6f4f183__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                          >> 4U)) & ((IData)((8U == 
                                              (0xcU 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                                     | (IData)((4U 
                                                == 
                                                (0xcU 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[4U] 
            = __Vtemp_h81116a99__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[5U] 
            = __Vtemp_h81116a99__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[6U] 
            = __Vtemp_h81116a99__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[7U] 
            = __Vtemp_h81116a99__0[3U];
    } else if ((IData)((0xcU == (0x1cU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[4U] 
            = __Vtemp_hff0525ad__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[5U] 
            = __Vtemp_hff0525ad__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[6U] 
            = __Vtemp_hff0525ad__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[7U] 
            = __Vtemp_hff0525ad__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[4U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[5U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[6U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[7U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xfffffffdU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__1__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__1__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 1U));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__8, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hcec71c77__0, __Vtemp_ha7f5e15a__8, 4U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__9, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h84147280__0, __Vtemp_ha7f5e15a__9, 5U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__10, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h241520d7__0, __Vtemp_ha7f5e15a__10, 4U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__11, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hdbea4b15__0, __Vtemp_ha7f5e15a__11, 5U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__2__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[8U] 
            = (~ __Vtemp_hcec71c77__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[9U] 
            = (~ __Vtemp_hcec71c77__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xaU] 
            = (~ __Vtemp_hcec71c77__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xbU] 
            = (~ __Vtemp_hcec71c77__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__2__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[8U] 
            = (~ __Vtemp_h84147280__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[9U] 
            = (~ __Vtemp_h84147280__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xaU] 
            = (~ __Vtemp_h84147280__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xbU] 
            = (~ __Vtemp_h84147280__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                          >> 6U)) & ((IData)((0x20U 
                                              == (0x30U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                                     | (IData)((0x10U 
                                                == 
                                                (0x30U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[8U] 
            = __Vtemp_h241520d7__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[9U] 
            = __Vtemp_h241520d7__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xaU] 
            = __Vtemp_h241520d7__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xbU] 
            = __Vtemp_h241520d7__0[3U];
    } else if ((IData)((0x30U == (0x70U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[8U] 
            = __Vtemp_hdbea4b15__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[9U] 
            = __Vtemp_hdbea4b15__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xaU] 
            = __Vtemp_hdbea4b15__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xbU] 
            = __Vtemp_hdbea4b15__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[8U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[9U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xaU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xbU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xfffffffbU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__2__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__2__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 2U));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__12, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h560bdec1__0, __Vtemp_ha7f5e15a__12, 6U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__13, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h50820909__0, __Vtemp_ha7f5e15a__13, 7U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__14, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hec716d74__0, __Vtemp_ha7f5e15a__14, 6U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__15, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h83baf804__0, __Vtemp_ha7f5e15a__15, 7U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__3__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xcU] 
            = (~ __Vtemp_h560bdec1__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xdU] 
            = (~ __Vtemp_h560bdec1__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xeU] 
            = (~ __Vtemp_h560bdec1__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xfU] 
            = (~ __Vtemp_h560bdec1__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__3__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xcU] 
            = (~ __Vtemp_h50820909__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xdU] 
            = (~ __Vtemp_h50820909__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xeU] 
            = (~ __Vtemp_h50820909__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xfU] 
            = (~ __Vtemp_h50820909__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U] 
                          >> 8U)) & ((IData)((0x80U 
                                              == (0xc0U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                                     | (IData)((0x40U 
                                                == 
                                                (0xc0U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xcU] 
            = __Vtemp_hec716d74__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xdU] 
            = __Vtemp_hec716d74__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xeU] 
            = __Vtemp_hec716d74__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xfU] 
            = __Vtemp_hec716d74__0[3U];
    } else if ((IData)((0xc0U == (0x1c0U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xcU] 
            = __Vtemp_h83baf804__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xdU] 
            = __Vtemp_h83baf804__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xeU] 
            = __Vtemp_h83baf804__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xfU] 
            = __Vtemp_h83baf804__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xcU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xdU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xeU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0xfU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xfffffff7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__3__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__3__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 3U));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__16, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hfd215a1d__0, __Vtemp_ha7f5e15a__16, 8U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__17, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h6b12fc44__0, __Vtemp_ha7f5e15a__17, 9U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__18, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h9f13f4a2__0, __Vtemp_ha7f5e15a__18, 8U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__19, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h7d7490d9__0, __Vtemp_ha7f5e15a__19, 9U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__4__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x10U] 
            = (~ __Vtemp_hfd215a1d__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x11U] 
            = (~ __Vtemp_hfd215a1d__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x12U] 
            = (~ __Vtemp_hfd215a1d__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x13U] 
            = (~ __Vtemp_hfd215a1d__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__4__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x10U] 
            = (~ __Vtemp_h6b12fc44__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x11U] 
            = (~ __Vtemp_h6b12fc44__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x12U] 
            = (~ __Vtemp_h6b12fc44__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x13U] 
            = (~ __Vtemp_h6b12fc44__0[3U]);
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
            = __Vtemp_h9f13f4a2__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x11U] 
            = __Vtemp_h9f13f4a2__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x12U] 
            = __Vtemp_h9f13f4a2__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x13U] 
            = __Vtemp_h9f13f4a2__0[3U];
    } else if ((IData)((0x300U == (0x700U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x10U] 
            = __Vtemp_h7d7490d9__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x11U] 
            = __Vtemp_h7d7490d9__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x12U] 
            = __Vtemp_h7d7490d9__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x13U] 
            = __Vtemp_h7d7490d9__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x10U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x11U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x12U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x13U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xffffffefU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__4__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__4__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 4U));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__20, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h20375fa5__0, __Vtemp_ha7f5e15a__20, 0xaU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__21, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hb3202d8f__0, __Vtemp_ha7f5e15a__21, 0xbU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__22, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h4a8dd3b9__0, __Vtemp_ha7f5e15a__22, 0xaU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__23, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_he4c681a4__0, __Vtemp_ha7f5e15a__23, 0xbU);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__5__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x14U] 
            = (~ __Vtemp_h20375fa5__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x15U] 
            = (~ __Vtemp_h20375fa5__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x16U] 
            = (~ __Vtemp_h20375fa5__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x17U] 
            = (~ __Vtemp_h20375fa5__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__5__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x14U] 
            = (~ __Vtemp_hb3202d8f__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x15U] 
            = (~ __Vtemp_hb3202d8f__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x16U] 
            = (~ __Vtemp_hb3202d8f__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x17U] 
            = (~ __Vtemp_hb3202d8f__0[3U]);
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
            = __Vtemp_h4a8dd3b9__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x15U] 
            = __Vtemp_h4a8dd3b9__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x16U] 
            = __Vtemp_h4a8dd3b9__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x17U] 
            = __Vtemp_h4a8dd3b9__0[3U];
    } else if ((IData)((0xc00U == (0x1c00U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x14U] 
            = __Vtemp_he4c681a4__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x15U] 
            = __Vtemp_he4c681a4__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x16U] 
            = __Vtemp_he4c681a4__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x17U] 
            = __Vtemp_he4c681a4__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x14U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x15U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x16U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x17U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xffffffdfU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__5__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__5__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 5U));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__24, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h70c7bb94__0, __Vtemp_ha7f5e15a__24, 0xcU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__25, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h547a22d1__0, __Vtemp_ha7f5e15a__25, 0xdU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__26, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h7b9e1510__0, __Vtemp_ha7f5e15a__26, 0xcU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__27, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hb8d874c9__0, __Vtemp_ha7f5e15a__27, 0xdU);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__6__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x18U] 
            = (~ __Vtemp_h70c7bb94__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x19U] 
            = (~ __Vtemp_h70c7bb94__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1aU] 
            = (~ __Vtemp_h70c7bb94__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1bU] 
            = (~ __Vtemp_h70c7bb94__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__6__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x18U] 
            = (~ __Vtemp_h547a22d1__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x19U] 
            = (~ __Vtemp_h547a22d1__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1aU] 
            = (~ __Vtemp_h547a22d1__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1bU] 
            = (~ __Vtemp_h547a22d1__0[3U]);
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
            = __Vtemp_h7b9e1510__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x19U] 
            = __Vtemp_h7b9e1510__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1aU] 
            = __Vtemp_h7b9e1510__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1bU] 
            = __Vtemp_h7b9e1510__0[3U];
    } else if ((IData)((0x3000U == (0x7000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x18U] 
            = __Vtemp_hb8d874c9__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x19U] 
            = __Vtemp_hb8d874c9__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1aU] 
            = __Vtemp_hb8d874c9__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1bU] 
            = __Vtemp_hb8d874c9__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x18U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x19U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1aU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1bU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xffffffbfU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__6__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__6__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 6U));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__28, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h030c6d76__0, __Vtemp_ha7f5e15a__28, 0xeU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__29, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h2391c84f__0, __Vtemp_ha7f5e15a__29, 0xfU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__30, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h550a600a__0, __Vtemp_ha7f5e15a__30, 0xeU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__31, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hcca3752c__0, __Vtemp_ha7f5e15a__31, 0xfU);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__7__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1cU] 
            = (~ __Vtemp_h030c6d76__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1dU] 
            = (~ __Vtemp_h030c6d76__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1eU] 
            = (~ __Vtemp_h030c6d76__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1fU] 
            = (~ __Vtemp_h030c6d76__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__7__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1cU] 
            = (~ __Vtemp_h2391c84f__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1dU] 
            = (~ __Vtemp_h2391c84f__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1eU] 
            = (~ __Vtemp_h2391c84f__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1fU] 
            = (~ __Vtemp_h2391c84f__0[3U]);
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
            = __Vtemp_h550a600a__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1dU] 
            = __Vtemp_h550a600a__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1eU] 
            = __Vtemp_h550a600a__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1fU] 
            = __Vtemp_h550a600a__0[3U];
    } else if ((IData)((0xc000U == (0x1c000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1cU] 
            = __Vtemp_hcca3752c__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1dU] 
            = __Vtemp_hcca3752c__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1eU] 
            = __Vtemp_hcca3752c__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1fU] 
            = __Vtemp_hcca3752c__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1cU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1dU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1eU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x1fU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xffffff7fU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__7__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__7__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 7U));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__32, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h72ec1bd8__0, __Vtemp_ha7f5e15a__32, 0x10U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__33, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h3bfc8245__0, __Vtemp_ha7f5e15a__33, 0x11U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__34, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hfda4ee93__0, __Vtemp_ha7f5e15a__34, 0x10U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__35, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h289dc6ba__0, __Vtemp_ha7f5e15a__35, 0x11U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__8__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x20U] 
            = (~ __Vtemp_h72ec1bd8__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x21U] 
            = (~ __Vtemp_h72ec1bd8__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x22U] 
            = (~ __Vtemp_h72ec1bd8__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x23U] 
            = (~ __Vtemp_h72ec1bd8__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__8__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x20U] 
            = (~ __Vtemp_h3bfc8245__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x21U] 
            = (~ __Vtemp_h3bfc8245__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x22U] 
            = (~ __Vtemp_h3bfc8245__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x23U] 
            = (~ __Vtemp_h3bfc8245__0[3U]);
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
            = __Vtemp_hfda4ee93__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x21U] 
            = __Vtemp_hfda4ee93__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x22U] 
            = __Vtemp_hfda4ee93__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x23U] 
            = __Vtemp_hfda4ee93__0[3U];
    } else if ((IData)((0x30000U == (0x70000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x20U] 
            = __Vtemp_h289dc6ba__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x21U] 
            = __Vtemp_h289dc6ba__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x22U] 
            = __Vtemp_h289dc6ba__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x23U] 
            = __Vtemp_h289dc6ba__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x20U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x21U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x22U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x23U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xfffffeffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__8__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__8__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 8U));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__36, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h53acf226__0, __Vtemp_ha7f5e15a__36, 0x12U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__37, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h4b9ea226__0, __Vtemp_ha7f5e15a__37, 0x13U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__38, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h5ed08074__0, __Vtemp_ha7f5e15a__38, 0x12U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__39, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hc655189f__0, __Vtemp_ha7f5e15a__39, 0x13U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__9__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x24U] 
            = (~ __Vtemp_h53acf226__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x25U] 
            = (~ __Vtemp_h53acf226__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x26U] 
            = (~ __Vtemp_h53acf226__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x27U] 
            = (~ __Vtemp_h53acf226__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__9__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x24U] 
            = (~ __Vtemp_h4b9ea226__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x25U] 
            = (~ __Vtemp_h4b9ea226__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x26U] 
            = (~ __Vtemp_h4b9ea226__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x27U] 
            = (~ __Vtemp_h4b9ea226__0[3U]);
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
            = __Vtemp_h5ed08074__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x25U] 
            = __Vtemp_h5ed08074__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x26U] 
            = __Vtemp_h5ed08074__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x27U] 
            = __Vtemp_h5ed08074__0[3U];
    } else if ((IData)((0xc0000U == (0x1c0000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x24U] 
            = __Vtemp_hc655189f__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x25U] 
            = __Vtemp_hc655189f__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x26U] 
            = __Vtemp_hc655189f__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x27U] 
            = __Vtemp_hc655189f__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x24U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x25U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x26U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x27U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xfffffdffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__9__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__9__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 9U));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__40, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hf6d1fe4e__0, __Vtemp_ha7f5e15a__40, 0x14U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__41, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_heceb2615__0, __Vtemp_ha7f5e15a__41, 0x15U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__42, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_he54e7a9b__0, __Vtemp_ha7f5e15a__42, 0x14U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__43, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h6626edb3__0, __Vtemp_ha7f5e15a__43, 0x15U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__10__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x28U] 
            = (~ __Vtemp_hf6d1fe4e__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x29U] 
            = (~ __Vtemp_hf6d1fe4e__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2aU] 
            = (~ __Vtemp_hf6d1fe4e__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2bU] 
            = (~ __Vtemp_hf6d1fe4e__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__10__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x28U] 
            = (~ __Vtemp_heceb2615__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x29U] 
            = (~ __Vtemp_heceb2615__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2aU] 
            = (~ __Vtemp_heceb2615__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2bU] 
            = (~ __Vtemp_heceb2615__0[3U]);
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
            = __Vtemp_he54e7a9b__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x29U] 
            = __Vtemp_he54e7a9b__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2aU] 
            = __Vtemp_he54e7a9b__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2bU] 
            = __Vtemp_he54e7a9b__0[3U];
    } else if ((IData)((0x300000U == (0x700000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x28U] 
            = __Vtemp_h6626edb3__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x29U] 
            = __Vtemp_h6626edb3__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2aU] 
            = __Vtemp_h6626edb3__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2bU] 
            = __Vtemp_h6626edb3__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x28U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x29U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2aU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2bU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xfffffbffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__10__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__10__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0xaU));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__44, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hcd554158__0, __Vtemp_ha7f5e15a__44, 0x16U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__45, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hcd279931__0, __Vtemp_ha7f5e15a__45, 0x17U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__46, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h4026c491__0, __Vtemp_ha7f5e15a__46, 0x16U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__47, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hd0072a8c__0, __Vtemp_ha7f5e15a__47, 0x17U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__11__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2cU] 
            = (~ __Vtemp_hcd554158__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2dU] 
            = (~ __Vtemp_hcd554158__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2eU] 
            = (~ __Vtemp_hcd554158__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2fU] 
            = (~ __Vtemp_hcd554158__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__11__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2cU] 
            = (~ __Vtemp_hcd279931__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2dU] 
            = (~ __Vtemp_hcd279931__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2eU] 
            = (~ __Vtemp_hcd279931__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2fU] 
            = (~ __Vtemp_hcd279931__0[3U]);
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
            = __Vtemp_h4026c491__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2dU] 
            = __Vtemp_h4026c491__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2eU] 
            = __Vtemp_h4026c491__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2fU] 
            = __Vtemp_h4026c491__0[3U];
    } else if ((IData)((0xc00000U == (0x1c00000U & 
                                      vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2cU] 
            = __Vtemp_hd0072a8c__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2dU] 
            = __Vtemp_hd0072a8c__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2eU] 
            = __Vtemp_hd0072a8c__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2fU] 
            = __Vtemp_hd0072a8c__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2cU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2dU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2eU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x2fU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xfffff7ffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__11__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__11__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0xbU));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__48, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_he4d0efc8__0, __Vtemp_ha7f5e15a__48, 0x18U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__49, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h1b5d79d1__0, __Vtemp_ha7f5e15a__49, 0x19U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__50, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h088aa92c__0, __Vtemp_ha7f5e15a__50, 0x18U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__51, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h13d8aed8__0, __Vtemp_ha7f5e15a__51, 0x19U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__12__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x30U] 
            = (~ __Vtemp_he4d0efc8__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x31U] 
            = (~ __Vtemp_he4d0efc8__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x32U] 
            = (~ __Vtemp_he4d0efc8__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x33U] 
            = (~ __Vtemp_he4d0efc8__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__12__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x30U] 
            = (~ __Vtemp_h1b5d79d1__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x31U] 
            = (~ __Vtemp_h1b5d79d1__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x32U] 
            = (~ __Vtemp_h1b5d79d1__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x33U] 
            = (~ __Vtemp_h1b5d79d1__0[3U]);
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
            = __Vtemp_h088aa92c__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x31U] 
            = __Vtemp_h088aa92c__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x32U] 
            = __Vtemp_h088aa92c__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x33U] 
            = __Vtemp_h088aa92c__0[3U];
    } else if ((IData)((0x3000000U == (0x7000000U & 
                                       vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x30U] 
            = __Vtemp_h13d8aed8__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x31U] 
            = __Vtemp_h13d8aed8__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x32U] 
            = __Vtemp_h13d8aed8__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x33U] 
            = __Vtemp_h13d8aed8__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x30U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x31U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x32U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x33U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xffffefffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__12__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__12__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0xcU));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__52, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h5c7d0a1c__0, __Vtemp_ha7f5e15a__52, 0x1aU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__53, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hc08be16e__0, __Vtemp_ha7f5e15a__53, 0x1bU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__54, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hd36dbabc__0, __Vtemp_ha7f5e15a__54, 0x1aU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__55, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h467a05e4__0, __Vtemp_ha7f5e15a__55, 0x1bU);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__13__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x34U] 
            = (~ __Vtemp_h5c7d0a1c__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x35U] 
            = (~ __Vtemp_h5c7d0a1c__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x36U] 
            = (~ __Vtemp_h5c7d0a1c__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x37U] 
            = (~ __Vtemp_h5c7d0a1c__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__13__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x34U] 
            = (~ __Vtemp_hc08be16e__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x35U] 
            = (~ __Vtemp_hc08be16e__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x36U] 
            = (~ __Vtemp_hc08be16e__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x37U] 
            = (~ __Vtemp_hc08be16e__0[3U]);
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
            = __Vtemp_hd36dbabc__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x35U] 
            = __Vtemp_hd36dbabc__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x36U] 
            = __Vtemp_hd36dbabc__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x37U] 
            = __Vtemp_hd36dbabc__0[3U];
    } else if ((IData)((0xc000000U == (0x1c000000U 
                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x34U] 
            = __Vtemp_h467a05e4__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x35U] 
            = __Vtemp_h467a05e4__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x36U] 
            = __Vtemp_h467a05e4__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x37U] 
            = __Vtemp_h467a05e4__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x34U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x35U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x36U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x37U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xffffdfffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__13__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__13__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0xdU));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__56, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h8cbd474f__0, __Vtemp_ha7f5e15a__56, 0x1cU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__57, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h3a987d1f__0, __Vtemp_ha7f5e15a__57, 0x1dU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__58, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h6ad552fe__0, __Vtemp_ha7f5e15a__58, 0x1cU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__59, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h729643f9__0, __Vtemp_ha7f5e15a__59, 0x1dU);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__14__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x38U] 
            = (~ __Vtemp_h8cbd474f__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x39U] 
            = (~ __Vtemp_h8cbd474f__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3aU] 
            = (~ __Vtemp_h8cbd474f__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3bU] 
            = (~ __Vtemp_h8cbd474f__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__14__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x38U] 
            = (~ __Vtemp_h3a987d1f__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x39U] 
            = (~ __Vtemp_h3a987d1f__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3aU] 
            = (~ __Vtemp_h3a987d1f__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3bU] 
            = (~ __Vtemp_h3a987d1f__0[3U]);
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
            = __Vtemp_h6ad552fe__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x39U] 
            = __Vtemp_h6ad552fe__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3aU] 
            = __Vtemp_h6ad552fe__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3bU] 
            = __Vtemp_h6ad552fe__0[3U];
    } else if ((IData)((0x30000000U == (0x70000000U 
                                        & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x38U] 
            = __Vtemp_h729643f9__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x39U] 
            = __Vtemp_h729643f9__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3aU] 
            = __Vtemp_h729643f9__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3bU] 
            = __Vtemp_h729643f9__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x38U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x39U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3aU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3bU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xffffbfffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__14__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__14__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0xeU));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__60, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h060a2388__0, __Vtemp_ha7f5e15a__60, 0x1eU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__61, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h86ab078f__0, __Vtemp_ha7f5e15a__61, 0x1fU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__62, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h275775c6__0, __Vtemp_ha7f5e15a__62, 0x1eU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__63, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hecaff918__0, __Vtemp_ha7f5e15a__63, 0x1fU);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__15__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3cU] 
            = (~ __Vtemp_h060a2388__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3dU] 
            = (~ __Vtemp_h060a2388__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3eU] 
            = (~ __Vtemp_h060a2388__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3fU] 
            = (~ __Vtemp_h060a2388__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__15__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3cU] 
            = (~ __Vtemp_h86ab078f__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3dU] 
            = (~ __Vtemp_h86ab078f__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3eU] 
            = (~ __Vtemp_h86ab078f__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3fU] 
            = (~ __Vtemp_h86ab078f__0[3U]);
    } else if ((1U & ((~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]) 
                      & ((IData)((0x80000000U == (0xc0000000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))) 
                         | (IData)((0x40000000U == 
                                    (0xc0000000U & 
                                     vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3cU] 
            = __Vtemp_h275775c6__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3dU] 
            = __Vtemp_h275775c6__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3eU] 
            = __Vtemp_h275775c6__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3fU] 
            = __Vtemp_h275775c6__0[3U];
    } else if ((1U & (IData)(((0xc0000000U == (0xc0000000U 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[0U])) 
                              & (~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3cU] 
            = __Vtemp_hecaff918__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3dU] 
            = __Vtemp_hecaff918__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3eU] 
            = __Vtemp_hecaff918__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3fU] 
            = __Vtemp_hecaff918__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3cU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3dU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3eU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3fU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xffff7fffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__15__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__15__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0xfU));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__64, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__65, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_he2c41732__0, __Vtemp_ha7f5e15a__65, 1U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__66, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__67, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h21cd491d__0, __Vtemp_ha7f5e15a__67, 1U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__16__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x40U] 
            = (~ __Vtemp_ha7f5e15a__64[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x41U] 
            = (~ __Vtemp_ha7f5e15a__64[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x42U] 
            = (~ __Vtemp_ha7f5e15a__64[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x43U] 
            = (~ __Vtemp_ha7f5e15a__64[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__16__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x40U] 
            = (~ __Vtemp_he2c41732__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x41U] 
            = (~ __Vtemp_he2c41732__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x42U] 
            = (~ __Vtemp_he2c41732__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x43U] 
            = (~ __Vtemp_he2c41732__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                          >> 2U)) & (((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                                       >> 1U) & (~ 
                                                 vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])) 
                                     | (IData)((1U 
                                                == 
                                                (3U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x40U] 
            = __Vtemp_ha7f5e15a__66[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x41U] 
            = __Vtemp_ha7f5e15a__66[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x42U] 
            = __Vtemp_ha7f5e15a__66[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x43U] 
            = __Vtemp_ha7f5e15a__66[3U];
    } else if ((IData)((3U == (7U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x40U] 
            = __Vtemp_h21cd491d__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x41U] 
            = __Vtemp_h21cd491d__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x42U] 
            = __Vtemp_h21cd491d__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x43U] 
            = __Vtemp_h21cd491d__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x40U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x41U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x42U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x43U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xfffeffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__16__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__16__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x10U));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__68, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_heb5e9636__0, __Vtemp_ha7f5e15a__68, 2U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__69, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_ha3d25c14__0, __Vtemp_ha7f5e15a__69, 3U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__70, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h2b3f50e6__0, __Vtemp_ha7f5e15a__70, 2U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__71, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h429b3cd6__0, __Vtemp_ha7f5e15a__71, 3U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__17__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x44U] 
            = (~ __Vtemp_heb5e9636__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x45U] 
            = (~ __Vtemp_heb5e9636__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x46U] 
            = (~ __Vtemp_heb5e9636__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x47U] 
            = (~ __Vtemp_heb5e9636__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__17__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x44U] 
            = (~ __Vtemp_ha3d25c14__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x45U] 
            = (~ __Vtemp_ha3d25c14__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x46U] 
            = (~ __Vtemp_ha3d25c14__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x47U] 
            = (~ __Vtemp_ha3d25c14__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                          >> 4U)) & ((IData)((8U == 
                                              (0xcU 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                                     | (IData)((4U 
                                                == 
                                                (0xcU 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x44U] 
            = __Vtemp_h2b3f50e6__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x45U] 
            = __Vtemp_h2b3f50e6__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x46U] 
            = __Vtemp_h2b3f50e6__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x47U] 
            = __Vtemp_h2b3f50e6__0[3U];
    } else if ((IData)((0xcU == (0x1cU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x44U] 
            = __Vtemp_h429b3cd6__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x45U] 
            = __Vtemp_h429b3cd6__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x46U] 
            = __Vtemp_h429b3cd6__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x47U] 
            = __Vtemp_h429b3cd6__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x44U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x45U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x46U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x47U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xfffdffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__17__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__17__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x11U));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__72, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hd2a46b52__0, __Vtemp_ha7f5e15a__72, 4U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__73, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h3f0a5ca9__0, __Vtemp_ha7f5e15a__73, 5U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__74, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h4aa44f23__0, __Vtemp_ha7f5e15a__74, 4U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__75, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_he41e187a__0, __Vtemp_ha7f5e15a__75, 5U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__18__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x48U] 
            = (~ __Vtemp_hd2a46b52__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x49U] 
            = (~ __Vtemp_hd2a46b52__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4aU] 
            = (~ __Vtemp_hd2a46b52__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4bU] 
            = (~ __Vtemp_hd2a46b52__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__18__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x48U] 
            = (~ __Vtemp_h3f0a5ca9__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x49U] 
            = (~ __Vtemp_h3f0a5ca9__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4aU] 
            = (~ __Vtemp_h3f0a5ca9__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4bU] 
            = (~ __Vtemp_h3f0a5ca9__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                          >> 6U)) & ((IData)((0x20U 
                                              == (0x30U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                                     | (IData)((0x10U 
                                                == 
                                                (0x30U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x48U] 
            = __Vtemp_h4aa44f23__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x49U] 
            = __Vtemp_h4aa44f23__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4aU] 
            = __Vtemp_h4aa44f23__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4bU] 
            = __Vtemp_h4aa44f23__0[3U];
    } else if ((IData)((0x30U == (0x70U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x48U] 
            = __Vtemp_he41e187a__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x49U] 
            = __Vtemp_he41e187a__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4aU] 
            = __Vtemp_he41e187a__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4bU] 
            = __Vtemp_he41e187a__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x48U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x49U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4aU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4bU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xfffbffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__18__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__18__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x12U));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__76, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h1d4ab441__0, __Vtemp_ha7f5e15a__76, 6U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__77, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h7cfa5a1d__0, __Vtemp_ha7f5e15a__77, 7U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__78, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h5a2c5901__0, __Vtemp_ha7f5e15a__78, 6U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__79, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hf50ff077__0, __Vtemp_ha7f5e15a__79, 7U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__19__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4cU] 
            = (~ __Vtemp_h1d4ab441__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4dU] 
            = (~ __Vtemp_h1d4ab441__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4eU] 
            = (~ __Vtemp_h1d4ab441__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4fU] 
            = (~ __Vtemp_h1d4ab441__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__19__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4cU] 
            = (~ __Vtemp_h7cfa5a1d__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4dU] 
            = (~ __Vtemp_h7cfa5a1d__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4eU] 
            = (~ __Vtemp_h7cfa5a1d__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4fU] 
            = (~ __Vtemp_h7cfa5a1d__0[3U]);
    } else if ((1U & ((~ (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U] 
                          >> 8U)) & ((IData)((0x80U 
                                              == (0xc0U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                                     | (IData)((0x40U 
                                                == 
                                                (0xc0U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4cU] 
            = __Vtemp_h5a2c5901__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4dU] 
            = __Vtemp_h5a2c5901__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4eU] 
            = __Vtemp_h5a2c5901__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4fU] 
            = __Vtemp_h5a2c5901__0[3U];
    } else if ((IData)((0xc0U == (0x1c0U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4cU] 
            = __Vtemp_hf50ff077__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4dU] 
            = __Vtemp_hf50ff077__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4eU] 
            = __Vtemp_hf50ff077__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4fU] 
            = __Vtemp_hf50ff077__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4cU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4dU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4eU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x4fU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xfff7ffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__19__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__19__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x13U));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__80, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h46381b1c__0, __Vtemp_ha7f5e15a__80, 8U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__81, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h6043537d__0, __Vtemp_ha7f5e15a__81, 9U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__82, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h407c64ff__0, __Vtemp_ha7f5e15a__82, 8U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__83, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h3ff2f06c__0, __Vtemp_ha7f5e15a__83, 9U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__20__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x50U] 
            = (~ __Vtemp_h46381b1c__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x51U] 
            = (~ __Vtemp_h46381b1c__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x52U] 
            = (~ __Vtemp_h46381b1c__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x53U] 
            = (~ __Vtemp_h46381b1c__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__20__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x50U] 
            = (~ __Vtemp_h6043537d__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x51U] 
            = (~ __Vtemp_h6043537d__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x52U] 
            = (~ __Vtemp_h6043537d__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x53U] 
            = (~ __Vtemp_h6043537d__0[3U]);
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
            = __Vtemp_h407c64ff__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x51U] 
            = __Vtemp_h407c64ff__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x52U] 
            = __Vtemp_h407c64ff__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x53U] 
            = __Vtemp_h407c64ff__0[3U];
    } else if ((IData)((0x300U == (0x700U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x50U] 
            = __Vtemp_h3ff2f06c__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x51U] 
            = __Vtemp_h3ff2f06c__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x52U] 
            = __Vtemp_h3ff2f06c__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x53U] 
            = __Vtemp_h3ff2f06c__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x50U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x51U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x52U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x53U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xffefffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__20__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__20__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x14U));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__84, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hc3fe4aad__0, __Vtemp_ha7f5e15a__84, 0xaU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__85, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hc7af9e2b__0, __Vtemp_ha7f5e15a__85, 0xbU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__86, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hf4c68999__0, __Vtemp_ha7f5e15a__86, 0xaU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__87, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h68c5c48f__0, __Vtemp_ha7f5e15a__87, 0xbU);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__21__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x54U] 
            = (~ __Vtemp_hc3fe4aad__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x55U] 
            = (~ __Vtemp_hc3fe4aad__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x56U] 
            = (~ __Vtemp_hc3fe4aad__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x57U] 
            = (~ __Vtemp_hc3fe4aad__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__21__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x54U] 
            = (~ __Vtemp_hc7af9e2b__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x55U] 
            = (~ __Vtemp_hc7af9e2b__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x56U] 
            = (~ __Vtemp_hc7af9e2b__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x57U] 
            = (~ __Vtemp_hc7af9e2b__0[3U]);
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
            = __Vtemp_hf4c68999__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x55U] 
            = __Vtemp_hf4c68999__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x56U] 
            = __Vtemp_hf4c68999__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x57U] 
            = __Vtemp_hf4c68999__0[3U];
    } else if ((IData)((0xc00U == (0x1c00U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x54U] 
            = __Vtemp_h68c5c48f__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x55U] 
            = __Vtemp_h68c5c48f__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x56U] 
            = __Vtemp_h68c5c48f__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x57U] 
            = __Vtemp_h68c5c48f__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x54U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x55U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x56U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x57U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xffdfffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__21__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__21__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x15U));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__88, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hf61ac915__0, __Vtemp_ha7f5e15a__88, 0xcU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__89, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h9c0afb4f__0, __Vtemp_ha7f5e15a__89, 0xdU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__90, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h87601147__0, __Vtemp_ha7f5e15a__90, 0xcU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__91, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h9ab13c41__0, __Vtemp_ha7f5e15a__91, 0xdU);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__22__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x58U] 
            = (~ __Vtemp_hf61ac915__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x59U] 
            = (~ __Vtemp_hf61ac915__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5aU] 
            = (~ __Vtemp_hf61ac915__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5bU] 
            = (~ __Vtemp_hf61ac915__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__22__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x58U] 
            = (~ __Vtemp_h9c0afb4f__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x59U] 
            = (~ __Vtemp_h9c0afb4f__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5aU] 
            = (~ __Vtemp_h9c0afb4f__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5bU] 
            = (~ __Vtemp_h9c0afb4f__0[3U]);
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
            = __Vtemp_h87601147__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x59U] 
            = __Vtemp_h87601147__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5aU] 
            = __Vtemp_h87601147__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5bU] 
            = __Vtemp_h87601147__0[3U];
    } else if ((IData)((0x3000U == (0x7000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x58U] 
            = __Vtemp_h9ab13c41__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x59U] 
            = __Vtemp_h9ab13c41__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5aU] 
            = __Vtemp_h9ab13c41__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5bU] 
            = __Vtemp_h9ab13c41__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x58U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x59U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5aU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5bU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xffbfffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__22__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__22__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x16U));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__92, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h896cc9f8__0, __Vtemp_ha7f5e15a__92, 0xeU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__93, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hf0ba1d6e__0, __Vtemp_ha7f5e15a__93, 0xfU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__94, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h72ef1673__0, __Vtemp_ha7f5e15a__94, 0xeU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__95, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hd7dce8b4__0, __Vtemp_ha7f5e15a__95, 0xfU);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__23__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5cU] 
            = (~ __Vtemp_h896cc9f8__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5dU] 
            = (~ __Vtemp_h896cc9f8__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5eU] 
            = (~ __Vtemp_h896cc9f8__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5fU] 
            = (~ __Vtemp_h896cc9f8__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__23__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5cU] 
            = (~ __Vtemp_hf0ba1d6e__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5dU] 
            = (~ __Vtemp_hf0ba1d6e__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5eU] 
            = (~ __Vtemp_hf0ba1d6e__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5fU] 
            = (~ __Vtemp_hf0ba1d6e__0[3U]);
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
            = __Vtemp_h72ef1673__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5dU] 
            = __Vtemp_h72ef1673__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5eU] 
            = __Vtemp_h72ef1673__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5fU] 
            = __Vtemp_h72ef1673__0[3U];
    } else if ((IData)((0xc000U == (0x1c000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5cU] 
            = __Vtemp_hd7dce8b4__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5dU] 
            = __Vtemp_hd7dce8b4__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5eU] 
            = __Vtemp_hd7dce8b4__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5fU] 
            = __Vtemp_hd7dce8b4__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5cU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5dU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5eU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x5fU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xff7fffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__23__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__23__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x17U));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__96, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h7d1b5138__0, __Vtemp_ha7f5e15a__96, 0x10U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__97, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hc79f9d67__0, __Vtemp_ha7f5e15a__97, 0x11U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__98, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hca817cba__0, __Vtemp_ha7f5e15a__98, 0x10U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__99, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h2edfb1af__0, __Vtemp_ha7f5e15a__99, 0x11U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__24__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x60U] 
            = (~ __Vtemp_h7d1b5138__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x61U] 
            = (~ __Vtemp_h7d1b5138__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x62U] 
            = (~ __Vtemp_h7d1b5138__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x63U] 
            = (~ __Vtemp_h7d1b5138__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__24__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x60U] 
            = (~ __Vtemp_hc79f9d67__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x61U] 
            = (~ __Vtemp_hc79f9d67__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x62U] 
            = (~ __Vtemp_hc79f9d67__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x63U] 
            = (~ __Vtemp_hc79f9d67__0[3U]);
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
            = __Vtemp_hca817cba__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x61U] 
            = __Vtemp_hca817cba__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x62U] 
            = __Vtemp_hca817cba__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x63U] 
            = __Vtemp_hca817cba__0[3U];
    } else if ((IData)((0x30000U == (0x70000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x60U] 
            = __Vtemp_h2edfb1af__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x61U] 
            = __Vtemp_h2edfb1af__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x62U] 
            = __Vtemp_h2edfb1af__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x63U] 
            = __Vtemp_h2edfb1af__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x60U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x61U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x62U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x63U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xfeffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__24__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__24__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x18U));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__100, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h1850ead9__0, __Vtemp_ha7f5e15a__100, 0x12U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__101, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h5ffba774__0, __Vtemp_ha7f5e15a__101, 0x13U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__102, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h2f4f4555__0, __Vtemp_ha7f5e15a__102, 0x12U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__103, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h32ceb948__0, __Vtemp_ha7f5e15a__103, 0x13U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__25__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x64U] 
            = (~ __Vtemp_h1850ead9__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x65U] 
            = (~ __Vtemp_h1850ead9__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x66U] 
            = (~ __Vtemp_h1850ead9__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x67U] 
            = (~ __Vtemp_h1850ead9__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__25__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x64U] 
            = (~ __Vtemp_h5ffba774__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x65U] 
            = (~ __Vtemp_h5ffba774__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x66U] 
            = (~ __Vtemp_h5ffba774__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x67U] 
            = (~ __Vtemp_h5ffba774__0[3U]);
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
            = __Vtemp_h2f4f4555__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x65U] 
            = __Vtemp_h2f4f4555__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x66U] 
            = __Vtemp_h2f4f4555__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x67U] 
            = __Vtemp_h2f4f4555__0[3U];
    } else if ((IData)((0xc0000U == (0x1c0000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x64U] 
            = __Vtemp_h32ceb948__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x65U] 
            = __Vtemp_h32ceb948__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x66U] 
            = __Vtemp_h32ceb948__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x67U] 
            = __Vtemp_h32ceb948__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x64U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x65U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x66U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x67U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xfdffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__25__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__25__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x19U));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__104, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h100fb6e9__0, __Vtemp_ha7f5e15a__104, 0x14U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__105, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h4d2e2c9a__0, __Vtemp_ha7f5e15a__105, 0x15U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__106, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h40ff23e9__0, __Vtemp_ha7f5e15a__106, 0x14U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__107, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h92e8011b__0, __Vtemp_ha7f5e15a__107, 0x15U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__26__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x68U] 
            = (~ __Vtemp_h100fb6e9__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x69U] 
            = (~ __Vtemp_h100fb6e9__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6aU] 
            = (~ __Vtemp_h100fb6e9__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6bU] 
            = (~ __Vtemp_h100fb6e9__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__26__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x68U] 
            = (~ __Vtemp_h4d2e2c9a__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x69U] 
            = (~ __Vtemp_h4d2e2c9a__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6aU] 
            = (~ __Vtemp_h4d2e2c9a__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6bU] 
            = (~ __Vtemp_h4d2e2c9a__0[3U]);
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
            = __Vtemp_h40ff23e9__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x69U] 
            = __Vtemp_h40ff23e9__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6aU] 
            = __Vtemp_h40ff23e9__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6bU] 
            = __Vtemp_h40ff23e9__0[3U];
    } else if ((IData)((0x300000U == (0x700000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x68U] 
            = __Vtemp_h92e8011b__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x69U] 
            = __Vtemp_h92e8011b__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6aU] 
            = __Vtemp_h92e8011b__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6bU] 
            = __Vtemp_h92e8011b__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x68U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x69U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6aU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6bU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xfbffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__26__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__26__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x1aU));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__108, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h28af11f4__0, __Vtemp_ha7f5e15a__108, 0x16U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__109, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h65585b2b__0, __Vtemp_ha7f5e15a__109, 0x17U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__110, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h8b2c512f__0, __Vtemp_ha7f5e15a__110, 0x16U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__111, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hdd42b959__0, __Vtemp_ha7f5e15a__111, 0x17U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__27__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6cU] 
            = (~ __Vtemp_h28af11f4__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6dU] 
            = (~ __Vtemp_h28af11f4__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6eU] 
            = (~ __Vtemp_h28af11f4__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6fU] 
            = (~ __Vtemp_h28af11f4__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__27__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6cU] 
            = (~ __Vtemp_h65585b2b__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6dU] 
            = (~ __Vtemp_h65585b2b__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6eU] 
            = (~ __Vtemp_h65585b2b__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6fU] 
            = (~ __Vtemp_h65585b2b__0[3U]);
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
            = __Vtemp_h8b2c512f__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6dU] 
            = __Vtemp_h8b2c512f__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6eU] 
            = __Vtemp_h8b2c512f__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6fU] 
            = __Vtemp_h8b2c512f__0[3U];
    } else if ((IData)((0xc00000U == (0x1c00000U & 
                                      vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6cU] 
            = __Vtemp_hdd42b959__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6dU] 
            = __Vtemp_hdd42b959__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6eU] 
            = __Vtemp_hdd42b959__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6fU] 
            = __Vtemp_hdd42b959__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6cU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6dU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6eU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x6fU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xf7ffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__27__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__27__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x1bU));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__112, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h6f43dc52__0, __Vtemp_ha7f5e15a__112, 0x18U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__113, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_ha7629acd__0, __Vtemp_ha7f5e15a__113, 0x19U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__114, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h4968b496__0, __Vtemp_ha7f5e15a__114, 0x18U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__115, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hc4a9e346__0, __Vtemp_ha7f5e15a__115, 0x19U);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__28__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x70U] 
            = (~ __Vtemp_h6f43dc52__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x71U] 
            = (~ __Vtemp_h6f43dc52__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x72U] 
            = (~ __Vtemp_h6f43dc52__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x73U] 
            = (~ __Vtemp_h6f43dc52__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__28__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x70U] 
            = (~ __Vtemp_ha7629acd__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x71U] 
            = (~ __Vtemp_ha7629acd__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x72U] 
            = (~ __Vtemp_ha7629acd__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x73U] 
            = (~ __Vtemp_ha7629acd__0[3U]);
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
            = __Vtemp_h4968b496__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x71U] 
            = __Vtemp_h4968b496__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x72U] 
            = __Vtemp_h4968b496__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x73U] 
            = __Vtemp_h4968b496__0[3U];
    } else if ((IData)((0x3000000U == (0x7000000U & 
                                       vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x70U] 
            = __Vtemp_hc4a9e346__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x71U] 
            = __Vtemp_hc4a9e346__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x72U] 
            = __Vtemp_hc4a9e346__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x73U] 
            = __Vtemp_hc4a9e346__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x70U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x71U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x72U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x73U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xefffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__28__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__28__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x1cU));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__116, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hb35fd85b__0, __Vtemp_ha7f5e15a__116, 0x1aU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__117, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hca5d5346__0, __Vtemp_ha7f5e15a__117, 0x1bU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__118, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_hf6e10f44__0, __Vtemp_ha7f5e15a__118, 0x1aU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__119, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h3ee3bac3__0, __Vtemp_ha7f5e15a__119, 0x1bU);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__29__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x74U] 
            = (~ __Vtemp_hb35fd85b__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x75U] 
            = (~ __Vtemp_hb35fd85b__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x76U] 
            = (~ __Vtemp_hb35fd85b__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x77U] 
            = (~ __Vtemp_hb35fd85b__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__29__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x74U] 
            = (~ __Vtemp_hca5d5346__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x75U] 
            = (~ __Vtemp_hca5d5346__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x76U] 
            = (~ __Vtemp_hca5d5346__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x77U] 
            = (~ __Vtemp_hca5d5346__0[3U]);
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
            = __Vtemp_hf6e10f44__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x75U] 
            = __Vtemp_hf6e10f44__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x76U] 
            = __Vtemp_hf6e10f44__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x77U] 
            = __Vtemp_hf6e10f44__0[3U];
    } else if ((IData)((0xc000000U == (0x1c000000U 
                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x74U] 
            = __Vtemp_h3ee3bac3__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x75U] 
            = __Vtemp_h3ee3bac3__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x76U] 
            = __Vtemp_h3ee3bac3__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x77U] 
            = __Vtemp_h3ee3bac3__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x74U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x75U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x76U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x77U] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xdfffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__29__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__29__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x1dU));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__120, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h67176857__0, __Vtemp_ha7f5e15a__120, 0x1cU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__121, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_he940d510__0, __Vtemp_ha7f5e15a__121, 0x1dU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__122, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h3349bb55__0, __Vtemp_ha7f5e15a__122, 0x1cU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__123, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h8826ec64__0, __Vtemp_ha7f5e15a__123, 0x1dU);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__30__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x78U] 
            = (~ __Vtemp_h67176857__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x79U] 
            = (~ __Vtemp_h67176857__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7aU] 
            = (~ __Vtemp_h67176857__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7bU] 
            = (~ __Vtemp_h67176857__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__30__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x78U] 
            = (~ __Vtemp_he940d510__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x79U] 
            = (~ __Vtemp_he940d510__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7aU] 
            = (~ __Vtemp_he940d510__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7bU] 
            = (~ __Vtemp_he940d510__0[3U]);
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
            = __Vtemp_h3349bb55__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x79U] 
            = __Vtemp_h3349bb55__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7aU] 
            = __Vtemp_h3349bb55__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7bU] 
            = __Vtemp_h3349bb55__0[3U];
    } else if ((IData)((0x30000000U == (0x70000000U 
                                        & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x78U] 
            = __Vtemp_h8826ec64__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x79U] 
            = __Vtemp_h8826ec64__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7aU] 
            = __Vtemp_h8826ec64__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7bU] 
            = __Vtemp_h8826ec64__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x78U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x79U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7aU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7bU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0xbfffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__30__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__30__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x1eU));
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__124, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h5fa4bdd1__0, __Vtemp_ha7f5e15a__124, 0x1eU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__125, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h33b9fd00__0, __Vtemp_ha7f5e15a__125, 0x1fU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__126, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h361bf5e2__0, __Vtemp_ha7f5e15a__126, 0x1eU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__127, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h9e42edcc__0, __Vtemp_ha7f5e15a__127, 0x1fU);
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__31__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7cU] 
            = (~ __Vtemp_h5fa4bdd1__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7dU] 
            = (~ __Vtemp_h5fa4bdd1__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7eU] 
            = (~ __Vtemp_h5fa4bdd1__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7fU] 
            = (~ __Vtemp_h5fa4bdd1__0[3U]);
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__31__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7cU] 
            = (~ __Vtemp_h33b9fd00__0[0U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7dU] 
            = (~ __Vtemp_h33b9fd00__0[1U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7eU] 
            = (~ __Vtemp_h33b9fd00__0[2U]);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7fU] 
            = (~ __Vtemp_h33b9fd00__0[3U]);
    } else if ((1U & ((~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[2U]) 
                      & ((IData)((0x80000000U == (0xc0000000U 
                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))) 
                         | (IData)((0x40000000U == 
                                    (0xc0000000U & 
                                     vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U]))))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7cU] 
            = __Vtemp_h361bf5e2__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7dU] 
            = __Vtemp_h361bf5e2__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7eU] 
            = __Vtemp_h361bf5e2__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7fU] 
            = __Vtemp_h361bf5e2__0[3U];
    } else if ((1U & (IData)(((0xc0000000U == (0xc0000000U 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])) 
                              & (~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[2U]))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7cU] 
            = __Vtemp_h9e42edcc__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7dU] 
            = __Vtemp_h9e42edcc__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7eU] 
            = __Vtemp_h9e42edcc__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7fU] 
            = __Vtemp_h9e42edcc__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7cU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7dU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7eU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x7fU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta 
        = ((0x7fffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta) 
           | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__31__KET____DOT__ysyx_22040632_booth_i__DOT__sel_negative) 
               | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk2__BRA__31__KET____DOT__ysyx_22040632_booth_i__DOT__sel_double_negative)) 
              << 0x1fU));
    __Vilp = 0U;
    while ((__Vilp <= 0x3bU)) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[__Vilp] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__128, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h5c581ce3__0, __Vtemp_ha7f5e15a__128, 0x1eU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__129, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hbe4629c6__0, __Vtemp_ha7f5e15a__129, 0x1fU);
    VL_ADD_W(4, __Vtemp_he9ae66b8__0, __Vtemp_h5c581ce3__0, __Vtemp_hbe4629c6__0);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__130, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h1eca7809__0, __Vtemp_ha7f5e15a__130, 0x1eU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__131, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h9a884877__0, __Vtemp_ha7f5e15a__131, 0x20U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__132, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h43b5af70__0, __Vtemp_ha7f5e15a__132, 0x1fU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__133, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h1f6a69b0__0, __Vtemp_ha7f5e15a__133, 0x1fU);
    if ((1U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mif.mul_signed))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3cU];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3dU];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3eU];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[0x3fU];
    } else if ((1U & ((IData)((0x80000000U == (0xc0000000U 
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
                = __Vtemp_he9ae66b8__0[0U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                = __Vtemp_he9ae66b8__0[1U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                = __Vtemp_he9ae66b8__0[2U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                = __Vtemp_he9ae66b8__0[3U];
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                = __Vtemp_h1eca7809__0[0U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                = __Vtemp_h1eca7809__0[1U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                = __Vtemp_h1eca7809__0[2U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                = __Vtemp_h1eca7809__0[3U];
        }
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__ysyx_22040632_boothu_i15__DOT__sel_double) {
        if ((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                = __Vtemp_h9a884877__0[0U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                = __Vtemp_h9a884877__0[1U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                = __Vtemp_h9a884877__0[2U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                = __Vtemp_h9a884877__0[3U];
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
                = __Vtemp_h43b5af70__0[0U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                = __Vtemp_h43b5af70__0[1U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                = __Vtemp_h43b5af70__0[2U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                = __Vtemp_h43b5af70__0[3U];
        }
    } else if ((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[1U])) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] 
            = __Vtemp_h1f6a69b0__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
            = __Vtemp_h1f6a69b0__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
            = __Vtemp_h1f6a69b0__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
            = __Vtemp_h1f6a69b0__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3cU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] = 0U;
    }
    __Vilp = 0x40U;
    while ((__Vilp <= 0x7bU)) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[__Vilp] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product_beta[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__134, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_h1827b4b9__0, __Vtemp_ha7f5e15a__134, 0x1eU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__135, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h61d1a9ff__0, __Vtemp_ha7f5e15a__135, 0x1fU);
    VL_ADD_W(4, __Vtemp_h9f7f3185__0, __Vtemp_h1827b4b9__0, __Vtemp_h61d1a9ff__0);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__136, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,5, __Vtemp_he875ffff__0, __Vtemp_ha7f5e15a__136, 0x1eU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__137, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h72869f92__0, __Vtemp_ha7f5e15a__137, 0x20U);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__138, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hf8968c4e__0, __Vtemp_ha7f5e15a__138, 0x1fU);
    VL_EXTEND_WQ(128,64, __Vtemp_ha7f5e15a__139, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtplc);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hc9f93bfe__0, __Vtemp_ha7f5e15a__139, 0x1fU);
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
                = __Vtemp_h9f7f3185__0[0U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                = __Vtemp_h9f7f3185__0[1U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                = __Vtemp_h9f7f3185__0[2U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                = __Vtemp_h9f7f3185__0[3U];
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                = __Vtemp_he875ffff__0[0U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                = __Vtemp_he875ffff__0[1U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                = __Vtemp_he875ffff__0[2U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                = __Vtemp_he875ffff__0[3U];
        }
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__ysyx_22040632_boothu_i31__DOT__sel_double) {
        if ((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[2U])) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                = __Vtemp_h72869f92__0[0U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                = __Vtemp_h72869f92__0[1U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                = __Vtemp_h72869f92__0[2U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                = __Vtemp_h72869f92__0[3U];
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
                = __Vtemp_hf8968c4e__0[0U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                = __Vtemp_hf8968c4e__0[1U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                = __Vtemp_hf8968c4e__0[2U];
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                = __Vtemp_hf8968c4e__0[3U];
        }
    } else if ((1U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__mtpl[2U])) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] 
            = __Vtemp_hc9f93bfe__0[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
            = __Vtemp_hc9f93bfe__0[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
            = __Vtemp_hc9f93bfe__0[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
            = __Vtemp_hc9f93bfe__0[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7cU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] = 0U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c 
        = ((0xffff0000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c) 
           | ((0x8000U & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mif.mul_signed) 
                           << 0xfU) & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta)) 
              | (0x7fffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c 
        = ((0xffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c) 
           | ((0x80000000U & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__mif.mul_signed) 
                               << 0x1fU) & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta)) 
              | (0x7fff0000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c_beta)));
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
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 0x19U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                             << 0x18U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                                << 0x17U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                                   << 0x16U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                      << 0x15U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                         << 0x14U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                            << 0x13U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                               << 0x12U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                                  << 0x11U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                     << 0x10U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                        << 0xfU)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                           << 0xeU)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                              << 0xdU)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                                << 0xcU)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                                << 0xbU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                << 0xaU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                << 9U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                << 8U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                << 7U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                << 6U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                << 5U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                << 4U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                << 3U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                << 2U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                << 1U)) 
                                                                                | ((0x40U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U]) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 2U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 4U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 5U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 6U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 0x18U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                             << 0x17U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                                << 0x16U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                                   << 0x15U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                      << 0x14U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                         << 0x13U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                            << 0x12U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                               << 0x11U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                                  << 0x10U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                     << 0xfU)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                        << 0xeU)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                           << 0xdU)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                              << 0xcU)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                                << 0xbU)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                                << 0xaU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                << 9U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                << 8U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                << 7U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                << 6U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                << 5U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                << 4U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                << 2U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                << 1U)) 
                                                                                | ((0x80U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU]) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 2U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 3U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 5U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 6U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 7U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 0x17U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                             << 0x16U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                                << 0x15U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                                   << 0x14U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                      << 0x13U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                         << 0x12U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                            << 0x11U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                               << 0x10U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                                  << 0xfU)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                     << 0xeU)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                        << 0xdU)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                           << 0xcU)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                              << 0xbU)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                                << 0xaU)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                                << 9U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                << 8U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                << 7U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                << 6U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                << 5U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                << 4U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                << 3U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                << 2U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                << 1U)) 
                                                                                | ((0x100U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U]) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                >> 1U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                >> 2U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 3U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 5U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 6U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 7U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 8U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 0x16U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                             << 0x15U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                                << 0x14U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                                   << 0x13U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                      << 0x12U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                         << 0x11U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                            << 0x10U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                               << 0xfU)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                                  << 0xeU)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                     << 0xdU)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                        << 0xcU)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                           << 0xbU)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                              << 0xaU)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                                << 9U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                                << 8U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                << 7U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                << 6U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                << 5U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                << 4U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                << 3U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                << 2U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                << 1U)) 
                                                                                | ((0x200U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U]) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                >> 1U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                >> 2U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                >> 3U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 5U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 6U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 7U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 8U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 9U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 0x15U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                             << 0x14U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                                << 0x13U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                                   << 0x12U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                      << 0x11U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                         << 0x10U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                            << 0xfU)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                               << 0xeU)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                                  << 0xdU)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                     << 0xcU)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                        << 0xbU)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                           << 0xaU)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                              << 9U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                                << 8U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                                << 7U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                << 6U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                << 5U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                << 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                << 3U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                << 2U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                << 1U)) 
                                                                                | ((0x400U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U]) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                >> 1U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                >> 2U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                >> 3U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                >> 4U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 5U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 6U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 7U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 8U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 9U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 0xaU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 0x14U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                             << 0x13U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                                << 0x12U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                                   << 0x11U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                      << 0x10U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                         << 0xfU)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                            << 0xeU)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                               << 0xdU)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                                  << 0xcU)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                     << 0xbU)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                        << 0xaU)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                           << 9U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                              << 8U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                                << 7U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                                << 6U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                << 5U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                << 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                << 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                << 2U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                << 1U)) 
                                                                                | ((0x800U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU]) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                >> 1U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                >> 2U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                >> 3U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                >> 4U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                >> 5U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 6U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 7U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 8U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 9U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 0xaU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 0xbU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 0x13U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                             << 0x12U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                                << 0x11U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                                   << 0x10U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                      << 0xfU)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                         << 0xeU)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                            << 0xdU)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                               << 0xcU)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                                  << 0xbU)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                     << 0xaU)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                        << 9U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                           << 8U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                              << 7U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                                << 6U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                                << 5U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                << 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                << 3U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                << 2U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                << 1U)) 
                                                                                | ((0x1000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U]) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                >> 1U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                >> 2U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                >> 3U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                >> 4U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                >> 5U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                >> 6U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 7U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 8U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 9U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 0xaU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 0xbU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 0xcU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 0x12U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                             << 0x11U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                                << 0x10U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                                   << 0xfU)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                      << 0xeU)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                         << 0xdU)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                            << 0xcU)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                               << 0xbU)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                                  << 0xaU)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                     << 9U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                        << 8U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                           << 7U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                              << 6U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                                << 5U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                                << 4U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                << 3U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                << 2U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                << 1U)) 
                                                                                | ((0x2000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U]) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                >> 1U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                >> 2U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                >> 3U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                >> 4U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                >> 5U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                >> 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                >> 7U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 8U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 9U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 0xaU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 0xbU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 0xcU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 0xdU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 0x11U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                             << 0x10U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                                << 0xfU)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                                   << 0xeU)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                      << 0xdU)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                         << 0xcU)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                            << 0xbU)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                               << 0xaU)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                                  << 9U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                     << 8U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                        << 7U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                           << 6U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                              << 5U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                                << 4U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                                << 3U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                << 2U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                << 1U)) 
                                                                                | ((0x4000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U]) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                >> 1U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                >> 2U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                >> 3U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                >> 4U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                >> 5U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                >> 6U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                >> 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                >> 8U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 9U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 0xaU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 0xbU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 0xcU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 0xdU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 0xeU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 0x10U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                             << 0xfU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                                << 0xeU)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                                   << 0xdU)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                      << 0xcU)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                         << 0xbU)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                            << 0xaU)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                               << 9U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                                  << 8U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                     << 7U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                        << 6U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                           << 5U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                              << 4U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                                << 3U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                                << 2U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                << 1U)) 
                                                                                | ((0x8000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU]) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                >> 1U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                >> 2U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                >> 3U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                >> 4U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                >> 5U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                >> 6U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                >> 7U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                >> 9U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 0xbU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 0xcU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 0xdU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 0xeU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 0xfU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 0xfU)) | ((0x40000000U 
                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                            << 0xeU)) 
                                        | ((0x20000000U 
                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                               << 0xdU)) 
                                           | ((0x10000000U 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                                  << 0xcU)) 
                                              | ((0x8000000U 
                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                     << 0xbU)) 
                                                 | ((0x4000000U 
                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                        << 0xaU)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                           << 9U)) 
                                                       | ((0x1000000U 
                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                              << 8U)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                                 << 7U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                    << 6U)) 
                                                                | ((0x200000U 
                                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                       << 5U)) 
                                                                   | ((0x100000U 
                                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                          << 4U)) 
                                                                      | ((0x80000U 
                                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                             << 3U)) 
                                                                         | ((0x40000U 
                                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                                << 2U)) 
                                                                            | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                                << 1U)) 
                                                                               | ((0x10000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U]) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                >> 2U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                >> 3U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                >> 4U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                >> 5U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                >> 6U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                >> 7U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                >> 8U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                >> 9U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 0xcU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 0xdU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 0xeU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 0xfU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 0x10U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 0xeU)) | ((0x40000000U 
                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                            << 0xdU)) 
                                        | ((0x20000000U 
                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                               << 0xcU)) 
                                           | ((0x10000000U 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                                  << 0xbU)) 
                                              | ((0x8000000U 
                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                     << 0xaU)) 
                                                 | ((0x4000000U 
                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                        << 9U)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                           << 8U)) 
                                                       | ((0x1000000U 
                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                              << 7U)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                                 << 6U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                    << 5U)) 
                                                                | ((0x200000U 
                                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                       << 4U)) 
                                                                   | ((0x100000U 
                                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                          << 3U)) 
                                                                      | ((0x80000U 
                                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                             << 2U)) 
                                                                         | ((0x40000U 
                                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                                << 1U)) 
                                                                            | ((0x20000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U]) 
                                                                               | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                >> 1U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                >> 2U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                >> 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                >> 4U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                >> 5U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                >> 6U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                >> 7U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                >> 8U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                >> 9U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                >> 0xaU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 0xdU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 0xeU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 0xfU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 0x10U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 0x11U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 0xdU)) | ((0x40000000U 
                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                            << 0xcU)) 
                                        | ((0x20000000U 
                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                               << 0xbU)) 
                                           | ((0x10000000U 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                                  << 0xaU)) 
                                              | ((0x8000000U 
                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                     << 9U)) 
                                                 | ((0x4000000U 
                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                        << 8U)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                           << 7U)) 
                                                       | ((0x1000000U 
                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                              << 6U)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                                 << 5U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                    << 4U)) 
                                                                | ((0x200000U 
                                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                       << 3U)) 
                                                                   | ((0x100000U 
                                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                          << 2U)) 
                                                                      | ((0x80000U 
                                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                             << 1U)) 
                                                                         | ((0x40000U 
                                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U]) 
                                                                            | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                                >> 1U)) 
                                                                               | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                >> 2U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                >> 3U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                >> 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                >> 5U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                >> 6U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                >> 7U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                >> 8U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                >> 9U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                >> 0xbU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 0xeU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 0xfU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 0x10U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 0x11U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 0x12U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 0xcU)) | ((0x40000000U 
                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                            << 0xbU)) 
                                        | ((0x20000000U 
                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                               << 0xaU)) 
                                           | ((0x10000000U 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                                  << 9U)) 
                                              | ((0x8000000U 
                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                     << 8U)) 
                                                 | ((0x4000000U 
                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                        << 7U)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                           << 6U)) 
                                                       | ((0x1000000U 
                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                              << 5U)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                                 << 4U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                    << 3U)) 
                                                                | ((0x200000U 
                                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                       << 2U)) 
                                                                   | ((0x100000U 
                                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                          << 1U)) 
                                                                      | ((0x80000U 
                                                                          & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU]) 
                                                                         | ((0x40000U 
                                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                                >> 1U)) 
                                                                            | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                                >> 2U)) 
                                                                               | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                >> 3U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                >> 5U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                >> 6U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                >> 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                >> 8U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                >> 9U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                >> 0xcU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 0xfU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 0x10U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 0x11U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 0x12U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 0x13U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 0xbU)) | ((0x40000000U 
                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                            << 0xaU)) 
                                        | ((0x20000000U 
                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                               << 9U)) 
                                           | ((0x10000000U 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                                  << 8U)) 
                                              | ((0x8000000U 
                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                     << 7U)) 
                                                 | ((0x4000000U 
                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                        << 6U)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                           << 5U)) 
                                                       | ((0x1000000U 
                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                              << 4U)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                                 << 3U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                    << 2U)) 
                                                                | ((0x200000U 
                                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                       << 1U)) 
                                                                   | ((0x100000U 
                                                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U]) 
                                                                      | ((0x80000U 
                                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                             >> 1U)) 
                                                                         | ((0x40000U 
                                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                                >> 2U)) 
                                                                            | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                                >> 3U)) 
                                                                               | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                >> 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                >> 5U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                >> 6U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                >> 7U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                >> 8U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                >> 0xdU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 0x10U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 0x11U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 0x12U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 0x13U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 0x14U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 0xaU)) | ((0x40000000U 
                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                            << 9U)) 
                                        | ((0x20000000U 
                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                               << 8U)) 
                                           | ((0x10000000U 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                                  << 7U)) 
                                              | ((0x8000000U 
                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                     << 6U)) 
                                                 | ((0x4000000U 
                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                        << 5U)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                           << 4U)) 
                                                       | ((0x1000000U 
                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                              << 3U)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                                 << 2U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                    << 1U)) 
                                                                | ((0x200000U 
                                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U]) 
                                                                   | ((0x100000U 
                                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                          >> 1U)) 
                                                                      | ((0x80000U 
                                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                             >> 2U)) 
                                                                         | ((0x40000U 
                                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                                >> 3U)) 
                                                                            | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                                >> 4U)) 
                                                                               | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                >> 5U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                >> 6U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                >> 7U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                >> 8U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                >> 9U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                >> 0xaU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                >> 0xeU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 0x11U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 0x12U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 0x13U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 0x14U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 0x15U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 9U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                          << 8U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                           << 7U)) 
                                       | ((0x10000000U 
                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                              << 6U)) 
                                          | ((0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                 << 5U)) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                    << 4U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                       << 3U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                          << 2U)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                             << 1U)) 
                                                         | ((0x400000U 
                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U]) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                   >> 1U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                      >> 2U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                         >> 3U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                            >> 4U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                               >> 5U)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                >> 6U)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                >> 7U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                >> 8U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                >> 9U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                >> 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                >> 0xfU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 0x12U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 0x13U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 0x14U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 0x15U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 0x16U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 8U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                          << 7U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                           << 6U)) 
                                       | ((0x10000000U 
                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                              << 5U)) 
                                          | ((0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                 << 4U)) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                    << 3U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                       << 2U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                          << 1U)) 
                                                      | ((0x800000U 
                                                          & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU]) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                >> 1U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                   >> 2U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                      >> 3U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                         >> 4U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                            >> 5U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                               >> 6U)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                >> 7U)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                >> 8U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                >> 9U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                >> 0xcU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                >> 0x10U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 0x13U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 0x14U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 0x15U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 0x16U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 0x17U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 7U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                          << 6U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                           << 5U)) 
                                       | ((0x10000000U 
                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                              << 4U)) 
                                          | ((0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                 << 3U)) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                    << 2U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                       << 1U)) 
                                                   | ((0x1000000U 
                                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U]) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                             >> 1U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                >> 2U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                   >> 3U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                      >> 4U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                         >> 5U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                            >> 6U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                               >> 7U)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                >> 8U)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                >> 9U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                >> 0xdU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 0x14U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 0x15U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 0x16U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 0x17U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 0x18U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 6U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                          << 5U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                           << 4U)) 
                                       | ((0x10000000U 
                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                              << 3U)) 
                                          | ((0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                 << 2U)) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                    << 1U)) 
                                                | ((0x2000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U]) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                          >> 1U)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                             >> 2U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                >> 3U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                   >> 4U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                      >> 5U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                         >> 6U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                            >> 7U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                               >> 8U)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                >> 9U)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                >> 0xaU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                >> 0xeU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                >> 0x12U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 0x15U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 0x16U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 0x17U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 0x18U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 0x19U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 5U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                          << 4U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                           << 3U)) 
                                       | ((0x10000000U 
                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                              << 2U)) 
                                          | ((0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                 << 1U)) 
                                             | ((0x4000000U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U]) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                       >> 1U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                          >> 2U)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                             >> 3U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                >> 4U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                   >> 5U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                      >> 6U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                         >> 7U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                            >> 8U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                               >> 9U)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                >> 0xaU)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                >> 0xbU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                >> 0xfU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                >> 0x13U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 0x16U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 0x17U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 0x18U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 0x19U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 0x1aU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 4U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                          << 3U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                           << 2U)) 
                                       | ((0x10000000U 
                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                              << 1U)) 
                                          | ((0x8000000U 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU]) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                    >> 1U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                       >> 2U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                          >> 3U)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                             >> 4U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                >> 5U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                   >> 6U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                      >> 7U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                         >> 8U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                            >> 9U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                               >> 0xaU)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                >> 0xbU)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                >> 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                >> 0x10U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                >> 0x14U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 0x18U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 0x19U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 0x1aU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 0x1bU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 3U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                          << 2U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                           << 1U)) 
                                       | ((0x10000000U 
                                           & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U]) 
                                          | ((0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                 >> 1U)) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                    >> 2U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                       >> 3U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                          >> 4U)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                             >> 5U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                >> 6U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                   >> 7U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                      >> 8U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                         >> 9U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                            >> 0xaU)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                               >> 0xbU)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                >> 0xcU)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                >> 0xdU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                >> 0x11U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                >> 0x15U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 0x17U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 0x18U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 0x1aU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 0x1bU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 0x1cU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 2U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                          << 1U)) | 
                                      ((0x20000000U 
                                        & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U]) 
                                       | ((0x10000000U 
                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                              >> 1U)) 
                                          | ((0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                 >> 2U)) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                    >> 3U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                       >> 4U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                          >> 5U)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                             >> 6U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                >> 7U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                   >> 8U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                      >> 9U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                         >> 0xaU)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                            >> 0xbU)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                               >> 0xcU)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                >> 0xdU)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                >> 0xeU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                >> 0x12U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                >> 0x16U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                >> 0x17U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 0x18U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 0x19U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 0x1aU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 0x1cU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 0x1dU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 1U)) | ((0x40000000U 
                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U]) 
                                      | ((0x20000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                             >> 1U)) 
                                         | ((0x10000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                                >> 2U)) 
                                            | ((0x8000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                   >> 3U)) 
                                               | ((0x4000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                      >> 4U)) 
                                                  | ((0x2000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                         >> 5U)) 
                                                     | ((0x1000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                            >> 6U)) 
                                                        | ((0x800000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                               >> 7U)) 
                                                           | ((0x400000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                  >> 8U)) 
                                                              | ((0x200000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                     >> 9U)) 
                                                                 | ((0x100000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                        >> 0xaU)) 
                                                                    | ((0x80000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                           >> 0xbU)) 
                                                                       | ((0x40000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                              >> 0xcU)) 
                                                                          | ((0x20000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                                >> 0xdU)) 
                                                                             | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                >> 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                >> 0x13U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                >> 0x17U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                >> 0x18U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 0x19U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 0x1bU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 0x1cU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 0x1dU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 0x1eU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
        = ((0x80000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU]) 
           | ((0x40000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                              >> 1U)) | ((0x20000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                             >> 2U)) 
                                         | ((0x10000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                                >> 3U)) 
                                            | ((0x8000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                   >> 4U)) 
                                               | ((0x4000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                      >> 5U)) 
                                                  | ((0x2000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                         >> 6U)) 
                                                     | ((0x1000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                            >> 7U)) 
                                                        | ((0x800000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                               >> 8U)) 
                                                           | ((0x400000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                  >> 9U)) 
                                                              | ((0x200000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                     >> 0xaU)) 
                                                                 | ((0x100000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                        >> 0xbU)) 
                                                                    | ((0x80000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                           >> 0xcU)) 
                                                                       | ((0x40000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                              >> 0xdU)) 
                                                                          | ((0x20000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                                >> 0xeU)) 
                                                                             | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                >> 0x10U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                >> 0x14U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                >> 0x17U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                >> 0x18U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                >> 0x19U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 0x1aU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 0x1bU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 0x1dU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 0x1eU)) 
                                                                                | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
        = ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
            << 0x1fU) | ((0x40000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                         << 0x1eU)) 
                         | ((0x20000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                            << 0x1dU)) 
                            | ((0x10000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                               << 0x1cU)) 
                               | ((0x8000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                 << 0x1bU)) 
                                  | ((0x4000000U & 
                                      (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                       << 0x1aU)) | 
                                     ((0x2000000U & 
                                       (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                        << 0x19U)) 
                                      | ((0x1000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                             << 0x18U)) 
                                         | ((0x800000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                << 0x17U)) 
                                            | ((0x400000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                   << 0x16U)) 
                                               | ((0x200000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                      << 0x15U)) 
                                                  | ((0x100000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                         << 0x14U)) 
                                                     | ((0x80000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                            << 0x13U)) 
                                                        | ((0x40000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                               << 0x12U)) 
                                                           | ((0x20000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                  << 0x11U)) 
                                                              | ((0x10000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                     << 0x10U)) 
                                                                 | ((0x8000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                        << 0xfU)) 
                                                                    | ((0x4000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                           << 0xeU)) 
                                                                       | ((0x2000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                              << 0xdU)) 
                                                                          | ((0x1000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                << 0xcU)) 
                                                                             | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U]))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 0x1eU)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                             << 0x1dU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                                << 0x1cU)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                                   << 0x1bU)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                      << 0x1aU)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                         << 0x19U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                            << 0x18U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                               << 0x17U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                                  << 0x16U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                     << 0x15U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                        << 0x14U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                           << 0x13U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                              << 0x12U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                                << 0x11U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                << 0xeU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                << 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                << 0xbU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                << 7U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                << 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                << 3U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U]) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 0x1dU)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                             << 0x1cU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                                << 0x1bU)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                                   << 0x1aU)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                      << 0x19U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                         << 0x18U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                            << 0x17U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                               << 0x16U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                                  << 0x15U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                     << 0x14U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                        << 0x13U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                           << 0x12U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                              << 0x11U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                                << 0x10U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                                << 0xfU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                << 0xeU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                << 0xdU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                << 0xbU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                << 0xaU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                << 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                << 8U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                << 5U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                << 4U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                << 3U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                << 1U)) 
                                                                                | ((4U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU]) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 2U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 0x1cU)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                             << 0x1bU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                                << 0x1aU)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                                   << 0x19U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                      << 0x18U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                         << 0x17U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                            << 0x16U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                               << 0x15U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                                  << 0x14U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                     << 0x13U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                        << 0x12U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                           << 0x11U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                              << 0x10U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                                << 0xfU)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                                << 0xeU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                << 0xbU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                << 9U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                << 8U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                << 7U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                << 6U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                << 5U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                << 4U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                << 2U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU]) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 2U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 3U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 0x1bU)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                             << 0x1aU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                                << 0x19U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                                   << 0x18U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                      << 0x17U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                         << 0x16U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                            << 0x15U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                               << 0x14U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                                  << 0x13U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                     << 0x12U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                        << 0x11U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                           << 0x10U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                              << 0xfU)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                                << 0xeU)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                << 0xcU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                << 0xbU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                << 0xaU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                << 9U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                << 8U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                << 7U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                << 6U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                << 5U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                << 4U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                << 3U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                << 2U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U]) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                >> 1U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 3U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 4U)))))))))))))))))))))))))))))))));
}
