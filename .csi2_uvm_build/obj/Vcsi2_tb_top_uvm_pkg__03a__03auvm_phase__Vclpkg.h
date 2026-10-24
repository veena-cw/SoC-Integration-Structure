// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_PHASE__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_PHASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_std__03a__03amailbox__Tz18;
class Vcsi2_tb_top_std__03a__03aprocess;
class Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_2;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_component;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_task_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_phase_trace;
    CData/*0:0*/ __PVT__m_use_ovm_run_semantic;
    IData/*31:0*/ __PVT__m_print_successors__Vstatic__level;
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> __PVT__m_executing_phases;
    std::string __PVT__m_print_successors__Vstatic__spaces;
    std::string __Vfunc_uvm_report_enabled__1__id;
    std::string __Vtask_uvm_report_warning__4__id;
    std::string __Vtask_uvm_report_warning__4__message;
    std::string __Vtask_uvm_report_warning__4__filename;
    VlClassRef<Vcsi2_tb_top_std__03a__03amailbox__Tz18> __PVT__m_phase_hopper;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_jump_all(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    VlCoroutine __VnoInFunc_m_run_phases(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_run_phases____Vfork_1__0(VlProcessRef vlProcess, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> unnamedblk123__DOT__phase);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_jump_bkwd;
    CData/*0:0*/ __PVT__m_jump_fwd;
    IData/*31:0*/ __PVT__max_ready_to_end_iter;
    IData/*31:0*/ __PVT__m_phase_type;
    IData/*31:0*/ __PVT__m_state;
    IData/*31:0*/ __PVT__m_run_count;
    IData/*31:0*/ __PVT__m_num_procs_not_yet_returned;
    IData/*31:0*/ __PVT__m_ready_to_end_count;
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> __PVT__m_predecessors;
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> __PVT__m_successors;
    std::string __Vfunc_uvm_report_enabled__13__id;
    std::string __Vtask_uvm_report_fatal__16__id;
    std::string __Vtask_uvm_report_fatal__16__message;
    std::string __Vtask_uvm_report_fatal__16__filename;
    std::string __Vfunc_uvm_report_enabled__22__id;
    std::string __Vtask_uvm_report_fatal__26__id;
    std::string __Vtask_uvm_report_fatal__26__message;
    std::string __Vtask_uvm_report_fatal__26__filename;
    std::string __Vfunc_uvm_report_enabled__32__id;
    std::string __Vtask_uvm_report_fatal__36__id;
    std::string __Vtask_uvm_report_fatal__36__message;
    std::string __Vtask_uvm_report_fatal__36__filename;
    std::string __Vfunc_uvm_report_enabled__42__id;
    std::string __Vtask_uvm_report_fatal__46__id;
    std::string __Vtask_uvm_report_fatal__46__message;
    std::string __Vtask_uvm_report_fatal__46__filename;
    std::string __Vfunc_uvm_report_enabled__49__id;
    std::string __Vtask_uvm_report_fatal__52__id;
    std::string __Vtask_uvm_report_fatal__52__message;
    std::string __Vtask_uvm_report_fatal__52__filename;
    std::string __Vfunc_uvm_report_enabled__55__id;
    std::string __Vtask_uvm_report_fatal__58__id;
    std::string __Vtask_uvm_report_fatal__58__message;
    std::string __Vtask_uvm_report_fatal__58__filename;
    std::string __Vfunc_uvm_report_enabled__65__id;
    std::string __Vtask_uvm_report_info__78__id;
    std::string __Vtask_uvm_report_info__78__message;
    std::string __Vtask_uvm_report_info__78__filename;
    std::string __Vfunc_uvm_report_enabled__82__id;
    std::string __Vtask_uvm_report_fatal__87__id;
    std::string __Vtask_uvm_report_fatal__87__message;
    std::string __Vtask_uvm_report_fatal__87__filename;
    std::string __Vfunc_uvm_report_enabled__91__id;
    std::string __Vtask_uvm_report_fatal__94__id;
    std::string __Vtask_uvm_report_fatal__94__message;
    std::string __Vtask_uvm_report_fatal__94__filename;
    std::string __Vfunc_uvm_report_enabled__143__id;
    std::string __Vtask_uvm_report_info__148__id;
    std::string __Vtask_uvm_report_info__148__message;
    std::string __Vtask_uvm_report_info__148__filename;
    std::string __Vfunc_uvm_report_enabled__156__id;
    std::string __Vtask_uvm_report_info__161__id;
    std::string __Vtask_uvm_report_info__161__message;
    std::string __Vtask_uvm_report_info__161__filename;
    std::string __Vtask___VforkTask_1__164____VlefCall_13__get_full_name;
    std::string __Vtask___VforkTask_1__164____VlefCall_10__get_full_name;
    std::string __Vtask___VforkTask_1__164____VlefCall_7__get_full_name;
    std::string __Vtask___VforkTask_1__164____VlefCall_4__get_full_name;
    std::string __Vtask___VforkTask_1__164____VlefCall_1__get_name;
    std::string __Vtask_get_name__166__Vfuncout;
    std::string __Vfunc_uvm_report_enabled__168__id;
    std::string __Vfunc_get_full_name__171__Vfuncout;
    std::string __Vtask_uvm_report_info__173__id;
    std::string __Vtask_uvm_report_info__173__message;
    std::string __Vtask_uvm_report_info__173__filename;
    std::string __Vfunc_uvm_report_enabled__176__id;
    std::string __Vfunc_get_full_name__179__Vfuncout;
    std::string __Vtask_uvm_report_info__181__id;
    std::string __Vtask_uvm_report_info__181__message;
    std::string __Vtask_uvm_report_info__181__filename;
    std::string __Vfunc_uvm_report_enabled__186__id;
    std::string __Vfunc_get_full_name__189__Vfuncout;
    std::string __Vtask_uvm_report_info__191__id;
    std::string __Vtask_uvm_report_info__191__message;
    std::string __Vtask_uvm_report_info__191__filename;
    std::string __Vfunc_uvm_report_enabled__194__id;
    std::string __Vfunc_get_full_name__197__Vfuncout;
    std::string __Vtask_uvm_report_info__199__id;
    std::string __Vtask_uvm_report_info__199__message;
    std::string __Vtask_uvm_report_info__199__filename;
    std::string __Vtask___VforkTask_2__205____VlefCall_25__get_full_name;
    std::string __Vtask___VforkTask_2__205____VlefCall_22__convert2string;
    std::string __Vtask___VforkTask_2__205____VlefCall_21__get_full_name;
    std::string __Vtask___VforkTask_2__205____VlefCall_19__get_full_name;
    std::string __Vtask___VforkTask_2__205____VlefCall_15__get_full_name;
    std::string __Vtask___VforkTask_2__205____VlefCall_12__convert2string;
    std::string __Vtask___VforkTask_2__205____VlefCall_11__get_full_name;
    std::string __Vtask___VforkTask_2__205____VlefCall_9__get_full_name;
    std::string __Vtask___VforkTask_2__205____VlefCall_5__get_full_name;
    std::string __Vtask___VforkTask_2__205____VlefCall_2__get_full_name;
    std::string __Vtask___VforkTask_2__205____VlefCall_0__get_name;
    std::string __Vfunc_get_name__206__Vfuncout;
    std::string __Vfunc_uvm_report_enabled__207__id;
    std::string __Vfunc_get_full_name__210__Vfuncout;
    std::string __Vtask_uvm_report_info__212__id;
    std::string __Vtask_uvm_report_info__212__message;
    std::string __Vtask_uvm_report_info__212__filename;
    std::string __Vfunc_uvm_report_enabled__215__id;
    std::string __Vfunc_get_full_name__218__Vfuncout;
    std::string __Vtask_uvm_report_info__220__id;
    std::string __Vtask_uvm_report_info__220__message;
    std::string __Vtask_uvm_report_info__220__filename;
    std::string __Vfunc_uvm_report_enabled__224__id;
    std::string __Vfunc_get_full_name__227__Vfuncout;
    std::string __Vtask_get_full_name__229__Vfuncout;
    std::string __Vtask_convert2string__230__Vfuncout;
    std::string __Vtask_uvm_report_info__231__id;
    std::string __Vtask_uvm_report_info__231__message;
    std::string __Vtask_uvm_report_info__231__filename;
    std::string __Vfunc_uvm_report_enabled__234__id;
    std::string __Vtask_uvm_report_fatal__237__id;
    std::string __Vtask_uvm_report_fatal__237__message;
    std::string __Vtask_uvm_report_fatal__237__filename;
    std::string __Vfunc_uvm_report_enabled__240__id;
    std::string __Vfunc_get_full_name__243__Vfuncout;
    std::string __Vtask_uvm_report_info__245__id;
    std::string __Vtask_uvm_report_info__245__message;
    std::string __Vtask_uvm_report_info__245__filename;
    std::string __Vfunc_uvm_report_enabled__249__id;
    std::string __Vfunc_get_full_name__252__Vfuncout;
    std::string __Vtask_get_full_name__254__Vfuncout;
    std::string __Vtask_convert2string__255__Vfuncout;
    std::string __Vtask_uvm_report_info__256__id;
    std::string __Vtask_uvm_report_info__256__message;
    std::string __Vtask_uvm_report_info__256__filename;
    std::string __Vfunc_uvm_report_enabled__259__id;
    std::string __Vtask_uvm_report_fatal__262__id;
    std::string __Vtask_uvm_report_fatal__262__message;
    std::string __Vtask_uvm_report_fatal__262__filename;
    std::string __Vfunc_uvm_report_enabled__265__id;
    std::string __Vfunc_get_full_name__268__Vfuncout;
    std::string __Vtask_uvm_report_info__270__id;
    std::string __Vtask_uvm_report_info__270__message;
    std::string __Vtask_uvm_report_info__270__filename;
    std::string __Vfunc_uvm_report_enabled__274__id;
    std::string __Vtask_uvm_report_info__281__id;
    std::string __Vtask_uvm_report_info__281__message;
    std::string __Vtask_uvm_report_info__281__filename;
    std::string __Vfunc_uvm_report_enabled__284__id;
    std::string __Vtask_uvm_report_info__289__id;
    std::string __Vtask_uvm_report_info__289__message;
    std::string __Vtask_uvm_report_info__289__filename;
    std::string __Vfunc_uvm_report_enabled__299__id;
    std::string __Vtask_uvm_report_info__304__id;
    std::string __Vtask_uvm_report_info__304__message;
    std::string __Vtask_uvm_report_info__304__filename;
    std::string __Vfunc_uvm_report_enabled__310__id;
    std::string __Vtask_uvm_report_info__315__id;
    std::string __Vtask_uvm_report_info__315__message;
    std::string __Vtask_uvm_report_info__315__filename;
    std::string __Vfunc_uvm_report_enabled__319__id;
    std::string __Vtask_uvm_report_info__325__id;
    std::string __Vtask_uvm_report_info__325__message;
    std::string __Vtask_uvm_report_info__325__filename;
    std::string __Vfunc_uvm_report_enabled__333__id;
    std::string __Vtask_uvm_report_info__338__id;
    std::string __Vtask_uvm_report_info__338__message;
    std::string __Vtask_uvm_report_info__338__filename;
    std::string __Vfunc_uvm_report_enabled__344__id;
    std::string __Vtask_uvm_report_info__349__id;
    std::string __Vtask_uvm_report_info__349__message;
    std::string __Vtask_uvm_report_info__349__filename;
    std::string __Vfunc_uvm_report_enabled__353__id;
    std::string __Vtask_uvm_report_info__358__id;
    std::string __Vtask_uvm_report_info__358__message;
    std::string __Vtask_uvm_report_info__358__filename;
    std::string __Vfunc_uvm_report_enabled__361__id;
    std::string __Vtask_uvm_report_info__366__id;
    std::string __Vtask_uvm_report_info__366__message;
    std::string __Vtask_uvm_report_info__366__filename;
    std::string __Vfunc_uvm_report_enabled__372__id;
    std::string __Vtask_uvm_report_fatal__375__id;
    std::string __Vtask_uvm_report_fatal__375__message;
    std::string __Vtask_uvm_report_fatal__375__filename;
    std::string __Vfunc_uvm_report_enabled__379__id;
    std::string __Vtask_uvm_report_fatal__382__id;
    std::string __Vtask_uvm_report_fatal__382__message;
    std::string __Vtask_uvm_report_fatal__382__filename;
    std::string __Vfunc_uvm_report_enabled__388__id;
    std::string __Vtask_uvm_report_fatal__391__id;
    std::string __Vtask_uvm_report_fatal__391__message;
    std::string __Vtask_uvm_report_fatal__391__filename;
    std::string __Vfunc_uvm_report_enabled__394__id;
    std::string __Vtask_uvm_report_fatal__397__id;
    std::string __Vtask_uvm_report_fatal__397__message;
    std::string __Vtask_uvm_report_fatal__397__filename;
    std::string __Vfunc_uvm_report_enabled__401__id;
    std::string __Vtask_uvm_report_fatal__404__id;
    std::string __Vtask_uvm_report_fatal__404__message;
    std::string __Vtask_uvm_report_fatal__404__filename;
    std::string __Vfunc_uvm_report_enabled__408__id;
    std::string __Vtask_uvm_report_fatal__411__id;
    std::string __Vtask_uvm_report_fatal__411__message;
    std::string __Vtask_uvm_report_fatal__411__filename;
    std::string __Vfunc_uvm_report_enabled__417__id;
    std::string __Vtask_uvm_report_fatal__420__id;
    std::string __Vtask_uvm_report_fatal__420__message;
    std::string __Vtask_uvm_report_fatal__420__filename;
    std::string __Vfunc_uvm_report_enabled__423__id;
    std::string __Vtask_uvm_report_fatal__426__id;
    std::string __Vtask_uvm_report_fatal__426__message;
    std::string __Vtask_uvm_report_fatal__426__filename;
    std::string __Vfunc_uvm_report_enabled__429__id;
    std::string __Vfunc_uvm_report_enabled__438__id;
    std::string __Vtask_uvm_report_fatal__441__id;
    std::string __Vtask_uvm_report_fatal__441__message;
    std::string __Vtask_uvm_report_fatal__441__filename;
    std::string __Vfunc_uvm_report_enabled__444__id;
    std::string __Vtask_uvm_report_info__448__id;
    std::string __Vtask_uvm_report_info__448__message;
    std::string __Vtask_uvm_report_info__448__filename;
    std::string __Vfunc_uvm_report_enabled__451__id;
    std::string __Vtask_uvm_report_info__455__id;
    std::string __Vtask_uvm_report_info__455__message;
    std::string __Vtask_uvm_report_info__455__filename;
    std::string __Vfunc_uvm_report_enabled__468__id;
    std::string __Vtask_uvm_report_info__472__id;
    std::string __Vtask_uvm_report_info__472__message;
    std::string __Vtask_uvm_report_info__472__filename;
    std::string __Vfunc_uvm_report_enabled__479__id;
    std::string __Vtask_uvm_report_info__485__id;
    std::string __Vtask_uvm_report_info__485__message;
    std::string __Vtask_uvm_report_info__485__filename;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> __PVT__m_parent;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> __PVT__m_imp;
    VlClassRef<Vcsi2_tb_top_std__03a__03aprocess> __PVT__m_phase_proc;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> __PVT__m_end_node;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase>> __PVT__m_sync;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection> __PVT__phase_done;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> __PVT__m_jump_phase;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_phase"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase(*this); }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_add(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> with_phase, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> after_phase, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> before_phase);
    void __VnoInFunc_clear(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ state);
    void __VnoInFunc_clear_successors(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ state, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> end_state);
    void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_drop_objection(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_exec_func(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual VlCoroutine __VnoInFunc_exec_task(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_execute(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    VlCoroutine __VnoInFunc_execute_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_execute_phase____Vfork_1__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_2> __VDynScope_execute_phase_0);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_2__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_2__0____Vfork_3__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h62971b97__0);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlForkSync __Vfork_4__sync, CData/*0:0*/ &__VlefCall_5__uvm_report_enabled, std::string &__VlefCall_6__get_full_name, IData/*31:0*/ &__VlefCall_7__get_inst_id, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_2> &__VDynScope_execute_phase_0);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlForkSync __Vfork_5__sync, CData/*0:0*/ __VlefCall_5__uvm_report_enabled, std::string __VlefCall_6__get_full_name, IData/*31:0*/ __VlefCall_7__get_inst_id);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlForkSync __Vfork_5__sync, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_2> __VDynScope_execute_phase_0);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_6__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_6__0____Vfork_7__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h62971b97__1);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_8__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_8__0____Vfork_9__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h62971b97__2);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__2(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlForkSync __Vfork_5__sync, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_2> __VDynScope_execute_phase_0);
  public:
    void __VnoInFunc_find(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ stay_in_scope, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> &find__Vfuncrtn);
    void __VnoInFunc_find_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ stay_in_scope, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> &find_by_name__Vfuncrtn);
    void __VnoInFunc_get_begin_node(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> &get_begin_node__Vfuncrtn);
    void __VnoInFunc_get_domain(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain> &get_domain__Vfuncrtn);
    void __VnoInFunc_get_domain_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_domain_name__Vfuncrtn);
    void __VnoInFunc_get_end_node(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> &get_end_node__Vfuncrtn);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_imp(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> &get_imp__Vfuncrtn);
    void __VnoInFunc_get_jump_target(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> &get_jump_target__Vfuncrtn);
    void __VnoInFunc_get_objection(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection> &get_objection__Vfuncrtn);
    void __VnoInFunc_get_parent(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> &get_parent__Vfuncrtn);
    void __VnoInFunc_get_phase_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_phase_type__Vfuncrtn);
    void __VnoInFunc_get_predecessors_for_successors(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> &pred_of_succ);
    void __VnoInFunc_get_ready_to_end_count(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_ready_to_end_count__Vfuncrtn);
    void __VnoInFunc_get_run_count(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_run_count__Vfuncrtn);
    void __VnoInFunc_get_schedule(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ hier, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> &get_schedule__Vfuncrtn);
    void __VnoInFunc_get_schedule_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ hier, std::string &get_schedule_name__Vfuncrtn);
    void __VnoInFunc_get_state(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_state__Vfuncrtn);
    void __VnoInFunc_is(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ &is__Vfuncrtn);
    void __VnoInFunc_is_after(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ &is_after__Vfuncrtn);
    void __VnoInFunc_is_before(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ &is_before__Vfuncrtn);
    void __VnoInFunc_is_domain(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_domain__Vfuncrtn);
    void __VnoInFunc_jump(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_kill(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_kill_successors(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_aa2string(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> aa, std::string &m_aa2string__Vfuncrtn);
    void __VnoInFunc_m_find_predecessor(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ stay_in_scope, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> orig_phase, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> &m_find_predecessor__Vfuncrtn);
    void __VnoInFunc_m_find_predecessor_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ stay_in_scope, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> orig_phase, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> &m_find_predecessor_by_name__Vfuncrtn);
    void __VnoInFunc_m_find_successor(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ stay_in_scope, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> orig_phase, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> &m_find_successor__Vfuncrtn);
    void __VnoInFunc_m_find_successor_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ stay_in_scope, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> orig_phase, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> &m_find_successor_by_name__Vfuncrtn);
    virtual void __VnoInFunc_m_get_transitive_children(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase>> &phases);
    void __VnoInFunc_m_print_successors(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_print_termination_state(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_terminate_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_m_wait_for_pred(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_raise_objection(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_sync(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain> target, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> with_phase);
    virtual void __VnoInFunc_traverse(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase, IData/*31:0*/ state);
    void __VnoInFunc_unsync(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain> target, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> with_phase);
    VlCoroutine __VnoInFunc_wait_for_self_and_siblings_to_drop(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_wait_for_state(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ state, IData/*31:0*/ op);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ phase_type, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> parent);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase();
};


#endif  // guard
