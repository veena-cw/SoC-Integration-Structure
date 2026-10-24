// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ size, IData/*31:0*/ n_bits, IData/*31:0*/ has_cover) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::init(vlProcess, vlSymsp, name, n_bits, has_cover);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_size = size;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.write_var(this->__PVT____Vfifo_size, 0x0000000000000020ULL, 
                                                                        "__Vfifo_size", 0ULL);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_build(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_build\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__get_n_bits;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi46__Vclpkg.__VnoInFunc_create(vlSymsp, "value"s, VlNull{}, ""s, this->__PVT__value);
    this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_0__get_n_bits);
    VL_NULL_CHECK(this->__PVT__value, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_fifo.svh", 79)->__VnoInFunc_configure(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo>{this}, __VlefCall_0__get_n_bits, 0U, "RW"s, 0U, 0ULL, 1U, 0U, 1U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_set_compare(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ check) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_set_compare\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__value, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_fifo.svh", 91)->__VnoInFunc_set_compare(vlSymsp, check);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_size(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_size\n"); );
    // Body
    size__Vfuncrtn = this->__PVT__fifo.size();
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_capacity(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &capacity__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_capacity\n"); );
    // Body
    capacity__Vfuncrtn = this->__PVT__m_size;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_set(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_set\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__get_n_bits;
    {
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_0__get_n_bits);
        value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_0__get_n_bits) 
                          - 1ULL));
        if ((this->__PVT__fifo.size() == this->__PVT__m_size)) {
            goto __Vlabel0;
        }
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set(vlProcess, vlSymsp, value, fname, lineno);
        this->__PVT__m_set_cnt = ((IData)(1U) + this->__PVT__m_set_cnt);
        this->__PVT__fifo.push_back(VL_NULL_CHECK(this->__PVT__value, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_fifo.svh", 157)
                                    ->__PVT__value);
        __Vlabel0: ;
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_update(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_update\n"); );
    // Locals
    IData/*31:0*/ __Vtask_write__7__status;
    __Vtask_write__7__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1__DOT__i;
    {
        status = 0U;
        if ((1U & ((~ (0U != this->__PVT__m_set_cnt)) 
                   | (0U == this->__PVT__fifo.size())))) {
            goto __Vlabel0;
        }
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__PVT__m_update_in_progress = 1U;
        unnamedblk1__DOT__i = 0U;
        unnamedblk1__DOT__i = (this->__PVT__fifo.size() 
                               - this->__PVT__m_set_cnt);
        while (VL_LTS_III(32, 0U, this->__PVT__m_set_cnt)) {
            if (VL_LTES_III(32, 0U, unnamedblk1__DOT__i)) {
                co_await this->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__7__status, this->__PVT__fifo.at(unnamedblk1__DOT__i), path, map, parent, prior, extension, fname, lineno);
                status = __Vtask_write__7__status;
            }
            unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
            this->__PVT__m_set_cnt = (this->__PVT__m_set_cnt 
                                      - (IData)(1U));
        }
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__PVT__m_update_in_progress = 0U;
        __Vlabel0: ;
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_get(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_get\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    get__Vfuncrtn = this->__PVT__fifo.at(0U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_do_predict(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ kind, CData/*7:0*/ be) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_do_predict\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__11__verbosity;
    __Vfunc_uvm_report_enabled__11__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__11__severity;
    __Vfunc_uvm_report_enabled__11__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__11____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__11____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__12__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__13__Vfuncout;
    __Vtask_uvm_report_enabled__13__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__14__verbosity;
    __Vtask_uvm_report_warning__14__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__14__line;
    __Vtask_uvm_report_warning__14__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__15__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_1__get_compare;
    IData/*31:0*/ __VlefCall_0__get_n_bits;
    QData/*63:0*/ unnamedblk2__DOT__value;
    QData/*63:0*/ unnamedblk2__DOT__mirror_val;
    {
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, kind, (IData)(be));
        if ((1U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_fifo.svh", 232)
             ->__PVT__status)) {
            goto __Vlabel0;
        }
        if (((2U == kind) || (0U == kind))) {
            if (((this->__PVT__fifo.size() != this->__PVT__m_size) 
                 & (~ (IData)(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__PVT__m_update_in_progress)))) {
                this->__PVT__fifo.push_back(VL_NULL_CHECK(this->__PVT__value, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_fifo.svh", 241)
                                            ->__PVT__value);
            }
        } else if ((1U == kind)) {
            this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_0__get_n_bits);
            unnamedblk2__DOT__value = (VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_fifo.svh", 246)
                                       ->__PVT__value.at(0U) 
                                       & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_0__get_n_bits) 
                                          - 1ULL));
            unnamedblk2__DOT__mirror_val = 0ULL;
            if ((0U == this->__PVT__fifo.size())) {
                goto __Vlabel0;
            }
            unnamedblk2__DOT__mirror_val = this->__PVT__fifo.pop_front();
            VL_NULL_CHECK(this->__PVT__value, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_fifo.svh", 252)->__VnoInFunc_get_compare(vlSymsp, __VlefCall_1__get_compare);
            if (((1U == __VlefCall_1__get_compare) 
                 && (unnamedblk2__DOT__mirror_val != unnamedblk2__DOT__value))) {
                this->__Vfunc_uvm_report_enabled__11__id = "MIRROR_MISMATCH"s;
                __Vfunc_uvm_report_enabled__11__severity = 1U;
                __Vfunc_uvm_report_enabled__11__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__12__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__12__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__11__verbosity, (IData)(__Vfunc_uvm_report_enabled__11__severity), this->__Vfunc_uvm_report_enabled__11__id, __Vtask_uvm_report_enabled__13__Vfuncout);
                __Vfunc_uvm_report_enabled__11____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__13__Vfuncout;
                __VlefCall_2__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__11____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_2__uvm_report_enabled) {
                    __Vtask_uvm_report_warning__14__line = 0x000000feU;
                    this->__Vtask_uvm_report_warning__14__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_fifo.svh"s;
                    __Vtask_uvm_report_warning__14__verbosity = 0U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__14__message
                                  ,"Observed DUT read value 'h%0h != mirror value 'h%0h",2
                                  , '#',64,unnamedblk2__DOT__value
                                  , '#',64,unnamedblk2__DOT__mirror_val);
                    this->__Vtask_uvm_report_warning__14__id = "MIRROR_MISMATCH"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__15__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vfunc_get__15__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__14__id, this->__Vtask_uvm_report_warning__14__message, __Vtask_uvm_report_warning__14__verbosity, this->__Vtask_uvm_report_warning__14__filename, __Vtask_uvm_report_warning__14__line);
                }
            }
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_pre_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_pre_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__17__verbosity;
    __Vfunc_uvm_report_enabled__17__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__17__severity;
    __Vfunc_uvm_report_enabled__17__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__17____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__17____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__18__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__19__Vfuncout;
    __Vtask_uvm_report_enabled__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__21__verbosity;
    __Vfunc_uvm_report_enabled__21__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__21__severity;
    __Vfunc_uvm_report_enabled__21__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__21____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__21____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__22__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__23__Vfuncout;
    __Vtask_uvm_report_enabled__23__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if (((0U != this->__PVT__m_set_cnt) & (~ (IData)(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__PVT__m_update_in_progress)))) {
            this->__Vfunc_uvm_report_enabled__17__id = "Needs Update"s;
            __Vfunc_uvm_report_enabled__17__severity = 2U;
            __Vfunc_uvm_report_enabled__17__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__18__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__18__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__17__verbosity, (IData)(__Vfunc_uvm_report_enabled__17__severity), this->__Vfunc_uvm_report_enabled__17__id, __Vtask_uvm_report_enabled__19__Vfuncout);
            __Vfunc_uvm_report_enabled__17____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__19__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__17____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "Needs Update"s, "Must call update() after set() and before write()"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_fifo.svh"s, 0x00000114U);
            }
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_fifo.svh", 277)->__PVT__status = 1U;
            goto __Vlabel0;
        }
        if (((this->__PVT__fifo.size() >= this->__PVT__m_size) 
             & (~ (IData)(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__PVT__m_update_in_progress)))) {
            this->__Vfunc_uvm_report_enabled__21__id = "FIFO Full"s;
            __Vfunc_uvm_report_enabled__21__severity = 2U;
            __Vfunc_uvm_report_enabled__21__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__22__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__22__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__21__verbosity, (IData)(__Vfunc_uvm_report_enabled__21__severity), this->__Vfunc_uvm_report_enabled__21__id, __Vtask_uvm_report_enabled__23__Vfuncout);
            __Vfunc_uvm_report_enabled__21____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__23__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__21____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "FIFO Full"s, "Write to full FIFO ignored"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_fifo.svh"s, 0x00000119U);
            }
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_fifo.svh", 282)->__PVT__status = 1U;
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_pre_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_pre_read\n"); );
    // Body
    if ((0U == this->__PVT__fifo.size())) {
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_fifo.svh", 299)->__PVT__status = 1U;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_post_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_post_randomize\n"); );
    // Body
    this->__PVT__m_set_cnt = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_valid_fifo_size_resize_constrained_array(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_valid_fifo_size_resize_constrained_array\n"); );
    // Body
    this->__PVT__fifo.resize(this->__PVT____Vfifo_size);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___Vresize_constrained_arrays(vlSymsp);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
    {
        // Inlined CFunc: __VnoInFunc_post_randomize
        this->__PVT__m_set_cnt = 0U;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_valid_fifo_size_setup_constraint(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_valid_fifo_size_setup_constraint\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    VL_SFORMAT_NX(__Vtemp_1,"#x%x",1, '#',32,this->__PVT__m_size);
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard(VL_SFORMATF_N_NX("(__Vbv (bvule __Vfifo_size %s))",1
                                                                                , 'S',&(__Vtemp_1)) , "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_fifo.svh", 0x00000032U, 
                                                                   "      fifo.size() <= m_size;");
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard("(__Vbv (bvsge __Vfifo_size #x00000000))"s, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_fifo.svh", 0x00000032U, 
                                                                   "      fifo.size() <= m_size;");
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc___Vresize_constrained_arrays(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc___Vresize_constrained_arrays\n"); );
    // Body
    {
        // Inlined CFunc: __VnoInFunc_valid_fifo_size_resize_constrained_array
        this->__PVT__fifo.resize(this->__PVT____Vfifo_size);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_valid_fifo_size_setup_constraint(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc___VBasicRand\n"); );
    // Body
    IData/*31:0*/ unnamedblk2_1__DOT____Vrandarr___0;
    unnamedblk2_1__DOT____Vrandarr___0 = 0;
    IData/*31:0*/ unnamedblk2_1__DOT____Vrandarr___0__Vloopsize;
    unnamedblk2_1__DOT____Vrandarr___0__Vloopsize = 0;
    __VBasicRand__Vfuncrtn = 1U;
    unnamedblk2_1__DOT____Vrandarr___0 = 0U;
    while ((unnamedblk2_1__DOT____Vrandarr___0 < this->__PVT__fifo.size())) {
        unnamedblk2_1__DOT____Vrandarr___0__Vloopsize 
            = this->__PVT__fifo.size();
        this->__PVT__fifo.atWriteAppend(unnamedblk2_1__DOT____Vrandarr___0) 
            = VL_RANDOM_RNG_Q(__Vm_rng);
        if ((unnamedblk2_1__DOT____Vrandarr___0__Vloopsize 
             <= this->__PVT__fifo.size())) {
            unnamedblk2_1__DOT____Vrandarr___0 = ((IData)(1U) 
                                                  + unnamedblk2_1__DOT____Vrandarr___0);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_set_cnt = 0;
    __PVT__m_size = 0;
    __PVT__fifo.atDefault() = 0;
    __PVT____Vfifo_size = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_fifo::~\n"); );
}
