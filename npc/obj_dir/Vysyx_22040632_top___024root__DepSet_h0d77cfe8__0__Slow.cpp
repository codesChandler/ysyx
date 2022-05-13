// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040632_top__Syms.h"
#include "Vysyx_22040632_top___024root.h"

VL_ATTR_COLD void Vysyx_22040632_top___024root___initial__TOP__1(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___initial__TOP__1\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_hfcc72e2c__0;
    // Body
    if (VL_UNLIKELY((0U != VL_TESTPLUSARGS_I("trace")))) {
        VL_WRITEF("[%0t] Tracing to logs/vlt_dump.vcd...\n\n",
                  64,VL_TIME_UNITED_Q(1),-12);
        __Vtemp_hfcc72e2c__0[0U] = 0x2e766364U;
        __Vtemp_hfcc72e2c__0[1U] = 0x64756d70U;
        __Vtemp_hfcc72e2c__0[2U] = 0x766c745fU;
        __Vtemp_hfcc72e2c__0[3U] = 0x6f67732fU;
        __Vtemp_hfcc72e2c__0[4U] = 0x6cU;
        vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_hfcc72e2c__0));
        vlSymsp->_traceDumpOpen();
    }
    VL_WRITEF("[%0t] Model running...\n\n",64,VL_TIME_UNITED_Q(1),
              -12);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_inst__DOT__pci = 0x80000000ULL;
}

void Vysyx_22040632_top___024unit____Vdpiimwrap_myexit_TOP____024unit();

VL_ATTR_COLD void Vysyx_22040632_top___024root___settle__TOP__4(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___settle__TOP__4\n"); );
    // Body
    VL_WRITEF("inst:%bbefore\n",32,vlSelf->inst);
    if (VL_UNLIKELY((0x13U == (0x707fU & vlSelf->inst)))) {
        VL_WRITEF("inst:%bright\n",32,vlSelf->inst);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__fun = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__type_t = 0U;
    } else if (VL_UNLIKELY((0x100073U == vlSelf->inst))) {
        Vysyx_22040632_top___024unit____Vdpiimwrap_myexit_TOP____024unit();
        VL_WRITEF("ebreak\n");
    }
    vlSelf->pc = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_inst__DOT__pci;
    if (VL_UNLIKELY((0U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__type_t)))) {
        vlSelf->ysyx_22040632_top__DOT__src1 = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr
            [(0x1fU & (vlSelf->inst >> 0xfU))];
        vlSelf->ysyx_22040632_top__DOT__src2 = (((- (QData)((IData)(
                                                                    (vlSelf->inst 
                                                                     >> 0x1fU)))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (vlSelf->inst 
                                                                   >> 0x14U))));
        VL_WRITEF("src1:%20#\nsrc2:%20#\n",64,vlSelf->ysyx_22040632_top__DOT__src1,
                  64,vlSelf->ysyx_22040632_top__DOT__src2);
    }
}
