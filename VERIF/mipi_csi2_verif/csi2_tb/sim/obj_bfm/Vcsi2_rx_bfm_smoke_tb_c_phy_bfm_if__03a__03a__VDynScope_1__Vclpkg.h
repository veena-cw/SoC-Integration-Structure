// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_rx_bfm_smoke_tb.h for the primary calling header

#ifndef VERILATED_VCSI2_RX_BFM_SMOKE_TB_C_PHY_BFM_IF__03A__03A__VDYNSCOPE_1__VCLPKG_H_
#define VERILATED_VCSI2_RX_BFM_SMOKE_TB_C_PHY_BFM_IF__03A__03A__VDYNSCOPE_1__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcsi2_rx_bfm_smoke_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if__03a__03a__VDynScope_1__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_rx_bfm_smoke_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if__03a__03a__VDynScope_1__Vclpkg();
    ~Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if__03a__03a__VDynScope_1__Vclpkg();
    void ctor(Vcsi2_rx_bfm_smoke_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if__03a__03a__VDynScope_1__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vcsi2_rx_bfm_smoke_tb__Syms;

class Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if__03a__03a__VDynScope_1 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__started;
    CData/*2:0*/ __PVT__send_sync_type;
    CData/*0:0*/ __PVT__send_eot;
    CData/*0:0*/ __PVT__compl;
    VlQueue<QData/*63:0*/> __PVT__packet_words;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "c_phy_bfm_if::__VDynScope_1"; }
    VlClass* clone() const { return new Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if__03a__03a__VDynScope_1(*this); }
  private:
    void _ctor_var_reset(Vcsi2_rx_bfm_smoke_tb__Syms* __restrict vlSymsp);
  public:
    Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if__03a__03a__VDynScope_1() = default;
    void init(Vcsi2_rx_bfm_smoke_tb__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if__03a__03a__VDynScope_1() {}
};


#endif  // guard
