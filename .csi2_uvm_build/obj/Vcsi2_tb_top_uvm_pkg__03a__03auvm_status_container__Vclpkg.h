// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_STATUS_CONTAINER__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_STATUS_CONTAINER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_scope_stack;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__print_matches;
    VlAssocArray<std::string, CData/*0:0*/> __PVT__field_array;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clone;
    CData/*0:0*/ __PVT__warning;
    CData/*0:0*/ __PVT__status;
    CData/*0:0*/ __PVT__array_warning_done;
    VlWide<128>/*4095:0*/ __PVT__bitstream;
    IData/*31:0*/ __PVT__intv;
    IData/*31:0*/ __PVT__element;
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object>, CData/*0:0*/> __PVT__cycle_check;
    std::string __PVT__stringv;
    std::string __PVT__scratch1;
    std::string __PVT__scratch2;
    std::string __PVT__key;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> __PVT__object;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_scope_stack> __PVT__scope;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer> __PVT__comparer;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> __PVT__packer;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder> __PVT__recorder;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> __PVT__printer;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object>> __PVT__m_uvm_cycle_scopes;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_status_container"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container(*this); }
    void __VnoInFunc_do_field_check(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string field, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj);
    void __VnoInFunc_get_full_scope_arg(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_full_scope_arg__Vfuncrtn);
    void __VnoInFunc_get_function_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ what, std::string &get_function_type__Vfuncrtn);
    void __VnoInFunc_m_do_cycle_check(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> scope, CData/*0:0*/ &m_do_cycle_check__Vfuncrtn);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container() = default;
    void init(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container() {}
};


#endif  // guard
