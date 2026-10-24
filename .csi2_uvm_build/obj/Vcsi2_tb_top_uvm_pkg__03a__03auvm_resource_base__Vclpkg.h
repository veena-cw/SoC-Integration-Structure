// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_RESOURCE_BASE__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_RESOURCE_BASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_types__Vclpkg.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__default_precedence;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__modified;
    CData/*0:0*/ __PVT__read_only;
    CData/*0:0*/ __PVT__m_is_regex_name;
    IData/*31:0*/ __PVT__precedence;
    VlAssocArray<std::string, Vcsi2_tb_top_access_t__struct__0> __PVT__access;
    std::string __PVT__scope;
    std::string __Vfunc_uvm_has_wildcard__2__arg;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_resource_base"; }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_get_scope(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_scope__Vfuncrtn);
    virtual void __VnoInFunc_get_type_handle(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> &get_type_handle__Vfuncrtn);
    virtual void __VnoInFunc_has_regex_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &has_regex_name__Vfuncrtn);
    void __VnoInFunc_init_access_record(Vcsi2_tb_top__Syms* __restrict vlSymsp, Vcsi2_tb_top_access_t__struct__0 &access_record);
    void __VnoInFunc_is_read_only(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_read_only__Vfuncrtn);
    void __VnoInFunc_match_scope(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string s, CData/*0:0*/ &match_scope__Vfuncrtn);
    virtual void __VnoInFunc_print_accessors(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_record_read_access(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_record_write_access(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor);
    virtual void __VnoInFunc_set_priority(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ pri);
    void __VnoInFunc_set_read_only(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_read_write(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_scope(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string s);
    VlCoroutine __VnoInFunc_wait_modified(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, std::string s);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base();
};


#endif  // guard
