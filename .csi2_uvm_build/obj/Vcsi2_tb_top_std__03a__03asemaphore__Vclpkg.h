// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_STD__03A__03ASEMAPHORE__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_STD__03A__03ASEMAPHORE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_std__03a__03asemaphore__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_std__03a__03asemaphore__Vclpkg();
    ~Vcsi2_tb_top_std__03a__03asemaphore__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_std__03a__03asemaphore__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_std__03a__03asemaphore : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_keyCount;
    IData/*31:0*/ __PVT__m_nextKeyCount;
    QData/*63:0*/ __PVT__m_ticket;
    QData/*63:0*/ __PVT__m_nextTicket;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::semaphore"; }
    VlClass* clone() const { return new Vcsi2_tb_top_std__03a__03asemaphore(*this); }
    VlCoroutine __VnoInFunc_get(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_put(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_try_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount, IData/*31:0*/ &try_get__Vfuncrtn);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_std__03a__03asemaphore() = default;
    void init(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    ~Vcsi2_tb_top_std__03a__03asemaphore() {}
};


#endif  // guard
