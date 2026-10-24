// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent, IData/*31:0*/ size) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz132::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m = VL_NEW(Vcsi2_tb_top_std__03a__03amailbox__Tz132, vlSymsp, size);
    this->__PVT__m_size = size;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_tlm_fifo #(T)"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_size(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_size\n"); );
    // Body
    size__Vfuncrtn = this->__PVT__m_size;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_used(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &used__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_used\n"); );
    // Body
    used__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_tlm_fifos.svh", 89)->__VnoInFunc_num(vlSymsp, used__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_is_empty(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_empty__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_is_empty\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__num;
    is_empty__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_tlm_fifos.svh", 98)->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
    is_empty__Vfuncrtn = (0U == __VlefCall_0__num);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_is_full(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_full__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_is_full\n"); );
    // Body
    CData/*0:0*/ __VlefLogAnd_1;
    IData/*31:0*/ __VlefCall_0__num;
    is_full__Vfuncrtn = 0U;
    __VlefLogAnd_1 = (0U != this->__PVT__m_size);
    if (__VlefLogAnd_1) {
        VL_NULL_CHECK(this->__PVT__m, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_tlm_fifos.svh", 108)->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
        __VlefLogAnd_1 = (__VlefCall_0__num == this->__PVT__m_size);
    }
    is_full__Vfuncrtn = __VlefLogAnd_1;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_put(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_put\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_tlm_fifos.svh", 114)->__VnoInFunc_put(vlSymsp, t);
    VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz132::__PVT__put_ap, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_tlm_fifos.svh", 115)->__VnoInFunc_write(vlProcess, vlSymsp, t);
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_get\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    this->__PVT__m_pending_blocked_gets = ((IData)(1U) 
                                           + this->__PVT__m_pending_blocked_gets);
    co_await VL_NULL_CHECK(this->__PVT__m, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_tlm_fifos.svh", 120)->__VnoInFunc_get(vlSymsp, t);
    this->__PVT__m_pending_blocked_gets = (this->__PVT__m_pending_blocked_gets 
                                           - (IData)(1U));
    VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz132::__PVT__get_ap, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_tlm_fifos.svh", 122)->__VnoInFunc_write(vlProcess, vlSymsp, t);
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_peek(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_peek\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_tlm_fifos.svh", 126)->__VnoInFunc_peek(vlProcess, vlSymsp, t);
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_try_get(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> &t, CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_try_get\n"); );
    // Locals
    IData/*31:0*/ __Vtask_try_get__10__Vfuncout;
    __Vtask_try_get__10__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__try_get;
    {
        try_get__Vfuncrtn = 0U;
        VL_NULL_CHECK(this->__PVT__m, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_tlm_fifos.svh", 130)->__VnoInFunc_try_get(vlSymsp, t, __Vtask_try_get__10__Vfuncout);
        __VlefCall_0__try_get = __Vtask_try_get__10__Vfuncout;
        if ((1U & (~ (0U != __VlefCall_0__try_get)))) {
            try_get__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz132::__PVT__get_ap, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_tlm_fifos.svh", 134)->__VnoInFunc_write(vlProcess, vlSymsp, t);
        try_get__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_try_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> &t, CData/*0:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_try_peek\n"); );
    // Locals
    IData/*31:0*/ __Vtask_try_peek__12__Vfuncout;
    __Vtask_try_peek__12__Vfuncout = 0;
    // Body
    IData/*31:0*/ __VlefCall_0__try_peek;
    {
        try_peek__Vfuncrtn = 0U;
        VL_NULL_CHECK(this->__PVT__m, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_tlm_fifos.svh", 139)->__VnoInFunc_try_peek(vlSymsp, t, __Vtask_try_peek__12__Vfuncout);
        __VlefCall_0__try_peek = __Vtask_try_peek__12__Vfuncout;
        if ((1U & (~ (0U != __VlefCall_0__try_peek)))) {
            try_peek__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        try_peek__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_try_put(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> t, CData/*0:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_try_put\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__try_put;
    {
        try_put__Vfuncrtn = 0U;
        VL_NULL_CHECK(this->__PVT__m, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_tlm_fifos.svh", 146)->__VnoInFunc_try_put(vlSymsp, t, __VlefCall_0__try_put);
        if ((1U & (~ (0U != __VlefCall_0__try_put)))) {
            try_put__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz132::__PVT__put_ap, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_tlm_fifos.svh", 150)->__VnoInFunc_write(vlProcess, vlSymsp, t);
        try_put__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_can_put(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_can_put\n"); );
    // Body
    CData/*0:0*/ __VlefLogOr_1;
    IData/*31:0*/ __VlefCall_0__num;
    can_put__Vfuncrtn = 0U;
    __VlefLogOr_1 = (0U == this->__PVT__m_size);
    if ((1U & (~ (IData)(__VlefLogOr_1)))) {
        VL_NULL_CHECK(this->__PVT__m, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_tlm_fifos.svh", 155)->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
        __VlefLogOr_1 = VL_LTS_III(32, __VlefCall_0__num, this->__PVT__m_size);
    }
    can_put__Vfuncrtn = __VlefLogOr_1;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_can_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_can_get\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__num;
    can_get__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_tlm_fifos.svh", 159)->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
    can_get__Vfuncrtn = (VL_LTS_III(32, 0U, __VlefCall_0__num) 
                         && (0U == this->__PVT__m_pending_blocked_gets));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_can_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_can_peek\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__num;
    can_peek__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_tlm_fifos.svh", 163)->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
    can_peek__Vfuncrtn = VL_LTS_III(32, 0U, __VlefCall_0__num);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_flush(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_flush\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> __Vfunc_try_get__18__t;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__num;
    CData/*0:0*/ r;
    r = 1U;
    while (r) {
        this->__VnoInFunc_try_get(vlProcess, vlSymsp, __Vfunc_try_get__18__t, r);
    }
    VL_NULL_CHECK(this->__PVT__m, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_tlm_fifos.svh", 179)->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
    if ((VL_LTS_III(32, 0U, __VlefCall_0__num) && (0U 
                                                   != this->__PVT__m_pending_blocked_gets))) {
        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "flush failed"s, "there are blocked gets preventing the flush"s, 0U, ""s, 0U);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_size = 0;
    __PVT__m_pending_blocked_gets = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::~\n"); );
}
