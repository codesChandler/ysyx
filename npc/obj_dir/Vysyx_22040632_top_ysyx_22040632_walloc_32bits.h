// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040632_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040632_TOP_YSYX_22040632_WALLOC_32BITS_H_
#define VERILATED_VYSYX_22040632_TOP_YSYX_22040632_WALLOC_32BITS_H_  // guard

#include "verilated.h"

class Vysyx_22040632_top__Syms;
VL_MODULE(Vysyx_22040632_top_ysyx_22040632_walloc_32bits) {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(cout,0,0);
    VL_OUT8(s,0,0);
    CData/*6:0*/ __PVT__second_s;
    CData/*2:0*/ __Vcellinp__ysyx_22040632_csa14__in;
    CData/*4:0*/ __PVT__third_s;
    CData/*2:0*/ __Vcellinp__ysyx_22040632_csa20__in;
    CData/*2:0*/ __PVT__fourth_s;
    CData/*2:0*/ __Vcellinp__ysyx_22040632_csa24__in;
    CData/*1:0*/ __PVT__fifth_s;
    CData/*2:0*/ __Vcellinp__ysyx_22040632_csa28__in;
    CData/*2:0*/ __Vcellinp__ysyx_22040632_csa29__in;
    CData/*2:0*/ __Vcellinp__ysyx_22040632_csa30__in;
    SData/*10:0*/ __PVT__first_s;
    VL_IN(src_in,31,0);
    VL_IN(cin,29,0);
    VL_OUT(cout_group,29,0);
    IData/*29:0*/ __PVT__c;

    // INTERNAL VARIABLES
    Vysyx_22040632_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits(const char* name);
    ~Vysyx_22040632_top_ysyx_22040632_walloc_32bits();
    VL_UNCOPYABLE(Vysyx_22040632_top_ysyx_22040632_walloc_32bits);

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040632_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
