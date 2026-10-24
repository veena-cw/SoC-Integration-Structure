// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ threshold) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_event> e;
    /*super.new*/;
    e = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_event, vlProcess, vlSymsp, 
               VL_CVT_PACK_STR_NN(VL_CONCATN_NNN("barrier_"s, name)));
    this->__PVT__threshold = threshold;
    this->__PVT__m_event = e;
    this->__PVT__num_waiters = 0U;
    this->__PVT__auto_reset = 1U;
    this->__PVT__at_threshold = 0U;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_wait_for(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_wait_for\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    {
        if (this->__PVT__at_threshold) {
            goto __Vlabel0;
        }
        this->__PVT__num_waiters = ((IData)(1U) + this->__PVT__num_waiters);
        if (VL_GTES_III(32, this->__PVT__num_waiters, this->__PVT__threshold)) {
            if ((1U & (~ (IData)(this->__PVT__auto_reset)))) {
                this->__PVT__at_threshold = 1U;
            }
            co_await this->__VnoInFunc_m_trigger(vlSymsp);
            goto __Vlabel0;
        }
        co_await VL_NULL_CHECK(this->__PVT__m_event, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_barrier.svh", 79)->__VnoInFunc_wait_trigger(vlProcess, vlSymsp);
        __Vlabel0: ;
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ wakeup) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_reset\n"); );
    // Body
    this->__PVT__at_threshold = 0U;
    if ((0U != this->__PVT__num_waiters)) {
        if (wakeup) {
            VL_NULL_CHECK(this->__PVT__m_event, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_barrier.svh", 98)->__VnoInFunc_trigger(vlSymsp, VlNull{});
        } else {
            VL_NULL_CHECK(this->__PVT__m_event, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_barrier.svh", 100)->__VnoInFunc_reset(vlSymsp, 0U);
        }
    }
    this->__PVT__num_waiters = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_set_auto_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_set_auto_reset\n"); );
    // Body
    this->__PVT__at_threshold = 0U;
    this->__PVT__auto_reset = value;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_set_threshold(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ threshold) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_set_threshold\n"); );
    // Body
    this->__PVT__threshold = threshold;
    if (VL_LTES_III(32, threshold, this->__PVT__num_waiters)) {
        this->__VnoInFunc_reset(vlSymsp, 1U);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_get_threshold(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_threshold__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_get_threshold\n"); );
    // Body
    get_threshold__Vfuncrtn = this->__PVT__threshold;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_get_num_waiters(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_waiters__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_get_num_waiters\n"); );
    // Body
    get_num_waiters__Vfuncrtn = this->__PVT__num_waiters;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_cancel(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_cancel\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_event, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_barrier.svh", 167)->__VnoInFunc_cancel(vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_event, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_barrier.svh", 168)->__VnoInFunc_get_num_waiters(vlSymsp, this->__PVT__num_waiters);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier> v;
    v = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier, vlProcess, vlSymsp, name, 0U);
    create__Vfuncrtn = v;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_barrier"s;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_m_trigger(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_m_trigger\n"); );
    // Body
    VL_KEEP_THIS;
    VL_NULL_CHECK(this->__PVT__m_event, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_barrier.svh", 185)->__VnoInFunc_trigger(vlSymsp, VlNull{});
    this->__PVT__num_waiters = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, nullptr, 
                                            "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_barrier.svh", 
                                            187);
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_do_print\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vtemp_1;
    VlWide<128>/*4095:0*/ __Vtemp_2;
    VlWide<128>/*4095:0*/ __Vtemp_3;
    VlWide<128>/*4095:0*/ __Vtemp_4;
    IData/*31:0*/ __Vilp1;
    IData/*31:0*/ __Vilp2;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_EXTENDS_WI(4096,32, __Vtemp_1, this->__PVT__threshold);
    VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_barrier.svh", 191)->__VnoInFunc_print_int(vlSymsp, "threshold"s, __Vtemp_1, 0x00000020U, 0x02000000U, 0x2eU, "int"s);
    VL_EXTENDS_WI(4096,32, __Vtemp_2, this->__PVT__num_waiters);
    VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_barrier.svh", 192)->__VnoInFunc_print_int(vlSymsp, "num_waiters"s, __Vtemp_2, 0x00000020U, 0x02000000U, 0x2eU, "int"s);
    __Vtemp_3[0U] = this->__PVT__at_threshold;
    __Vilp1 = 1U;
    while ((__Vilp1 <= 0x0000007fU)) {
        __Vtemp_3[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_barrier.svh", 193)->__VnoInFunc_print_int(vlSymsp, "at_threshold"s, __Vtemp_3, 1U, 0x01000000U, 0x2eU, "bit"s);
    __Vtemp_4[0U] = this->__PVT__auto_reset;
    __Vilp2 = 1U;
    while ((__Vilp2 <= 0x0000007fU)) {
        __Vtemp_4[__Vilp2] = 0U;
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_barrier.svh", 194)->__VnoInFunc_print_int(vlSymsp, "auto_reset"s, __Vtemp_4, 1U, 0x01000000U, 0x2eU, "bit"s);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_do_copy\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier> b;
    {
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, b);
        if (((! __VlefExpr_0) || (VlNull{} == b))) {
            goto __Vlabel0;
        }
        this->__PVT__threshold = VL_NULL_CHECK(b, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_barrier.svh", 202)
            ->__PVT__threshold;
        this->__PVT__num_waiters = VL_NULL_CHECK(b, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_barrier.svh", 203)
            ->__PVT__num_waiters;
        this->__PVT__at_threshold = VL_NULL_CHECK(b, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_barrier.svh", 204)
            ->__PVT__at_threshold;
        this->__PVT__auto_reset = VL_NULL_CHECK(b, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_barrier.svh", 205)
            ->__PVT__auto_reset;
        this->__PVT__m_event = VL_NULL_CHECK(b, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_barrier.svh", 206)
            ->__PVT__m_event;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__threshold = 0;
    __PVT__num_waiters = 0;
    __PVT__at_threshold = 0;
    __PVT__auto_reset = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier::~\n"); );
}
