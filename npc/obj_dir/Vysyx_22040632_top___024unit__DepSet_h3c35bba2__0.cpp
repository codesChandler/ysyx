// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040632_top__Syms.h"
#include "Vysyx_22040632_top___024unit.h"

extern "C" void paddr_read(long long raddr, long long* rdata);

VL_INLINE_OPT void Vysyx_22040632_top___024unit____Vdpiimwrap_paddr_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040632_top___024unit____Vdpiimwrap_paddr_read_TOP____024unit\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    paddr_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void paddr_write(long long waddr, long long wdata, char wmask);

VL_INLINE_OPT void Vysyx_22040632_top___024unit____Vdpiimwrap_paddr_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040632_top___024unit____Vdpiimwrap_paddr_write_TOP____024unit\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    paddr_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

extern "C" void npcexit(int code);

VL_INLINE_OPT void Vysyx_22040632_top___024unit____Vdpiimwrap_npcexit_TOP____024unit(IData/*31:0*/ code) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040632_top___024unit____Vdpiimwrap_npcexit_TOP____024unit\n"); );
    // Body
    int code__Vcvt;
    for (size_t code__Vidx = 0; code__Vidx < 1; ++code__Vidx) code__Vcvt = code;
    npcexit(code__Vcvt);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22040632_top___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040632_top___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void div_exec(int cycle);

VL_INLINE_OPT void Vysyx_22040632_top___024unit____Vdpiimwrap_div_exec_TOP____024unit(IData/*31:0*/ cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040632_top___024unit____Vdpiimwrap_div_exec_TOP____024unit\n"); );
    // Body
    int cycle__Vcvt;
    for (size_t cycle__Vidx = 0; cycle__Vidx < 1; ++cycle__Vidx) cycle__Vcvt = cycle;
    div_exec(cycle__Vcvt);
}
