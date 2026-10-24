// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_HEARTBEAT__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_HEARTBEAT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_29;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_component;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_event;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_started;
    CData/*0:0*/ __PVT__m_added;
    IData/*31:0*/ __PVT__m_mode;
    VlAssignableEvent __PVT__m_stop_event;
    std::string __Vtask___VforkTask_0__18____VlefCall_12__get_name;
    std::string __Vtask___VforkTask_0__18____VlefCall_11__get_full_name;
    std::string __Vtask___VforkTask_0__18____VlefCall_8__get_name;
    std::string __Vtask___VforkTask_0__18____VlefCall_7__get_full_name;
    std::string __Vtask___VforkTask_0__18____VlefCall_5__get_name;
    std::string __Vtask___VforkTask_0__18____VlefCall_4__get_full_name;
    std::string __Vtask___VforkTask_0__18____VlefCall_1__get_full_name;
    std::string __Vtask___VforkTask_0__18____VlefCall_0__get_name;
    std::string __Vtask___VforkTask_0__18__unnamedblk3__DOT__s;
    std::string __Vtask___VforkTask_0__18__unnamedblk5__DOT__s;
    std::string __Vtask___VforkTask_0__18__unnamedblk7__DOT__s;
    std::string __Vtask_get_name__20__Vfuncout;
    std::string __Vtask_get_full_name__21__Vfuncout;
    std::string __Vtask_get_full_name__24__Vfuncout;
    std::string __Vtask_get_name__25__Vfuncout;
    std::string __Vtask_get_full_name__28__Vfuncout;
    std::string __Vtask_get_name__29__Vfuncout;
    std::string __Vtask_get_full_name__32__Vfuncout;
    std::string __Vtask_get_name__33__Vfuncout;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection> __PVT__m_objection;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback> __PVT__m_cb;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> __PVT__m_cntxt;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>> __PVT__m_hblist;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_event> __PVT__m_event;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_heartbeat"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat(*this); }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_add(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> comp);
    void __VnoInFunc_m_disable_cb(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_enable_cb(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_m_hb_process(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_hb_process____Vfork_2__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlForkSync __Vfork_2__sync, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_29> __VDynScope_m_hb_process_1);
    VlCoroutine __VnoInFunc_m_hb_process____Vfork_2__1(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlForkSync __Vfork_2__sync);
  public:
    void __VnoInFunc_m_start_hb_process(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_start_hb_process____Vfork_1__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_remove(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> comp);
    void __VnoInFunc_set_heartbeat(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_event> e, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>> &comps);
    void __VnoInFunc_set_mode(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ mode, IData/*31:0*/ &set_mode__Vfuncrtn);
    void __VnoInFunc_start(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_event> e);
    void __VnoInFunc_stop(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> cntxt, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection> objection);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat();
};


#endif  // guard
