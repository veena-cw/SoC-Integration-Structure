// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_REPORT_OBJECT__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_REPORT_OBJECT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler> __PVT__m_rh;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_report_object"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object(*this); }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_die(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_dump_report_state(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_report_action(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_report_action__Vfuncrtn);
    void __VnoInFunc_get_report_file_handle(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_report_file_handle__Vfuncrtn);
    void __VnoInFunc_get_report_handler(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler> &get_report_handler__Vfuncrtn);
    void __VnoInFunc_get_report_server(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server> &get_report_server__Vfuncrtn);
    void __VnoInFunc_get_report_verbosity_level(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_report_verbosity_level__Vfuncrtn);
    virtual void __VnoInFunc_m_get_report_object(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> &m_get_report_object__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_report_error_hook(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, CData/*0:0*/ &report_error_hook__Vfuncrtn);
    virtual void __VnoInFunc_report_fatal_hook(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, CData/*0:0*/ &report_fatal_hook__Vfuncrtn);
    virtual void __VnoInFunc_report_header(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ file);
    virtual void __VnoInFunc_report_hook(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, CData/*0:0*/ &report_hook__Vfuncrtn);
    virtual void __VnoInFunc_report_info_hook(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, CData/*0:0*/ &report_info_hook__Vfuncrtn);
    virtual void __VnoInFunc_report_summarize(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ file);
    virtual void __VnoInFunc_report_warning_hook(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, CData/*0:0*/ &report_warning_hook__Vfuncrtn);
    void __VnoInFunc_reset_report_handler(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_report_default_file(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ file);
    void __VnoInFunc_set_report_handler(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler> handler);
    void __VnoInFunc_set_report_id_action(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ action);
    void __VnoInFunc_set_report_id_file(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ file);
    void __VnoInFunc_set_report_id_verbosity(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ verbosity);
    void __VnoInFunc_set_report_max_quit_count(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ max_count);
    void __VnoInFunc_set_report_severity_action(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ action);
    void __VnoInFunc_set_report_severity_file(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ file);
    void __VnoInFunc_set_report_severity_id_action(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ action);
    void __VnoInFunc_set_report_severity_id_file(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ file);
    void __VnoInFunc_set_report_severity_id_override(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ cur_severity, std::string id, CData/*1:0*/ new_severity);
    void __VnoInFunc_set_report_severity_id_verbosity(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ verbosity);
    void __VnoInFunc_set_report_severity_override(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ cur_severity, CData/*1:0*/ new_severity);
    void __VnoInFunc_set_report_verbosity_level(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity_level);
    void __VnoInFunc_uvm_get_max_verbosity(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &uvm_get_max_verbosity__Vfuncrtn);
    virtual void __VnoInFunc_uvm_report(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line);
    void __VnoInFunc_uvm_report_enabled(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &uvm_report_enabled__Vfuncrtn);
    virtual void __VnoInFunc_uvm_report_error(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line);
    virtual void __VnoInFunc_uvm_report_fatal(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line);
    virtual void __VnoInFunc_uvm_report_info(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line);
    virtual void __VnoInFunc_uvm_report_warning(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object();
};


#endif  // guard
