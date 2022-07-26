// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vysyx_22040632_top__Syms.h"
#include "Vysyx_22040632_top.h"
#include "Vysyx_22040632_top___024root.h"
#include "Vysyx_22040632_top___024unit.h"
#include "Vysyx_22040632_top_ysyx_22040632_divif.h"

// FUNCTIONS
Vysyx_22040632_top__Syms::~Vysyx_22040632_top__Syms()
{
}

Vysyx_22040632_top__Syms::Vysyx_22040632_top__Syms(VerilatedContext* contextp, const char* namep,Vysyx_22040632_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP(namep)
    , TOP____024unit(Verilated::catName(namep, "$unit"))
    , TOP__ysyx_22040632_top__DOT__dif(Verilated::catName(namep, "ysyx_22040632_top.dif"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.__PVT__ysyx_22040632_top__DOT__dif = &TOP__ysyx_22040632_top__DOT__dif;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP____024unit.__Vconfigure(this, true);
    TOP__ysyx_22040632_top__DOT__dif.__Vconfigure(this, true);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
    }
}
