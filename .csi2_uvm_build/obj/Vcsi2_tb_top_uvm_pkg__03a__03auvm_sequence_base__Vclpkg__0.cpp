// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_next_transaction_id = 1U;
    this->__PVT__m_priority = 0xffffffffU;
    this->__PVT__response_queue_depth = 8U;
    IData/*31:0*/ unnamedblk2_1__DOT__i;
    unnamedblk2_1__DOT__i = 0;
    IData/*31:0*/ unnamedblk2_2__DOT__i;
    unnamedblk2_2__DOT__i = 0;
    /*super.new*/;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vconstraintmode.resize(1U);
    unnamedblk2_1__DOT__i = 0U;
    while ((unnamedblk2_1__DOT__i < Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vconstraintmode.size())) {
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vconstraintmode.atWrite(unnamedblk2_1__DOT__i) = 1U;
        unnamedblk2_1__DOT__i = ((IData)(1U) + unnamedblk2_1__DOT__i);
    }
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.resize(1U);
    unnamedblk2_2__DOT__i = 0U;
    while ((unnamedblk2_2__DOT__i < Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.size())) {
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.atWrite(unnamedblk2_2__DOT__i) = 1U;
        unnamedblk2_2__DOT__i = ((IData)(1U) + unnamedblk2_2__DOT__i);
    }
    this->__PVT__m_sequence_state = 1U;
    this->__PVT__m_wait_for_grant_semaphore = 0U;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.write_var(this->__PVT__seq_kind, 0x0000000000000020ULL, 
                                                                        "seq_kind", 0ULL, 0ULL);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_is_item(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_item__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_is_item\n"); );
    // Body
    is_item__Vfuncrtn = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_sequence_state(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_sequence_state__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_sequence_state\n"); );
    // Body
    get_sequence_state__Vfuncrtn = this->__PVT__m_sequence_state;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_sequence_state(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ state_mask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_sequence_state\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_hc955e4dd__0;
    __Vtrigprevexpr_hc955e4dd__0 = 0;
    // Body
    VL_KEEP_THIS;
    if ((1U & (~ (0U != (this->__PVT__m_sequence_state 
                         & state_mask))))) {
        CData/*0:0*/ __VdynTrigger_hbb9908f3__0;
        __VdynTrigger_hbb9908f3__0 = 0;
        __VdynTrigger_hbb9908f3__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_hbb9908f3__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] (| (uvm_pkg::uvm_sequence_base.m_sequence_state & uvm_pkg::uvm_sequence_base.state_mask)))", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 
                                                         209);
            __Vtrigprevexpr_hc955e4dd__0 = (0U != (this->__PVT__m_sequence_state 
                                                   & state_mask));
            __VdynTrigger_hbb9908f3__0 = __Vtrigprevexpr_hc955e4dd__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hbb9908f3__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] (| (uvm_pkg::uvm_sequence_base.m_sequence_state & uvm_pkg::uvm_sequence_base.state_mask)))", 
                                                     "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 
                                                     209);
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent_sequence, IData/*31:0*/ this_priority, CData/*0:0*/ call_pre_post) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start\n"); );
    // Locals
    IData/*31:0*/ __Vtask_begin_tr__9__Vfuncout;
    __Vtask_begin_tr__9__Vfuncout = 0;
    IData/*31:0*/ __Vtask_begin_child_tr__11__Vfuncout;
    __Vtask_begin_child_tr__11__Vfuncout = 0;
    IData/*31:0*/ __Vtask_m_register_sequence__13__Vfuncout;
    __Vtask_m_register_sequence__13__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_3__get_root_sequence_name;
    std::string __VlefCall_2__get_name;
    std::string __VlefCall_1__get_full_name;
    std::string __VlefCall_0__get_full_name;
    this->__VnoInFunc_set_item_context(vlProcess, vlSymsp, parent_sequence, sequencer);
    if ((1U & (~ (((1U == this->__PVT__m_sequence_state) 
                   | (0x00000080U == this->__PVT__m_sequence_state)) 
                  | (0x00000100U == this->__PVT__m_sequence_state))))) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQ_NOT_DONE"s, 
                                           VL_CVT_PACK_STR_NN(
                                                              VL_CONCATN_NNN(
                                                                             VL_CONCATN_NNN("Sequence "s, __VlefCall_0__get_full_name), " already started"s)), 0U, ""s, 0U);
    }
    if ((VlNull{} != Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence)) {
        VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 253)->__PVT__children_array.atWrite(
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this}) = 1U;
    }
    if (VL_GTS_III(32, 0xffffffffU, this_priority)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQPRI"s, VL_SFORMATF_N_NX("Sequence %s start has illegal priority: %0d",2
                                                                                , 'S',&(__VlefCall_1__get_full_name)
                                                                                , '~',32,this_priority) , 0U, ""s, 0U);
    }
    if (VL_GTS_III(32, 0U, this_priority)) {
        if ((VlNull{} == parent_sequence)) {
            this_priority = 0x00000064U;
        } else {
            VL_NULL_CHECK(parent_sequence, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 263)->__VnoInFunc_get_priority(vlSymsp, this_priority);
        }
    }
    this->__VnoInFunc_clear_response_queue(vlSymsp);
    this->__PVT__m_priority = this_priority;
    if ((VlNull{} != Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        if ((VlNull{} == Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence)) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
            VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 273)->__VnoInFunc_begin_tr(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__get_name), ""s, ""s, 0ULL, 0U, __Vtask_begin_tr__9__Vfuncout);
            this->__PVT__m_tr_handle = __Vtask_begin_tr__9__Vfuncout;
        } else {
            this->__VnoInFunc_get_root_sequence_name(vlSymsp, __VlefCall_3__get_root_sequence_name);
            VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 275)->__VnoInFunc_begin_child_tr(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this}, VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 275)
                                                                                ->__PVT__m_tr_handle, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_3__get_root_sequence_name), ""s, ""s, 0ULL, __Vtask_begin_child_tr__11__Vfuncout);
            this->__PVT__m_tr_handle = __Vtask_begin_child_tr__11__Vfuncout;
        }
    }
    this->__VnoInFunc_set_sequence_id(vlSymsp, 0xffffffffU);
    this->__PVT__m_sqr_seq_ids.clear();
    if ((VlNull{} != Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 287)->__VnoInFunc_m_register_sequence(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this}, __Vtask_m_register_sequence__13__Vfuncout);
    }
    this->__PVT__m_sequence_state = 2U;
    {
        VlForkSync __Vfork_1__sync;
        __Vfork_1__sync.init(1U, vlProcess);
        this->__VnoInFunc_start____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_1__sync, call_pre_post, parent_sequence);
        co_await __Vfork_1__sync.join(vlProcess, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 
                                      293);
    }
    if ((VlNull{} != Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 340)->__VnoInFunc_end_tr(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this}, 0ULL, 1U);
    }
    if ((0x00000080U != this->__PVT__m_sequence_state)) {
        if ((VlNull{} != Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
            VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 347)->__VnoInFunc_m_sequence_exiting(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
        }
    }
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, vlProcess, 
                                            "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 
                                            350);
    if (((VlNull{} != Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence) 
         && VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 352)
         ->__PVT__children_array.exists(VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this}))) {
        VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 353)->__PVT__children_array.erase(
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start____Vfork_1__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync, CData/*0:0*/ &call_pre_post, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> &parent_sequence) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start____Vfork_1__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_1__sync.onKill(vlProcess);
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, this->__PVT__m_sequence_process);
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, vlProcess, 
                                            "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 
                                            298);
    this->__VnoInFunc_pre_start(vlSymsp);
    if (call_pre_post) {
        this->__PVT__m_sequence_state = 4U;
        co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                vlProcess, 
                                                "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 
                                                303);
        this->__VnoInFunc_pre_body(vlSymsp);
    }
    if ((VlNull{} != parent_sequence)) {
        VL_NULL_CHECK(parent_sequence, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 308)->__VnoInFunc_pre_do(vlSymsp, 0U);
        VL_NULL_CHECK(parent_sequence, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 309)->__VnoInFunc_mid_do(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
    }
    this->__PVT__m_sequence_state = 8U;
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, vlProcess, 
                                            "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 
                                            313);
    co_await this->__VnoInFunc_body(vlProcess, vlSymsp);
    this->__PVT__m_sequence_state = 0x00000040U;
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, vlProcess, 
                                            "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 
                                            317);
    if ((VlNull{} != parent_sequence)) {
        VL_NULL_CHECK(parent_sequence, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 320)->__VnoInFunc_post_do(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
    }
    if (call_pre_post) {
        this->__PVT__m_sequence_state = 0x00000010U;
        co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                vlProcess, 
                                                "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 
                                                325);
        this->__VnoInFunc_post_body(vlSymsp);
    }
    this->__PVT__m_sequence_state = 0x00000020U;
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, vlProcess, 
                                            "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 
                                            330);
    this->__VnoInFunc_post_start(vlSymsp);
    this->__PVT__m_sequence_state = 0x00000100U;
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, vlProcess, 
                                            "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 
                                            334);
    __Vfork_1__sync.done("/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 
                         294);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_pre_start(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_pre_start\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_pre_body(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_pre_body\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_pre_do(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ is_item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_pre_do\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_mid_do(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> this_item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_mid_do\n"); );
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_body(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_body\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "uvm_sequence_base"s, "Body definition undefined"s, 0x000000c8U, ""s, 0U);
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_post_do(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> this_item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_post_do\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_post_body(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_post_body\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_post_start(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_post_start\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_priority(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_priority\n"); );
    // Body
    this->__PVT__m_priority = value;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_priority(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_priority__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_priority\n"); );
    // Body
    get_priority__Vfuncrtn = this->__PVT__m_priority;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_is_relevant(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_relevant__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_is_relevant\n"); );
    // Body
    this->__PVT__is_rel_default = 1U;
    is_relevant__Vfuncrtn = 1U;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_relevant(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_relevant\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlAssignableEvent e;
    this->__PVT__wait_rel_default = 1U;
    if ((1U & (~ (IData)(this->__PVT__is_rel_default)))) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "RELMSM"s, "is_relevant() was implemented without defining wait_for_relevant()"s, 0U, ""s, 0U);
    }
    CData/*0:0*/ __VdynTrigger_h5dc0c625__0;
    __VdynTrigger_h5dc0c625__0 = 0;
    __VdynTrigger_h5dc0c625__0 = 0U;
    e.clearFired();
    while ((1U & (~ (IData)(__VdynTrigger_h5dc0c625__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] uvm_pkg::uvm_sequence_base.e)", 
                                                     "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 
                                                     549);
        __VdynTrigger_h5dc0c625__0 = (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish() && !vlSymsp->_vm_contextp__->finishPending()) 
                                      && e.isFired());
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h5dc0c625__0);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] uvm_pkg::uvm_sequence_base.e)", 
                                                     "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 
                                                     549);
        e.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] uvm_pkg::uvm_sequence_base.e)", 
                                                 "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 
                                                 549);
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_lock(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_lock\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    if ((VlNull{} == sequencer)) {
        sequencer = Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer;
    }
    if ((VlNull{} == sequencer)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "LOCKSEQR"s, "Null m_sequencer reference"s, 0U, ""s, 0U);
    }
    co_await VL_NULL_CHECK(sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 571)->__VnoInFunc_lock(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_grab(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_grab\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    if ((VlNull{} == sequencer)) {
        if ((VlNull{} == Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "GRAB"s, "Null m_sequencer reference"s, 0U, ""s, 0U);
        }
        co_await VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 591)->__VnoInFunc_grab(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
    } else {
        co_await VL_NULL_CHECK(sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 594)->__VnoInFunc_grab(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_unlock(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_unlock\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == sequencer)) {
        if ((VlNull{} == Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "UNLOCK"s, "Null m_sequencer reference"s, 0U, ""s, 0U);
        }
        VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 610)->__VnoInFunc_unlock(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
    } else {
        VL_NULL_CHECK(sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 612)->__VnoInFunc_unlock(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_ungrab(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_ungrab\n"); );
    // Body
    this->__VnoInFunc_unlock(vlSymsp, sequencer);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_is_blocked(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_blocked__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_is_blocked\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    is_blocked__Vfuncrtn = 0U;
    VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 638)->__VnoInFunc_is_blocked(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this}, is_blocked__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_has_lock(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &has_lock__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_has_lock\n"); );
    // Body
    has_lock__Vfuncrtn = 0U;
    VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 651)->__VnoInFunc_has_lock(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this}, has_lock__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_kill(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_kill\n"); );
    // Body
    {
        if ((VlNull{} != this->__PVT__m_sequence_process)) {
            if ((VlNull{} == Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
                this->__VnoInFunc_m_kill(vlSymsp);
                goto __Vlabel0;
            }
            VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 677)->__VnoInFunc_kill_sequence(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_do_kill(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_do_kill\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_kill(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_kill\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> unnamedblk1__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> unnamedblk1__DOT__i__Vnext;
    CData/*0:0*/ unnamedblk1__DOT__i__Vmore;
    unnamedblk1__DOT__i__Vmore = 0;
    this->__VnoInFunc_do_kill(vlSymsp);
    unnamedblk1__DOT__i__Vmore = (0U != this->__PVT__children_array.first(unnamedblk1__DOT__i__Vnext));
    while (unnamedblk1__DOT__i__Vmore) {
        unnamedblk1__DOT__i = unnamedblk1__DOT__i__Vnext;
        unnamedblk1__DOT__i__Vmore = (0U != this->__PVT__children_array.next(unnamedblk1__DOT__i__Vnext));
        VL_NULL_CHECK(unnamedblk1__DOT__i, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 696)->__VnoInFunc_kill(vlSymsp);
    }
    if ((VlNull{} != this->__PVT__m_sequence_process)) {
        VL_NULL_CHECK(this->__PVT__m_sequence_process, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 699)->__VnoInFunc_kill(vlSymsp);
        this->__PVT__m_sequence_process = VlNull{};
    }
    this->__PVT__m_sequence_state = 0x00000080U;
    if (((VlNull{} != Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence) 
         && VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 703)
         ->__PVT__children_array.exists(VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this}))) {
        VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 704)->__PVT__children_array.erase(
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_create_item(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> type_var, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> l_sequencer, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> &create_item__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_create_item\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_2;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> __VlefCall_1__create_object_by_type;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory> f_;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_factory__Vclpkg.__VnoInFunc_get(vlSymsp, f_);
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    VL_NULL_CHECK(f_, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 722)->__VnoInFunc_create_object_by_type(vlProcess, vlSymsp, type_var, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), name, __VlefCall_1__create_object_by_type);
    __VlefExpr_2 = VL_CAST_DYNAMIC(__VlefCall_1__create_object_by_type, create_item__Vfuncrtn);
    if (VL_UNLIKELY(((! __VlefExpr_2)))) {
        VL_WRITEF_NX("[%0t] %%Error: uvm_sequence_base.svh:722: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_sequence_base.create_item", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 722, "");
    }
    VL_NULL_CHECK(create_item__Vfuncrtn, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 724)->__VnoInFunc_set_item_context(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this}, l_sequencer);
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start_item(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> item, IData/*31:0*/ set_priority, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start_item\n"); );
    // Locals
    IData/*31:0*/ __Vtask_begin_child_tr__59__Vfuncout;
    __Vtask_begin_child_tr__59__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_4__get_root_sequence_name;
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefExpr_1;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> seq;
    {
        if ((VlNull{} == item)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "NULLITM"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("attempting to start a null item from sequence '"s, __VlefCall_0__get_full_name), "'"s)), 0U, ""s, 0U);
            goto __Vlabel0;
        }
        __VlefExpr_1 = VL_CAST_DYNAMIC(item, seq);
        if (__VlefExpr_1) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQNOTITM"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("attempting to start a sequence using start_item() from sequence '"s, __VlefCall_2__get_full_name), "'. Use seq.start() instead."s)), 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if ((VlNull{} == sequencer)) {
            VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 757)->__VnoInFunc_get_sequencer(vlSymsp, sequencer);
        }
        if ((VlNull{} == sequencer)) {
            this->__VnoInFunc_get_sequencer(vlSymsp, sequencer);
        }
        if ((VlNull{} == sequencer)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQ"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN("neither the item's sequencer nor dedicated sequencer has been supplied to start item in "s, __VlefCall_3__get_full_name)), 0U, ""s, 0U);
            goto __Vlabel0;
        }
        VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 767)->__VnoInFunc_set_item_context(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this}, sequencer);
        if (VL_GTS_III(32, 0U, set_priority)) {
            this->__VnoInFunc_get_priority(vlSymsp, set_priority);
        }
        co_await VL_NULL_CHECK(sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 772)->__VnoInFunc_wait_for_grant(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this}, set_priority, 0U);
        VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 775)->__VnoInFunc_get_root_sequence_name(vlSymsp, __VlefCall_4__get_root_sequence_name);
        VL_NULL_CHECK(sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 775)->__VnoInFunc_begin_child_tr(vlProcess, vlSymsp, item, this->__PVT__m_tr_handle, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_4__get_root_sequence_name), ""s, ""s, 0ULL, __Vtask_begin_child_tr__59__Vfuncout);
        this->__VnoInFunc_pre_do(vlSymsp, 1U);
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_finish_item(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> item, IData/*31:0*/ set_priority) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_finish_item\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer;
    VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 796)->__VnoInFunc_get_sequencer(vlSymsp, sequencer);
    if ((VlNull{} == sequencer)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "STRITM"s, "sequence_item has null sequencer"s, 0U, ""s, 0U);
    }
    this->__VnoInFunc_mid_do(vlSymsp, item);
    VL_NULL_CHECK(sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 803)->__VnoInFunc_send_request(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this}, item, 0U);
    co_await VL_NULL_CHECK(sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 804)->__VnoInFunc_wait_for_item_done(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this}, 0xffffffffU);
    VL_NULL_CHECK(sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 806)->__VnoInFunc_end_tr(vlProcess, vlSymsp, item, 0ULL, 1U);
    this->__VnoInFunc_post_do(vlSymsp, item);
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_grant(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ item_priority, CData/*0:0*/ lock_request) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_grant\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    if ((VlNull{} == Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "WAITGRANT"s, "Null m_sequencer reference"s, 0U, ""s, 0U);
    }
    co_await VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 830)->__VnoInFunc_wait_for_grant(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this}, item_priority, (IData)(lock_request));
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_send_request(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> request, CData/*0:0*/ rerandomize) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_send_request\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SENDREQ"s, "Null m_sequencer reference"s, 0U, ""s, 0U);
    }
    VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 845)->__VnoInFunc_send_request(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this}, request, rerandomize);
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_item_done(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ transaction_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_item_done\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    if ((VlNull{} == Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "WAITITEMDONE"s, "Null m_sequencer reference"s, 0U, ""s, 0U);
    }
    co_await VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 866)->__VnoInFunc_wait_for_item_done(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this}, transaction_id);
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_use_response_handler(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ enable) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_use_response_handler\n"); );
    // Body
    this->__PVT__m_use_response_handler = enable;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_use_response_handler(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &get_use_response_handler__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_use_response_handler\n"); );
    // Body
    get_use_response_handler__Vfuncrtn = this->__PVT__m_use_response_handler;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_response_handler(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> response) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_response_handler\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_response_queue_error_report_disabled(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_response_queue_error_report_disabled\n"); );
    // Body
    this->__PVT__response_queue_error_report_disabled 
        = value;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_response_queue_error_report_disabled(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &get_response_queue_error_report_disabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_response_queue_error_report_disabled\n"); );
    // Body
    get_response_queue_error_report_disabled__Vfuncrtn 
        = this->__PVT__response_queue_error_report_disabled;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_response_queue_depth(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_response_queue_depth\n"); );
    // Body
    this->__PVT__response_queue_depth = value;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_response_queue_depth(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_response_queue_depth__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_response_queue_depth\n"); );
    // Body
    get_response_queue_depth__Vfuncrtn = this->__PVT__response_queue_depth;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_clear_response_queue(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_clear_response_queue\n"); );
    // Body
    this->__PVT__response_queue.clear();
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_put_base_response(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> response) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_put_base_response\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_full_name;
    {
        if (((0xffffffffU == this->__PVT__response_queue_depth) 
             | VL_LTS_III(32, this->__PVT__response_queue.size(), this->__PVT__response_queue_depth))) {
            this->__PVT__response_queue.push_back(response);
            goto __Vlabel0;
        }
        if ((1U & (~ (IData)(this->__PVT__response_queue_error_report_disabled)))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, 
                                               VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), "Response queue overflow, response was dropped"s, 0U, ""s, 0U);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_put_response(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> response_item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_put_response\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_put_base_response(vlProcess, vlSymsp, response_item);
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_base_response(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> &response, IData/*31:0*/ transaction_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_base_response\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h8696e693__0;
    __Vtrigprevexpr_h8696e693__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h97ae3b2a__0;
    __Vtrigprevexpr_h97ae3b2a__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__get_transaction_id;
    IData/*31:0*/ queue_size;
    IData/*31:0*/ i;
    {
        queue_size = 0U;
        i = 0U;
        if ((0U == this->__PVT__response_queue.size())) {
            if ((0U == this->__PVT__response_queue.size())) {
                CData/*0:0*/ __VdynTrigger_hadd16112__0;
                __VdynTrigger_hadd16112__0 = 0;
                __VdynTrigger_hadd16112__0 = 0U;
                while ((1U & (~ (IData)(__VdynTrigger_hadd16112__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@([true] (32'sh0 != uvm_pkg::uvm_sequence_base.response_queue.size()))", 
                                                                 "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 
                                                                 991);
                    __Vtrigprevexpr_h97ae3b2a__0 = 
                        (0U != this->__PVT__response_queue.size());
                    __VdynTrigger_hadd16112__0 = __Vtrigprevexpr_h97ae3b2a__0;
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hadd16112__0);
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@([true] (32'sh0 != uvm_pkg::uvm_sequence_base.response_queue.size()))", 
                                                             "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 
                                                             991);
            }
        }
        if ((0xffffffffU == transaction_id)) {
            response = this->__PVT__response_queue.pop_front();
            goto __Vlabel0;
        }
        while (true) {
            queue_size = this->__PVT__response_queue.size();
            i = 0U;
            while (VL_LTS_III(32, i, queue_size)) {
                VL_NULL_CHECK(this->__PVT__response_queue.at(i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 1001)->__VnoInFunc_get_transaction_id(vlSymsp, __VlefCall_0__get_transaction_id);
                if ((__VlefCall_0__get_transaction_id 
                     == transaction_id)) {
                    response = this->__PVT__response_queue.at(i);
                    this->__PVT__response_queue.erase(i);
                    goto __Vlabel0;
                }
                i = ((IData)(1U) + i);
            }
            if ((this->__PVT__response_queue.size() 
                 == queue_size)) {
                CData/*0:0*/ __VdynTrigger_h7cd80725__0;
                __VdynTrigger_h7cd80725__0 = 0;
                __VdynTrigger_h7cd80725__0 = 0U;
                while ((1U & (~ (IData)(__VdynTrigger_h7cd80725__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@([true] (uvm_pkg::uvm_sequence_base.response_queue.size() != uvm_pkg::uvm_sequence_base.queue_size))", 
                                                                 "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 
                                                                 1008);
                    __Vtrigprevexpr_h8696e693__0 = 
                        (this->__PVT__response_queue.size() 
                         != queue_size);
                    __VdynTrigger_h7cd80725__0 = __Vtrigprevexpr_h8696e693__0;
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h7cd80725__0);
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@([true] (uvm_pkg::uvm_sequence_base.response_queue.size() != uvm_pkg::uvm_sequence_base.queue_size))", 
                                                             "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 
                                                             1008);
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_num_sequences(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &num_sequences__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_num_sequences\n"); );
    // Body
    {
        num_sequences__Vfuncrtn = 0U;
        if ((VlNull{} == Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
            num_sequences__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 1040)->__VnoInFunc_num_sequences(vlSymsp, num_sequences__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_seq_kind(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string type_name, IData/*31:0*/ &get_seq_kind__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_seq_kind\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_type_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    get_seq_kind__Vfuncrtn = 0U;
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "UVM_DEPRECATED"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, VL_SFORMATF_N_NX("%m deprecated.",1, 'M',vlSymsp->name(),"uvm_pkg.uvm_sequence_base.get_seq_kind") , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh"s, 0x0000041cU);
    }
    if ((VlNull{} != Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 1054)->__VnoInFunc_get_seq_kind(vlProcess, vlSymsp, type_name, get_seq_kind__Vfuncrtn);
    } else {
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "NULLSQ"s, VL_SFORMATF_N_NX("%0s sequencer is null.",1
                                                                                , 'S',&(__VlefCall_1__get_type_name)) , 0U, ""s, 0U);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_sequence(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ req_kind, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> &get_sequence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_sequence\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_3;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> __VlefCall_2__create_object_by_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> m_seq;
    std::string m_seq_type;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory> factory;
    m_seq_type = ""s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_factory__Vclpkg.__VnoInFunc_get(vlSymsp, factory);
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "UVM_DEPRECATED"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, VL_SFORMATF_N_NX("%m deprecated.",1, 'M',vlSymsp->name(),"uvm_pkg.uvm_sequence_base.get_sequence") , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh"s, 0x0000042eU);
    }
    if ((req_kind >= VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 1071)
         ->__PVT__sequences.size())) {
        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SEQRNG"s, VL_SFORMATF_N_NX("Kind arg '%0d' out of range. Need 0-%0d",2
                                                                                , '#',32,req_kind
                                                                                , '~',32,
                                                                                (VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 1074)
                                                                                ->__PVT__sequences.size() 
                                                                                - (IData)(1U))) , 0U, ""s, 0U);
    }
    m_seq_type = VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 1076)
        ->__PVT__sequences.at(req_kind);
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
    VL_NULL_CHECK(factory, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 1077)->__VnoInFunc_create_object_by_name(vlProcess, vlSymsp, m_seq_type, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), m_seq_type, __VlefCall_2__create_object_by_name);
    __VlefExpr_3 = VL_CAST_DYNAMIC(__VlefCall_2__create_object_by_name, m_seq);
    if ((! __VlefExpr_3)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "FCTSEQ"s, VL_SFORMATF_N_NX("Factory can not produce a sequence of type %0s.",1
                                                                                , 'S',&(m_seq_type)) , 0U, ""s, 0U);
    }
    VL_NULL_CHECK(m_seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 1082)->__VnoInFunc_set_use_sequence_info(vlSymsp, 1U);
    get_sequence__Vfuncrtn = m_seq;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_do_sequence_kind(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ req_kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_do_sequence_kind\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_6__get_priority;
    IData/*31:0*/ __VlefCond_5;
    IData/*31:0*/ __VlefCall_4__randomize;
    IData/*31:0*/ __VlefExpr_3;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> __VlefCall_2__create_object_by_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    std::string m_seq_type;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> m_seq;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory> factory;
    m_seq_type = ""s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_factory__Vclpkg.__VnoInFunc_get(vlSymsp, factory);
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "UVM_DEPRECATED"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, VL_SFORMATF_N_NX("%m deprecated.",1, 'M',vlSymsp->name(),"uvm_pkg.uvm_sequence_base.do_sequence_kind") , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh"s, 0x00000448U);
    }
    m_seq_type = VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 1097)
        ->__PVT__sequences.at(req_kind);
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
    VL_NULL_CHECK(factory, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 1098)->__VnoInFunc_create_object_by_name(vlProcess, vlSymsp, m_seq_type, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), m_seq_type, __VlefCall_2__create_object_by_name);
    __VlefExpr_3 = VL_CAST_DYNAMIC(__VlefCall_2__create_object_by_name, m_seq);
    if ((! __VlefExpr_3)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "FCTSEQ"s, VL_SFORMATF_N_NX("Factory can not produce a sequence of type %0s.",1
                                                                                , 'S',&(m_seq_type)) , 0U, ""s, 0U);
    }
    VL_NULL_CHECK(m_seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 1103)->__VnoInFunc_set_item_context(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this}, Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer);
    if ((VlNull{} != m_seq)) {
        VL_NULL_CHECK(m_seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 1105)->__VnoInFunc_randomize(vlSymsp, __VlefCall_4__randomize);
        __VlefCond_5 = __VlefCall_4__randomize;
    } else {
        __VlefCond_5 = 0U;
    }
    if ((1U & (~ (0U != __VlefCond_5)))) {
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "RNDFLD"s, "Randomization failed in do_sequence_kind()"s, 0x000000c8U, ""s, 0U);
    }
    this->__VnoInFunc_get_priority(vlSymsp, __VlefCall_6__get_priority);
    co_await VL_NULL_CHECK(m_seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 1108)->__VnoInFunc_start(vlProcess, vlSymsp, Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this}, __VlefCall_6__get_priority, 0U);
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_sequence_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string seq_name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> &get_sequence_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_sequence_by_name\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_3;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> __VlefCall_2__create_object_by_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> m_seq;
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "UVM_DEPRECATED"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, VL_SFORMATF_N_NX("%m deprecated.",1, 'M',vlSymsp->name(),"uvm_pkg.uvm_sequence_base.get_sequence_by_name") , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh"s, 0x0000045eU);
    }
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__factory, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 1119)->__VnoInFunc_create_object_by_name(vlProcess, vlSymsp, seq_name, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), seq_name, __VlefCall_2__create_object_by_name);
    __VlefExpr_3 = VL_CAST_DYNAMIC(__VlefCall_2__create_object_by_name, m_seq);
    if ((! __VlefExpr_3)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "FCTSEQ"s, VL_SFORMATF_N_NX("Factory can not produce a sequence of type %0s.",1
                                                                                , 'S',&(seq_name)) , 0U, ""s, 0U);
    }
    VL_NULL_CHECK(m_seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 1123)->__VnoInFunc_set_use_sequence_info(vlSymsp, 1U);
    get_sequence_by_name__Vfuncrtn = m_seq;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_create_and_start_sequence_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string seq_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_create_and_start_sequence_by_name\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_1__get_priority;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> m_seq;
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "UVM_DEPRECATED"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, VL_SFORMATF_N_NX("%m deprecated.",1, 'M',vlSymsp->name(),"uvm_pkg.uvm_sequence_base.create_and_start_sequence_by_name") , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh"s, 0x0000046eU);
    }
    this->__VnoInFunc_get_sequence_by_name(vlSymsp, seq_name, m_seq);
    this->__VnoInFunc_get_priority(vlSymsp, __VlefCall_1__get_priority);
    co_await VL_NULL_CHECK(m_seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 1136)->__VnoInFunc_start(vlProcess, vlSymsp, Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base>{this}, __VlefCall_1__get_priority, 0U);
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_get_sqr_sequence_id(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ sequencer_id, CData/*0:0*/ update_sequence_id, IData/*31:0*/ &m_get_sqr_sequence_id__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_get_sqr_sequence_id\n"); );
    // Body
    {
        m_get_sqr_sequence_id__Vfuncrtn = 0U;
        if (this->__PVT__m_sqr_seq_ids.exists(sequencer_id)) {
            if (update_sequence_id) {
                this->__VnoInFunc_set_sequence_id(vlSymsp, this->__PVT__m_sqr_seq_ids
                                                  .at(sequencer_id));
            }
            m_get_sqr_sequence_id__Vfuncrtn = this->__PVT__m_sqr_seq_ids
                .at(sequencer_id);
            goto __Vlabel0;
        }
        if (update_sequence_id) {
            this->__VnoInFunc_set_sequence_id(vlSymsp, 0xffffffffU);
        }
        m_get_sqr_sequence_id__Vfuncrtn = 0xffffffffU;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_set_sqr_sequence_id(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ sequencer_id, IData/*31:0*/ sequence_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_set_sqr_sequence_id\n"); );
    // Body
    this->__PVT__m_sqr_seq_ids.atWrite(sequencer_id) 
        = sequence_id;
    this->__VnoInFunc_set_sequence_id(vlSymsp, sequence_id);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_pick_sequence_setup_constraint(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_pick_sequence_setup_constraint\n"); );
    // Locals
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    std::string __Vtemp_8;
    // Body
    IData/*31:0*/ __VlefCall_1__num_sequences;
    IData/*31:0*/ __VlefCall_0__num_sequences;
    if (Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vconstraintmode.at(0U)) {
        this->__VnoInFunc_num_sequences(vlSymsp, __VlefCall_0__num_sequences);
        VL_SFORMAT_NX(__Vtemp_2,"#b%b",1, '#',1,VL_GTES_III(32, 2U, __VlefCall_0__num_sequences));
        __Vtemp_1 = (Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.at(0U)
                      ? "seq_kind"s : VL_SFORMATF_N_NX("#x%x",1
                                                       , '#',32,this->__PVT__seq_kind) );
        VL_SFORMAT_NX(__Vtemp_3,"(__Vbv (bvuge %s #x00000002))",1
                      , 'S',&(__Vtemp_1));
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard(VL_SFORMATF_N_NX("(bvor %s %s)",2
                                                                                , 'S',&(__Vtemp_2)
                                                                                , 'S',&(__Vtemp_3)) , "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 0x00000405U, 
                                                                       "       (num_sequences() <= 2) || (seq_kind >= 2);");
        this->__VnoInFunc_num_sequences(vlSymsp, __VlefCall_1__num_sequences);
        if (Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.at(0U)) {
            __Vtemp_4 = "seq_kind"s;
            __Vtemp_6 = "seq_kind"s;
        } else {
            __Vtemp_4 = VL_SFORMATF_N_NX("#x%x",1, '#',32,this->__PVT__seq_kind) ;
            __Vtemp_6 = VL_SFORMATF_N_NX("#x%x",1, '#',32,this->__PVT__seq_kind) ;
        }
        VL_SFORMAT_NX(__Vtemp_5,"#x%x",1, '#',32,__VlefCall_1__num_sequences);
        VL_SFORMAT_NX(__Vtemp_7,"(__Vbv (bvult %s %s))",2
                      , 'S',&(__Vtemp_4), 'S',&(__Vtemp_5));
        VL_SFORMAT_NX(__Vtemp_8,"(__Vbv (= %s #x00000000))",1
                      , 'S',&(__Vtemp_6));
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard(VL_SFORMATF_N_NX("(bvor %s %s)",2
                                                                                , 'S',&(__Vtemp_7)
                                                                                , 'S',&(__Vtemp_8)) , "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_base.svh", 0x00000406U, 
                                                                       "       (seq_kind <  num_sequences()) || (seq_kind == 0); }");
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_pick_sequence_setup_constraint(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_sequence_state = 0;
    __PVT__m_tr_handle = 0;
    __PVT__m_wait_for_grant_semaphore = 0;
    __PVT__m_sqr_seq_ids.atDefault() = 0;
    __PVT__children_array.atDefault() = 0;
    __PVT__response_queue_error_report_disabled = 0;
    __PVT__do_not_randomize = 0;
    __PVT__m_use_response_handler = 0;
    __PVT__is_rel_default = 0;
    __PVT__wait_rel_default = 0;
    __PVT__seq_kind = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base::~\n"); );
}
