// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_SEQUENCER_BASE__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_SEQUENCER_BASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_std__03a__03aprocess;
class Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_32;
class Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_38;
class Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_39;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_component;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_seed_map;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_request;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__g_request_id;
    IData/*31:0*/ __PVT__g_sequence_id;
    IData/*31:0*/ __PVT__g_sequencer_id;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_component {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_default_seq_set;
    IData/*31:0*/ __PVT__m_sequencer_id;
    IData/*31:0*/ __PVT__m_lock_arb_size;
    IData/*31:0*/ __PVT__m_arb_size;
    IData/*31:0*/ __PVT__m_wait_for_item_sequence_id;
    IData/*31:0*/ __PVT__m_wait_for_item_transaction_id;
    IData/*31:0*/ __PVT__m_arbitration;
    IData/*31:0*/ __PVT__m_is_relevant_completed;
    IData/*31:0*/ __PVT__count;
    IData/*31:0*/ __PVT__m_random_count;
    IData/*31:0*/ __PVT__m_exhaustive_count;
    IData/*31:0*/ __PVT__m_simple_count;
    IData/*31:0*/ __PVT__max_random_count;
    IData/*31:0*/ __PVT__max_random_depth;
    IData/*31:0*/ __PVT__seq_kind;
    VlAssocArray<IData/*31:0*/, CData/*0:0*/> __PVT__arb_completed;
    VlAssocArray<std::string, IData/*31:0*/> __PVT__sequence_ids;
    VlQueue<IData/*31:0*/> __Vtask___VforkTask_2__75__is_relevant_entries;
    VlQueue<IData/*31:0*/> __Vtask___VforkTask_1__76__is_relevant_entries;
    VlQueue<std::string> __PVT__sequences;
    std::string __PVT__default_sequence;
    std::string __Vfunc_get_config_string__3__value;
    std::string __Vtask___VforkTask_3__190____VlefCall_1__get_full_name;
    std::string __Vtask___VforkTask_3__190____VlefCall_0__get_type_name;
    std::string __Vtask_get_type_name__192__Vfuncout;
    std::string __Vfunc_get_full_name__193__Vfuncout;
    std::string __Vfunc_uvm_create_random_seed__194__type_id;
    std::string __Vfunc_uvm_create_random_seed__194__inst_id;
    std::string __Vfunc_uvm_create_random_seed__194____VlefCall_1__uvm_instance_scope;
    std::string __Vfunc_uvm_instance_scope__196__Vfuncout;
    std::string __Vfunc_uvm_oneway_hash__197__string_in;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_request>> __PVT__arb_sequence_q;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>> __PVT__lock_list;
    VlAssocArray<IData/*31:0*/, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>> __PVT__reg_sequences;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_32> __Vtask___VforkTask_2__75____VDynScope_m_wait_for_available_sequence_0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_38> __Vtask___VforkTask_1__76___Vwrapped_unnamedblk192_6__DOT____VDynScope_unnamedblk192_6;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_sequencer_base"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base(*this); }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_add_sequence(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string type_name);
    virtual void __VnoInFunc_analysis_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> t);
    virtual void __VnoInFunc_build(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_current_grabber(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> &current_grabber__Vfuncrtn);
    void __VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual VlCoroutine __VnoInFunc_execute_item(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> item);
    void __VnoInFunc_get_arbitration(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_arbitration__Vfuncrtn);
    void __VnoInFunc_get_seq_kind(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string type_name, IData/*31:0*/ &get_seq_kind__Vfuncrtn);
    void __VnoInFunc_get_sequence(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ req_kind, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> &get_sequence__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_grab(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    void __VnoInFunc_grant_queued_locks(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_has_do_available(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn);
    void __VnoInFunc_has_lock(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, CData/*0:0*/ &has_lock__Vfuncrtn);
    void __VnoInFunc_is_blocked(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, CData/*0:0*/ &is_blocked__Vfuncrtn);
    void __VnoInFunc_is_child(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> child, CData/*0:0*/ &is_child__Vfuncrtn);
    virtual void __VnoInFunc_is_grabbed(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_grabbed__Vfuncrtn);
    void __VnoInFunc_kill_sequence(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    virtual VlCoroutine __VnoInFunc_lock(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    virtual void __VnoInFunc_m_add_builtin_seqs(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ add_simple);
    void __VnoInFunc_m_choose_next_request(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &m_choose_next_request__Vfuncrtn);
    virtual void __VnoInFunc_m_find_number_driver_connections(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &m_find_number_driver_connections__Vfuncrtn);
    void __VnoInFunc_m_find_sequence(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ sequence_id, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> &m_find_sequence__Vfuncrtn);
    void __VnoInFunc_m_get_seq_item_priority(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_request> seq_q_entry, IData/*31:0*/ &m_get_seq_item_priority__Vfuncrtn);
    VlCoroutine __VnoInFunc_m_lock_req(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, CData/*0:0*/ lock);
    virtual void __VnoInFunc_m_register_sequence(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, IData/*31:0*/ &m_register_sequence__Vfuncrtn);
    VlCoroutine __VnoInFunc_m_select_sequence(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_sequence_exiting(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    void __VnoInFunc_m_set_arbitration_completed(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ request_id);
    void __VnoInFunc_m_unlock_req(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    virtual void __VnoInFunc_m_unregister_sequence(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ sequence_id);
    void __VnoInFunc_m_update_lists(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_m_wait_arb_not_equal(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_m_wait_for_arbitration_completed(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ request_id);
    VlCoroutine __VnoInFunc_m_wait_for_available_sequence(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_wait_for_available_sequence____Vfork_1__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync, VlQueue<IData/*31:0*/> &is_relevant_entries, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_32> &__VDynScope_m_wait_for_available_sequence_0);
    VlCoroutine __VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlForkSync __Vfork_2__sync, VlQueue<IData/*31:0*/> is_relevant_entries, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_32> __VDynScope_m_wait_for_available_sequence_0);
    VlCoroutine __VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlForkSync __Vfork_3__sync);
    VlCoroutine __VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0____Vfork_4__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__1(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlForkSync __Vfork_3__sync);
  public:
    void __VnoInFunc_num_sequences(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &num_sequences__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_remove_sequence(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string type_name);
    void __VnoInFunc_remove_sequence_from_queues(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    virtual VlCoroutine __VnoInFunc_run_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_send_request(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> t, CData/*0:0*/ rerandomize);
    void __VnoInFunc_set_arbitration(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ val);
    void __VnoInFunc_set_sequences_queue(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<std::string> &sequencer_sequence_lib);
    virtual VlCoroutine __VnoInFunc_start_default_sequence(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_start_phase_sequence(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
  private:
    VlCoroutine __VnoInFunc_start_phase_sequence____Vfork_7__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_39> __VDynScope_start_phase_sequence_7);
  public:
    virtual void __VnoInFunc_stop_sequences(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_ungrab(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    virtual void __VnoInFunc_unlock(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    virtual void __VnoInFunc_user_priority_arbitration(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> avail_sequences, IData/*31:0*/ &user_priority_arbitration__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_wait_for_grant(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, IData/*31:0*/ item_priority, CData/*0:0*/ lock_request);
    virtual VlCoroutine __VnoInFunc_wait_for_item_done(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, IData/*31:0*/ transaction_id);
    virtual VlCoroutine __VnoInFunc_wait_for_sequences(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_wait_for_sequences____Vfork_5__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_wait_for_sequences____Vfork_5__0____Vfork_6__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h62971b97__4);
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base();
};


#endif  // guard
