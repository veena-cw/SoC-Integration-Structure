// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_ROOT__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_ROOT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_std__03a__03aprocess;
class Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_16;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_component;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root_report_handler;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_root__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__set_timeout__Vstatic__m_uvm_timeout_overridable;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __PVT__m_inst;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_root__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_root__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_root__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> &get__Vfuncrtn);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_component {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__enable_print_topology;
    CData/*0:0*/ __PVT__finish_on_completion;
    CData/*0:0*/ __PVT__m_phase_all_done;
    QData/*63:0*/ __PVT__phase_timeout;
    std::string __Vfunc_uvm_is_match__47__expr;
    std::string __Vfunc_uvm_is_match__47__str;
    std::string __Vfunc_uvm_glob_to_re__48__Vfuncout;
    std::string __Vtask_uvm_split_string__62__str;
    std::string __Vtask_uvm_split_string__77__str;
    std::string __Vtask_uvm_split_string__82__str;
    std::string __Vtask_uvm_split_string__88__str;
    std::string __Vtask_uvm_split_string__104__str;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor> __PVT__clp;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>> __PVT__top_levels;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_root"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_root(*this); }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_find(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string comp_match, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> &find__Vfuncrtn);
    void __VnoInFunc_find_all(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string comp_match, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>> &comps, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> comp);
    virtual void __VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_m_add_child(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> child, CData/*0:0*/ &m_add_child__Vfuncrtn);
    void __VnoInFunc_m_check_verbosity(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_config_settings(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_dump_args(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_factory_settings(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_max_quit_settings(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_timeout_settings(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_verbosity_settings(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_find_all_recurse(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string comp_match, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>> &comps, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> comp);
    void __VnoInFunc_m_process_config(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string cfg, CData/*0:0*/ is_int);
    void __VnoInFunc_m_process_inst_override(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string ovr);
    void __VnoInFunc_m_process_type_override(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string ovr);
    void __VnoInFunc_phase_started(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_print_topology(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_run_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual VlCoroutine __VnoInFunc_run_test(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string test_name);
  private:
    VlCoroutine __VnoInFunc_run_test____Vfork_1__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_16> __VDynScope_run_test_0);
  public:
    void __VnoInFunc_set_timeout(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ timeout, CData/*0:0*/ overridable);
    void __VnoInFunc_stop_request(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_root() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_root();
};


#endif  // guard
