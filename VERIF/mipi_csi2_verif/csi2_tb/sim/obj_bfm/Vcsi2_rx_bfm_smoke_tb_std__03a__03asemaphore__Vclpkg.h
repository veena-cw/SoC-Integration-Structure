// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_rx_bfm_smoke_tb.h for the primary calling header

#ifndef VERILATED_VCSI2_RX_BFM_SMOKE_TB_STD__03A__03ASEMAPHORE__VCLPKG_H_
#define VERILATED_VCSI2_RX_BFM_SMOKE_TB_STD__03A__03ASEMAPHORE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcsi2_rx_bfm_smoke_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_rx_bfm_smoke_tb_std__03a__03asemaphore__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_rx_bfm_smoke_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_rx_bfm_smoke_tb_std__03a__03asemaphore__Vclpkg();
    ~Vcsi2_rx_bfm_smoke_tb_std__03a__03asemaphore__Vclpkg();
    void ctor(Vcsi2_rx_bfm_smoke_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_rx_bfm_smoke_tb_std__03a__03asemaphore__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vcsi2_rx_bfm_smoke_tb__Syms;

class Vcsi2_rx_bfm_smoke_tb_std__03a__03asemaphore : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_keyCount;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::semaphore"; }
    VlClass* clone() const { return new Vcsi2_rx_bfm_smoke_tb_std__03a__03asemaphore(*this); }
    VlCoroutine __VnoInFunc_get(Vcsi2_rx_bfm_smoke_tb__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_put(Vcsi2_rx_bfm_smoke_tb__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_try_get(Vcsi2_rx_bfm_smoke_tb__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount, IData/*31:0*/ &try_get__Vfuncrtn);
  private:
    void _ctor_var_reset(Vcsi2_rx_bfm_smoke_tb__Syms* __restrict vlSymsp);
  public:
    Vcsi2_rx_bfm_smoke_tb_std__03a__03asemaphore() = default;
    void init(Vcsi2_rx_bfm_smoke_tb__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vcsi2_rx_bfm_smoke_tb_std__03a__03asemaphore() {}
};


#endif  // guard
