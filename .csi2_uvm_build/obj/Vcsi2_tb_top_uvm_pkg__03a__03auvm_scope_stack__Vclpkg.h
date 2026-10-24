// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_SCOPE_STACK__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_SCOPE_STACK__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_scope_stack__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_scope_stack__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_scope_stack__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_scope_stack__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_scope_stack : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<std::string> __PVT__m_stack;
    std::string __PVT__m_arg;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_scope_stack"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_scope_stack(*this); }
    void __VnoInFunc_depth(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &depth__Vfuncrtn);
    void __VnoInFunc_down(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_down_element(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ element);
    void __VnoInFunc_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get__Vfuncrtn);
    void __VnoInFunc_get_arg(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_arg__Vfuncrtn);
    void __VnoInFunc_set(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_arg(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string arg);
    void __VnoInFunc_set_arg_element(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string arg, IData/*31:0*/ ele);
    void __VnoInFunc_unset_arg(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string arg);
    void __VnoInFunc_up(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*7:0*/ separator);
    void __VnoInFunc_up_element(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_scope_stack() = default;
    void init(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_scope_stack() {}
};


#endif  // guard
