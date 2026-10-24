// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_TRANSACTION__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_TRANSACTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_component;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_event;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz12;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__record_enable;
    IData/*31:0*/ __PVT__m_transaction_id;
    IData/*31:0*/ __PVT__stream_handle;
    IData/*31:0*/ __PVT__tr_handle;
    QData/*63:0*/ __PVT__begin_time;
    QData/*63:0*/ __PVT__end_time;
    QData/*63:0*/ __PVT__accept_time;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz12> __PVT__events;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_event> __PVT__begin_event;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_event> __PVT__end_event;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> __PVT__initiator;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder> __PVT__m_recorder;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_transaction"; }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_accept_tr(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ accept_time);
    void __VnoInFunc_begin_child_tr(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ begin_time, IData/*31:0*/ parent_handle, IData/*31:0*/ &begin_child_tr__Vfuncrtn);
    void __VnoInFunc_begin_tr(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ begin_time, IData/*31:0*/ &begin_tr__Vfuncrtn);
    void __VnoInFunc_disable_recording(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_accept_tr(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_begin_tr(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_end_tr(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_record(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder> recorder);
    void __VnoInFunc_enable_recording(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string stream, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder> recorder);
    void __VnoInFunc_end_tr(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ end_time, CData/*0:0*/ free_handle);
    void __VnoInFunc_get_accept_time(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ &get_accept_time__Vfuncrtn);
    void __VnoInFunc_get_begin_time(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ &get_begin_time__Vfuncrtn);
    void __VnoInFunc_get_end_time(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ &get_end_time__Vfuncrtn);
    void __VnoInFunc_get_event_pool(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz12> &get_event_pool__Vfuncrtn);
    void __VnoInFunc_get_initiator(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> &get_initiator__Vfuncrtn);
    void __VnoInFunc_get_tr_handle(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_tr_handle__Vfuncrtn);
    void __VnoInFunc_get_transaction_id(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_transaction_id__Vfuncrtn);
    void __VnoInFunc_is_active(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_active__Vfuncrtn);
    void __VnoInFunc_is_recording_enabled(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_recording_enabled__Vfuncrtn);
    void __VnoInFunc_m_begin_tr(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ begin_time, IData/*31:0*/ parent_handle, CData/*0:0*/ has_parent, IData/*31:0*/ &m_begin_tr__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_set_initiator(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> initiator);
    void __VnoInFunc_set_transaction_id(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ id);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> initiator);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction();
};


#endif  // guard
