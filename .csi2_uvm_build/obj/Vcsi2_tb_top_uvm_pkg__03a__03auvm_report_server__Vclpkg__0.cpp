// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server__Vclpkg::__VnoInFunc_set_server(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server> server) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server__Vclpkg::__VnoInFunc_set_server\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__get_quit_count;
    IData/*31:0*/ __VlefCall_0__get_max_quit_count;
    if ((VlNull{} != this->__PVT__m_global_report_server)) {
        VL_NULL_CHECK(this->__PVT__m_global_report_server, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_server.svh", 83)->__VnoInFunc_get_max_quit_count(vlSymsp, __VlefCall_0__get_max_quit_count);
        VL_NULL_CHECK(server, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_server.svh", 83)->__VnoInFunc_set_max_quit_count(vlProcess, vlSymsp, __VlefCall_0__get_max_quit_count, 1U);
        VL_NULL_CHECK(this->__PVT__m_global_report_server, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_server.svh", 84)->__VnoInFunc_get_quit_count(vlSymsp, __VlefCall_1__get_quit_count);
        VL_NULL_CHECK(server, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_server.svh", 84)->__VnoInFunc_set_quit_count(vlSymsp, __VlefCall_1__get_quit_count);
        VL_NULL_CHECK(this->__PVT__m_global_report_server, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_server.svh", 85)->__VnoInFunc_copy_severity_counts(vlSymsp, server);
        VL_NULL_CHECK(this->__PVT__m_global_report_server, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_server.svh", 86)->__VnoInFunc_copy_id_counts(vlSymsp, server);
    }
    this->__PVT__m_global_report_server = server;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server__Vclpkg::__VnoInFunc_get_server(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server> &get_server__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server__Vclpkg::__VnoInFunc_get_server\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__PVT__m_global_report_server)) {
        this->__PVT__m_global_report_server = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server, vlProcess, vlSymsp);
    }
    get_server__Vfuncrtn = this->__PVT__m_global_report_server;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_report_server"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, ""s);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__enable_report_id_count_summary = 1U;
    this->__PVT__m_max_quit_overridable = 1U;
    /*super.new*/;
    this->__VnoInFunc_set_name(vlProcess, vlSymsp, "uvm_report_server"s);
    this->__VnoInFunc_set_max_quit_count(vlProcess, vlSymsp, 0U, 1U);
    {
        // Inlined CFunc: __VnoInFunc_reset_quit_count
        this->__PVT__quit_count = 0U;
    }
    {
        // Inlined CFunc: __VnoInFunc_reset_severity_counts
        CData/*1:0*/ __Vinline_0___VnoInFunc_reset_severity_counts_s;
        __Vinline_0___VnoInFunc_reset_severity_counts_s = 0U;
        {
            while (true) {
                this->__PVT__severity_count.atWrite((IData)(__Vinline_0___VnoInFunc_reset_severity_counts_s)) = 0U;
                if ((3U == (IData)(__Vinline_0___VnoInFunc_reset_severity_counts_s))) {
                    goto __Vlabel0;
                }
                __Vinline_0___VnoInFunc_reset_severity_counts_s 
                    = Vcsi2_tb_top___024unit::__Venumtab_enum_next21
                    [__Vinline_0___VnoInFunc_reset_severity_counts_s];
            }
            __Vlabel0: ;
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_max_quit_count(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ count, CData/*0:0*/ overridable) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_max_quit_count\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_info__5__verbosity;
    __Vtask_uvm_report_info__5__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__5__line;
    __Vtask_uvm_report_info__5__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__6__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    {
        if ((1U & (~ (IData)(this->__PVT__m_max_quit_overridable)))) {
            __Vtask_uvm_report_info__5__line = 0U;
            this->__Vtask_uvm_report_info__5__filename = ""s;
            __Vtask_uvm_report_info__5__verbosity = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__5__message
                          ,"The max quit count setting of %0d is not overridable to %0d due to a previous setting.",2
                          , '~',32,this->__PVT__max_quit_count
                          , '~',32,count);
            this->__Vtask_uvm_report_info__5__id = "NOMAXQUITOVR"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__6__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vfunc_get__6__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__5__id, this->__Vtask_uvm_report_info__5__message, __Vtask_uvm_report_info__5__verbosity, this->__Vtask_uvm_report_info__5__filename, __Vtask_uvm_report_info__5__line);
            goto __Vlabel0;
        }
        this->__PVT__m_max_quit_overridable = overridable;
        this->__PVT__max_quit_count = (VL_GTS_III(32, 0U, count)
                                        ? 0U : count);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_max_quit_count(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_quit_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_max_quit_count\n"); );
    // Body
    get_max_quit_count__Vfuncrtn = this->__PVT__max_quit_count;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_quit_count(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ quit_count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_quit_count\n"); );
    // Body
    quit_count = (VL_GTS_III(32, 0U, quit_count) ? 0U
                   : quit_count);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_quit_count(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_quit_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_quit_count\n"); );
    // Body
    get_quit_count__Vfuncrtn = this->__PVT__quit_count;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_incr_quit_count(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_incr_quit_count\n"); );
    // Body
    this->__PVT__quit_count = ((IData)(1U) + this->__PVT__quit_count);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_reset_quit_count(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_reset_quit_count\n"); );
    // Body
    this->__PVT__quit_count = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_is_quit_count_reached(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_quit_count_reached__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_is_quit_count_reached\n"); );
    // Body
    is_quit_count_reached__Vfuncrtn = VL_GTES_III(32, this->__PVT__quit_count, this->__PVT__max_quit_count);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_severity_count(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_severity_count\n"); );
    // Body
    this->__PVT__severity_count.atWrite((IData)(severity)) 
        = (VL_GTS_III(32, 0U, count) ? 0U : count);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_severity_count(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ &get_severity_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_severity_count\n"); );
    // Body
    get_severity_count__Vfuncrtn = this->__PVT__severity_count
        .at((IData)(severity));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_incr_severity_count(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_incr_severity_count\n"); );
    // Body
    this->__PVT__severity_count.atWrite((IData)(severity)) 
        = ((IData)(1U) + this->__PVT__severity_count
           .at((IData)(severity)));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_reset_severity_counts(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_reset_severity_counts\n"); );
    // Body
    CData/*1:0*/ s;
    s = 0U;
    {
        while (true) {
            this->__PVT__severity_count.atWrite((IData)(s)) = 0U;
            if ((3U == (IData)(s))) {
                goto __Vlabel0;
            }
            s = Vcsi2_tb_top___024unit::__Venumtab_enum_next21
                [s];
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_id_count(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_id_count\n"); );
    // Body
    this->__PVT__id_count.atWrite(id) = (VL_GTS_III(32, 0U, count)
                                          ? 0U : count);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_id_count(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ &get_id_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_id_count\n"); );
    // Body
    {
        get_id_count__Vfuncrtn = 0U;
        if (this->__PVT__id_count.exists(id)) {
            get_id_count__Vfuncrtn = this->__PVT__id_count
                .at(id);
            goto __Vlabel0;
        }
        get_id_count__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_incr_id_count(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_incr_id_count\n"); );
    // Body
    if (this->__PVT__id_count.exists(id)) {
        this->__PVT__id_count.atWrite(id) = ((IData)(1U) 
                                             + this->__PVT__id_count
                                             .at(id));
    } else {
        this->__PVT__id_count.atWrite(id) = 1U;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_f_display(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ file, std::string str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_f_display\n"); );
    // Body
    if ((0U == file)) {
        VL_WRITEF_NX("%s\n",1, 'S',&(str));
    } else {
        VL_FWRITEF_NX(file,"%s\n",1, 'S',&(str));
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_report(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string name, std::string id, std::string message, IData/*31:0*/ verbosity_level, std::string filename, IData/*31:0*/ line, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> client) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_report\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_process_all_report_catchers__13__Vfuncout;
    __Vfunc_process_all_report_catchers__13__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__process_all_report_catchers;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    std::string m;
    IData/*31:0*/ a;
    IData/*31:0*/ f;
    CData/*0:0*/ report_ok;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler> rh;
    {
        m = ""s;
        a = 0U;
        f = 0U;
        report_ok = 0U;
        VL_NULL_CHECK(client, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_server.svh", 258)->__VnoInFunc_get_report_handler(vlSymsp, rh);
        VL_NULL_CHECK(client, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_server.svh", 262)->__VnoInFunc_uvm_report_enabled(vlSymsp, verbosity_level, (IData)(severity), id, __VlefCall_0__uvm_report_enabled);
        if ((1U & (~ (0U != __VlefCall_0__uvm_report_enabled)))) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_server.svh", 268)->__VnoInFunc_get_action(vlSymsp, severity, id, a);
        if ((0U == a)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_server.svh", 272)->__VnoInFunc_get_file_handle(vlSymsp, severity, id, f);
        if ((0U != (0x00000010U & a))) {
            VL_NULL_CHECK(rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_server.svh", 279)->__VnoInFunc_run_hooks(vlSymsp, client, severity, id, message, verbosity_level, filename, line, report_ok);
        } else {
            report_ok = 1U;
        }
        if (report_ok) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__VnoInFunc_process_all_report_catchers(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server>{this}, client, severity, name, id, message, verbosity_level, a, filename, line, __Vfunc_process_all_report_catchers__13__Vfuncout);
            __VlefCall_1__process_all_report_catchers 
                = __Vfunc_process_all_report_catchers__13__Vfuncout;
            report_ok = (1U & __VlefCall_1__process_all_report_catchers);
        }
        if (report_ok) {
            this->__VnoInFunc_compose_message(vlSymsp, severity, name, id, message, filename, line, m);
            this->__VnoInFunc_process_report(vlProcess, vlSymsp, severity, name, id, message, a, f, filename, line, m, verbosity_level, client);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_process_report(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string name, std::string id, std::string message, IData/*31:0*/ action, IData/*31:0*/ file, std::string filename, IData/*31:0*/ line, std::string composed_message, IData/*31:0*/ verbosity_level, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> client) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_process_report\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_1__is_quit_count_reached;
    IData/*31:0*/ __VlefCall_0__get_max_quit_count;
    IData/*31:0*/ unnamedblk1__DOT__tmp_file;
    this->__VnoInFunc_incr_severity_count(vlSymsp, severity);
    this->__VnoInFunc_incr_id_count(vlSymsp, id);
    if (VL_UNLIKELY(((0U != (1U & action))))) {
        VL_WRITEF_NX("%s\n",1, 'S',&(composed_message));
    }
    if ((0U != (2U & action))) {
        if (((0U == file) | (0x80000001U != file))) {
            unnamedblk1__DOT__tmp_file = file;
            if ((0U == (0x80000000U & file))) {
                unnamedblk1__DOT__tmp_file = (0xfffffffeU 
                                              & file);
            }
            this->__VnoInFunc_f_display(vlSymsp, unnamedblk1__DOT__tmp_file, composed_message);
        }
    }
    if ((0U != (8U & action))) {
        VL_NULL_CHECK(client, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_server.svh", 342)->__VnoInFunc_die(vlProcess, vlSymsp);
    }
    if ((0U != (4U & action))) {
        this->__VnoInFunc_get_max_quit_count(vlSymsp, __VlefCall_0__get_max_quit_count);
        if ((0U != __VlefCall_0__get_max_quit_count)) {
            {
                // Inlined CFunc: __VnoInFunc_incr_quit_count
                this->__PVT__quit_count = ((IData)(1U) 
                                           + this->__PVT__quit_count);
            }
            this->__VnoInFunc_is_quit_count_reached(vlSymsp, __VlefCall_1__is_quit_count_reached);
            if (__VlefCall_1__is_quit_count_reached) {
                VL_NULL_CHECK(client, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_server.svh", 348)->__VnoInFunc_die(vlProcess, vlSymsp);
            }
        }
    }
    if (VL_UNLIKELY(((0U != (0x00000020U & action))))) {
        VL_STOP_MT("/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_server.svh", 353, "");
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_compose_message(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string name, std::string id, std::string message, std::string filename, IData/*31:0*/ line, std::string &compose_message__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_compose_message\n"); );
    // Body
    CData/*1:0*/ sv;
    std::string time_str;
    std::string line_str;
    compose_message__Vfuncrtn = ""s;
    line_str = ""s;
    sv = severity;
    VL_SFORMAT_NX(time_str,"%0t",2, 'T',-9, 'D',VL_TIME_UNITED_D(1000));
    if (((""s == name) & (""s == filename))) {
        compose_message__Vfuncrtn = VL_CONCATN_NNN(
                                                   VL_CONCATN_NNN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(Vcsi2_tb_top___024unit::__Venumtab_enum_name21
                                                                                [sv], " @ "s), time_str), " ["s), id), "] "s), message);
    } else if (((""s != name) & (""s == filename))) {
        compose_message__Vfuncrtn = VL_CONCATN_NNN(
                                                   VL_CONCATN_NNN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(Vcsi2_tb_top___024unit::__Venumtab_enum_name21
                                                                                [sv], " @ "s), time_str), ": "s), name), " ["s), id), "] "s), message);
    } else if (((""s == name) & (""s != filename))) {
        VL_SFORMAT_NX(line_str,"%0d",1, '~',32,line);
        compose_message__Vfuncrtn = VL_CONCATN_NNN(
                                                   VL_CONCATN_NNN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(Vcsi2_tb_top___024unit::__Venumtab_enum_name21
                                                                                [sv], " "s), filename), "("s), line_str), ")"s), " @ "s), time_str), " ["s), id), "] "s), message);
    } else if (((""s != name) & (""s != filename))) {
        VL_SFORMAT_NX(line_str,"%0d",1, '~',32,line);
        compose_message__Vfuncrtn = VL_CONCATN_NNN(
                                                   VL_CONCATN_NNN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(Vcsi2_tb_top___024unit::__Venumtab_enum_name21
                                                                                [sv], " "s), filename), "("s), line_str), ")"s), " @ "s), time_str), ": "s), name), " ["s), id), "] "s), message);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_summarize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_summarize\n"); );
    // Body
    CData/*1:0*/ unnamedblk2__DOT__s;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__cnt;
    IData/*31:0*/ unnamedblk4__DOT__found;
    IData/*31:0*/ unnamedblk4__DOT__unnamedblk5__DOT__cnt;
    std::string id;
    std::string name;
    std::string output_str;
    id = ""s;
    name = ""s;
    output_str = ""s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__VnoInFunc_summarize_report_catcher(vlSymsp, file);
    this->__VnoInFunc_f_display(vlSymsp, file, ""s);
    this->__VnoInFunc_f_display(vlSymsp, file, "--- UVM Report Summary ---"s);
    this->__VnoInFunc_f_display(vlSymsp, file, ""s);
    if ((0U != this->__PVT__max_quit_count)) {
        if (VL_GTES_III(32, this->__PVT__quit_count, this->__PVT__max_quit_count)) {
            this->__VnoInFunc_f_display(vlSymsp, file, "Quit count reached!"s);
        }
        VL_SFORMAT_NX(output_str,"Quit count : %5d of %5d",2
                      , '~',32,this->__PVT__quit_count
                      , '~',32,this->__PVT__max_quit_count);
        this->__VnoInFunc_f_display(vlSymsp, file, output_str);
    }
    this->__VnoInFunc_f_display(vlSymsp, file, "** Report counts by severity"s);
    unnamedblk2__DOT__s = 0U;
    unnamedblk2__DOT__s = 0U;
    {
        while (true) {
            if (this->__PVT__severity_count.exists(unnamedblk2__DOT__s)) {
                unnamedblk2__DOT__unnamedblk3__DOT__cnt = 0U;
                unnamedblk2__DOT__unnamedblk3__DOT__cnt 
                    = this->__PVT__severity_count.at((IData)(unnamedblk2__DOT__s));
                name = Vcsi2_tb_top___024unit::__Venumtab_enum_name21
                    [unnamedblk2__DOT__s];
                VL_SFORMAT_NX(output_str,"%s :%5d",2
                              , 'S',&(name), '~',32,unnamedblk2__DOT__unnamedblk3__DOT__cnt);
                this->__VnoInFunc_f_display(vlSymsp, file, output_str);
            }
            if ((3U == (IData)(unnamedblk2__DOT__s))) {
                goto __Vlabel0;
            }
            unnamedblk2__DOT__s = Vcsi2_tb_top___024unit::__Venumtab_enum_next21
                [unnamedblk2__DOT__s];
        }
        __Vlabel0: ;
    }
    if (this->__PVT__enable_report_id_count_summary) {
        this->__VnoInFunc_f_display(vlSymsp, file, "** Report counts by id"s);
        unnamedblk4__DOT__found = 0U;
        unnamedblk4__DOT__found = this->__PVT__id_count.first(id);
        while ((0U != unnamedblk4__DOT__found)) {
            unnamedblk4__DOT__unnamedblk5__DOT__cnt = 0U;
            unnamedblk4__DOT__unnamedblk5__DOT__cnt 
                = this->__PVT__id_count.at(id);
            VL_SFORMAT_NX(output_str,"[%s] %5d",2, 'S',&(id)
                          , '~',32,unnamedblk4__DOT__unnamedblk5__DOT__cnt);
            this->__VnoInFunc_f_display(vlSymsp, file, output_str);
            unnamedblk4__DOT__found = this->__PVT__id_count.next(id);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_dump_server_state(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_dump_server_state\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    IData/*31:0*/ unnamedblk6__DOT__cnt;
    IData/*31:0*/ unnamedblk7__DOT__cnt;
    std::string s;
    CData/*1:0*/ sev;
    std::string id;
    s = ""s;
    sev = 0U;
    id = ""s;
    this->__VnoInFunc_f_display(vlSymsp, 0U, "report server state"s);
    this->__VnoInFunc_f_display(vlSymsp, 0U, ""s);
    this->__VnoInFunc_f_display(vlSymsp, 0U, "+-------------+"s);
    this->__VnoInFunc_f_display(vlSymsp, 0U, "|   counts    |"s);
    this->__VnoInFunc_f_display(vlSymsp, 0U, "+-------------+"s);
    this->__VnoInFunc_f_display(vlSymsp, 0U, ""s);
    VL_SFORMAT_NX(s,"max quit count = %5d",1, '~',32,this->__PVT__max_quit_count);
    this->__VnoInFunc_f_display(vlSymsp, 0U, s);
    VL_SFORMAT_NX(s,"quit count = %5d",1, '~',32,this->__PVT__quit_count);
    this->__VnoInFunc_f_display(vlSymsp, 0U, s);
    sev = 0U;
    {
        while (true) {
            unnamedblk6__DOT__cnt = 0U;
            unnamedblk6__DOT__cnt = this->__PVT__severity_count
                .at((IData)(sev));
            s = Vcsi2_tb_top___024unit::__Venumtab_enum_name21
                [sev];
            VL_SFORMAT_NX(s,"%s :%5d",2, 'S',&(s), '~',32,unnamedblk6__DOT__cnt);
            this->__VnoInFunc_f_display(vlSymsp, 0U, s);
            if ((3U == (IData)(sev))) {
                goto __Vlabel0;
            }
            sev = Vcsi2_tb_top___024unit::__Venumtab_enum_next21
                [sev];
        }
        __Vlabel0: ;
    }
    __VlefExpr_0 = (0U != this->__PVT__id_count.first(id));
    if (__VlefExpr_0) {
        do {
            unnamedblk7__DOT__cnt = 0U;
            unnamedblk7__DOT__cnt = this->__PVT__id_count
                .at(id);
            VL_SFORMAT_NX(s,"%s :%5d",2, 'S',&(id), '~',32,unnamedblk7__DOT__cnt);
            this->__VnoInFunc_f_display(vlSymsp, 0U, s);
            __VlefExpr_1 = (0U != this->__PVT__id_count.next(id));
        } while (__VlefExpr_1);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_copy_severity_counts(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server> dst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_copy_severity_counts\n"); );
    // Body
    CData/*1:0*/ unnamedblk8__DOT__s;
    unnamedblk8__DOT__s = 0;
    CData/*1:0*/ unnamedblk8__DOT__s__Vnext;
    unnamedblk8__DOT__s__Vnext = 0;
    CData/*0:0*/ unnamedblk8__DOT__s__Vmore;
    unnamedblk8__DOT__s__Vmore = 0;
    unnamedblk8__DOT__s__Vmore = (0U != this->__PVT__severity_count.first(unnamedblk8__DOT__s__Vnext));
    while (unnamedblk8__DOT__s__Vmore) {
        unnamedblk8__DOT__s = unnamedblk8__DOT__s__Vnext;
        unnamedblk8__DOT__s__Vmore = (0U != this->__PVT__severity_count.next(unnamedblk8__DOT__s__Vnext));
        VL_NULL_CHECK(dst, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_server.svh", 503)->__VnoInFunc_set_severity_count(vlSymsp, unnamedblk8__DOT__s, this->__PVT__severity_count
                                                                                .at((IData)(unnamedblk8__DOT__s)));
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_copy_id_counts(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server> dst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_copy_id_counts\n"); );
    // Body
    std::string unnamedblk9__DOT__s;
    std::string unnamedblk9__DOT__s__Vnext;
    CData/*0:0*/ unnamedblk9__DOT__s__Vmore;
    unnamedblk9__DOT__s__Vmore = 0;
    unnamedblk9__DOT__s__Vmore = (0U != this->__PVT__id_count.first(unnamedblk9__DOT__s__Vnext));
    while (unnamedblk9__DOT__s__Vmore) {
        unnamedblk9__DOT__s = unnamedblk9__DOT__s__Vnext;
        unnamedblk9__DOT__s__Vmore = (0U != this->__PVT__id_count.next(unnamedblk9__DOT__s__Vnext));
        VL_NULL_CHECK(dst, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_server.svh", 514)->__VnoInFunc_set_id_count(vlSymsp, unnamedblk9__DOT__s, this->__PVT__id_count
                                                                                .at(unnamedblk9__DOT__s));
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__max_quit_count = 0;
    __PVT__quit_count = 0;
    __PVT__severity_count.atDefault() = 0;
    __PVT__id_count.atDefault() = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server::~\n"); );
}
