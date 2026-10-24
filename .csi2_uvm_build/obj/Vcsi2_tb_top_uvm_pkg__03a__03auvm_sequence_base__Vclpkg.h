// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_SEQUENCE_BASE__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_SEQUENCE_BASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_std__03a__03aprocess;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__response_queue_error_report_disabled;
    CData/*0:0*/ __PVT__do_not_randomize;
    CData/*0:0*/ __PVT__m_use_response_handler;
    CData/*0:0*/ __PVT__is_rel_default;
    CData/*0:0*/ __PVT__wait_rel_default;
    IData/*31:0*/ __PVT__m_sequence_state;
    IData/*31:0*/ __PVT__m_next_transaction_id;
    IData/*31:0*/ __PVT__m_priority;
    IData/*31:0*/ __PVT__m_tr_handle;
    IData/*31:0*/ __PVT__m_wait_for_grant_semaphore;
    IData/*31:0*/ __PVT__response_queue_depth;
    IData/*31:0*/ __PVT__seq_kind;
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>, CData/*0:0*/> __PVT__children_array;
    VlAssocArray<IData/*31:0*/, IData/*31:0*/> __PVT__m_sqr_seq_ids;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item>> __PVT__response_queue;
    VlClassRef<Vcsi2_tb_top_std__03a__03aprocess> __PVT__m_sequence_process;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> __PVT__starting_phase;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_sequence_base"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base(*this); }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_body(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_clear_response_queue(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_create_and_start_sequence_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string seq_name);
    void __VnoInFunc_create_item(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> type_var, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> l_sequencer, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> &create_item__Vfuncrtn);
    virtual void __VnoInFunc_do_kill(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_do_sequence_kind(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ req_kind);
    virtual VlCoroutine __VnoInFunc_finish_item(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> item, IData/*31:0*/ set_priority);
    virtual VlCoroutine __VnoInFunc_get_base_response(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> &response, IData/*31:0*/ transaction_id);
    void __VnoInFunc_get_priority(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_priority__Vfuncrtn);
    void __VnoInFunc_get_response_queue_depth(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_response_queue_depth__Vfuncrtn);
    void __VnoInFunc_get_response_queue_error_report_disabled(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &get_response_queue_error_report_disabled__Vfuncrtn);
    void __VnoInFunc_get_seq_kind(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string type_name, IData/*31:0*/ &get_seq_kind__Vfuncrtn);
    void __VnoInFunc_get_sequence(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ req_kind, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> &get_sequence__Vfuncrtn);
    void __VnoInFunc_get_sequence_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string seq_name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> &get_sequence_by_name__Vfuncrtn);
    void __VnoInFunc_get_sequence_state(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_sequence_state__Vfuncrtn);
    void __VnoInFunc_get_use_response_handler(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &get_use_response_handler__Vfuncrtn);
    VlCoroutine __VnoInFunc_grab(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_has_lock(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &has_lock__Vfuncrtn);
    void __VnoInFunc_is_blocked(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_blocked__Vfuncrtn);
    virtual void __VnoInFunc_is_item(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_item__Vfuncrtn);
    virtual void __VnoInFunc_is_relevant(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_relevant__Vfuncrtn);
    void __VnoInFunc_kill(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_lock(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_m_get_sqr_sequence_id(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ sequencer_id, CData/*0:0*/ update_sequence_id, IData/*31:0*/ &m_get_sqr_sequence_id__Vfuncrtn);
    void __VnoInFunc_m_kill(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_set_sqr_sequence_id(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ sequencer_id, IData/*31:0*/ sequence_id);
    virtual void __VnoInFunc_mid_do(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> this_item);
    void __VnoInFunc_num_sequences(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &num_sequences__Vfuncrtn);
    void __VnoInFunc_pick_sequence_setup_constraint(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_post_body(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_post_do(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> this_item);
    virtual void __VnoInFunc_post_start(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_pre_body(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_pre_do(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ is_item);
    virtual void __VnoInFunc_pre_start(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_put_base_response(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> response);
    virtual void __VnoInFunc_put_response(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> response_item);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_response_handler(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> response);
    virtual void __VnoInFunc_send_request(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> request, CData/*0:0*/ rerandomize);
    void __VnoInFunc_set_priority(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ value);
    void __VnoInFunc_set_response_queue_depth(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ value);
    void __VnoInFunc_set_response_queue_error_report_disabled(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ value);
    virtual VlCoroutine __VnoInFunc_start(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent_sequence, IData/*31:0*/ this_priority, CData/*0:0*/ call_pre_post);
  private:
    VlCoroutine __VnoInFunc_start____Vfork_1__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync, CData/*0:0*/ &call_pre_post, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> &parent_sequence);
  public:
    virtual VlCoroutine __VnoInFunc_start_item(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> item, IData/*31:0*/ set_priority, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_ungrab(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_unlock(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_use_response_handler(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ enable);
    virtual VlCoroutine __VnoInFunc_wait_for_grant(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ item_priority, CData/*0:0*/ lock_request);
    virtual VlCoroutine __VnoInFunc_wait_for_item_done(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ transaction_id);
    virtual VlCoroutine __VnoInFunc_wait_for_relevant(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_wait_for_sequence_state(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ state_mask);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base();
};


#endif  // guard
