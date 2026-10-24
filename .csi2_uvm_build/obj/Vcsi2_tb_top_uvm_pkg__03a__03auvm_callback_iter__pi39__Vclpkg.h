// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_CALLBACK_ITER__PI39__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_CALLBACK_ITER__PI39__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field_cbs;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi39__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi39__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi39__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi39__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi39 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field> __PVT__m_obj;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field_cbs> __PVT__m_cb;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_callback_iter__pi39"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi39(*this); }
    void __VnoInFunc_first(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field_cbs> &first__Vfuncrtn);
    void __VnoInFunc_get_cb(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field_cbs> &get_cb__Vfuncrtn);
    void __VnoInFunc_last(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field_cbs> &last__Vfuncrtn);
    void __VnoInFunc_next(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field_cbs> &next__Vfuncrtn);
    void __VnoInFunc_prev(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field_cbs> &prev__Vfuncrtn);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi39() = default;
    void init(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field> obj);
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi39() {}
};


#endif  // guard
