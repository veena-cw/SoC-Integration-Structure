// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_TASK_PHASE__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_TASK_PHASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_std__03a__03aprocess;
class Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_8;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_component;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_seed_map;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_task_phase;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_task_phase__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_task_phase__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_task_phase__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_task_phase__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_task_phase : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_report_enabled__8__id;
    std::string __Vtask_uvm_report_info__15__id;
    std::string __Vtask_uvm_report_info__15__message;
    std::string __Vtask_uvm_report_info__15__filename;
    std::string __Vfunc_uvm_report_enabled__24__id;
    std::string __Vtask_uvm_report_fatal__27__id;
    std::string __Vtask_uvm_report_fatal__27__message;
    std::string __Vtask_uvm_report_fatal__27__filename;
    std::string __Vtask___VforkTask_0__31____VlefCall_1__get_full_name;
    std::string __Vtask___VforkTask_0__31____VlefCall_0__get_type_name;
    std::string __Vtask_get_type_name__33__Vfuncout;
    std::string __Vtask_get_full_name__34__Vfuncout;
    std::string __Vfunc_uvm_create_random_seed__35__type_id;
    std::string __Vfunc_uvm_create_random_seed__35__inst_id;
    std::string __Vfunc_uvm_create_random_seed__35____VlefCall_1__uvm_instance_scope;
    std::string __Vfunc_uvm_instance_scope__37__Vfuncout;
    std::string __Vfunc_uvm_oneway_hash__38__string_in;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_task_phase"; }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_execute(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
  private:
    VlCoroutine __VnoInFunc_execute____Vfork_1__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_8> __VDynScope_execute_0);
  public:
    void __VnoInFunc_m_traverse(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase, IData/*31:0*/ state);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_traverse(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase, IData/*31:0*/ state);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_task_phase() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_task_phase();
};


#endif  // guard
