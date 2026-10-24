// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03A__VDYNSCOPE_2__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03A__VDYNSCOPE_2__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_task_phase;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_2__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_2__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_2__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_2__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_2 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_task_phase> __PVT__task_phase;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __PVT__top;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::__VDynScope_2"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_2(*this); }
    Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_2() = default;
    void init(Vcsi2_tb_top__Syms* __restrict vlSymsp) {}
    ~Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_2() {}
};


#endif  // guard
