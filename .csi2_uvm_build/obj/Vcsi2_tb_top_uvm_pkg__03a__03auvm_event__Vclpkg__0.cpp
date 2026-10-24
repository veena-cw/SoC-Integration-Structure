// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__trigger_time = 0ULL;
    /*super.new*/;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_wait_on(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ delta) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_wait_on\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event____PVT__on__0;
    __Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event____PVT__on__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    {
        if (this->__PVT__on) {
            if (delta) {
                co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                        vlProcess, 
                                                        "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_event.svh", 
                                                        72);
            }
            goto __Vlabel0;
        }
        this->__PVT__num_waiters = ((IData)(1U) + this->__PVT__num_waiters);
        CData/*0:0*/ __VdynTrigger_hee174e02__0;
        __VdynTrigger_hee174e02__0 = 0;
        __VdynTrigger_hee174e02__0 = 0U;
        __Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event____PVT__on__0 
            = this->__PVT__on;
        while ((1U & (~ (IData)(__VdynTrigger_hee174e02__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@( uvm_pkg::uvm_event.on)", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_event.svh", 
                                                         76);
            __VdynTrigger_hee174e02__0 = ((IData)(this->__PVT__on) 
                                          != (IData)(__Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event____PVT__on__0));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hee174e02__0);
            __Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event____PVT__on__0 
                = this->__PVT__on;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@( uvm_pkg::uvm_event.on)", 
                                                     "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_event.svh", 
                                                     76);
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_wait_off(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ delta) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_wait_off\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event____PVT__on__1;
    __Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event____PVT__on__1 = 0;
    // Body
    VL_KEEP_THIS;
    {
        if ((1U & (~ (IData)(this->__PVT__on)))) {
            if (delta) {
                co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                        nullptr, 
                                                        "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_event.svh", 
                                                        93);
            }
            goto __Vlabel0;
        }
        this->__PVT__num_waiters = ((IData)(1U) + this->__PVT__num_waiters);
        CData/*0:0*/ __VdynTrigger_hee174e02__1;
        __VdynTrigger_hee174e02__1 = 0;
        __VdynTrigger_hee174e02__1 = 0U;
        __Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event____PVT__on__1 
            = this->__PVT__on;
        while ((1U & (~ (IData)(__VdynTrigger_hee174e02__1)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@( uvm_pkg::uvm_event.on)", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_event.svh", 
                                                         97);
            __VdynTrigger_hee174e02__1 = ((IData)(this->__PVT__on) 
                                          != (IData)(__Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event____PVT__on__1));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hee174e02__1);
            __Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event____PVT__on__1 
                = this->__PVT__on;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@( uvm_pkg::uvm_event.on)", 
                                                     "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_event.svh", 
                                                     97);
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_wait_trigger(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_wait_trigger\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    this->__PVT__num_waiters = ((IData)(1U) + this->__PVT__num_waiters);
    CData/*0:0*/ __VdynTrigger_h18750cd7__0;
    __VdynTrigger_h18750cd7__0 = 0;
    __VdynTrigger_h18750cd7__0 = 0U;
    this->__PVT__m_event.clearFired();
    while ((1U & (~ (IData)(__VdynTrigger_h18750cd7__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] uvm_pkg::uvm_event.m_event)", 
                                                     "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_event.svh", 
                                                     113);
        __VdynTrigger_h18750cd7__0 = (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish() && !vlSymsp->_vm_contextp__->finishPending()) 
                                      && this->__PVT__m_event.isFired());
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h18750cd7__0);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] uvm_pkg::uvm_event.m_event)", 
                                                     "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_event.svh", 
                                                     113);
        this->__PVT__m_event.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] uvm_pkg::uvm_event.m_event)", 
                                                 "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_event.svh", 
                                                 113);
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_wait_ptrigger(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_wait_ptrigger\n"); );
    // Body
    VL_KEEP_THIS;
    {
        if (this->__PVT__m_event.isTriggered()) {
            goto __Vlabel0;
        }
        this->__PVT__num_waiters = ((IData)(1U) + this->__PVT__num_waiters);
        CData/*0:0*/ __VdynTrigger_h18750cd7__1;
        __VdynTrigger_h18750cd7__1 = 0;
        __VdynTrigger_h18750cd7__1 = 0U;
        this->__PVT__m_event.clearFired();
        while ((1U & (~ (IData)(__VdynTrigger_h18750cd7__1)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([event] uvm_pkg::uvm_event.m_event)", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_event.svh", 
                                                         128);
            __VdynTrigger_h18750cd7__1 = (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish() && !vlSymsp->_vm_contextp__->finishPending()) 
                                          && this->__PVT__m_event.isFired());
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h18750cd7__1);
            co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                         nullptr, 
                                                         "@([event] uvm_pkg::uvm_event.m_event)", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_event.svh", 
                                                         128);
            this->__PVT__m_event.clearFired();
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([event] uvm_pkg::uvm_event.m_event)", 
                                                     "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_event.svh", 
                                                     128);
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_wait_trigger_data(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_wait_trigger_data\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_wait_trigger(vlProcess, vlSymsp);
    this->__VnoInFunc_get_trigger_data(vlSymsp, data);
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_wait_ptrigger_data(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_wait_ptrigger_data\n"); );
    // Body
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_wait_ptrigger(vlSymsp);
    this->__VnoInFunc_get_trigger_data(vlSymsp, data);
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_trigger(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_trigger\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__pre_trigger;
    IData/*31:0*/ unnamedblk1__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_event_callback> unnamedblk1__DOT__unnamedblk2__DOT__tmp;
    IData/*31:0*/ unnamedblk3__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_event_callback> unnamedblk3__DOT__unnamedblk4__DOT__tmp;
    IData/*31:0*/ skip;
    skip = 0U;
    if ((0U != this->__PVT__callbacks.size())) {
        unnamedblk1__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__i, this->__PVT__callbacks.size())) {
            unnamedblk1__DOT__unnamedblk2__DOT__tmp 
                = this->__PVT__callbacks.at(unnamedblk1__DOT__i);
            VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__tmp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_event.svh", 170)->__VnoInFunc_pre_trigger(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_event>{this}, data, __VlefCall_0__pre_trigger);
            skip = (skip + (IData)(__VlefCall_0__pre_trigger));
            unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
        }
    }
    if ((0U == skip)) {
        vlSymsp->fireEvent(this->__PVT__m_event);
        if ((0U != this->__PVT__callbacks.size())) {
            unnamedblk3__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk3__DOT__i, this->__PVT__callbacks.size())) {
                unnamedblk3__DOT__unnamedblk4__DOT__tmp 
                    = this->__PVT__callbacks.at(unnamedblk3__DOT__i);
                VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__tmp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_event.svh", 179)->__VnoInFunc_post_trigger(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_event>{this}, data);
                unnamedblk3__DOT__i = ((IData)(1U) 
                                       + unnamedblk3__DOT__i);
            }
        }
        this->__PVT__num_waiters = 0U;
        this->__PVT__on = 1U;
        this->__PVT__trigger_time = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1000));
        this->__PVT__trigger_data = data;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_get_trigger_data(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &get_trigger_data__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_get_trigger_data\n"); );
    // Body
    get_trigger_data__Vfuncrtn = this->__PVT__trigger_data;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_get_trigger_time(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ &get_trigger_time__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_get_trigger_time\n"); );
    // Body
    get_trigger_time__Vfuncrtn = this->__PVT__trigger_time;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_is_on(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_on__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_is_on\n"); );
    // Body
    is_on__Vfuncrtn = this->__PVT__on;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_is_off(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_off__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_is_off\n"); );
    // Body
    is_off__Vfuncrtn = (1U & (~ (IData)(this->__PVT__on)));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ wakeup) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_reset\n"); );
    // Body
    VlAssignableEvent e;
    if (wakeup) {
        vlSymsp->fireEvent(this->__PVT__m_event);
    }
    this->__PVT__m_event = e;
    this->__PVT__num_waiters = 0U;
    this->__PVT__on = 0U;
    this->__PVT__trigger_time = 0ULL;
    this->__PVT__trigger_data = VlNull{};
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_add_callback(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_event_callback> cb, CData/*0:0*/ append) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_add_callback\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__7__verbosity;
    __Vtask_uvm_report_warning__7__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__7__line;
    __Vtask_uvm_report_warning__7__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__8__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ unnamedblk5__DOT__i;
    {
        unnamedblk5__DOT__i = 0U;
        unnamedblk5__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk5__DOT__i, this->__PVT__callbacks.size())) {
            if ((cb == this->__PVT__callbacks.at(unnamedblk5__DOT__i))) {
                __Vtask_uvm_report_warning__7__line = 0U;
                this->__Vtask_uvm_report_warning__7__filename = ""s;
                __Vtask_uvm_report_warning__7__verbosity = 0U;
                this->__Vtask_uvm_report_warning__7__message = "add_callback: Callback already registered. Ignoring."s;
                this->__Vtask_uvm_report_warning__7__id = "CBRGED"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__8__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vfunc_get__8__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__7__id, this->__Vtask_uvm_report_warning__7__message, __Vtask_uvm_report_warning__7__verbosity, this->__Vtask_uvm_report_warning__7__filename, __Vtask_uvm_report_warning__7__line);
                goto __Vlabel0;
            }
            unnamedblk5__DOT__i = ((IData)(1U) + unnamedblk5__DOT__i);
        }
        if (append) {
            this->__PVT__callbacks.push_back(cb);
        } else {
            this->__PVT__callbacks.push_front(cb);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_delete_callback(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_event_callback> cb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_delete_callback\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__10__verbosity;
    __Vtask_uvm_report_warning__10__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__10__line;
    __Vtask_uvm_report_warning__10__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__11__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ unnamedblk6__DOT__i;
    {
        unnamedblk6__DOT__i = 0U;
        unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk6__DOT__i, this->__PVT__callbacks.size())) {
            if ((cb == this->__PVT__callbacks.at(unnamedblk6__DOT__i))) {
                this->__PVT__callbacks.erase(unnamedblk6__DOT__i);
                goto __Vlabel0;
            }
            unnamedblk6__DOT__i = ((IData)(1U) + unnamedblk6__DOT__i);
        }
        __Vtask_uvm_report_warning__10__line = 0U;
        this->__Vtask_uvm_report_warning__10__filename = ""s;
        __Vtask_uvm_report_warning__10__verbosity = 0U;
        this->__Vtask_uvm_report_warning__10__message = "delete_callback: Callback not found. Ignoring delete request."s;
        this->__Vtask_uvm_report_warning__10__id = "CBNTFD"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__11__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vfunc_get__11__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__10__id, this->__Vtask_uvm_report_warning__10__message, __Vtask_uvm_report_warning__10__verbosity, this->__Vtask_uvm_report_warning__10__filename, __Vtask_uvm_report_warning__10__line);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_cancel(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_cancel\n"); );
    // Body
    if (VL_LTS_III(32, 0U, this->__PVT__num_waiters)) {
        this->__PVT__num_waiters = (this->__PVT__num_waiters 
                                    - (IData)(1U));
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_get_num_waiters(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_waiters__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_get_num_waiters\n"); );
    // Body
    get_num_waiters__Vfuncrtn = this->__PVT__num_waiters;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_event> v;
    v = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_event, vlProcess, vlSymsp, name);
    create__Vfuncrtn = v;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_event"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_do_print\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vtemp_1;
    VlWide<128>/*4095:0*/ __Vtemp_2;
    IData/*31:0*/ __Vilp1;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ unnamedblk7__DOT__e;
    unnamedblk7__DOT__e = 0;
    IData/*31:0*/ unnamedblk7__DOT__e__Vloopsize;
    unnamedblk7__DOT__e__Vloopsize = 0;
    VL_EXTENDS_WI(4096,32, __Vtemp_1, this->__PVT__num_waiters);
    VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_event.svh", 333)->__VnoInFunc_print_int(vlSymsp, "num_waiters"s, __Vtemp_1, 0x00000020U, 0x02000000U, 0x2eU, "int"s);
    __Vtemp_2[0U] = this->__PVT__on;
    __Vilp1 = 1U;
    while ((__Vilp1 <= 0x0000007fU)) {
        __Vtemp_2[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_event.svh", 334)->__VnoInFunc_print_int(vlSymsp, "on"s, __Vtemp_2, 1U, 0x01000000U, 0x2eU, "bit"s);
    VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_event.svh", 335)->__VnoInFunc_print_time(vlSymsp, "trigger_time"s, this->__PVT__trigger_time, 0x2eU);
    VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_event.svh", 336)->__VnoInFunc_print_object(vlProcess, vlSymsp, "trigger_data"s, this->__PVT__trigger_data, 0x2eU);
    VL_NULL_CHECK(VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_event.svh", 337)
                  ->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_event.svh", 337)->__VnoInFunc_down(vlSymsp, "callbacks"s);
    unnamedblk7__DOT__e = 0U;
    while (VL_LTS_III(32, unnamedblk7__DOT__e, this->__PVT__callbacks.size())) {
        unnamedblk7__DOT__e__Vloopsize = this->__PVT__callbacks.size();
        VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_event.svh", 339)->__VnoInFunc_print_object(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%0d]",1
                                                                                , '~',32,unnamedblk7__DOT__e) , this->__PVT__callbacks.at(unnamedblk7__DOT__e), 0x5bU);
        if ((unnamedblk7__DOT__e__Vloopsize <= this->__PVT__callbacks.size())) {
            unnamedblk7__DOT__e = ((IData)(1U) + unnamedblk7__DOT__e);
        }
    }
    VL_NULL_CHECK(VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_event.svh", 341)
                  ->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_event.svh", 341)->__VnoInFunc_up(vlSymsp, 0x2eU);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_do_copy\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_event> e;
    {
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, e);
        if (((! __VlefExpr_0) || (VlNull{} == e))) {
            goto __Vlabel0;
        }
        this->__PVT__m_event = VL_NULL_CHECK(e, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_event.svh", 350)
            ->__PVT__m_event;
        this->__PVT__num_waiters = VL_NULL_CHECK(e, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_event.svh", 351)
            ->__PVT__num_waiters;
        this->__PVT__on = VL_NULL_CHECK(e, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_event.svh", 352)
            ->__PVT__on;
        this->__PVT__trigger_time = VL_NULL_CHECK(e, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_event.svh", 353)
            ->__PVT__trigger_time;
        this->__PVT__trigger_data = VL_NULL_CHECK(e, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_event.svh", 354)
            ->__PVT__trigger_data;
        this->__PVT__callbacks.clear();
        this->__PVT__callbacks = VL_NULL_CHECK(e, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_event.svh", 356)
            ->__PVT__callbacks;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__num_waiters = 0;
    __PVT__on = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_event() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_event::~\n"); );
}
