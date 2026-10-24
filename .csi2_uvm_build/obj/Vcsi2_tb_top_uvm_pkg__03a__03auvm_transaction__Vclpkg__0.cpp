// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> initiator) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__events = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz12, vlProcess, vlSymsp, ""s);
    this->__PVT__m_transaction_id = 0xffffffffU;
    this->__PVT__begin_time = 0xffffffffffffffffULL;
    this->__PVT__end_time = 0xffffffffffffffffULL;
    this->__PVT__accept_time = 0xffffffffffffffffULL;
    this->__PVT__stream_handle = 0U;
    this->__PVT__tr_handle = 0U;
    /*super.new*/;
    this->__PVT__initiator = initiator;
    this->__PVT__m_transaction_id = 0xffffffffU;
    VL_NULL_CHECK(this->__PVT__events, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 493)->__VnoInFunc_get(vlProcess, vlSymsp, "begin"s, this->__PVT__begin_event);
    VL_NULL_CHECK(this->__PVT__events, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 494)->__VnoInFunc_get(vlProcess, vlSymsp, "end"s, this->__PVT__end_event);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_set_transaction_id(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_set_transaction_id\n"); );
    // Body
    this->__PVT__m_transaction_id = id;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_transaction_id(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_transaction_id__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_transaction_id\n"); );
    // Body
    get_transaction_id__Vfuncrtn = this->__PVT__m_transaction_id;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_set_initiator(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> initiator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_set_initiator\n"); );
    // Body
    this->__PVT__initiator = initiator;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_initiator(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> &get_initiator__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_initiator\n"); );
    // Body
    get_initiator__Vfuncrtn = this->__PVT__initiator;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_event_pool(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz12> &get_event_pool__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_event_pool\n"); );
    // Body
    get_event_pool__Vfuncrtn = this->__PVT__events;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_is_active(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_active__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_is_active\n"); );
    // Body
    is_active__Vfuncrtn = (0U != this->__PVT__tr_handle);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_begin_time(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ &get_begin_time__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_begin_time\n"); );
    // Body
    get_begin_time__Vfuncrtn = this->__PVT__begin_time;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_end_time(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ &get_end_time__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_end_time\n"); );
    // Body
    get_end_time__Vfuncrtn = this->__PVT__end_time;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_accept_time(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ &get_accept_time__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_accept_time\n"); );
    // Body
    get_accept_time__Vfuncrtn = this->__PVT__accept_time;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_accept_tr(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_accept_tr\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_begin_tr(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_begin_tr\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_end_tr(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_end_tr\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_type_name;
    IData/*31:0*/ __VlefCall_0__get_inst_id;
    std::string str;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> tmp_initiator;
    str = ""s;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    if ((0xffffffffffffffffULL != this->__PVT__accept_time)) {
        VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 594)->__VnoInFunc_print_time(vlSymsp, "accept_time"s, this->__PVT__accept_time, 0x2eU);
    }
    if ((0xffffffffffffffffULL != this->__PVT__begin_time)) {
        VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 596)->__VnoInFunc_print_time(vlSymsp, "begin_time"s, this->__PVT__begin_time, 0x2eU);
    }
    if ((0xffffffffffffffffULL != this->__PVT__end_time)) {
        VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 598)->__VnoInFunc_print_time(vlSymsp, "end_time"s, this->__PVT__end_time, 0x2eU);
    }
    if ((VlNull{} != this->__PVT__initiator)) {
        tmp_initiator = this->__PVT__initiator;
        VL_NULL_CHECK(tmp_initiator, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 601)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_0__get_inst_id);
        VL_SFORMAT_NX(str,"@%0d",1, '~',32,__VlefCall_0__get_inst_id);
        VL_NULL_CHECK(this->__PVT__initiator, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 602)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
        VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 602)->__VnoInFunc_print_generic(vlSymsp, "initiator"s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_type_name), 0xffffffffU, str, 0x2eU);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_copy\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction> txn;
    {
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        if ((VlNull{} == rhs)) {
            goto __Vlabel0;
        }
        __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, txn);
        if ((! __VlefExpr_0)) {
            goto __Vlabel0;
        }
        this->__PVT__accept_time = VL_NULL_CHECK(txn, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 612)
            ->__PVT__accept_time;
        this->__PVT__begin_time = VL_NULL_CHECK(txn, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 613)
            ->__PVT__begin_time;
        this->__PVT__end_time = VL_NULL_CHECK(txn, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 614)
            ->__PVT__end_time;
        this->__PVT__initiator = VL_NULL_CHECK(txn, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 615)
            ->__PVT__initiator;
        this->__PVT__stream_handle = VL_NULL_CHECK(txn, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 616)
            ->__PVT__stream_handle;
        this->__PVT__tr_handle = VL_NULL_CHECK(txn, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 617)
            ->__PVT__tr_handle;
        this->__PVT__record_enable = VL_NULL_CHECK(txn, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 618)
            ->__PVT__record_enable;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_record(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_record\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vtemp_1;
    IData/*31:0*/ __Vilp1;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ unnamedblk71__DOT__p;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_record(vlProcess, vlSymsp, recorder);
    if ((0xffffffffffffffffULL != this->__PVT__accept_time)) {
        __Vtemp_1[0U] = (IData)(this->__PVT__accept_time);
        __Vtemp_1[1U] = (IData)((this->__PVT__accept_time 
                                 >> 0x00000020U));
        __Vilp1 = 2U;
        while ((__Vilp1 <= 0x0000007fU)) {
            __Vtemp_1[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 628)->__VnoInFunc_record_field(vlSymsp, "accept_time"s, __Vtemp_1, 0x00000040U, 0x09000000U);
    }
    if ((VlNull{} != this->__PVT__initiator)) {
        unnamedblk71__DOT__p = VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 630)
            ->__PVT__policy;
        VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 631)->__PVT__policy = 0x00001000U;
        VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 632)->__VnoInFunc_record_object(vlProcess, vlSymsp, "initiator"s, this->__PVT__initiator);
        VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 633)->__PVT__policy 
            = unnamedblk71__DOT__p;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_tr_handle(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_tr_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_tr_handle\n"); );
    // Body
    get_tr_handle__Vfuncrtn = this->__PVT__tr_handle;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_disable_recording(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_disable_recording\n"); );
    // Body
    this->__PVT__record_enable = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_enable_recording(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string stream, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_enable_recording\n"); );
    // Body
    std::string scope;
    IData/*31:0*/ lastdot;
    scope = ""s;
    lastdot = (VL_LEN_IN(stream) - (IData)(1U));
    {
        while (VL_LTS_III(32, 0U, lastdot)) {
            if ((0x2eU == VL_GETC_N(stream,lastdot))) {
                goto __Vlabel0;
            }
            lastdot = (lastdot - (IData)(1U));
        }
        __Vlabel0: ;
    }
    if ((0U != lastdot)) {
        scope = VL_SUBSTR_N(stream,0U,(lastdot - (IData)(1U)));
        stream = VL_SUBSTR_N(stream,((IData)(1U) + lastdot),
                             (VL_LEN_IN(stream) - (IData)(1U)));
    }
    if ((VlNull{} == recorder)) {
        recorder = vlSymsp->TOP__uvm_pkg.__PVT__uvm_default_recorder;
    }
    this->__PVT__m_recorder = recorder;
    VL_NULL_CHECK(this->__PVT__m_recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 671)->__VnoInFunc_create_stream(vlSymsp, stream, "TVM"s, scope, this->__PVT__stream_handle);
    this->__PVT__record_enable = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_is_recording_enabled(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_recording_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_is_recording_enabled\n"); );
    // Body
    is_recording_enabled__Vfuncrtn = this->__PVT__record_enable;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_accept_tr(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ accept_time) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_accept_tr\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_event> e;
    if ((0ULL != accept_time)) {
        this->__PVT__accept_time = accept_time;
    } else {
        this->__PVT__accept_time = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1000));
    }
    this->__VnoInFunc_do_accept_tr(vlSymsp);
    VL_NULL_CHECK(this->__PVT__events, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 696)->__VnoInFunc_get(vlProcess, vlSymsp, "accept"s, e);
    if ((VlNull{} != e)) {
        VL_NULL_CHECK(e, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 699)->__VnoInFunc_trigger(vlSymsp, VlNull{});
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_begin_tr(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ begin_time, IData/*31:0*/ &begin_tr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_begin_tr\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    begin_tr__Vfuncrtn = 0;
    this->__VnoInFunc_m_begin_tr(vlProcess, vlSymsp, begin_time, 0U, 0U, begin_tr__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_begin_child_tr(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ begin_time, IData/*31:0*/ parent_handle, IData/*31:0*/ &begin_child_tr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_begin_child_tr\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    begin_child_tr__Vfuncrtn = 0;
    this->__VnoInFunc_m_begin_tr(vlProcess, vlSymsp, begin_time, parent_handle, 1U, begin_child_tr__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_m_begin_tr(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ begin_time, IData/*31:0*/ parent_handle, CData/*0:0*/ has_parent, IData/*31:0*/ &m_begin_tr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_m_begin_tr\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_3__check_handle_kind;
    std::string __VlefCall_2__get_type_name;
    std::string __VlefCall_1__get_type_name;
    IData/*31:0*/ __VlefCall_0__check_handle_kind;
    m_begin_tr__Vfuncrtn = 0;
    if ((0ULL != begin_time)) {
        this->__PVT__begin_time = begin_time;
    } else {
        this->__PVT__begin_time = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1000));
    }
    if (this->__PVT__record_enable) {
        VL_NULL_CHECK(this->__PVT__m_recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 733)->__VnoInFunc_check_handle_kind(vlSymsp, "Transaction"s, this->__PVT__tr_handle, __VlefCall_0__check_handle_kind);
        if ((1U == __VlefCall_0__check_handle_kind)) {
            this->__VnoInFunc_end_tr(vlProcess, vlSymsp, 0ULL, 1U);
        }
        if (has_parent) {
            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
            VL_NULL_CHECK(this->__PVT__m_recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 740)->__VnoInFunc_begin_tr(vlSymsp, "Begin_End, Link"s, this->__PVT__stream_handle, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_type_name), ""s, ""s, this->__PVT__begin_time, this->__PVT__tr_handle);
            if ((0U != parent_handle)) {
                VL_NULL_CHECK(this->__PVT__m_recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 743)->__VnoInFunc_link_tr(vlSymsp, parent_handle, this->__PVT__tr_handle, "child"s);
            }
        } else {
            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
            VL_NULL_CHECK(this->__PVT__m_recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 737)->__VnoInFunc_begin_tr(vlSymsp, "Begin_No_Parent, Link"s, this->__PVT__stream_handle, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__get_type_name), ""s, ""s, this->__PVT__begin_time, this->__PVT__tr_handle);
        }
        VL_NULL_CHECK(this->__PVT__m_recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 746)->__PVT__tr_handle 
            = this->__PVT__tr_handle;
        VL_NULL_CHECK(this->__PVT__m_recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 748)->__VnoInFunc_check_handle_kind(vlSymsp, "Transaction"s, this->__PVT__tr_handle, __VlefCall_3__check_handle_kind);
        if (VL_UNLIKELY(((1U != __VlefCall_3__check_handle_kind)))) {
            VL_WRITEF_NX("tr handle %0d not valid!\n",1
                         , '~',32,this->__PVT__tr_handle);
        }
    } else {
        this->__PVT__tr_handle = 0U;
    }
    this->__VnoInFunc_do_begin_tr(vlSymsp);
    VL_NULL_CHECK(this->__PVT__begin_event, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 757)->__VnoInFunc_trigger(vlSymsp, VlNull{});
    m_begin_tr__Vfuncrtn = this->__PVT__tr_handle;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_end_tr(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ end_time, CData/*0:0*/ free_handle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_end_tr\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefLogAnd_2;
    IData/*31:0*/ __VlefCall_1__check_handle_kind;
    CData/*0:0*/ __VlefCall_0__is_active;
    if ((0ULL != end_time)) {
        this->__PVT__end_time = end_time;
    } else {
        this->__PVT__end_time = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1000));
    }
    this->__VnoInFunc_do_end_tr(vlSymsp);
    this->__VnoInFunc_is_active(vlSymsp, __VlefCall_0__is_active);
    if (__VlefCall_0__is_active) {
        VL_NULL_CHECK(this->__PVT__m_recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 776)->__PVT__tr_handle 
            = this->__PVT__tr_handle;
        this->__VnoInFunc_record(vlProcess, vlSymsp, this->__PVT__m_recorder);
        VL_NULL_CHECK(this->__PVT__m_recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 779)->__VnoInFunc_end_tr(vlSymsp, this->__PVT__tr_handle, this->__PVT__end_time);
        __VlefLogAnd_2 = free_handle;
        if (__VlefLogAnd_2) {
            VL_NULL_CHECK(this->__PVT__m_recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 781)->__VnoInFunc_check_handle_kind(vlSymsp, "Transaction"s, this->__PVT__tr_handle, __VlefCall_1__check_handle_kind);
            __VlefLogAnd_2 = (1U == __VlefCall_1__check_handle_kind);
        }
        if (__VlefLogAnd_2) {
            VL_NULL_CHECK(this->__PVT__m_recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 784)->__VnoInFunc_free_tr(vlSymsp, this->__PVT__tr_handle);
        }
        this->__PVT__tr_handle = 0U;
    }
    VL_NULL_CHECK(this->__PVT__end_event, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_transaction.svh", 789)->__VnoInFunc_trigger(vlSymsp, VlNull{});
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__record_enable = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::~\n"); );
}
