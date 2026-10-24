// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_REPORT_HANDLER__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_REPORT_HANDLER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz30_TBz30;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz29;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_relnotes_done;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_max_verbosity_level;
    IData/*31:0*/ __PVT__default_file_handle;
    VlAssocArray<CData/*1:0*/, IData/*31:0*/> __PVT__severity_actions;
    VlAssocArray<CData/*1:0*/, IData/*31:0*/> __PVT__severity_file_handles;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz29> __PVT__id_actions;
    VlAssocArray<CData/*1:0*/, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz29>> __PVT__severity_id_actions;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz29> __PVT__id_verbosities;
    VlAssocArray<CData/*1:0*/, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz29>> __PVT__severity_id_verbosities;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz30_TBz30> __PVT__sev_overrides;
    VlAssocArray<std::string, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz30_TBz30>> __PVT__sev_id_overrides;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz29> __PVT__id_file_handles;
    VlAssocArray<CData/*1:0*/, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz29>> __PVT__severity_id_file_handles;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_report_handler"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler(*this); }
    void __VnoInFunc_dump_state(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_format_action(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ action, std::string &format_action__Vfuncrtn);
    void __VnoInFunc_get_action(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_action__Vfuncrtn);
    void __VnoInFunc_get_file_handle(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_file_handle__Vfuncrtn);
    void __VnoInFunc_get_server(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server> &get_server__Vfuncrtn);
    void __VnoInFunc_get_severity_id_file(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_severity_id_file__Vfuncrtn);
    void __VnoInFunc_get_verbosity_level(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_verbosity_level__Vfuncrtn);
    void __VnoInFunc_initialize(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_report(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string name, std::string id, std::string message, IData/*31:0*/ verbosity_level, std::string filename, IData/*31:0*/ line, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> client);
    void __VnoInFunc_report_header(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ file);
    void __VnoInFunc_report_relnotes_banner(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ file);
    virtual void __VnoInFunc_run_hooks(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> client, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, CData/*0:0*/ &run_hooks__Vfuncrtn);
    void __VnoInFunc_set_default_file(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ file);
    void __VnoInFunc_set_defaults(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_id_action(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ action);
    void __VnoInFunc_set_id_file(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ file);
    void __VnoInFunc_set_id_verbosity(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ verbosity);
    void __VnoInFunc_set_max_quit_count(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ max_count);
    void __VnoInFunc_set_severity_action(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ action);
    void __VnoInFunc_set_severity_file(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ file);
    void __VnoInFunc_set_severity_id_action(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ action);
    void __VnoInFunc_set_severity_id_file(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ file);
    void __VnoInFunc_set_severity_id_override(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ cur_severity, std::string id, CData/*1:0*/ new_severity);
    void __VnoInFunc_set_severity_id_verbosity(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ verbosity);
    void __VnoInFunc_set_severity_override(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ cur_severity, CData/*1:0*/ new_severity);
    void __VnoInFunc_set_verbosity_level(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity_level);
    void __VnoInFunc_summarize(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ file);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler();
};


#endif  // guard
