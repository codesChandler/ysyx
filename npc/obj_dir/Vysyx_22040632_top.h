// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VYSYX_22040632_TOP_H_
#define VERILATED_VYSYX_22040632_TOP_H_  // guard

#include "verilated_heavy.h"
#include "svdpi.h"

class Vysyx_22040632_top__Syms;
class Vysyx_22040632_top___024root;
class VerilatedFstC;
class Vysyx_22040632_top_VerilatedFst;
class Vysyx_22040632_top___024unit;
class Vysyx_22040632_top_ysyx_22040632_divif;
class Vysyx_22040632_top_ysyx_22040632_mulif;
class Vysyx_22040632_top_ysyx_22040632_ex2if;
class Vysyx_22040632_top_ysyx_22040632_if2id;
class Vysyx_22040632_top_ysyx_22040632_wb2id;
class Vysyx_22040632_top_ysyx_22040632_id2ex;
class Vysyx_22040632_top_ysyx_22040632_ex2mem;
class Vysyx_22040632_top_ysyx_22040632_mem2wb;
class Vysyx_22040632_top_ysyx_22040632_id2if;
class Vysyx_22040632_top_ysyx_22040632_imif;
class Vysyx_22040632_top_ysyx_22040632_axiif;
class Vysyx_22040632_top_ysyx_22040632_if2ic;
class Vysyx_22040632_top_ysyx_22040632_mem2dc;
class Vysyx_22040632_top_ysyx_22040632_mem2clint;
class Vysyx_22040632_top_ysyx_22040632_walloc_32bits;


// This class is the main interface to the Verilated model
class Vysyx_22040632_top VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vysyx_22040632_top__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst_n,0,0);
    VL_OUT(&pc,31,0);
    VL_OUT(&inst,31,0);
    VL_OUT8(&submit,0,0);
    VL_OUT(&npc,31,0);
    VL_OUT8(&skip,0,0);
    VL_OUT8(&axi_aw_valid_o,0,0);
    VL_OUT(&axi_aw_addr_o,31,0);
    VL_OUT8(&axi_aw_prot_o,2,0);
    VL_OUT8(&axi_aw_id_o,3,0);
    VL_OUT8(&axi_aw_user_o,0,0);
    VL_OUT8(&axi_aw_len_o,7,0);
    VL_OUT8(&axi_aw_size_o,2,0);
    VL_OUT8(&axi_aw_burst_o,1,0);
    VL_OUT8(&axi_aw_lock_o,0,0);
    VL_OUT8(&axi_aw_cache_o,3,0);
    VL_OUT8(&axi_aw_qos_o,3,0);
    VL_OUT8(&axi_aw_region_o,3,0);
    VL_IN8(&axi_aw_ready_i,0,0);
    VL_OUT8(&axi_w_valid_o,0,0);
    VL_OUT64(&axi_w_data_o,63,0);
    VL_OUT8(&axi_w_strb_o,7,0);
    VL_OUT8(&axi_w_last_o,0,0);
    VL_OUT8(&axi_w_user_o,0,0);
    VL_IN8(&axi_w_ready_i,0,0);
    VL_OUT8(&axi_b_ready_o,0,0);
    VL_IN8(&axi_b_valid_i,0,0);
    VL_IN8(&axi_b_resp_i,1,0);
    VL_IN8(&axi_b_id_i,3,0);
    VL_IN8(&axi_b_user_i,0,0);
    VL_OUT8(&axi_ar_valid_o,0,0);
    VL_OUT(&axi_ar_addr_o,31,0);
    VL_OUT8(&axi_ar_prot_o,2,0);
    VL_OUT8(&axi_ar_id_o,3,0);
    VL_OUT8(&axi_ar_user_o,0,0);
    VL_OUT8(&axi_ar_len_o,7,0);
    VL_OUT8(&axi_ar_size_o,2,0);
    VL_OUT8(&axi_ar_burst_o,1,0);
    VL_OUT8(&axi_ar_lock_o,0,0);
    VL_OUT8(&axi_ar_cache_o,3,0);
    VL_OUT8(&axi_ar_qos_o,3,0);
    VL_OUT8(&axi_ar_region_o,3,0);
    VL_IN8(&axi_ar_ready_i,0,0);
    VL_OUT8(&axi_r_ready_o,0,0);
    VL_IN8(&axi_r_valid_i,0,0);
    VL_IN8(&axi_r_resp_i,1,0);
    VL_IN64(&axi_r_data_i,63,0);
    VL_IN8(&axi_r_last_i,0,0);
    VL_IN8(&axi_r_id_i,3,0);
    VL_IN8(&axi_r_user_i,0,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vysyx_22040632_top___024unit* const __PVT____024unit;
    Vysyx_22040632_top_ysyx_22040632_divif* const __PVT__ysyx_22040632_top__DOT__dif;
    Vysyx_22040632_top_ysyx_22040632_mulif* const __PVT__ysyx_22040632_top__DOT__mif;
    Vysyx_22040632_top_ysyx_22040632_ex2if* const __PVT__ysyx_22040632_top__DOT__ex2if;
    Vysyx_22040632_top_ysyx_22040632_if2id* const __PVT__ysyx_22040632_top__DOT__if2id;
    Vysyx_22040632_top_ysyx_22040632_wb2id* const __PVT__ysyx_22040632_top__DOT__wb2id;
    Vysyx_22040632_top_ysyx_22040632_id2ex* const __PVT__ysyx_22040632_top__DOT__id2ex;
    Vysyx_22040632_top_ysyx_22040632_ex2mem* const __PVT__ysyx_22040632_top__DOT__ex2mem;
    Vysyx_22040632_top_ysyx_22040632_mem2wb* const __PVT__ysyx_22040632_top__DOT__mem2wb;
    Vysyx_22040632_top_ysyx_22040632_id2if* const __PVT__ysyx_22040632_top__DOT__id2if;
    Vysyx_22040632_top_ysyx_22040632_imif* const __PVT__ysyx_22040632_top__DOT__imif;
    Vysyx_22040632_top_ysyx_22040632_imif* const __PVT__ysyx_22040632_top__DOT__immem;
    Vysyx_22040632_top_ysyx_22040632_imif* const __PVT__ysyx_22040632_top__DOT__imarb;
    Vysyx_22040632_top_ysyx_22040632_axiif* const __PVT__ysyx_22040632_top__DOT__axi;
    Vysyx_22040632_top_ysyx_22040632_if2ic* const __PVT__ysyx_22040632_top__DOT__if2ic;
    Vysyx_22040632_top_ysyx_22040632_mem2dc* const __PVT__ysyx_22040632_top__DOT__mem2dc;
    Vysyx_22040632_top_ysyx_22040632_mem2clint* const __PVT__ysyx_22040632_top__DOT__mem2clint;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__82__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__83__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__84__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__85__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__86__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__87__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__88__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__89__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__90__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__91__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__92__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__93__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__94__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__95__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__96__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__97__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__98__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__99__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__100__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__101__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__102__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__103__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__104__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits* const __PVT__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vysyx_22040632_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vysyx_22040632_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vysyx_22040632_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vysyx_22040632_top();
  private:
    VL_UNCOPYABLE(Vysyx_22040632_top);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Trace signals in the model; called by application code
    void trace(VerilatedFstC* tfp, int levels, int options = 0);
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
