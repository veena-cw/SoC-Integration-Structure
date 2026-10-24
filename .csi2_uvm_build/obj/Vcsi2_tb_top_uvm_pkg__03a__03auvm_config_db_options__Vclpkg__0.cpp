// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_db_options__Vclpkg::__VnoInFunc_turn_on_tracing(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_db_options__Vclpkg::__VnoInFunc_turn_on_tracing\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    if ((1U & (~ (IData)(this->__PVT__ready)))) {
        {
            // Inlined CFunc: __VnoInFunc_init
            IData/*31:0*/ __Vinline_0___VnoInFunc_init___Vtask_get_arg_matches__4__Vfuncout;
            __Vinline_0___VnoInFunc_init___Vtask_get_arg_matches__4__Vfuncout = 0;
            IData/*31:0*/ __Vinline_0___VnoInFunc_init___VlefCall_0__get_arg_matches;
            VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor> __Vinline_0___VnoInFunc_init_clp;
            VlQueue<std::string> __Vinline_0___VnoInFunc_init_trace_args;
            __Vinline_0___VnoInFunc_init_trace_args.clear();
            __Vinline_0___VnoInFunc_init_trace_args.atDefault().clear();
            vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, __Vinline_0___VnoInFunc_init_clp);
            VL_NULL_CHECK(__Vinline_0___VnoInFunc_init_clp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_config_db.svh", 360)->__VnoInFunc_get_arg_matches(vlProcess, vlSymsp, "+UVM_CONFIG_DB_TRACE"s, __Vinline_0___VnoInFunc_init_trace_args, __Vinline_0___VnoInFunc_init___Vtask_get_arg_matches__4__Vfuncout);
            __Vinline_0___VnoInFunc_init___VlefCall_0__get_arg_matches 
                = __Vinline_0___VnoInFunc_init___Vtask_get_arg_matches__4__Vfuncout;
            if ((0U != __Vinline_0___VnoInFunc_init___VlefCall_0__get_arg_matches)) {
                this->__PVT__tracing = 1U;
            }
            this->__PVT__ready = 1U;
        }
    }
    this->__PVT__tracing = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_db_options__Vclpkg::__VnoInFunc_turn_off_tracing(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_db_options__Vclpkg::__VnoInFunc_turn_off_tracing\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    if ((1U & (~ (IData)(this->__PVT__ready)))) {
        {
            // Inlined CFunc: __VnoInFunc_init
            IData/*31:0*/ __Vinline_1___VnoInFunc_init___Vtask_get_arg_matches__4__Vfuncout;
            __Vinline_1___VnoInFunc_init___Vtask_get_arg_matches__4__Vfuncout = 0;
            IData/*31:0*/ __Vinline_1___VnoInFunc_init___VlefCall_0__get_arg_matches;
            VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor> __Vinline_1___VnoInFunc_init_clp;
            VlQueue<std::string> __Vinline_1___VnoInFunc_init_trace_args;
            __Vinline_1___VnoInFunc_init_trace_args.clear();
            __Vinline_1___VnoInFunc_init_trace_args.atDefault().clear();
            vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, __Vinline_1___VnoInFunc_init_clp);
            VL_NULL_CHECK(__Vinline_1___VnoInFunc_init_clp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_config_db.svh", 360)->__VnoInFunc_get_arg_matches(vlProcess, vlSymsp, "+UVM_CONFIG_DB_TRACE"s, __Vinline_1___VnoInFunc_init_trace_args, __Vinline_1___VnoInFunc_init___Vtask_get_arg_matches__4__Vfuncout);
            __Vinline_1___VnoInFunc_init___VlefCall_0__get_arg_matches 
                = __Vinline_1___VnoInFunc_init___Vtask_get_arg_matches__4__Vfuncout;
            if ((0U != __Vinline_1___VnoInFunc_init___VlefCall_0__get_arg_matches)) {
                this->__PVT__tracing = 1U;
            }
            this->__PVT__ready = 1U;
        }
    }
    this->__PVT__tracing = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_db_options__Vclpkg::__VnoInFunc_is_tracing(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_tracing__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_db_options__Vclpkg::__VnoInFunc_is_tracing\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    is_tracing__Vfuncrtn = 0U;
    if ((1U & (~ (IData)(this->__PVT__ready)))) {
        {
            // Inlined CFunc: __VnoInFunc_init
            IData/*31:0*/ __Vinline_2___VnoInFunc_init___Vtask_get_arg_matches__4__Vfuncout;
            __Vinline_2___VnoInFunc_init___Vtask_get_arg_matches__4__Vfuncout = 0;
            IData/*31:0*/ __Vinline_2___VnoInFunc_init___VlefCall_0__get_arg_matches;
            VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor> __Vinline_2___VnoInFunc_init_clp;
            VlQueue<std::string> __Vinline_2___VnoInFunc_init_trace_args;
            __Vinline_2___VnoInFunc_init_trace_args.clear();
            __Vinline_2___VnoInFunc_init_trace_args.atDefault().clear();
            vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, __Vinline_2___VnoInFunc_init_clp);
            VL_NULL_CHECK(__Vinline_2___VnoInFunc_init_clp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_config_db.svh", 360)->__VnoInFunc_get_arg_matches(vlProcess, vlSymsp, "+UVM_CONFIG_DB_TRACE"s, __Vinline_2___VnoInFunc_init_trace_args, __Vinline_2___VnoInFunc_init___Vtask_get_arg_matches__4__Vfuncout);
            __Vinline_2___VnoInFunc_init___VlefCall_0__get_arg_matches 
                = __Vinline_2___VnoInFunc_init___Vtask_get_arg_matches__4__Vfuncout;
            if ((0U != __Vinline_2___VnoInFunc_init___VlefCall_0__get_arg_matches)) {
                this->__PVT__tracing = 1U;
            }
            this->__PVT__ready = 1U;
        }
    }
    is_tracing__Vfuncrtn = this->__PVT__tracing;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_db_options__Vclpkg::__VnoInFunc_init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_db_options__Vclpkg::__VnoInFunc_init\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_arg_matches__4__Vfuncout;
    __Vtask_get_arg_matches__4__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__get_arg_matches;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor> clp;
    VlQueue<std::string> trace_args;
    trace_args.clear();
    trace_args.atDefault().clear();
    vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, clp);
    VL_NULL_CHECK(clp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_config_db.svh", 360)->__VnoInFunc_get_arg_matches(vlProcess, vlSymsp, "+UVM_CONFIG_DB_TRACE"s, trace_args, __Vtask_get_arg_matches__4__Vfuncout);
    __VlefCall_0__get_arg_matches = __Vtask_get_arg_matches__4__Vfuncout;
    if ((0U != __VlefCall_0__get_arg_matches)) {
        this->__PVT__tracing = 1U;
    }
    this->__PVT__ready = 1U;
}
