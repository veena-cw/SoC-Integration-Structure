// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_RESOURCE_POOL__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_RESOURCE_POOL__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_types__Vclpkg.h"
class Vcsi2_tb_top_uvm_pkg__03a__03aget_t;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_line_printer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer_knobs;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_has_wildcard_names;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool> __PVT__rp;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_line_printer> __PVT__print_resources__Vstatic__printer;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool> &get__Vfuncrtn);
    void __VnoInFunc_sort_by_precedence(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> &q);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vtask_uvm_report_warning__69__id;
    std::string __Vtask_uvm_report_warning__69__message;
    std::string __Vtask_uvm_report_warning__69__filename;
    std::string __Vtask_uvm_report_warning__76__id;
    std::string __Vtask_uvm_report_warning__76__message;
    std::string __Vtask_uvm_report_warning__76__filename;
    VlAssocArray<std::string, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8>> __PVT__rtab;
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base>, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8>> __PVT__ttab;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03aget_t>> __PVT__get_record;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_resource_pool"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool(*this); }
    void __VnoInFunc_dump(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ audit);
    void __VnoInFunc_dump_get_records(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_find_unused_resources(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> &find_unused_resources__Vfuncrtn);
    void __VnoInFunc_get_by_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> type_handle, CData/*0:0*/ rpterr, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> &get_by_type__Vfuncrtn);
    void __VnoInFunc_get_highest_precedence(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> &q, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> &get_highest_precedence__Vfuncrtn);
    void __VnoInFunc_lookup_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> type_handle, CData/*0:0*/ rpterr, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> &lookup_name__Vfuncrtn);
    void __VnoInFunc_lookup_regex(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string re, std::string scope, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> &lookup_regex__Vfuncrtn);
    void __VnoInFunc_lookup_regex_names(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> &lookup_regex_names__Vfuncrtn);
    void __VnoInFunc_lookup_scope(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> &lookup_scope__Vfuncrtn);
    void __VnoInFunc_lookup_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> &lookup_type__Vfuncrtn);
    void __VnoInFunc_print_resources(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> rq, CData/*0:0*/ audit);
    void __VnoInFunc_push_get_record(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, std::string scope, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> rsrc);
    void __VnoInFunc_set(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> rsrc, CData/*1:0*/ __SYM__override);
    void __VnoInFunc_set_name_override(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> rsrc);
    void __VnoInFunc_set_override(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> rsrc);
    void __VnoInFunc_set_priority(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri);
    void __VnoInFunc_set_priority_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri);
    void __VnoInFunc_set_priority_queue(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> rsrc, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> &q, IData/*31:0*/ &pri);
    void __VnoInFunc_set_priority_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri);
    void __VnoInFunc_set_type_override(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> rsrc);
    void __VnoInFunc_spell_check(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string s, CData/*0:0*/ &spell_check__Vfuncrtn);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool() = default;
    void init(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool() {}
};


#endif  // guard
