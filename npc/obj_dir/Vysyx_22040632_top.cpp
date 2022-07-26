// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vysyx_22040632_top.h"
#include "Vysyx_22040632_top__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vysyx_22040632_top::Vysyx_22040632_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vysyx_22040632_top__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , inst{vlSymsp->TOP.inst}
    , pc{vlSymsp->TOP.pc}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , __PVT__ysyx_22040632_top__DOT__dif{vlSymsp->TOP.__PVT__ysyx_22040632_top__DOT__dif}
    , rootp{&(vlSymsp->TOP)}
{
}

Vysyx_22040632_top::Vysyx_22040632_top(const char* _vcname__)
    : Vysyx_22040632_top(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vysyx_22040632_top::~Vysyx_22040632_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vysyx_22040632_top___024root___eval_initial(Vysyx_22040632_top___024root* vlSelf);
void Vysyx_22040632_top___024root___eval_settle(Vysyx_22040632_top___024root* vlSelf);
void Vysyx_22040632_top___024root___eval(Vysyx_22040632_top___024root* vlSelf);
QData Vysyx_22040632_top___024root___change_request(Vysyx_22040632_top___024root* vlSelf);
#ifdef VL_DEBUG
void Vysyx_22040632_top___024root___eval_debug_assertions(Vysyx_22040632_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_22040632_top___024root___final(Vysyx_22040632_top___024root* vlSelf);

static void _eval_initial_loop(Vysyx_22040632_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vysyx_22040632_top___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vysyx_22040632_top___024root___eval_settle(&(vlSymsp->TOP));
        Vysyx_22040632_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vysyx_22040632_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/chandler/ysyx-workbench/npc/hw/ysyx_22040632_top.sv", 2, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vysyx_22040632_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vysyx_22040632_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vysyx_22040632_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vysyx_22040632_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vysyx_22040632_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vysyx_22040632_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/chandler/ysyx-workbench/npc/hw/ysyx_22040632_top.sv", 2, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vysyx_22040632_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vysyx_22040632_top::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vysyx_22040632_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vysyx_22040632_top::final() {
    Vysyx_22040632_top___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vysyx_22040632_top___024root__trace_init_top(Vysyx_22040632_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vysyx_22040632_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22040632_top___024root*>(voidSelf);
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vysyx_22040632_top___024root__trace_init_top(vlSelf, tracep);
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vysyx_22040632_top___024root__trace_register(Vysyx_22040632_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vysyx_22040632_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vysyx_22040632_top___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
