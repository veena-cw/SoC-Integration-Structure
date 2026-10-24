// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_get_report_catcher(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher> &get_report_catcher__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_get_report_catcher\n"); );
    // Body
    std::string __VlefCall_0__get_name;
    {
        VL_NULL_CHECK(this->__PVT__get_report_catcher__Vstatic__iter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 305)->__VnoInFunc_first(vlSymsp, get_report_catcher__Vfuncrtn);
        while ((VlNull{} != get_report_catcher__Vfuncrtn)) {
            VL_NULL_CHECK(get_report_catcher__Vfuncrtn, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 307)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            if ((__VlefCall_0__get_name == name)) {
                goto __Vlabel0;
            }
            VL_NULL_CHECK(this->__PVT__get_report_catcher__Vstatic__iter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 309)->__VnoInFunc_next(vlSymsp, get_report_catcher__Vfuncrtn);
        }
        get_report_catcher__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_print_catcher(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_print_catcher\n"); );
    // Body
    std::string __VlefCall_1__get_name;
    CData/*0:0*/ __VlefCall_0__callback_mode;
    std::string msg;
    std::string enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher> catcher;
    msg = ""s;
    enabled = ""s;
    this->__VnoInFunc_f_display(vlSymsp, file, "-------------UVM REPORT CATCHERS----------------------------"s);
    VL_NULL_CHECK(this->__PVT__print_catcher__Vstatic__iter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 329)->__VnoInFunc_first(vlSymsp, catcher);
    while ((VlNull{} != catcher)) {
        VL_NULL_CHECK(catcher, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 331)->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __VlefCall_0__callback_mode);
        enabled = ((IData)(__VlefCall_0__callback_mode)
                    ? "ON"s : "OFF"s);
        VL_NULL_CHECK(catcher, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 336)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        VL_SFORMAT_NX(msg,"%20s : %s",2, 'S',&(__VlefCall_1__get_name)
                      , 'S',&(enabled));
        this->__VnoInFunc_f_display(vlSymsp, file, msg);
        VL_NULL_CHECK(this->__PVT__print_catcher__Vstatic__iter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 339)->__VnoInFunc_next(vlSymsp, catcher);
    }
    this->__VnoInFunc_f_display(vlSymsp, file, "--------------------------------------------------------------"s);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_debug_report_catcher(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ what) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_debug_report_catcher\n"); );
    // Body
    this->__PVT__m_debug_flags = what;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_process_all_report_catchers(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server> server, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> client, CData/*1:0*/ &severity, std::string name, std::string &id, std::string &message, IData/*31:0*/ &verbosity_level, IData/*31:0*/ &action, std::string filename, IData/*31:0*/ line, IData/*31:0*/ &process_all_report_catchers__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_process_all_report_catchers\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher> __Vfunc_get_first__13__Vfuncout;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher> __Vfunc_get_next__15__Vfuncout;
    IData/*31:0*/ __Vtask_get_report_action__18__Vfuncout;
    __Vtask_get_report_action__18__Vfuncout = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher> __Vfunc_get_next__19__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefLogAnd_2;
    IData/*31:0*/ __VlefCall_1__get_report_action;
    CData/*0:0*/ __VlefCall_0__callback_mode;
    CData/*1:0*/ unnamedblk1__DOT__prev_sev;
    IData/*31:0*/ iter;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher> catcher;
    IData/*31:0*/ thrown;
    CData/*1:0*/ orig_severity;
    {
        process_all_report_catchers__Vfuncrtn = 0U;
        iter = 0U;
        thrown = 1U;
        orig_severity = 0U;
        if (this->__PVT__process_all_report_catchers__Vstatic__in_catcher) {
            process_all_report_catchers__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        this->__PVT__process_all_report_catchers__Vstatic__in_catcher = 1U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_tracing = 0U;
        this->__PVT__m_server = server;
        this->__PVT__m_client = client;
        orig_severity = severity;
        this->__PVT__m_name = name;
        this->__PVT__m_file_name = filename;
        this->__PVT__m_line_number = line;
        this->__PVT__m_modified_id = id;
        this->__PVT__m_modified_severity = severity;
        this->__PVT__m_modified_message = message;
        this->__PVT__m_modified_verbosity = verbosity_level;
        this->__PVT__m_modified_action = action;
        this->__PVT__m_orig_severity = severity;
        this->__PVT__m_orig_id = id;
        this->__PVT__m_orig_verbosity = verbosity_level;
        this->__PVT__m_orig_action = action;
        this->__PVT__m_orig_message = message;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz100_TBz101__Vclpkg.__VnoInFunc_get_first(vlProcess, vlSymsp, iter, client, __Vfunc_get_first__13__Vfuncout);
        catcher = __Vfunc_get_first__13__Vfuncout;
        {
            while ((VlNull{} != catcher)) {
                {
                    unnamedblk1__DOT__prev_sev = 0U;
                    VL_NULL_CHECK(catcher, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 549)->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __VlefCall_0__callback_mode);
                    if ((1U & (~ (IData)(__VlefCall_0__callback_mode)))) {
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz100_TBz101__Vclpkg.__VnoInFunc_get_next(vlProcess, vlSymsp, iter, client, __Vfunc_get_next__15__Vfuncout);
                        catcher = __Vfunc_get_next__15__Vfuncout;
                        goto __Vlabel2;
                    }
                    unnamedblk1__DOT__prev_sev = this->__PVT__m_modified_severity;
                    this->__PVT__m_set_action_called = 0U;
                    VL_NULL_CHECK(catcher, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 556)->__VnoInFunc_process_report_catcher(vlProcess, vlSymsp, thrown);
                    __VlefLogAnd_2 = ((~ (IData)(this->__PVT__m_set_action_called)) 
                                      & ((IData)(this->__PVT__m_modified_severity) 
                                         != (IData)(unnamedblk1__DOT__prev_sev)));
                    if (__VlefLogAnd_2) {
                        VL_NULL_CHECK(this->__PVT__m_client, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 563)->__VnoInFunc_get_report_action(vlSymsp, unnamedblk1__DOT__prev_sev, "*@&*^*^*#"s, __VlefCall_1__get_report_action);
                        __VlefLogAnd_2 = (this->__PVT__m_modified_action 
                                          == __VlefCall_1__get_report_action);
                    }
                    if (__VlefLogAnd_2) {
                        VL_NULL_CHECK(this->__PVT__m_client, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 564)->__VnoInFunc_get_report_action(vlSymsp, this->__PVT__m_modified_severity, "*@&*^*^*#"s, __Vtask_get_report_action__18__Vfuncout);
                        this->__PVT__m_modified_action 
                            = __Vtask_get_report_action__18__Vfuncout;
                    }
                    if ((0U == thrown)) {
                        if ((3U == (IData)(orig_severity))) {
                            this->__PVT__m_caught_fatal 
                                = ((IData)(1U) + this->__PVT__m_caught_fatal);
                        } else if ((2U == (IData)(orig_severity))) {
                            this->__PVT__m_caught_error 
                                = ((IData)(1U) + this->__PVT__m_caught_error);
                        } else if ((1U == (IData)(orig_severity))) {
                            this->__PVT__m_caught_warning 
                                = ((IData)(1U) + this->__PVT__m_caught_warning);
                        }
                        goto __Vlabel1;
                    }
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz100_TBz101__Vclpkg.__VnoInFunc_get_next(vlProcess, vlSymsp, iter, client, __Vfunc_get_next__19__Vfuncout);
                    catcher = __Vfunc_get_next__19__Vfuncout;
                    __Vlabel2: ;
                }
            }
            __Vlabel1: ;
        }
        if ((3U == (IData)(orig_severity))) {
            if (((IData)(this->__PVT__m_modified_severity) 
                 < (IData)(orig_severity))) {
                this->__PVT__m_demoted_fatal = ((IData)(1U) 
                                                + this->__PVT__m_demoted_fatal);
            }
        } else if ((2U == (IData)(orig_severity))) {
            if (((IData)(this->__PVT__m_modified_severity) 
                 < (IData)(orig_severity))) {
                this->__PVT__m_demoted_error = ((IData)(1U) 
                                                + this->__PVT__m_demoted_error);
            }
        } else if ((1U == (IData)(orig_severity))) {
            if (((IData)(this->__PVT__m_modified_severity) 
                 < (IData)(orig_severity))) {
                this->__PVT__m_demoted_warning = ((IData)(1U) 
                                                  + this->__PVT__m_demoted_warning);
            }
        }
        this->__PVT__process_all_report_catchers__Vstatic__in_catcher = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_tracing = 1U;
        severity = this->__PVT__m_modified_severity;
        id = this->__PVT__m_modified_id;
        message = this->__PVT__m_modified_message;
        verbosity_level = this->__PVT__m_modified_verbosity;
        action = this->__PVT__m_modified_action;
        process_all_report_catchers__Vfuncrtn = thrown;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_f_display(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ file, std::string str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_f_display\n"); );
    // Body
    if ((0U == file)) {
        VL_WRITEF_NX("%s\n",1, 'S',&(str));
    } else {
        VL_FWRITEF_NX(file,"%s\n",1, 'S',&(str));
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_summarize_report_catcher(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_summarize_report_catcher\n"); );
    // Body
    std::string s;
    s = ""s;
    if (this->__PVT__do_report) {
        this->__VnoInFunc_f_display(vlSymsp, file, ""s);
        this->__VnoInFunc_f_display(vlSymsp, file, "--- UVM Report catcher Summary ---"s);
        this->__VnoInFunc_f_display(vlSymsp, file, ""s);
        this->__VnoInFunc_f_display(vlSymsp, file, ""s);
        VL_SFORMAT_NX(s,"Number of demoted UVM_FATAL reports  :%5d",1
                      , '~',32,this->__PVT__m_demoted_fatal);
        this->__VnoInFunc_f_display(vlSymsp, file, s);
        VL_SFORMAT_NX(s,"Number of demoted UVM_ERROR reports  :%5d",1
                      , '~',32,this->__PVT__m_demoted_error);
        this->__VnoInFunc_f_display(vlSymsp, file, s);
        VL_SFORMAT_NX(s,"Number of demoted UVM_WARNING reports:%5d",1
                      , '~',32,this->__PVT__m_demoted_warning);
        this->__VnoInFunc_f_display(vlSymsp, file, s);
        VL_SFORMAT_NX(s,"Number of caught UVM_FATAL reports   :%5d",1
                      , '~',32,this->__PVT__m_caught_fatal);
        this->__VnoInFunc_f_display(vlSymsp, file, s);
        VL_SFORMAT_NX(s,"Number of caught UVM_ERROR reports   :%5d",1
                      , '~',32,this->__PVT__m_caught_error);
        this->__VnoInFunc_f_display(vlSymsp, file, s);
        VL_SFORMAT_NX(s,"Number of caught UVM_WARNING reports :%5d",1
                      , '~',32,this->__PVT__m_caught_warning);
        this->__VnoInFunc_f_display(vlSymsp, file, s);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__do_report = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_client(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> &get_client__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_client\n"); );
    // Body
    get_client__Vfuncrtn = vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_client;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_severity(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ &get_severity__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_severity\n"); );
    // Body
    get_severity__Vfuncrtn = vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_severity;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_context(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_context__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_context\n"); );
    // Body
    get_context__Vfuncrtn = vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_name;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_verbosity(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_verbosity__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_verbosity\n"); );
    // Body
    get_verbosity__Vfuncrtn = vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_verbosity;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_id(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_id__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_id\n"); );
    // Body
    get_id__Vfuncrtn = vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_id;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_message(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_message__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_message\n"); );
    // Body
    get_message__Vfuncrtn = vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_message;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_action(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_action__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_action\n"); );
    // Body
    get_action__Vfuncrtn = vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_action;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_fname(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_fname__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_fname\n"); );
    // Body
    get_fname__Vfuncrtn = vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_file_name;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_line(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_line__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_line\n"); );
    // Body
    get_line__Vfuncrtn = vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_line_number;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_severity(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_severity\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_severity 
        = severity;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_verbosity(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_verbosity\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_verbosity 
        = verbosity;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_id(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_id\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_id 
        = id;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_message(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_message\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_message 
        = message;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_action(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_action\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_action 
        = action;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_set_action_called = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_catch(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &catch__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_catch\n"); );
    // Body
    catch__Vfuncrtn = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report_fatal(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report_fatal\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string m;
    IData/*31:0*/ a;
    IData/*31:0*/ f;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler> rh;
    m = ""s;
    a = 0U;
    f = 0U;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_client, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 380)->__VnoInFunc_get_report_handler(vlSymsp, rh);
    VL_NULL_CHECK(rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 381)->__VnoInFunc_get_action(vlSymsp, 3U, id, a);
    VL_NULL_CHECK(rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 382)->__VnoInFunc_get_file_handle(vlSymsp, 3U, id, f);
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_server, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 384)->__VnoInFunc_compose_message(vlSymsp, 3U, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_name, id, message, fname, line, m);
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_server, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 385)->__VnoInFunc_process_report(vlProcess, vlSymsp, 3U, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_name, id, message, a, f, fname, line, m, verbosity, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_client);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report_error(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report_error\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string m;
    IData/*31:0*/ a;
    IData/*31:0*/ f;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler> rh;
    m = ""s;
    a = 0U;
    f = 0U;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_client, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 402)->__VnoInFunc_get_report_handler(vlSymsp, rh);
    VL_NULL_CHECK(rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 403)->__VnoInFunc_get_action(vlSymsp, 2U, id, a);
    VL_NULL_CHECK(rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 404)->__VnoInFunc_get_file_handle(vlSymsp, 2U, id, f);
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_server, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 406)->__VnoInFunc_compose_message(vlSymsp, 2U, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_name, id, message, fname, line, m);
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_server, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 407)->__VnoInFunc_process_report(vlProcess, vlSymsp, 2U, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_name, id, message, a, f, fname, line, m, verbosity, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_client);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report_warning(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report_warning\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string m;
    IData/*31:0*/ a;
    IData/*31:0*/ f;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler> rh;
    m = ""s;
    a = 0U;
    f = 0U;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_client, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 423)->__VnoInFunc_get_report_handler(vlSymsp, rh);
    VL_NULL_CHECK(rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 424)->__VnoInFunc_get_action(vlSymsp, 1U, id, a);
    VL_NULL_CHECK(rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 425)->__VnoInFunc_get_file_handle(vlSymsp, 1U, id, f);
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_server, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 427)->__VnoInFunc_compose_message(vlSymsp, 1U, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_name, id, message, fname, line, m);
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_server, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 428)->__VnoInFunc_process_report(vlProcess, vlSymsp, 1U, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_name, id, message, a, f, fname, line, m, verbosity, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_client);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report_info(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report_info\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string m;
    IData/*31:0*/ a;
    IData/*31:0*/ f;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler> rh;
    m = ""s;
    a = 0U;
    f = 0U;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_client, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 443)->__VnoInFunc_get_report_handler(vlSymsp, rh);
    VL_NULL_CHECK(rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 444)->__VnoInFunc_get_action(vlSymsp, 0U, id, a);
    VL_NULL_CHECK(rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 445)->__VnoInFunc_get_file_handle(vlSymsp, 0U, id, f);
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_server, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 447)->__VnoInFunc_compose_message(vlSymsp, 0U, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_name, id, message, fname, line, m);
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_server, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 448)->__VnoInFunc_process_report(vlProcess, vlSymsp, 0U, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_name, id, message, a, f, fname, line, m, verbosity, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_client);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string m;
    IData/*31:0*/ a;
    IData/*31:0*/ f;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler> rh;
    m = ""s;
    a = 0U;
    f = 0U;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_client, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 462)->__VnoInFunc_get_report_handler(vlSymsp, rh);
    VL_NULL_CHECK(rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 463)->__VnoInFunc_get_action(vlSymsp, severity, id, a);
    VL_NULL_CHECK(rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 464)->__VnoInFunc_get_file_handle(vlSymsp, severity, id, f);
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_server, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 466)->__VnoInFunc_compose_message(vlSymsp, severity, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_name, id, message, fname, line, m);
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_server, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 467)->__VnoInFunc_process_report(vlProcess, vlSymsp, severity, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_name, id, message, a, f, fname, line, m, verbosity, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_client);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_issue(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_issue\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string m;
    IData/*31:0*/ a;
    IData/*31:0*/ f;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_handler> rh;
    m = ""s;
    a = 0U;
    f = 0U;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_client, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 484)->__VnoInFunc_get_report_handler(vlSymsp, rh);
    a = vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_action;
    VL_NULL_CHECK(rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 486)->__VnoInFunc_get_file_handle(vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_severity, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_id, f);
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_server, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 488)->__VnoInFunc_compose_message(vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_severity, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_name, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_id, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_message, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_file_name, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_line_number, m);
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_server, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh", 492)->__VnoInFunc_process_report(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_severity, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_name, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_id, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_message, a, f, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_file_name, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_line_number, m, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_verbosity, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_client);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_process_report_catcher(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &process_report_catcher__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_process_report_catcher\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_name;
    IData/*31:0*/ act;
    {
        process_report_catcher__Vfuncrtn = 0U;
        act = 0U;
        this->__VnoInFunc_catch(vlSymsp, act);
        if ((0U == act)) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "RPTCTHR"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("uvm_report_this.catch() in catcher instance "s, __VlefCall_0__get_name), " must return THROW or CAUGHT"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_report_catcher.svh"s, 0x00000267U);
        }
        if ((0U != (2U & vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_debug_flags))) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_severity 
                = vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_orig_severity;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_id 
                = vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_orig_id;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_verbosity 
                = vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_orig_verbosity;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_action 
                = vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_orig_action;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_message 
                = vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_orig_message;
        }
        if (((2U == act) & (~ (0U != (1U & vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_debug_flags))))) {
            process_report_catcher__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        process_report_catcher__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_catcher::~\n"); );
}
