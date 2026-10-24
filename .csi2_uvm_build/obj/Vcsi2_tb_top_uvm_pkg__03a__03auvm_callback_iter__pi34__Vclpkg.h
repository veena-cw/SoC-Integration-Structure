// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_CALLBACK_ITER__PI34__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_CALLBACK_ITER__PI34__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi34__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi34__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi34__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi34__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi34 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> __PVT__m_obj;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher> __PVT__m_cb;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_callback_iter__pi34"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi34(*this); }
    void __VnoInFunc_first(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher> &first__Vfuncrtn);
    void __VnoInFunc_get_cb(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher> &get_cb__Vfuncrtn);
    void __VnoInFunc_last(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher> &last__Vfuncrtn);
    void __VnoInFunc_next(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher> &next__Vfuncrtn);
    void __VnoInFunc_prev(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher> &prev__Vfuncrtn);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi34() = default;
    void init(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> obj);
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi34() {}
};


#endif  // guard
