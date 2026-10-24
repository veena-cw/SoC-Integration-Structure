// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_REPORT_CATCHER__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_REPORT_CATCHER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi34;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_register_cb_uvm_report_catcher;
    CData/*1:0*/ __PVT__m_modified_severity;
    CData/*0:0*/ __PVT__m_set_action_called;
    CData/*1:0*/ __PVT__m_orig_severity;
    CData/*0:0*/ __PVT__do_report;
    CData/*0:0*/ __PVT__process_all_report_catchers__Vstatic__in_catcher;
    IData/*31:0*/ __PVT__m_modified_verbosity;
    IData/*31:0*/ __PVT__m_line_number;
    IData/*31:0*/ __PVT__m_modified_action;
    IData/*31:0*/ __PVT__m_demoted_fatal;
    IData/*31:0*/ __PVT__m_demoted_error;
    IData/*31:0*/ __PVT__m_demoted_warning;
    IData/*31:0*/ __PVT__m_caught_fatal;
    IData/*31:0*/ __PVT__m_caught_error;
    IData/*31:0*/ __PVT__m_caught_warning;
    IData/*31:0*/ __PVT__DO_NOT_CATCH;
    IData/*31:0*/ __PVT__DO_NOT_MODIFY;
    IData/*31:0*/ __PVT__m_debug_flags;
    IData/*31:0*/ __PVT__m_orig_action;
    IData/*31:0*/ __PVT__m_orig_verbosity;
    std::string __PVT__m_modified_id;
    std::string __PVT__m_modified_message;
    std::string __PVT__m_file_name;
    std::string __PVT__m_name;
    std::string __PVT__m_orig_id;
    std::string __PVT__m_orig_message;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> __PVT__m_client;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server> __PVT__m_server;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi34> __PVT__get_report_catcher__Vstatic__iter;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi34> __PVT__print_catcher__Vstatic__iter;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_debug_report_catcher(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ what);
    void __VnoInFunc_f_display(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ file, std::string str);
    void __VnoInFunc_get_report_catcher(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher> &get_report_catcher__Vfuncrtn);
    void __VnoInFunc_print_catcher(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ file);
    void __VnoInFunc_process_all_report_catchers(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server> server, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> client, CData/*1:0*/ &severity, std::string name, std::string &id, std::string &message, IData/*31:0*/ &verbosity_level, IData/*31:0*/ &action, std::string filename, IData/*31:0*/ line, IData/*31:0*/ &process_all_report_catchers__Vfuncrtn);
    void __VnoInFunc_summarize_report_catcher(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ file);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_report_catcher"; }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_catch(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &catch__Vfuncrtn);
    void __VnoInFunc_get_action(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_action__Vfuncrtn);
    void __VnoInFunc_get_client(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> &get_client__Vfuncrtn);
    void __VnoInFunc_get_context(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_context__Vfuncrtn);
    void __VnoInFunc_get_fname(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_fname__Vfuncrtn);
    void __VnoInFunc_get_id(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_id__Vfuncrtn);
    void __VnoInFunc_get_line(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_line__Vfuncrtn);
    void __VnoInFunc_get_message(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_message__Vfuncrtn);
    void __VnoInFunc_get_severity(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ &get_severity__Vfuncrtn);
    void __VnoInFunc_get_verbosity(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_verbosity__Vfuncrtn);
    void __VnoInFunc_issue(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_process_report_catcher(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &process_report_catcher__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_set_action(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ action);
    void __VnoInFunc_set_id(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id);
    void __VnoInFunc_set_message(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string message);
    void __VnoInFunc_set_severity(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity);
    void __VnoInFunc_set_verbosity(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity);
    void __VnoInFunc_uvm_report(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line);
    void __VnoInFunc_uvm_report_error(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line);
    void __VnoInFunc_uvm_report_fatal(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line);
    void __VnoInFunc_uvm_report_info(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line);
    void __VnoInFunc_uvm_report_warning(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line);
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher();
};


#endif  // guard
