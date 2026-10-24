// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_VOID__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_VOID__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_void__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_void__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_void__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_void : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<CData/*0:0*/> __PVT____Vrandmode;
    VlQueue<CData/*0:0*/> __PVT____Vconstraintmode;
    VlRandomizer __PVT__constraint;

    // INTERNAL VARIABLES
    VlRNGReseeds __Vm_rng;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_void"; }
    void __VnoInFunc_srandom(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ seed);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_void();
};


#endif  // guard
