// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__id_file_handles = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz29, vlProcess, vlSymsp, ""s);
    this->__PVT__id_actions = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz29, vlProcess, vlSymsp, ""s);
    this->__PVT__id_verbosities = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz29, vlProcess, vlSymsp, ""s);
    this->__PVT__sev_overrides = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz30_TBz30, vlProcess, vlSymsp, ""s);
    {
        // Inlined CFunc: __VnoInFunc_initialize
        this->__VnoInFunc_set_default_file(vlSymsp, 0U);
        this->__PVT__m_max_verbosity_level = 0x000000c8U;
        {
            // Inlined CFunc: __VnoInFunc_set_defaults
            this->__VnoInFunc_set_severity_action(vlSymsp, 0U, 1U);
            this->__VnoInFunc_set_severity_action(vlSymsp, 1U, 1U);
            this->__VnoInFunc_set_severity_action(vlSymsp, 2U, 5U);
            this->__VnoInFunc_set_severity_action(vlSymsp, 3U, 9U);
            this->__VnoInFunc_set_severity_file(vlSymsp, 0U, this->__PVT__default_file_handle);
            this->__VnoInFunc_set_severity_file(vlSymsp, 1U, this->__PVT__default_file_handle);
            this->__VnoInFunc_set_severity_file(vlSymsp, 2U, this->__PVT__default_file_handle);
            this->__VnoInFunc_set_severity_file(vlSymsp, 3U, this->__PVT__default_file_handle);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_server(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server> &get_server__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_server\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, get_server__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_max_quit_count(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ max_count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_max_quit_count\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server> srvr;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, srvr);
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 110)->__VnoInFunc_set_max_quit_count(vlProcess, vlSymsp, max_count, 1U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_summarize(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_summarize\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server> srvr;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, srvr);
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 121)->__VnoInFunc_summarize(vlSymsp, file);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_report_relnotes_banner(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_report_relnotes_banner\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server> srvr;
    {
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_report_handler__Vclpkg.__PVT__m_relnotes_done) {
            goto __Vlabel0;
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, srvr);
        VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 137)->__VnoInFunc_f_display(vlSymsp, file, "\n  ***********       IMPORTANT RELEASE NOTES         ************"s);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_report_handler__Vclpkg.__PVT__m_relnotes_done = 1U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_report_header(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_report_header\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_arg_matches__22__Vfuncout;
    __Vtask_get_arg_matches__22__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__get_arg_matches;
    std::string __VlefCall_0__uvm_revision_string;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor> unnamedblk1__DOT__clp;
    VlQueue<std::string> unnamedblk1__DOT__args;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server> srvr;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, srvr);
        VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 153)->__VnoInFunc_f_display(vlSymsp, file, "----------------------------------------------------------------"s);
        __VlefCall_0__uvm_revision_string = "UVM-1.1d"s;
        VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 155)->__VnoInFunc_f_display(vlSymsp, file, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__uvm_revision_string));
        VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 156)->__VnoInFunc_f_display(vlSymsp, file, "(C) 2007-2013 Mentor Graphics Corporation"s);
        VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 157)->__VnoInFunc_f_display(vlSymsp, file, "(C) 2007-2013 Cadence Design Systems, Inc."s);
        VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 158)->__VnoInFunc_f_display(vlSymsp, file, "(C) 2006-2013 Synopsys, Inc."s);
        VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 159)->__VnoInFunc_f_display(vlSymsp, file, "(C) 2011-2013 Cypress Semiconductor Corp."s);
        VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 160)->__VnoInFunc_f_display(vlSymsp, file, "----------------------------------------------------------------"s);
        unnamedblk1__DOT__args.clear();
        unnamedblk1__DOT__args.atDefault().clear();
        vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, unnamedblk1__DOT__clp);
        VL_NULL_CHECK(unnamedblk1__DOT__clp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 169)->__VnoInFunc_get_arg_matches(vlProcess, vlSymsp, "+UVM_NO_RELNOTES"s, unnamedblk1__DOT__args, __Vtask_get_arg_matches__22__Vfuncout);
        __VlefCall_1__get_arg_matches = __Vtask_get_arg_matches__22__Vfuncout;
        if ((0U != __VlefCall_1__get_arg_matches)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_report_relnotes_banner(vlProcess, vlSymsp, file);
        VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 173)->__VnoInFunc_f_display(vlSymsp, file, "\n  You are using a version of the UVM library that has been compiled"s);
        VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 174)->__VnoInFunc_f_display(vlSymsp, file, "  with `UVM_NO_DEPRECATED undefined."s);
        VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 175)->__VnoInFunc_f_display(vlSymsp, file, "  See http://www.eda.org/svdb/view.php?id=3313 for more details."s);
        this->__VnoInFunc_report_relnotes_banner(vlProcess, vlSymsp, file);
        VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 180)->__VnoInFunc_f_display(vlSymsp, file, "\n  You are using a version of the UVM library that has been compiled"s);
        VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 181)->__VnoInFunc_f_display(vlSymsp, file, "  with `UVM_OBJECT_MUST_HAVE_CONSTRUCTOR undefined."s);
        VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 182)->__VnoInFunc_f_display(vlSymsp, file, "  See http://www.eda.org/svdb/view.php?id=3770 for more details."s);
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_report_handler__Vclpkg.__PVT__m_relnotes_done) {
            VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 186)->__VnoInFunc_f_display(vlSymsp, file, "\n      (Specify +UVM_NO_RELNOTES to turn off this notice)\n"s);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_initialize(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_initialize\n"); );
    // Body
    this->__VnoInFunc_set_default_file(vlSymsp, 0U);
    this->__PVT__m_max_verbosity_level = 0x000000c8U;
    {
        // Inlined CFunc: __VnoInFunc_set_defaults
        this->__VnoInFunc_set_severity_action(vlSymsp, 0U, 1U);
        this->__VnoInFunc_set_severity_action(vlSymsp, 1U, 1U);
        this->__VnoInFunc_set_severity_action(vlSymsp, 2U, 5U);
        this->__VnoInFunc_set_severity_action(vlSymsp, 3U, 9U);
        this->__VnoInFunc_set_severity_file(vlSymsp, 0U, this->__PVT__default_file_handle);
        this->__VnoInFunc_set_severity_file(vlSymsp, 1U, this->__PVT__default_file_handle);
        this->__VnoInFunc_set_severity_file(vlSymsp, 2U, this->__PVT__default_file_handle);
        this->__VnoInFunc_set_severity_file(vlSymsp, 3U, this->__PVT__default_file_handle);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_run_hooks(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> client, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, CData/*0:0*/ &run_hooks__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_run_hooks\n"); );
    // Body
    CData/*0:0*/ __VlefCall_3__report_fatal_hook;
    CData/*0:0*/ __VlefCall_2__report_error_hook;
    CData/*0:0*/ __VlefCall_1__report_warning_hook;
    CData/*0:0*/ __VlefCall_0__report_info_hook;
    CData/*0:0*/ ok;
    run_hooks__Vfuncrtn = 0U;
    ok = 0U;
    VL_NULL_CHECK(client, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 221)->__VnoInFunc_report_hook(vlSymsp, id, message, verbosity, filename, line, ok);
    if ((2U & (IData)(severity))) {
        if ((1U & (IData)(severity))) {
            VL_NULL_CHECK(client, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 231)->__VnoInFunc_report_fatal_hook(vlSymsp, id, message, verbosity, filename, line, __VlefCall_3__report_fatal_hook);
            ok = ((IData)(ok) & (IData)(__VlefCall_3__report_fatal_hook));
        } else {
            VL_NULL_CHECK(client, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 229)->__VnoInFunc_report_error_hook(vlSymsp, id, message, verbosity, filename, line, __VlefCall_2__report_error_hook);
            ok = ((IData)(ok) & (IData)(__VlefCall_2__report_error_hook));
        }
    } else if ((1U & (IData)(severity))) {
        VL_NULL_CHECK(client, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 227)->__VnoInFunc_report_warning_hook(vlSymsp, id, message, verbosity, filename, line, __VlefCall_1__report_warning_hook);
        ok = ((IData)(ok) & (IData)(__VlefCall_1__report_warning_hook));
    } else {
        VL_NULL_CHECK(client, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 225)->__VnoInFunc_report_info_hook(vlSymsp, id, message, verbosity, filename, line, __VlefCall_0__report_info_hook);
        ok = ((IData)(ok) & (IData)(__VlefCall_0__report_info_hook));
    }
    run_hooks__Vfuncrtn = ok;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_severity_id_file(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_severity_id_file__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_severity_id_file\n"); );
    // Body
    IData/*31:0*/ __VlefCall_1__exists;
    IData/*31:0*/ __VlefCall_0__exists;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz29> array;
    {
        get_severity_id_file__Vfuncrtn = 0U;
        if (this->__PVT__severity_id_file_handles.exists(severity)) {
            array = this->__PVT__severity_id_file_handles
                .at(severity);
            VL_NULL_CHECK(array, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 249)->__VnoInFunc_exists(vlSymsp, id, __VlefCall_0__exists);
            if ((0U != __VlefCall_0__exists)) {
                VL_NULL_CHECK(array, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 250)->__VnoInFunc_get(vlSymsp, id, get_severity_id_file__Vfuncrtn);
                goto __Vlabel0;
            }
        }
        VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 254)->__VnoInFunc_exists(vlSymsp, id, __VlefCall_1__exists);
        if ((0U != __VlefCall_1__exists)) {
            VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 255)->__VnoInFunc_get(vlSymsp, id, get_severity_id_file__Vfuncrtn);
            goto __Vlabel0;
        }
        if (this->__PVT__severity_file_handles.exists(severity)) {
            get_severity_id_file__Vfuncrtn = this->__PVT__severity_file_handles
                .at((IData)(severity));
            goto __Vlabel0;
        }
        get_severity_id_file__Vfuncrtn = this->__PVT__default_file_handle;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_verbosity_level(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity_level) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_verbosity_level\n"); );
    // Body
    this->__PVT__m_max_verbosity_level = verbosity_level;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_verbosity_level(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_verbosity_level__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_verbosity_level\n"); );
    // Body
    IData/*31:0*/ __VlefCall_1__exists;
    IData/*31:0*/ __VlefCall_0__exists;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz29> array;
    {
        get_verbosity_level__Vfuncrtn = 0U;
        if (this->__PVT__severity_id_verbosities.exists(severity)) {
            array = this->__PVT__severity_id_verbosities
                .at(severity);
            VL_NULL_CHECK(array, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 287)->__VnoInFunc_exists(vlSymsp, id, __VlefCall_0__exists);
            if ((0U != __VlefCall_0__exists)) {
                VL_NULL_CHECK(array, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 288)->__VnoInFunc_get(vlSymsp, id, get_verbosity_level__Vfuncrtn);
                goto __Vlabel0;
            }
        }
        VL_NULL_CHECK(this->__PVT__id_verbosities, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 292)->__VnoInFunc_exists(vlSymsp, id, __VlefCall_1__exists);
        if ((0U != __VlefCall_1__exists)) {
            VL_NULL_CHECK(this->__PVT__id_verbosities, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 293)->__VnoInFunc_get(vlSymsp, id, get_verbosity_level__Vfuncrtn);
            goto __Vlabel0;
        }
        get_verbosity_level__Vfuncrtn = this->__PVT__m_max_verbosity_level;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_action(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_action__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_action\n"); );
    // Body
    IData/*31:0*/ __VlefCall_1__exists;
    IData/*31:0*/ __VlefCall_0__exists;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz29> array;
    {
        get_action__Vfuncrtn = 0U;
        if (this->__PVT__severity_id_actions.exists(severity)) {
            array = this->__PVT__severity_id_actions
                .at(severity);
            VL_NULL_CHECK(array, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 315)->__VnoInFunc_exists(vlSymsp, id, __VlefCall_0__exists);
            if ((0U != __VlefCall_0__exists)) {
                VL_NULL_CHECK(array, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 316)->__VnoInFunc_get(vlSymsp, id, get_action__Vfuncrtn);
                goto __Vlabel0;
            }
        }
        VL_NULL_CHECK(this->__PVT__id_actions, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 319)->__VnoInFunc_exists(vlSymsp, id, __VlefCall_1__exists);
        if ((0U != __VlefCall_1__exists)) {
            VL_NULL_CHECK(this->__PVT__id_actions, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 320)->__VnoInFunc_get(vlSymsp, id, get_action__Vfuncrtn);
            goto __Vlabel0;
        }
        get_action__Vfuncrtn = this->__PVT__severity_actions
            .at((IData)(severity));
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_file_handle(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_file_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_file_handle\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__exists;
    IData/*31:0*/ file;
    {
        get_file_handle__Vfuncrtn = 0U;
        file = 0U;
        this->__VnoInFunc_get_severity_id_file(vlSymsp, severity, id, file);
        if ((0U != file)) {
            get_file_handle__Vfuncrtn = file;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 343)->__VnoInFunc_exists(vlSymsp, id, __VlefCall_0__exists);
        if ((0U != __VlefCall_0__exists)) {
            VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 344)->__VnoInFunc_get(vlSymsp, id, file);
            if ((0U != file)) {
                get_file_handle__Vfuncrtn = file;
                goto __Vlabel0;
            }
        }
        if (this->__PVT__severity_file_handles.exists(severity)) {
            file = this->__PVT__severity_file_handles
                .at((IData)(severity));
            if ((0U != file)) {
                get_file_handle__Vfuncrtn = file;
                goto __Vlabel0;
            }
        }
        get_file_handle__Vfuncrtn = this->__PVT__default_file_handle;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_report(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string name, std::string id, std::string message, IData/*31:0*/ verbosity_level, std::string filename, IData/*31:0*/ line, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> client) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_report\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__55__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__exists;
    IData/*31:0*/ __VlefCall_0__exists;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server> srvr;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, srvr);
    if ((VlNull{} == client)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__55__Vfuncout);
        client = __Vfunc_get__55__Vfuncout;
    }
    if (this->__PVT__sev_id_overrides.exists(id)) {
        VL_NULL_CHECK(this->__PVT__sev_id_overrides
                      .at(id), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 384)->__VnoInFunc_exists(vlSymsp, severity, __VlefCall_0__exists);
        if ((0U != __VlefCall_0__exists)) {
            VL_NULL_CHECK(this->__PVT__sev_id_overrides
                          .at(id), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 385)->__VnoInFunc_get(vlSymsp, severity, severity);
        }
    } else {
        VL_NULL_CHECK(this->__PVT__sev_overrides, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 389)->__VnoInFunc_exists(vlSymsp, severity, __VlefCall_1__exists);
        if ((0U != __VlefCall_1__exists)) {
            VL_NULL_CHECK(this->__PVT__sev_overrides, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 390)->__VnoInFunc_get(vlSymsp, severity, severity);
        }
    }
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 394)->__VnoInFunc_report(vlProcess, vlSymsp, severity, name, id, message, verbosity_level, filename, line, client);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_format_action(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ action, std::string &format_action__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_format_action\n"); );
    // Body
    std::string s;
    if ((0U == action)) {
        s = "NO ACTION"s;
    } else {
        s = ""s;
        if ((0U != (1U & action))) {
            s = VL_CONCATN_NNN(s, "DISPLAY "s);
        }
        if ((0U != (2U & action))) {
            s = VL_CONCATN_NNN(s, "LOG "s);
        }
        if ((0U != (4U & action))) {
            s = VL_CONCATN_NNN(s, "COUNT "s);
        }
        if ((0U != (8U & action))) {
            s = VL_CONCATN_NNN(s, "EXIT "s);
        }
        if ((0U != (0x00000010U & action))) {
            s = VL_CONCATN_NNN(s, "CALL_HOOK "s);
        }
        if ((0U != (0x00000020U & action))) {
            s = VL_CONCATN_NNN(s, "STOP "s);
        }
    }
    format_action__Vfuncrtn = s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_defaults(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_defaults\n"); );
    // Body
    this->__VnoInFunc_set_severity_action(vlSymsp, 0U, 1U);
    this->__VnoInFunc_set_severity_action(vlSymsp, 1U, 1U);
    this->__VnoInFunc_set_severity_action(vlSymsp, 2U, 5U);
    this->__VnoInFunc_set_severity_action(vlSymsp, 3U, 9U);
    this->__VnoInFunc_set_severity_file(vlSymsp, 0U, this->__PVT__default_file_handle);
    this->__VnoInFunc_set_severity_file(vlSymsp, 1U, this->__PVT__default_file_handle);
    this->__VnoInFunc_set_severity_file(vlSymsp, 2U, this->__PVT__default_file_handle);
    this->__VnoInFunc_set_severity_file(vlSymsp, 3U, this->__PVT__default_file_handle);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_action(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_action\n"); );
    // Body
    this->__PVT__severity_actions.atWrite((IData)(severity)) 
        = action;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_id_action(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_id_action\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__id_actions, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 454)->__VnoInFunc_add(vlSymsp, id, action);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_action(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_action\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz29> __VlefCall_0__new;
    if ((! this->__PVT__severity_id_actions.exists(severity))) {
        __VlefCall_0__new = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz29, vlProcess, vlSymsp, ""s);
        this->__PVT__severity_id_actions.atWrite(severity) 
            = __VlefCall_0__new;
    }
    VL_NULL_CHECK(this->__PVT__severity_id_actions.at(severity), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 462)->__VnoInFunc_add(vlSymsp, id, action);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_id_verbosity(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ verbosity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_id_verbosity\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__id_verbosities, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 466)->__VnoInFunc_add(vlSymsp, id, verbosity);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_verbosity(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ verbosity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_verbosity\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz29> __VlefCall_0__new;
    if ((! this->__PVT__severity_id_verbosities.exists(severity))) {
        __VlefCall_0__new = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz29, vlProcess, vlSymsp, ""s);
        this->__PVT__severity_id_verbosities.atWrite(severity) 
            = __VlefCall_0__new;
    }
    VL_NULL_CHECK(this->__PVT__severity_id_verbosities
                  .at(severity), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 474)->__VnoInFunc_add(vlSymsp, id, verbosity);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_default_file(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_default_file\n"); );
    // Body
    this->__PVT__default_file_handle = file;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_file(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_file\n"); );
    // Body
    this->__PVT__severity_file_handles.atWrite((IData)(severity)) 
        = file;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_id_file(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_id_file\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 493)->__VnoInFunc_add(vlSymsp, id, file);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_file(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_file\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz29> __VlefCall_0__new;
    if ((! this->__PVT__severity_id_file_handles.exists(severity))) {
        __VlefCall_0__new = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz29, vlProcess, vlSymsp, ""s);
        this->__PVT__severity_id_file_handles.atWrite(severity) 
            = __VlefCall_0__new;
    }
    VL_NULL_CHECK(this->__PVT__severity_id_file_handles
                  .at(severity), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 500)->__VnoInFunc_add(vlSymsp, id, file);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_override(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ cur_severity, CData/*1:0*/ new_severity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_override\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__sev_overrides, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 505)->__VnoInFunc_add(vlSymsp, cur_severity, (IData)(new_severity));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_override(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ cur_severity, std::string id, CData/*1:0*/ new_severity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_override\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz30_TBz30> __VlefCall_0__new;
    if ((! this->__PVT__sev_id_overrides.exists(id))) {
        __VlefCall_0__new = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz30_TBz30, vlProcess, vlSymsp, ""s);
        this->__PVT__sev_id_overrides.atWrite(id) = __VlefCall_0__new;
    }
    VL_NULL_CHECK(this->__PVT__sev_id_overrides.at(id), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 517)->__VnoInFunc_add(vlSymsp, cur_severity, (IData)(new_severity));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_dump_state(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_dump_state\n"); );
    // Locals
    IData/*31:0*/ __Vtask_first__92__Vfuncout;
    __Vtask_first__92__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__95__Vfuncout;
    __Vtask_next__95__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__98__Vfuncout;
    __Vtask_first__98__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__101__Vfuncout;
    __Vtask_next__101__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__112__Vfuncout;
    __Vtask_first__112__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__116__Vfuncout;
    __Vtask_next__116__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__119__Vfuncout;
    __Vtask_first__119__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__123__Vfuncout;
    __Vtask_next__123__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__135__Vfuncout;
    __Vtask_first__135__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__138__Vfuncout;
    __Vtask_next__138__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__141__Vfuncout;
    __Vtask_first__141__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__144__Vfuncout;
    __Vtask_next__144__Vfuncout = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_17__next;
    IData/*31:0*/ __VlefCall_16__get;
    IData/*31:0*/ __VlefCall_15__first;
    IData/*31:0*/ __VlefCall_14__next;
    IData/*31:0*/ __VlefCall_13__first;
    IData/*31:0*/ __VlefCall_12__next;
    std::string __VlefCall_11__format_action;
    IData/*31:0*/ __VlefCall_10__get;
    IData/*31:0*/ __VlefCall_9__first;
    IData/*31:0*/ __VlefCall_8__next;
    std::string __VlefCall_7__format_action;
    IData/*31:0*/ __VlefCall_6__get;
    IData/*31:0*/ __VlefCall_5__first;
    std::string __VlefCall_4__format_action;
    IData/*31:0*/ __VlefCall_3__next;
    IData/*31:0*/ __VlefCall_2__first;
    IData/*31:0*/ __VlefCall_1__next;
    IData/*31:0*/ __VlefCall_0__first;
    IData/*31:0*/ unnamedblk2__DOT__v;
    CData/*1:0*/ unnamedblk3__DOT__severity;
    unnamedblk3__DOT__severity = 0;
    CData/*1:0*/ unnamedblk3__DOT__severity__Vnext;
    unnamedblk3__DOT__severity__Vnext = 0;
    CData/*0:0*/ unnamedblk3__DOT__severity__Vmore;
    unnamedblk3__DOT__severity__Vmore = 0;
    CData/*1:0*/ unnamedblk3__DOT__unnamedblk4__DOT__sev;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__v;
    CData/*1:0*/ unnamedblk6__DOT__severity;
    unnamedblk6__DOT__severity = 0;
    CData/*1:0*/ unnamedblk6__DOT__severity__Vnext;
    unnamedblk6__DOT__severity__Vnext = 0;
    CData/*0:0*/ unnamedblk6__DOT__severity__Vmore;
    unnamedblk6__DOT__severity__Vmore = 0;
    CData/*1:0*/ unnamedblk6__DOT__unnamedblk7__DOT__sev;
    CData/*1:0*/ unnamedblk8__DOT__severity;
    unnamedblk8__DOT__severity = 0;
    CData/*1:0*/ unnamedblk8__DOT__severity__Vnext;
    unnamedblk8__DOT__severity__Vnext = 0;
    CData/*0:0*/ unnamedblk8__DOT__severity__Vmore;
    unnamedblk8__DOT__severity__Vmore = 0;
    CData/*1:0*/ unnamedblk8__DOT__unnamedblk9__DOT__sev;
    CData/*1:0*/ unnamedblk10__DOT__severity;
    unnamedblk10__DOT__severity = 0;
    CData/*1:0*/ unnamedblk10__DOT__severity__Vnext;
    unnamedblk10__DOT__severity__Vnext = 0;
    CData/*0:0*/ unnamedblk10__DOT__severity__Vmore;
    unnamedblk10__DOT__severity__Vmore = 0;
    CData/*1:0*/ unnamedblk10__DOT__unnamedblk11__DOT__sev;
    CData/*1:0*/ unnamedblk12__DOT__severity;
    unnamedblk12__DOT__severity = 0;
    CData/*1:0*/ unnamedblk12__DOT__severity__Vnext;
    unnamedblk12__DOT__severity__Vnext = 0;
    CData/*0:0*/ unnamedblk12__DOT__severity__Vmore;
    unnamedblk12__DOT__severity__Vmore = 0;
    CData/*1:0*/ unnamedblk12__DOT__unnamedblk13__DOT__sev;
    std::string s;
    std::string idx;
    IData/*31:0*/ file;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server> srvr;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz29> id_a_ary;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz29> id_v_ary;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz29> id_f_ary;
    s = ""s;
    idx = ""s;
    file = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, srvr);
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 539)->__VnoInFunc_f_display(vlSymsp, 0U, "----------------------------------------------------------------------"s);
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 541)->__VnoInFunc_f_display(vlSymsp, 0U, "report handler state dump"s);
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 542)->__VnoInFunc_f_display(vlSymsp, 0U, ""s);
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 546)->__VnoInFunc_f_display(vlSymsp, 0U, ""s);
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 547)->__VnoInFunc_f_display(vlSymsp, 0U, "+-----------------+"s);
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 548)->__VnoInFunc_f_display(vlSymsp, 0U, "|   Verbosities   |"s);
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 549)->__VnoInFunc_f_display(vlSymsp, 0U, "+-----------------+"s);
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 550)->__VnoInFunc_f_display(vlSymsp, 0U, ""s);
    VL_SFORMAT_NX(s,"max verbosity level = %d",1, '~',32,this->__PVT__m_max_verbosity_level);
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 553)->__VnoInFunc_f_display(vlSymsp, 0U, s);
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 555)->__VnoInFunc_f_display(vlSymsp, 0U, "*** verbosities by id"s);
    VL_NULL_CHECK(this->__PVT__id_verbosities, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 557)->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__92__Vfuncout);
    __VlefCall_0__first = __Vtask_first__92__Vfuncout;
    if ((0U != __VlefCall_0__first)) {
        do {
            VL_NULL_CHECK(this->__PVT__id_verbosities, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 559)->__VnoInFunc_get(vlSymsp, idx, unnamedblk2__DOT__v);
            __Vtemp_1 = Vcsi2_tb_top___024unit::__Venumtab_enum_name25
                .at(unnamedblk2__DOT__v);
            VL_SFORMAT_NX(s,"[%s] --> %s",2, 'S',&(idx)
                          , 'S',&(__Vtemp_1));
            VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 561)->__VnoInFunc_f_display(vlSymsp, 0U, s);
            VL_NULL_CHECK(this->__PVT__id_verbosities, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 562)->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__95__Vfuncout);
            __VlefCall_1__next = __Vtask_next__95__Vfuncout;
        } while ((0U != __VlefCall_1__next));
    }
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 566)->__VnoInFunc_f_display(vlSymsp, 0U, ""s);
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 567)->__VnoInFunc_f_display(vlSymsp, 0U, "*** verbosities by id and severity"s);
    unnamedblk3__DOT__severity__Vmore = (0U != this->__PVT__severity_id_verbosities.first(unnamedblk3__DOT__severity__Vnext));
    while (unnamedblk3__DOT__severity__Vmore) {
        unnamedblk3__DOT__severity = unnamedblk3__DOT__severity__Vnext;
        unnamedblk3__DOT__severity__Vmore = (0U != this->__PVT__severity_id_verbosities.next(unnamedblk3__DOT__severity__Vnext));
        unnamedblk3__DOT__unnamedblk4__DOT__sev = unnamedblk3__DOT__severity;
        id_v_ary = this->__PVT__severity_id_verbosities
            .at(unnamedblk3__DOT__severity);
        VL_NULL_CHECK(id_v_ary, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 572)->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__98__Vfuncout);
        __VlefCall_2__first = __Vtask_first__98__Vfuncout;
        if ((0U != __VlefCall_2__first)) {
            do {
                VL_NULL_CHECK(id_v_ary, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 574)->__VnoInFunc_get(vlSymsp, idx, unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__v);
                __Vtemp_2 = Vcsi2_tb_top___024unit::__Venumtab_enum_name21
                    [unnamedblk3__DOT__unnamedblk4__DOT__sev];
                __Vtemp_3 = Vcsi2_tb_top___024unit::__Venumtab_enum_name25
                    .at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__v);
                VL_SFORMAT_NX(s,"%s:%s --> %s",3, 'S',&(__Vtemp_2)
                              , 'S',&(idx), 'S',&(__Vtemp_3));
                VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 577)->__VnoInFunc_f_display(vlSymsp, 0U, s);
                VL_NULL_CHECK(id_v_ary, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 578)->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__101__Vfuncout);
                __VlefCall_3__next = __Vtask_next__101__Vfuncout;
            } while ((0U != __VlefCall_3__next));
        }
    }
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 583)->__VnoInFunc_f_display(vlSymsp, 0U, ""s);
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 584)->__VnoInFunc_f_display(vlSymsp, 0U, "+-------------+"s);
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 585)->__VnoInFunc_f_display(vlSymsp, 0U, "|   actions   |"s);
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 586)->__VnoInFunc_f_display(vlSymsp, 0U, "+-------------+"s);
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 587)->__VnoInFunc_f_display(vlSymsp, 0U, ""s);
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 589)->__VnoInFunc_f_display(vlSymsp, 0U, "*** actions by severity"s);
    unnamedblk6__DOT__severity__Vmore = (0U != this->__PVT__severity_actions.first(unnamedblk6__DOT__severity__Vnext));
    while (unnamedblk6__DOT__severity__Vmore) {
        unnamedblk6__DOT__severity = unnamedblk6__DOT__severity__Vnext;
        unnamedblk6__DOT__severity__Vmore = (0U != this->__PVT__severity_actions.next(unnamedblk6__DOT__severity__Vnext));
        unnamedblk6__DOT__unnamedblk7__DOT__sev = unnamedblk6__DOT__severity;
        this->__VnoInFunc_format_action(vlSymsp, this->__PVT__severity_actions
                                        .at((IData)(unnamedblk6__DOT__severity)), __VlefCall_4__format_action);
        __Vtemp_4 = Vcsi2_tb_top___024unit::__Venumtab_enum_name21
            [unnamedblk6__DOT__unnamedblk7__DOT__sev];
        VL_SFORMAT_NX(s,"%s = %s",2, 'S',&(__Vtemp_4)
                      , 'S',&(__VlefCall_4__format_action));
        VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 594)->__VnoInFunc_f_display(vlSymsp, 0U, s);
    }
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 597)->__VnoInFunc_f_display(vlSymsp, 0U, ""s);
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 598)->__VnoInFunc_f_display(vlSymsp, 0U, "*** actions by id"s);
    VL_NULL_CHECK(this->__PVT__id_actions, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 600)->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__112__Vfuncout);
    __VlefCall_5__first = __Vtask_first__112__Vfuncout;
    if ((0U != __VlefCall_5__first)) {
        do {
            VL_NULL_CHECK(this->__PVT__id_actions, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 602)->__VnoInFunc_get(vlSymsp, idx, __VlefCall_6__get);
            this->__VnoInFunc_format_action(vlSymsp, __VlefCall_6__get, __VlefCall_7__format_action);
            VL_SFORMAT_NX(s,"[%s] --> %s",2, 'S',&(idx)
                          , 'S',&(__VlefCall_7__format_action));
            VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 603)->__VnoInFunc_f_display(vlSymsp, 0U, s);
            VL_NULL_CHECK(this->__PVT__id_actions, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 604)->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__116__Vfuncout);
            __VlefCall_8__next = __Vtask_next__116__Vfuncout;
        } while ((0U != __VlefCall_8__next));
    }
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 608)->__VnoInFunc_f_display(vlSymsp, 0U, ""s);
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 609)->__VnoInFunc_f_display(vlSymsp, 0U, "*** actions by id and severity"s);
    unnamedblk8__DOT__severity__Vmore = (0U != this->__PVT__severity_id_actions.first(unnamedblk8__DOT__severity__Vnext));
    while (unnamedblk8__DOT__severity__Vmore) {
        unnamedblk8__DOT__severity = unnamedblk8__DOT__severity__Vnext;
        unnamedblk8__DOT__severity__Vmore = (0U != this->__PVT__severity_id_actions.next(unnamedblk8__DOT__severity__Vnext));
        unnamedblk8__DOT__unnamedblk9__DOT__sev = unnamedblk8__DOT__severity;
        id_a_ary = this->__PVT__severity_id_actions
            .at(unnamedblk8__DOT__severity);
        VL_NULL_CHECK(id_a_ary, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 614)->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__119__Vfuncout);
        __VlefCall_9__first = __Vtask_first__119__Vfuncout;
        if ((0U != __VlefCall_9__first)) {
            do {
                VL_NULL_CHECK(id_a_ary, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 617)->__VnoInFunc_get(vlSymsp, idx, __VlefCall_10__get);
                this->__VnoInFunc_format_action(vlSymsp, __VlefCall_10__get, __VlefCall_11__format_action);
                __Vtemp_5 = Vcsi2_tb_top___024unit::__Venumtab_enum_name21
                    [unnamedblk8__DOT__unnamedblk9__DOT__sev];
                VL_SFORMAT_NX(s,"%s:%s --> %s",3, 'S',&(__Vtemp_5)
                              , 'S',&(idx), 'S',&(__VlefCall_11__format_action));
                VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 618)->__VnoInFunc_f_display(vlSymsp, 0U, s);
                VL_NULL_CHECK(id_a_ary, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 619)->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__123__Vfuncout);
                __VlefCall_12__next = __Vtask_next__123__Vfuncout;
            } while ((0U != __VlefCall_12__next));
        }
    }
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 624)->__VnoInFunc_f_display(vlSymsp, 0U, ""s);
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 625)->__VnoInFunc_f_display(vlSymsp, 0U, "+-------------+"s);
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 626)->__VnoInFunc_f_display(vlSymsp, 0U, "|    files    |"s);
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 627)->__VnoInFunc_f_display(vlSymsp, 0U, "+-------------+"s);
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 628)->__VnoInFunc_f_display(vlSymsp, 0U, ""s);
    VL_SFORMAT_NX(s,"default file handle = %d",1, '~',32,this->__PVT__default_file_handle);
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 631)->__VnoInFunc_f_display(vlSymsp, 0U, s);
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 633)->__VnoInFunc_f_display(vlSymsp, 0U, ""s);
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 634)->__VnoInFunc_f_display(vlSymsp, 0U, "*** files by severity"s);
    unnamedblk10__DOT__severity__Vmore = (0U != this->__PVT__severity_file_handles.first(unnamedblk10__DOT__severity__Vnext));
    while (unnamedblk10__DOT__severity__Vmore) {
        unnamedblk10__DOT__severity = unnamedblk10__DOT__severity__Vnext;
        unnamedblk10__DOT__severity__Vmore = (0U != this->__PVT__severity_file_handles.next(unnamedblk10__DOT__severity__Vnext));
        unnamedblk10__DOT__unnamedblk11__DOT__sev = unnamedblk10__DOT__severity;
        file = this->__PVT__severity_file_handles.at((IData)(unnamedblk10__DOT__severity));
        __Vtemp_6 = Vcsi2_tb_top___024unit::__Venumtab_enum_name21
            [unnamedblk10__DOT__unnamedblk11__DOT__sev];
        VL_SFORMAT_NX(s,"%s = %d",2, 'S',&(__Vtemp_6)
                      , '~',32,file);
        VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 639)->__VnoInFunc_f_display(vlSymsp, 0U, s);
    }
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 642)->__VnoInFunc_f_display(vlSymsp, 0U, ""s);
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 643)->__VnoInFunc_f_display(vlSymsp, 0U, "*** files by id"s);
    VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 645)->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__135__Vfuncout);
    __VlefCall_13__first = __Vtask_first__135__Vfuncout;
    if ((0U != __VlefCall_13__first)) {
        do {
            VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 647)->__VnoInFunc_get(vlSymsp, idx, file);
            VL_SFORMAT_NX(s,"id %s --> %d",2, 'S',&(idx)
                          , '~',32,file);
            VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 649)->__VnoInFunc_f_display(vlSymsp, 0U, s);
            VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 650)->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__138__Vfuncout);
            __VlefCall_14__next = __Vtask_next__138__Vfuncout;
        } while ((0U != __VlefCall_14__next));
    }
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 652)->__VnoInFunc_f_display(vlSymsp, 0U, ""s);
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 653)->__VnoInFunc_f_display(vlSymsp, 0U, "*** files by id and severity"s);
    unnamedblk12__DOT__severity__Vmore = (0U != this->__PVT__severity_id_file_handles.first(unnamedblk12__DOT__severity__Vnext));
    while (unnamedblk12__DOT__severity__Vmore) {
        unnamedblk12__DOT__severity = unnamedblk12__DOT__severity__Vnext;
        unnamedblk12__DOT__severity__Vmore = (0U != this->__PVT__severity_id_file_handles.next(unnamedblk12__DOT__severity__Vnext));
        unnamedblk12__DOT__unnamedblk13__DOT__sev = unnamedblk12__DOT__severity;
        id_f_ary = this->__PVT__severity_id_file_handles
            .at(unnamedblk12__DOT__severity);
        VL_NULL_CHECK(id_f_ary, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 658)->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__141__Vfuncout);
        __VlefCall_15__first = __Vtask_first__141__Vfuncout;
        if ((0U != __VlefCall_15__first)) {
            do {
                VL_NULL_CHECK(id_f_ary, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 660)->__VnoInFunc_get(vlSymsp, idx, __VlefCall_16__get);
                __Vtemp_7 = Vcsi2_tb_top___024unit::__Venumtab_enum_name21
                    [unnamedblk12__DOT__unnamedblk13__DOT__sev];
                VL_SFORMAT_NX(s,"%s:%s --> %d",3, 'S',&(__Vtemp_7)
                              , 'S',&(idx), '~',32,__VlefCall_16__get);
                VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 661)->__VnoInFunc_f_display(vlSymsp, 0U, s);
                VL_NULL_CHECK(id_f_ary, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 662)->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__144__Vfuncout);
                __VlefCall_17__next = __Vtask_next__144__Vfuncout;
            } while ((0U != __VlefCall_17__next));
        }
    }
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 665)->__VnoInFunc_dump_server_state(vlSymsp);
    VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_handler.svh", 667)->__VnoInFunc_f_display(vlSymsp, 0U, "----------------------------------------------------------------------"s);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_max_verbosity_level = 0;
    __PVT__severity_actions.atDefault() = 0;
    __PVT__default_file_handle = 0;
    __PVT__severity_file_handles.atDefault() = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler::~\n"); );
}
