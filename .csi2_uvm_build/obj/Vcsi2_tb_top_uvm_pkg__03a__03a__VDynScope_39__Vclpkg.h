// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03A__VDYNSCOPE_39__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03A__VDYNSCOPE_39__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_39__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_39__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_39__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_39__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_39 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> __PVT__seq;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::__VDynScope_39"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_39(*this); }
    Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_39() = default;
    void init(Vcsi2_tb_top__Syms* __restrict vlSymsp) {}
    ~Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_39() {}
};


#endif  // guard
