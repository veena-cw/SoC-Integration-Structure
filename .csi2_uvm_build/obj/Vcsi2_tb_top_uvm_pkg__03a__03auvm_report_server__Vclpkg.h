// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_REPORT_SERVER__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_REPORT_SERVER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server> __PVT__m_global_report_server;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_server(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server> &get_server__Vfuncrtn);
    void __VnoInFunc_set_server(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server> server);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__enable_report_id_count_summary;
    CData/*0:0*/ __PVT__m_max_quit_overridable;
    IData/*31:0*/ __PVT__max_quit_count;
    IData/*31:0*/ __PVT__quit_count;
    VlAssocArray<CData/*1:0*/, IData/*31:0*/> __PVT__severity_count;
    VlAssocArray<std::string, IData/*31:0*/> __PVT__id_count;
    std::string __Vtask_uvm_report_info__5__id;
    std::string __Vtask_uvm_report_info__5__message;
    std::string __Vtask_uvm_report_info__5__filename;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_report_server"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server(*this); }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_compose_message(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string name, std::string id, std::string message, std::string filename, IData/*31:0*/ line, std::string &compose_message__Vfuncrtn);
    void __VnoInFunc_copy_id_counts(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server> dst);
    void __VnoInFunc_copy_severity_counts(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server> dst);
    void __VnoInFunc_dump_server_state(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_f_display(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ file, std::string str);
    void __VnoInFunc_get_id_count(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ &get_id_count__Vfuncrtn);
    void __VnoInFunc_get_max_quit_count(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_quit_count__Vfuncrtn);
    void __VnoInFunc_get_quit_count(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_quit_count__Vfuncrtn);
    void __VnoInFunc_get_severity_count(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ &get_severity_count__Vfuncrtn);
    void __VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_incr_id_count(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id);
    void __VnoInFunc_incr_quit_count(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_incr_severity_count(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity);
    void __VnoInFunc_is_quit_count_reached(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_quit_count_reached__Vfuncrtn);
    virtual void __VnoInFunc_process_report(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string name, std::string id, std::string message, IData/*31:0*/ action, IData/*31:0*/ file, std::string filename, IData/*31:0*/ line, std::string composed_message, IData/*31:0*/ verbosity_level, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> client);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_report(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string name, std::string id, std::string message, IData/*31:0*/ verbosity_level, std::string filename, IData/*31:0*/ line, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> client);
    void __VnoInFunc_reset_quit_count(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_reset_severity_counts(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_id_count(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ count);
    void __VnoInFunc_set_max_quit_count(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ count, CData/*0:0*/ overridable);
    void __VnoInFunc_set_quit_count(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ quit_count);
    void __VnoInFunc_set_severity_count(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ count);
    virtual void __VnoInFunc_summarize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ file);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server();
};


#endif  // guard
