// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_C_PHY_BFM_IF__03A__03A__VDYNSCOPE_84__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_C_PHY_BFM_IF__03A__03A__VDYNSCOPE_84__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_c_phy_bfm_if__03a__03a__VDynScope_84__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_c_phy_bfm_if__03a__03a__VDynScope_84__Vclpkg();
    ~Vcsi2_tb_top_c_phy_bfm_if__03a__03a__VDynScope_84__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_c_phy_bfm_if__03a__03a__VDynScope_84__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_c_phy_bfm_if__03a__03a__VDynScope_84 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__started;
    CData/*2:0*/ __PVT__send_sync_type;
    CData/*0:0*/ __PVT__send_eot;
    CData/*0:0*/ __PVT__compl;
    VlQueue<QData/*63:0*/> __PVT__packet_words;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "c_phy_bfm_if::__VDynScope_84"; }
    VlClass* clone() const { return new Vcsi2_tb_top_c_phy_bfm_if__03a__03a__VDynScope_84(*this); }
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_c_phy_bfm_if__03a__03a__VDynScope_84() = default;
    void init(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    ~Vcsi2_tb_top_c_phy_bfm_if__03a__03a__VDynScope_84() {}
};


#endif  // guard
