// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_EVENT__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_EVENT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_event;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_event_callback;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_scope_stack;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_event__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_event__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_event__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_event__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_event : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__on;
    IData/*31:0*/ __PVT__num_waiters;
    QData/*63:0*/ __PVT__trigger_time;
    VlAssignableEvent __PVT__m_event;
    std::string __Vtask_uvm_report_warning__7__id;
    std::string __Vtask_uvm_report_warning__7__message;
    std::string __Vtask_uvm_report_warning__7__filename;
    std::string __Vtask_uvm_report_warning__10__id;
    std::string __Vtask_uvm_report_warning__10__message;
    std::string __Vtask_uvm_report_warning__10__filename;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> __PVT__trigger_data;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_event_callback>> __PVT__callbacks;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_event"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_event(*this); }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_add_callback(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_event_callback> cb, CData/*0:0*/ append);
    virtual void __VnoInFunc_cancel(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_delete_callback(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_event_callback> cb);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_get_num_waiters(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_waiters__Vfuncrtn);
    virtual void __VnoInFunc_get_trigger_data(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &get_trigger_data__Vfuncrtn);
    virtual void __VnoInFunc_get_trigger_time(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ &get_trigger_time__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_is_off(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_off__Vfuncrtn);
    virtual void __VnoInFunc_is_on(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_on__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ wakeup);
    virtual void __VnoInFunc_trigger(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> data);
    virtual VlCoroutine __VnoInFunc_wait_off(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ delta);
    virtual VlCoroutine __VnoInFunc_wait_on(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ delta);
    virtual VlCoroutine __VnoInFunc_wait_ptrigger(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_wait_ptrigger_data(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &data);
    virtual VlCoroutine __VnoInFunc_wait_trigger(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_wait_trigger_data(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &data);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_event() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_event();
};


#endif  // guard
